#ifndef _DISPLAY_H_
#define _DISPLAY_H_

#include "xwin.h"

//int graphics_init(void);
//int graphics_setup(void);
//void graphics_leave(void);


void ps3_flush_screen (struct vidbuf_description *gfxinfo, int ystart, int yend);
void ps3_flush_block (struct vidbuf_description *gfxinfo, int ystart, int yend);
void ps3_flush_line (struct vidbuf_description *gfxinfo, int y);
void ps3_flush_clear_screen(struct vidbuf_description *gfxinfo);

int ps3_lockscr(struct vidbuf_description *gfxinfo);
void ps3_unlockscr(struct vidbuf_description *gfxinfo);
float getDefaultScanlineDensity();

//void screenshot(int type);

//void toggle_fullscreen(void);
//void framerate_up(void);
//void framerate_down(void);

void clean_led_area(void);

void draw_rect(int x, int y, int w, int h, unsigned char color_index);
void draw_shade(int x, int y, int w, int h, unsigned int* shade, int stride);
void draw_text(int x, int y, unsigned char *line, unsigned char* colors);
void draw_textn(int x, int y, int n, unsigned char *line, unsigned char* colors, int scale);
void draw_screen(int overlay) ;
void draw_screen_exclude(int x1, int y1, int x2, int y2);
void draw_scanlines(int ystart, int yend, int preserve_overlay);

void ps3_vsync();
void ps3_update_screen();
void ps3_vkb_flush();

/* _DISPLAY_H_*/
#endif
