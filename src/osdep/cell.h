#ifndef _CELL_H
#define _CELL_H


#ifdef __cplusplus
extern "C" {
#endif


// PS3 buttons (pad data)
#define 	PAD_SELECT		(1<<0)
#define		PAD_L3			(1<<1)
#define		PAD_R3			(1<<2)
#define		PAD_START		(1<<3)
#define		PAD_UP			(1<<4)
#define		PAD_RIGHT		(1<<5)
#define		PAD_DOWN		(1<<6)
#define		PAD_LEFT		(1<<7)
#define		PAD_L2			(1<<8)
#define		PAD_R2			(1<<9)
#define		PAD_L1			(1<<10)
#define		PAD_R1			(1<<11)
#define		PAD_TRIANGLE	(1<<12)
#define		PAD_CIRCLE		(1<<13)
#define		PAD_CROSS		(1<<14)
#define		PAD_SQUARE		(1<<15)


int PS3_initialize(void);
unsigned int * PS3_allocTextureBuffer(int w, int h, int type);
void PS3_setUiVisible(char state);
float PS3_getScanlineDensity();
void PS3_setScanlineDensity(float density);
void PS3_setScanLineType(float type);
void PS3_setScanlineDepth(float depth);
void PS3_setScanlineBrightness(float bright);
void PS3_setVideoSizeH(float size);
void PS3_setVideoSizeV(float size);
void PS3_setPositionX(float posX);
void PS3_setPositionY(float posY);

void PS3_blitARGB(int x, int y, int w, int h, int stride, unsigned int* data, char transparent);
/*
void PS3_blitARGBblendClut(int x, int y, int w, int h, int stride, unsigned int* data, unsigned int* clut);
void PS3_blitARGBblendClutExcludeArea(
	int x, int y, int w, int h, int stride, unsigned int* data, unsigned int* clut,
	int ax1, int ay1 , int ax2, int ay2);
*/
void PS3_renderFrame(int sync);
void PS3_waitFlip();
int PS3_readPadButtons (uint32_t *digitalResult, uint32_t *analogResult, int id, int changesOnly);
int PS3_initSound ();
int PS3_renderSound(short* samples, int sampleCount);
void PS3_setMasterVolume(int volume);
int PS3_appIsRunning();

int PS3_getScreenWidth();
int PS3_getScreenHeight();
int PS3_getSoundPortSize();

void PS3_debugOutStr (int baseX, int baseY, const char *str);

#ifdef __cplusplus
}
#endif

#endif /*_CELL_H */
