/********************************************

       Drawing routines for PS3 backend

*********************************************/

#include "sysconfig.h"
#include "sysdeps.h"

#include "options.h"

#include "uae.h"
#include "memory.h"
#include "xwin.h"
#include "custom.h"


#include "fixed_font.h"
#include "ps2virtkb.h"

#include "cell.h"
#include "log.h"
#include "ps3display.h"
#include "ps2options.h"

//shade image
#include "shade.h"


extern unsigned int ps2_vkb_show;  //0-kb hidden  1-kb shown

int flipDone = 0;

#define PIX_BYTES 4

#define TD_POSY 30

float shader_settings[] = {
		// 576 lines
		181.0f, 	//density

		// 720 lines
		226.0f,		//density

		//1080 lines
		169.0f,		//density

		//480 lines
		150.8f,
} ;

unsigned int clut[] = {
	0x00000000,  /* full background transparency */
	0xCC000000,  /* background semi transparent */
	0xFFFF8800,  /* opaque + light orange */
	0xFFAA3F00,  /* opaque + dark orange  */
	0xFF000000,  /* completely black */
} ;


unsigned int* pixbuf = NULL;	//video pixel buffer
unsigned int* pixbufTex = NULL;	//video pixel buffer - texture

unsigned int* uibuf = NULL;	//ui pixel buffer

int pause_emulation;
int prefs_changed = 0;

int vsync_enabled = 0;
int stat_count;
int opt_scrw = 0;
int opt_scrh = 0;
unsigned long stat_value = 0;

int opt_scanline = 0;
int opt_scanline_density = 0;
int opt_scale_x = 100;
int opt_scale_y = 100;
int opt_pos_x = 0;
int opt_pos_y = 0;

unsigned int* shade_image;

extern int keyState;



static unsigned int* createImage(int width, int height, unsigned char* data) {
	int i, index;
	int size = width * height * 4;
	unsigned int* result = (unsigned int *) malloc(size * 4);
	if (!result) {
		return NULL;
	}
	index = 0;
	for (int i = 0; i < size * 4; ) {
		unsigned char r = data[i++];
		unsigned char g = data[i++];
		unsigned char b = data[i++];
		unsigned char a = data[i++];
		result[index++] = (a << 24) | (r << 16) | (g << 8) | b;
	}
	return result;
}

int graphics_init(void) {
	if (pixbuf != NULL) {
		return 1;
	}

	currprefs.gfx_width = 720; //currprefs.gfx_width_win;
	currprefs.gfx_height = 576; //currprefs.gfx_height_win;
	opt_scrw = currprefs.gfx_width;
	opt_scrh = currprefs.gfx_height;
	if (currprefs.gfx_width >= 640) {
		currprefs.gfx_lores = 0;
	} else {
		currprefs.gfx_lores = 1;
	}
	vsync_enabled = currprefs.gfx_vsync;
	LOG_MSG2("screen w=%i\n", currprefs.gfx_width);
	LOG_MSG2("screen h=%i\n", currprefs.gfx_width);

	pixbuf = (unsigned int*) malloc(currprefs.gfx_width * currprefs.gfx_height * PIX_BYTES);
	pixbufTex = (unsigned int*) PS3_allocTextureBuffer(currprefs.gfx_width, currprefs.gfx_height, 0);
	uibuf =  (unsigned int*) PS3_allocTextureBuffer(720, 360, 1);
	
	write_log("graphics init  pixbuf=%p color_mode=%d width=%d height=%d\n", pixbuf, currprefs.color_mode, currprefs.gfx_width_win, currprefs.gfx_height_win);
	if (pixbuf == NULL || uibuf == NULL) {
		write_log("Error: not enough memory to initialize screen buffer!\n");
		return -1;
	}
	{
		int len = currprefs.gfx_width * 512;
		int i = 0;
		while (i < len) {
			pixbuf[i] = 0xFF6060AA;
			pixbufTex[i++] = 0xFF6060AA;
		}
		len = currprefs.gfx_width * currprefs.gfx_height;
		while (i < len) {
			pixbuf[i] = 0xFF000000;
			pixbufTex[i++] = 0xFF000000;
		}
	}

	gfxvidinfo.width = currprefs.gfx_width;
	gfxvidinfo.height = currprefs.gfx_height;
	gfxvidinfo.maxblocklines = 1000;
	gfxvidinfo.pixbytes = PIX_BYTES;
	gfxvidinfo.rowbytes = gfxvidinfo.width * gfxvidinfo.pixbytes ;
	gfxvidinfo.bufmem = pixbuf;
	gfxvidinfo.emergmem = 0;
	gfxvidinfo.linemem = 0;


	gfxvidinfo.lockscr = ps3_lockscr;
	gfxvidinfo.unlockscr = ps3_unlockscr;
	gfxvidinfo.flush_block = ps3_flush_block;
	gfxvidinfo.flush_clear_screen = ps3_flush_clear_screen;
	gfxvidinfo.flush_screen = ps3_flush_screen;
	gfxvidinfo.flush_line = ps3_flush_line;


	prefs_changed = 1;

	//PS3_setScreenOrientation(0);
	PS3_setScanLineType(0.0f);

	PS3_setScanlineDensity(getDefaultScanlineDensity());

	shade_image = createImage(shade_img_rgba.width, shade_img_rgba.height, shade_img_rgba.pixel_data);

	write_log("graphics_init done.\n");
	return 1;
}

float getDefaultScanlineDensity() {
	int index = 0;
	switch (PS3_getScreenHeight()) {
		case 576: {
			index = 0;
		} break;
		case 720 : {
			index = 1;
		} break;
		case 1080 : {
			index = 2;
		} break;
		case 480 : {
			index = 3;
		} break;
	}
	return shader_settings[index];
}

int is_fullscreen (void)
{
    return 1;
}

int is_vsync (void)
{
    return vsync_enabled;
}


int mousehack_allowed (void)
{
    return 0;
}

int graphics_setup(void) {
	//32bit mode
	//Rw, Gw, Bw,   Rs, Gs, Bs,   Aw, As, Avalue, swap
	alloc_colors64k (8, 8, 8, 16, 8, 0, 0, 0, 0, 0); 

	return 1;
}

void graphics_leave(void) {
}


void graphics_notify_state (int state) {
}

//called by the emulation engine
void ps3_flush_screen (struct vidbuf_description* gfxinfo, int ystart, int yend) {


	//virtual keyboard is shown
	if (ps2_vkb_show) {
		vkb_redraw(1);
		PS3_setUiVisible(1);
	} else {
		PS3_setUiVisible(0);
	}

	/*
	//wait for flip
	if (vsync_enabled || ps2_vkb_show) {
		PS3_waitFlip();
	}
	*/

	//copy graphics buffer from the system memory to rsx texture memory
	{
		int size = ((yend - ystart + 1) * gfxvidinfo.width) << 2;
		int* src = pixbuf + (gfxvidinfo.width * ystart);
		int* dst = pixbufTex + (gfxvidinfo.width * ystart);

		memcpy(dst, src, size);
	}

	//do flip
	PS3_renderFrame(1);
	flipDone = 0;

}



void ps3_flush_block (struct vidbuf_description *gfxinfo, int ystart, int yend) {
}

void ps3_flush_line (struct vidbuf_description *gfxinfo, int y) {
}

void ps3_flush_clear_screen(struct vidbuf_description *gfxinfo) {
}

int ps3_lockscr(struct vidbuf_description *gfxinfo) {
   return 1;
}

void ps3_unlockscr(struct vidbuf_description *gfxinfo) {

}



void gfx_save_options (FILE * f, const struct uae_prefs * p) {
}

int  gfx_parse_option (struct uae_prefs *p, const char *option, const char *value) {
return 0;
}



void gfx_default_options(struct uae_prefs *p) {
}

void screenshot (int type) {

}

void toggle_fullscreen(void) {
}

void framerate_up(void) {
}

void framerate_down(void) {
}

int check_prefs_changed_gfx (void) {
	if (prefs_changed) {
		prefs_changed = 0;
		return 1;
	}
	return 0;
}


//called by the UI to refresh screen
void draw_screen(int overlay) {
	if (overlay) {
		ps3_vsync();
	}

	PS3_setUiVisible(1);
	PS3_renderFrame(0);
	flipDone = 0;
}

void ps3_vsync() {
	if (!flipDone) {
		PS3_waitFlip();
		flipDone = 1;
	}
}

//keep ps3 screen updating - to show PS3 native menu etc.
void ps3_update_screen() {
	draw_screen(1);
}

void draw_shade(int x, int y, int w, int h, unsigned int* shade, int stride) {
	int blockSize;
	int blockHalf;
	int posX, posY;
	int maxX, maxY, maxBlock;
	unsigned int* img;

	if (shade == NULL) {
		shade = shade_image;
		stride = shade_img_rgba.width;
	}

	blockSize = stride / 3;
	blockHalf = blockSize / 2;
	//top left corner
	img = shade;
	PS3_blitARGB(x - blockHalf, y - blockHalf, blockSize, blockSize, stride, img, 1);

	//top right corner
	img = shade  + (2 * blockSize);
	PS3_blitARGB(x + w - blockHalf, y - blockHalf, blockSize, blockSize, stride, img, 1);

	//bottom left corner
	img = shade + (blockSize * 2 * stride);
	PS3_blitARGB(x - blockHalf, y + h - blockHalf, blockSize, blockSize, stride, img, 1);

	//bottom right corner
	img = shade + (blockSize * 2 * stride) + ( 2 * blockSize);
	PS3_blitARGB(x + w - blockHalf, y + h - blockHalf, blockSize, blockSize, stride, img, 1);

	//top line
	img = shade  + blockSize;
	posX = x + blockHalf;
	posY = y - blockHalf;
	maxX = x + w - blockHalf;
	maxBlock = blockSize;
	for (; posX < maxX; posX += maxBlock) {
		if (maxX - posX < blockSize) {
			maxBlock = maxX - posX;
		}
		PS3_blitARGB(posX, posY, maxBlock, blockHalf, stride, img, 0);
	}

	//bottom line
	img = shade + ((stride - blockHalf) * stride) + blockSize;
	posX = x + blockHalf;
	posY = y + h;
	maxX = x + w - blockHalf;
	maxBlock = blockSize;
	for (; posX < maxX; posX += maxBlock) {
		if (maxX - posX < blockSize) {
			maxBlock = maxX - posX;
		}
		PS3_blitARGB(posX, posY, maxBlock, blockHalf, stride, img, 0);
	}

	//left line
	img = shade + (blockSize * stride);
	posX = x - blockHalf;
	posY = y + blockHalf;
	maxY = y + h - blockHalf;
	maxBlock = blockSize;
	for (; posY < maxY; posY += maxBlock) {
		if (maxY - posY < blockSize) {
			maxBlock = maxY - posY;
		}
		PS3_blitARGB(posX, posY, blockHalf, maxBlock, stride, img, 0);
	}

	//right line
	img = shade + (blockSize * stride) + (2 * blockSize) + blockHalf;
	posX = x + w;
	posY = y + blockHalf;
	maxY = y + h - blockHalf;
	maxBlock = blockSize;
	for (; posY < maxY; posY += maxBlock) {
		if (maxY - posY < blockSize) {
			maxBlock = maxY - posY;
		}
		PS3_blitARGB(posX, posY, blockHalf, maxBlock, stride, img, 0);
	}

}

void draw_rect(int x, int y, int w, int h, unsigned char color_index) {
	int i, j;
	unsigned int* addr;
	unsigned int a;

	a = color_index << 24;

	//write_log("  rect gfxw=%i x=%i y=%i w=%i h=%i \n", currprefs.gfx_width, x,y,w,h);
	addr = uibuf;
	addr+= y * opt_scrw + x;

	for (j = 0; j < h; j++) {
		for (i = 0; i < w; i++) {
			*(addr++) = clut[color_index];
		}
		addr-= w;
		addr+= opt_scrw;
	}
}

/* tailored for 8x8 pix font  */
void draw_char(int x, int y, unsigned char c, unsigned char* colors, int scale) {
	int i,j,s;
	unsigned char* fntbuf;
	unsigned int pixel;
	unsigned int* addr;

	if (c < 32 || c > 133) {
		c = '?';
	} 

	fntbuf = fixed_font + (c-32)*8;
	addr = uibuf;
	addr+= y * opt_scrw + x;

	//draw extra symbols
	if (c > 127) {
		fntbuf = fixed_font_extra + 64 * (c - 128); //one symbol is 64 bytes (8 * 8 pixels) 
		for (j = 0; j < FIXED_FONT_HEIGHT; j++) {
			for (i = 0; i < 8; i++) {
				pixel = colors[*(fntbuf++)];
				//hack to higlight special characters
				if (pixel == 3 && colors[0] == 1) { 
					pixel--;
				}
				*(addr++) = clut[pixel];
			}
			addr+= opt_scrw - 8;
		}
	} else
	//draw regular characters
	for (j = 0; j < FIXED_FONT_HEIGHT; j++) {
		for (s = 0; s < scale; s++) {
			for (i = 0; i < 8; i++) {
				pixel = colors[*(fntbuf++)];
				*(addr++) = clut[pixel];
			}	
			fntbuf -= 8; 
			addr+= opt_scrw - 8;
		}
		fntbuf+= FIXED_FONT_WIDTH;
	}

}

void draw_text(int x, int y, unsigned char *line, unsigned char* colors) {
	int i;
	for (i = 0; line[i] != 0; i++) {
		if (line[i] == '\a') {
			i ++;
			draw_char(x, y, 128+(line[i]-'0'), colors , 1);
		} else { 
			draw_char(x, y, line[i], colors, 1);
		}
		x+=8;
	}
}
void draw_textn(int x, int y, int n, unsigned char *line, unsigned char* colors, int scale){
	int i;
	for (i = 0; line[i] != 0 && i < n; i++) {
		if (line[i] == '\a') {
			i ++;
			draw_char(x, y, 128+(line[i]-'0'), colors, scale);
		} else  {
			draw_char(x, y, line[i], colors, scale);
		}
		x+=8;
	}
}


void clean_led_area(void) {
	int size = 11 * opt_scrw * gfxvidinfo.pixbytes;
	unsigned int* addr;

	addr = pixbuf;
	addr+= (opt_scrh-11-TD_POSY)* opt_scrw;
	memset(addr, 0, size);
}
