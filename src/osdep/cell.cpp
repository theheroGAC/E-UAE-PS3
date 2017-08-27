#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <malloc.h>
#include <ppu-types.h>

#include <sys/process.h>

#include <io/pad.h>
#include <rsx/rsx.h>
#include <sysutil/sysutil.h>
#include <sysutil/video.h>
#include <sysmodule/sysmodule.h>
#include <audio/audio.h>

#include "mesh.h"
#include "rsxutil.h"

#include "arcade_shader.h"

#include "log.h"
#include "cell.h"


#ifdef __cplusplus
extern "C" {
#endif

#define AUDIO_BLOCK_COUNT 16 
#define AUDIO_CHANNEL_COUNT 2

#define DEGTORAD(a)			( (a) *  0.01745329252f )
#define RADTODEG(a)			( (a) * 57.29577951f )


#define RESOLUTION_576    5
#define RESOLUTION_480    4

volatile u32 running = 0;

extern videoResolution res;

u32  fp_offset;
u32* fp_buffer;

u32* texture_buffer = NULL;
u32  texture_offset;
u32 textureW = 0;
u32 textureH = 0;

u32* texture_buffer_ui;
u32  texture_offset_ui;
u32 textureW_ui = 0;
u32 textureH_ui = 0;


s32 projMatrix_id = -1;
s32 modelViewMatrix_id = -1;
s32 vertexPosition_id = -1;
s32 vertexNormal_id = -1;
s32 vertexTexcoord_id = -1;
s32 textureUnit_id = -1;
s32 scanline_id = -1;

Point3 eye_pos = Point3(0.0f, 0.0f, -10.0f);
Point3 eye_dir = Point3(0.0f, 0.0f, 1.0f);
Vector3 up_vec = Vector3(0.0f,1.0f,0.0f);

void *vp_ucode = NULL;
rsxVertexProgram *vpo = (rsxVertexProgram*)arcade_shader_vpo;

void *fp_ucode = NULL;
rsxFragmentProgram *fpo = (rsxFragmentProgram*)arcade_shader_fpo;

static Matrix4 P;
static SMeshBuffer* quad = NULL;
static SMeshBuffer* quad_ui = NULL;
static Matrix4 modelMatrixBase;
static Matrix4 modelMatrix;
static Matrix4 modelMatrixUi;

static Vector4 scanline;
static Vector3 scaler;
static Vector3 translator;
static Vector4 scanlineUi;

static char showUi = 0;

int new_pad = 0;				//contoller button state
int old_pad = 0;				//contoller button state

uint32_t audio_port;
float *audio_buffer;
float *audio_buffer_end;
u32 audio_read_index_addr;
int audio_block_index;
int audio_last_read_block;
int portSize;
int portOutputStarted = 0;

float masterVolume;
char volumeMuted;

float volumeTable[] = {
		32768.0f * 32500.0f,	//0
		32768.0f * 100.0f,	//10
		32768.0f * 50.0f,	//20
		32768.0f * 24.0f,	//30
		32768.0f * 15.0f,	//40
		32768.0f * 10.0f,	//50
		32768.0f * 7.0f,	//60
		32768.0f * 4.5f,	//70
		32768.0f * 2.8f,	//80
		32768.0f * 1.6f,	//90
		32768.0f	//100
} ;


SYS_PROCESS_PARAM(1001, 0x40000);



unsigned int * PS3_allocTextureBuffer(int w, int h, int type) {
	//user interface texture
	if (type) {
		texture_buffer_ui = (u32*)rsxMemalign(128,(w * h * 4));
		if(!texture_buffer_ui) return  NULL;

		rsxAddressToOffset(texture_buffer_ui, &texture_offset_ui);

		textureW_ui = w;
		textureH_ui = h;

		return texture_buffer_ui;
	} else
	//video texture
	{
		texture_buffer = (u32*)rsxMemalign(128,(w * h * 4));
		if(!texture_buffer) return  NULL;

		rsxAddressToOffset(texture_buffer,&texture_offset);

		textureW = w;
		textureH = h;

		return texture_buffer;
	}
}

void PS3_freeTextureBuffer(void* ptr) {
	if(!ptr) return;
	if (ptr == texture_buffer) {
		texture_buffer = NULL;
	}
	rsxFree(ptr);
}


int PS3_getScreenWidth() {
	return res.width;
}
int PS3_getScreenHeight() {
	return res.height;
}


/*
 *   2      1
 *    *-----*
 *    |    /|
 *    |   / |
 *    |  /  |
 *    | /   |
 *    |/    |
 *    *-----*
 *   0       3
 */


static SMeshBuffer* createQuad(f32 size, float z)
{
	u32 i;
	SMeshBuffer *buffer = new SMeshBuffer();
	const u16 u[6] = {   0,1,2,   0,3,1};

	buffer->cnt_indices = 6;
	buffer->indices = (u16*)rsxMemalign(128, buffer->cnt_indices * sizeof(u16));

	for(i = 0; i < 6; i++) buffer->indices[i] = u[i];

	buffer->cnt_vertices = 4;
	buffer->vertices = (S3DVertex*)rsxMemalign(128, buffer->cnt_vertices * sizeof(S3DVertex));

	//                              position, normal,    texture
	buffer->vertices[0] = S3DVertex(0, -1, z,  0, 0, -1,  0, 1);
	buffer->vertices[1] = S3DVertex(1,  0, z,  0, 0, -1,  1, 0);
	buffer->vertices[2] = S3DVertex(0,  0, z,  0, 0, -1,  0, 0);
	buffer->vertices[3] = S3DVertex(1, -1, z,  0, 0, -1,  1, 1);

	//centre and resize
	for(i=0; i < 4; i++) {
		//center
		buffer->vertices[i].pos += Vector3(-0.5f, 0.5f, 0.0f);
		//resize
		buffer->vertices[i].pos *= size;
	}

	return buffer;
}



static void setTexture(u32 width, u32 height, u32* tBuffer, u32 tOffset)
{
	u32 pitch = (width*4);
	gcmTexture texture;

	if(!tBuffer) return;

	rsxInvalidateTextureCache(context,GCM_INVALIDATE_TEXTURE);

	texture.format		= (GCM_TEXTURE_FORMAT_A8R8G8B8 | GCM_TEXTURE_FORMAT_LIN);
	texture.mipmap		= 1;
	texture.dimension	= GCM_TEXTURE_DIMS_2D;
	texture.cubemap		= GCM_FALSE;
	texture.remap		= ((GCM_TEXTURE_REMAP_TYPE_REMAP << GCM_TEXTURE_REMAP_TYPE_B_SHIFT) |
						   (GCM_TEXTURE_REMAP_TYPE_REMAP << GCM_TEXTURE_REMAP_TYPE_G_SHIFT) |
						   (GCM_TEXTURE_REMAP_TYPE_REMAP << GCM_TEXTURE_REMAP_TYPE_R_SHIFT) |
						   (GCM_TEXTURE_REMAP_TYPE_REMAP << GCM_TEXTURE_REMAP_TYPE_A_SHIFT) |
						   (GCM_TEXTURE_REMAP_COLOR_B << GCM_TEXTURE_REMAP_COLOR_B_SHIFT) |
						   (GCM_TEXTURE_REMAP_COLOR_G << GCM_TEXTURE_REMAP_COLOR_G_SHIFT) |
						   (GCM_TEXTURE_REMAP_COLOR_R << GCM_TEXTURE_REMAP_COLOR_R_SHIFT) |
						   (GCM_TEXTURE_REMAP_COLOR_A << GCM_TEXTURE_REMAP_COLOR_A_SHIFT));
	texture.width		= width;
	texture.height		= height;
	texture.depth		= 1;
	texture.location	= GCM_LOCATION_RSX;
	texture.pitch		= pitch;
	texture.offset		= tOffset;
	rsxLoadTexture(context,textureUnit_id,&texture);
	rsxTextureControl(context,textureUnit_id,GCM_TRUE,0<<8,12<<8,GCM_TEXTURE_MAX_ANISO_1);
	rsxTextureFilter(context,textureUnit_id,GCM_TEXTURE_LINEAR,GCM_TEXTURE_LINEAR,GCM_TEXTURE_CONVOLUTION_QUINCUNX);
	rsxTextureWrapMode(context,textureUnit_id,GCM_TEXTURE_CLAMP_TO_EDGE,GCM_TEXTURE_CLAMP_TO_EDGE,GCM_TEXTURE_CLAMP_TO_EDGE,0,GCM_TEXTURE_ZFUNC_LESS,0);
}



static void setDrawEnv(u32 blend)
{
	rsxSetColorMask(context,GCM_COLOR_MASK_B |
							GCM_COLOR_MASK_G |
							GCM_COLOR_MASK_R |
							GCM_COLOR_MASK_A);

	rsxSetColorMaskMRT(context,0);

	u16 x,y,w,h;
	f32 min, max;
	f32 scale[4],offset[4];

	x = 0;
	y = 0;
	w = display_width;
	h = display_height;
	min = 0.0f;
	max = 1.0f;
	scale[0] = w * 0.5f;
	scale[1] = h * -0.5f;
	scale[2] = (max - min) * 0.5f;
	scale[3] = 0.0f;
	offset[0] = x + w * 0.5f;
	offset[1] = y + h * 0.5f;
	offset[2] = (max + min) * 0.5f;
	offset[3] = 0.0f;

	rsxSetViewport(context,x, y, w, h, min, max, scale, offset);
	rsxSetScissor(context,x,y,w,h);

	rsxSetDepthTestEnable(context,GCM_FALSE); //TRUE
	rsxSetDepthFunc(context,GCM_ALWAYS); //LESS
	rsxSetShadeModel(context,GCM_SHADE_MODEL_FLAT); //SMOOTH
	rsxSetDepthWriteEnable(context, 0);
	rsxSetFrontFace(context,GCM_FRONTFACE_CCW);

	if (blend) {
		rsxSetBlendEnable(context, GCM_TRUE);
		rsxSetBlendFunc(context, GCM_SRC_ALPHA, GCM_ONE_MINUS_SRC_ALPHA, GCM_SRC_COLOR, GCM_DST_COLOR);
        rsxSetBlendEquation(context, GCM_FUNC_ADD, GCM_FUNC_ADD);
	} else {
		rsxSetBlendEnable(context, GCM_FALSE);
	}
}

void init_shader()
{
	u32 fpsize = 0;

	vp_ucode = rsxVertexProgramGetUCode(vpo);
	projMatrix_id = rsxVertexProgramGetConst(vpo, "projMatrix");
	modelViewMatrix_id = rsxVertexProgramGetConst(vpo, "modelViewMatrix");
	vertexPosition_id = rsxVertexProgramGetAttrib(vpo, "vertexPosition");
	vertexNormal_id = rsxVertexProgramGetAttrib(vpo, "vertexNormal");
	vertexTexcoord_id = rsxVertexProgramGetAttrib(vpo, "vertexTexcoord");

	fp_ucode = rsxFragmentProgramGetUCode(fpo, &fpsize);
	fp_buffer = (u32*) rsxMemalign(64, fpsize);
	memcpy(fp_buffer, fp_ucode, fpsize);
	rsxAddressToOffset(fp_buffer, &fp_offset);

	textureUnit_id = rsxFragmentProgramGetAttrib(fpo, "texture");
	scanline_id = rsxFragmentProgramGetConst(fpo, "scanline");
}

void program_exit_callback()
{
	gcmSetWaitFlip(context);
	rsxFinish(context,1);
}

void sysutil_exit_callback(u64 status,u64 param,void *usrdata)
{
	switch(status) {
		case SYSUTIL_EXIT_GAME:
			running = 0;
			break;
		case SYSUTIL_DRAW_BEGIN:
		case SYSUTIL_DRAW_END:
			break;
		default:
			break;
	}
}

void drawMesh(SMeshBuffer* mesh, Matrix4* modelViewMatrix, float* scanlineParams) {
	u32 offset;

	rsxAddressToOffset(&mesh->vertices[0].pos,&offset);
	rsxBindVertexArrayAttrib(context,vertexPosition_id, offset, sizeof(S3DVertex),3,GCM_VERTEX_DATA_TYPE_F32,GCM_LOCATION_RSX);

	rsxAddressToOffset(&mesh->vertices[0].nrm,&offset);
	rsxBindVertexArrayAttrib(context,vertexNormal_id, offset, sizeof(S3DVertex),3,GCM_VERTEX_DATA_TYPE_F32,GCM_LOCATION_RSX);

	rsxAddressToOffset(&mesh->vertices[0].u,&offset);
	rsxBindVertexArrayAttrib(context,vertexTexcoord_id, offset, sizeof(S3DVertex),2,GCM_VERTEX_DATA_TYPE_F32,GCM_LOCATION_RSX);

	rsxLoadVertexProgram(context, vpo, vp_ucode);
	rsxSetVertexProgramParameter(context, vpo, projMatrix_id, (float*) &P);
	rsxSetVertexProgramParameter(context, vpo, modelViewMatrix_id,(float*) modelViewMatrix);

	rsxSetFragmentProgramParameter(context, fpo, scanline_id, scanlineParams, fp_offset);


	rsxLoadFragmentProgramLocation(context,fpo,fp_offset,GCM_LOCATION_RSX);

	rsxSetUserClipPlaneControl(context,GCM_USER_CLIP_PLANE_DISABLE,
									   GCM_USER_CLIP_PLANE_DISABLE,
									   GCM_USER_CLIP_PLANE_DISABLE,
									   GCM_USER_CLIP_PLANE_DISABLE,
									   GCM_USER_CLIP_PLANE_DISABLE,
									   GCM_USER_CLIP_PLANE_DISABLE);

	rsxAddressToOffset(&mesh->indices[0],&offset);
	rsxDrawIndexArray(context,GCM_TYPE_TRIANGLES, offset,mesh->cnt_indices, GCM_INDEX_TYPE_16B, GCM_LOCATION_RSX);

}

void drawFrame()
{
	u32 i, color = 0;
	Matrix4 viewMatrix,modelViewMatrix;

	//clear screen
	rsxSetClearColor(context, color);
	//rsxSetClearDepthValue(context,0xffff);
	rsxClearSurface(context,GCM_CLEAR_R |
							GCM_CLEAR_G |
							GCM_CLEAR_B |
							GCM_CLEAR_A  //|
							//GCM_CLEAR_S |
							//GCM_CLEAR_Z
							);


	for (i = 0; i < 8; i++) {
		rsxSetViewportClip(context, i, display_width, display_height);
	}

	viewMatrix = Matrix4::lookAt(eye_pos, eye_dir, up_vec);

	//draw background image
	modelViewMatrix = transpose(viewMatrix * modelMatrix);
	setDrawEnv(0);
	setTexture(textureW, textureH, texture_buffer, texture_offset);
	drawMesh(quad, &modelViewMatrix, (float*)&scanline);

	if (showUi) {
		//draw UI
		modelViewMatrix = transpose(viewMatrix * modelMatrixUi);
		setDrawEnv(1);
		setTexture(textureW_ui, textureH_ui, texture_buffer_ui, texture_offset_ui);
		drawMesh(quad_ui, &modelViewMatrix, (float*)&scanlineUi);
	}
}

void PS3_setUiVisible(char state) {
	showUi = state;
}


float PS3_getScanlineDensity() {
	return scanline.getX();
}
void PS3_setScanlineDensity(float density) {
	write_log("scanline density=%f\n", density);
	scanline.setX(density);
}


void PS3_setScanlineDepth(float depth) {
	write_log("scanline depth=%f\n", depth);
	scanline.setY(depth);
}

void PS3_setScanlineBrightness(float bright) {
	write_log("scanline brightness=%f\n", bright);
	scanline.setZ(bright);
}

void setScanlineType() {
	float type = scanline.getW();
	if (type == 0.2f) {
		type = 0.0f;
	} else
	if (type == 0.1f) {
		type = 0.2f;
	} else {
		type = 0.1f;
	}
	scanline.setW(type);
}

void updateModelMatrix() {
	modelMatrix = appendScale(modelMatrixBase, scaler);
	modelMatrix.setTranslation(translator);
}

void PS3_setVideoSizeH(float size) {
	scaler.setX(size);
	updateModelMatrix();
}

void PS3_setVideoSizeV(float size) {
	scaler.setY(size);
	updateModelMatrix();
}

void PS3_setPositionX(float posX) {
	translator.setX(posX);
	updateModelMatrix();
}

void PS3_setPositionY(float posY) {
	translator.setY(posY);
	updateModelMatrix();
}


void PS3_renderFrame(int sync) {
	drawFrame();
	flip(sync);
}

void PS3_waitFlip() {
	waitflip();
}
int PS3_appIsRunning() {
	return running;
}

void PS3_quit(void){
}

//blits ARGB bitmap into UI buffer
void PS3_blitARGB(int x, int y, int w, int h, int stride, unsigned int* data, char transparent) {

	int posX, posY;
	int dstW = textureW_ui;
	unsigned int *buf = (unsigned int*) &texture_buffer_ui[y *  dstW  + x];

	//check transparent pixels
	if (transparent) {
		//write_log("  --> blit ARGB 0 ");
		for (posY = 0; posY < h; posY ++) {
			for (posX = 0; posX < w; posX++) {
				//opaque or semitransparent pixel
				if ((data[posX] & 0xFF000000)) {
					buf[posX] = data[posX];
				}
			}
			data += stride;
			buf += dstW;
		}
		//write_log("  done \n");
	} else {
		//write_log("  --> blit ARGB 1 ");
		for (posY = 0; posY < h; posY ++) {
			memcpy(buf, data, w << 2);
			data += stride;
			buf += dstW;
		}
		//write_log("  done \n");
	}

}

//**********************************************************************
//** PADS 
//**********************************************************************
int PS3_readPadButtons (uint32_t *digitalResult, uint32_t *analogResult, int id, int changesOnly) {

	padInfo info;
	padData data;

	sysUtilCheckCallback();

	ioPadGetInfo(&info);

	if (info.status[id]) {
		ioPadGetData(id, &data);

		if (data.len == 0) {
			return 0;
		}

		uint32_t buttons = (data.button[2] & 0xff) | ((data.button[3] & 0xFF) << 8);
		if (changesOnly) {
			new_pad = buttons & (~old_pad);
			old_pad = buttons;
		
			*digitalResult = new_pad;
		} else {
			*digitalResult = buttons;
		}
		{
			uint32_t analogR = data.button[6] & 0xFF;
			analogR <<= 8;
			analogR  |= (data.button[7] & 0xFF);
			analogR <<= 8;
			analogR  |= data.button[4] & 0xFF;
			analogR <<= 8;
			analogR  |= (data.button[5] & 0xFF);
			
			*analogResult = analogR;
			return 1;
		}
	}
	old_pad = new_pad = 0;
	return 0;
}

//**********************************************************************
//** SOUND
//**********************************************************************
//returns the number of samples the buffer can contain 
int PS3_initSound () {

	audioPortParam params;
	audioPortConfig config;

	audioInit();

	params.numChannels = AUDIO_CHANNEL_COUNT;
	params.numBlocks = AUDIO_BLOCK_COUNT;
	params.attrib = 0;
	params.level = 1;

	audioPortOpen(&params, &audio_port);


	audioGetPortConfig(audio_port, &config);
	audio_buffer = (float *)config.audioDataStart;
	audio_buffer_end = (float *)(config.audioDataStart + config.portSize);
	audio_read_index_addr = config.readIndex;

	audioPortStart(audio_port);
	portSize = config.portSize;
	audio_block_index = 0;
	audio_last_read_block = -1;
	return config.portSize;

}

int PS3_getSoundPortSize() {
	return portSize;
}

void PS3_setMasterVolume(int volume) {
	int m;
	if (volume < 0) {
		volume = 0;
	}
	if (volume > 100) {
		volume = 100;
	}
	m = volume % 10;
	volume /= 10;

	write_log("setting volume: %i\n", volume);
	if (volume == 0 && m == 0) {
		if (!volumeMuted) {
			volumeMuted = 1;
			audioPortStop(audio_port);
		}
	} else {
		if (volumeMuted) {
			volumeMuted = 0;
			audioPortStart(audio_port);
		}
		masterVolume = volumeTable[volume];
		if (m != 0) {
			masterVolume += ((volumeTable[volume + 1] - volumeTable[volume]) / 10.f) * (float)m;
		}
	}
}

//returns number of samples written
int PS3_renderSound(short* samples, int sampleCount) {
	if (sampleCount < 1) {
		return 0;
	}
	//get the block that is currently rendered by hw 
	int current_block = *(uint64_t *)audio_read_index_addr;

	//we have passed the first batch of sound data
	//set the current audio index we want to write-to  as the 
	//next one the HW audio is currently playing
	if (!portOutputStarted) {
		portOutputStarted = 1;
		audio_block_index = (current_block + 1) % AUDIO_BLOCK_COUNT;
	}

	int sampleOffset = 0;
	//while there is a data in the input buffer && we have not filled up the whole ring-output-bffer
	while (sampleOffset + 256 * AUDIO_CHANNEL_COUNT <= sampleCount && audio_block_index != current_block) {	
		float *buf = audio_buffer + AUDIO_CHANNEL_COUNT * 256 * audio_block_index;
		for (int i = 0; i < 256 * AUDIO_CHANNEL_COUNT; i++) {
			buf[i] = ((float)samples[sampleOffset++]) / masterVolume;
		}
		audio_block_index = (audio_block_index + 1) % AUDIO_BLOCK_COUNT;
	}	
	audio_last_read_block = current_block;
	return sampleCount;
}

void PS3_setScreenOrientation(int vertical) {
	if (vertical) {
		// by default sretch video to 40% of the screen in X axis (compensate output to wide screens)
		PS3_setVideoSizeH(0.5f);
		scaler.setY(1.0f);
		scaler.setZ(1.0f);

		scanline.setX(111.0f);		//scanline density
		scanline.setW(0.2f);		//scanline type -> vertical lines
	} else {
		// by default sretch video to 90% of the screen in X axis (compensate output to wide screens)
		PS3_setVideoSizeH(0.9f);
		scaler.setX(0.9f);
		scaler.setY(1.0f);
		scaler.setZ(1.0f);

		scanline.setW(0.1f);		//scanline type -> horizontal lines
	}
}

static int getVideoMode()	{
	uint32_t b1, b2;
	int videoMode = RESOLUTION_576;
	//test pressed button
	for (int i = 0; i < 20; i++) {
		b1 = b2 = 0;
		PS3_readPadButtons (&b1, &b2, 0, 0);
		//force NTSC 640x480 60Hz
		if (b1 & PAD_CIRCLE) {
			return RESOLUTION_480;
		}
		//keep current videomode from XMB
		if (b1 & PAD_TRIANGLE) {
			return 0;
		}
		usleep(20000);
	}
	return videoMode;
}

void PS3_setScanLineType(float type) {
	scanline.setW(type);		//scanline type -> horizontal lines
}


int PS3_initialize(void)
{
	s32 ret,i;
	void *host_addr = memalign(1024*1024, HOST_SIZE);
	s32 pressedCounter = 0;
	Matrix4 rotX,rotY;
	
	sysModuleLoad(SYSMODULE_FS);
	ioPadInit(7);

	write_log("PS3_initialize...\n");
	int videoMode = getVideoMode();
	init_screen(host_addr, HOST_SIZE, videoMode);

	init_shader();
	
	//init_texture();
	//init_texture_ui();

	quad = createQuad(10.0f, 0.0f);
	quad_ui = createQuad(10.0f, 0.5f);

	rotX = Matrix4::rotationX(DEGTORAD(0.0f));
	rotY = Matrix4::rotationY(DEGTORAD(180.0f));
	modelMatrixBase = rotX * rotY;
	modelMatrixUi = rotX * rotY;
	modelMatrix = rotX * rotY;

	ret = atexit(program_exit_callback);
	ret = sysUtilRegisterCallback(0,sysutil_exit_callback,NULL);

	P = transpose(Matrix4::orthographic(-5.0f, 5.0f, -5.0f, 5.0f, -10.0f, 10.0f));

	// by default sretch video to 90% of the screen in X axis (compensate output to wide screens)
	scaler.setX(1.0f);
	scaler.setY(1.0f);
	scaler.setZ(1.0f);

	translator.setX(0.0f);
	translator.setY(0.0f);
	translator.setZ(0.0f);

	setRenderTarget(curr_fb);

	scanline.setX(200.0f);		//desnity
	scanline.setY(2.0f);		//contrast
	scanline.setZ(0.7f);		//brightnes
	scanline.setW(0.1f);		//scanline type -> horizontal lines

	scanlineUi.setX(0);			//no desnsity modifier
	scanlineUi.setY(0);			//no contrast modifier
	scanlineUi.setZ(1.0f);		//full brightnes
	scanlineUi.setW(0.0f);		//scanline type -> no scanlines

	running = 1;

	masterVolume = 32768.0f;
	volumeMuted = 0;

	return 0;
}



#ifdef __cplusplus
}
#endif
