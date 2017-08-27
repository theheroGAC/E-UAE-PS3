/**********************************************
               Virtual keyboard
**********************************************/

#include "sysconfig.h"
#include "sysdeps.h"
#include "uae.h"
#include "options.h"
#include "inputdevice.h"
#include "keyboard.h"

#include "ps2options.h"
#include "ps2virtkb.h"
#include "ps3display.h"
#include "log.h"

extern unsigned char color_hi[];
extern unsigned char color_lo[];
extern unsigned char color_inv[];
extern unsigned char color_bg[];


unsigned char ps2_vkb_char[] =
{ " Return Enter Esc Space Backspace LShift RShift LControl RControl LAmiga RAmiga LAlt RAlt Help Delete Tab Left Right Up  Down F1 F2 F3 F4 F5 F6 F7 F8 F9 F10 ! \" # $ \% & ' ( ) * + , - . / 0 1 2 3 4 5 6 7 8 9 : ; < = > ? @ A B C D E F G H I J K L M N O P Q R S T U V W X Y Z [ \\ ] ^ _ ` { | } ~ "};
int ps2_vkb_code[] = {
   AK_RET, AK_ENT, AK_ESC, AK_SPC, AK_BS, AK_LSH, AK_RSH, AK_CTRL, AK_CTRL, 
   AK_LAMI, AK_RAMI, AK_LALT, AK_RALT, AK_HELP, AK_DEL, AK_TAB, 
   AK_LF, AK_RT, AK_UP, AK_DN,
   AK_F1, AK_F2, AK_F3, AK_F4, AK_F5, AK_F6, AK_F7, AK_F8, AK_F9, AK_F10,
   AK_LSH <<8 | AK_1, AK_LSH <<8 | AK_QUOTE, AK_LSH <<8 | AK_3, AK_LSH <<8 | AK_4,
   AK_LSH <<8 | AK_5, AK_LSH <<8 | AK_7, AK_QUOTE, AK_LSH <<8 | AK_9, AK_LSH <<8 | AK_0, 
   AK_LSH <<8 | AK_8, AK_LSH <<8 | AK_EQUAL, AK_COMMA, AK_NPSUB, AK_PERIOD, AK_SLASH,
   AK_0, AK_1, AK_2, AK_3, AK_4, AK_5, AK_6, AK_7, AK_8, AK_9, 
   AK_LSH <<8 | AK_SEMICOLON, AK_SEMICOLON, AK_LTGT, AK_EQUAL, AK_LSH <<8 | AK_LTGT, AK_LSH <<8 | AK_SLASH, AK_LSH <<8 | AK_2, 
   AK_A, AK_B, AK_C, AK_D, AK_E, AK_F, AK_G, AK_H, AK_I, AK_J, AK_K, AK_L, AK_M, 
   AK_N, AK_O, AK_P, AK_Q, AK_R, AK_S, AK_T, AK_U, AK_V, AK_W, AK_X, AK_Y, AK_Z,
   AK_LBRACKET, AK_BACKSLASH, AK_RBRACKET, AK_LSH <<8 | AK_6, AK_LSH <<8 | AK_MINUS, AK_BACKQUOTE, 
   AK_LSH <<8 | AK_LBRACKET, AK_LSH <<8 | AK_BACKSLASH, AK_LSH <<8 | AK_RBRACKET, AK_LSH <<8 | AK_BACKQUOTE };


unsigned int ps2_vkb_pos[] = {
 0, 7, 13, 17, 23, 33,40,47,56,65,72,79,84,89,94,101,105,110,116,120,125,128,131,134,137,140,143, /* */
 146,149,152,156,158,160,162,164,166, /*  */
 168,170,172,174,176,178,180,182,184,186,188,190,192,194,196,198,200,202,204,206, /*  */
 208,210,212,214,216,218,220,222,224,226,228,230,232,234,236,238,240,242,244,246, /* */
 248,250,252,254,256,258,260,262,264,266,268,270,272,274,276,278,280,282,284,286,
 288,290,292,294}; /*88*/


#define LAST_POS 97

//unsigned char ps2_vkb_buf[84];

unsigned int ps2_vkb_show = 0;  //0-kb hidden  1-kb shown
int ps2_vkb_start = 0; //position of the vkb_char on the left side of the scroler
int ps2_vkb_curr = 0;  //current index

int ps2_vkb_ommit = 0;
int ps2_vkb_key_ommit[150];
int ps2_vkb_key = 0;

void vkb_init(void) {
	int i;
	for(i = 0; i < 150; i++) {
		ps2_vkb_key_ommit[i] = -1;	
	} 
}

/* call vkb_redraw to redraw the keyborad (update pixbuf) */
void vkb_redraw(int show) {
	int size = 40;
	int start;
	int dif = 0;
	int x;
	int char_count;
	int startX = 0;

	//write_log("width=%i / %i\n", currprefs.gfx_width, gfxvidinfo.width );


	if (gfxvidinfo.width >=640) {
		size = 80;
	}	
	startX = (gfxvidinfo.width - (size * 8)) / 2;
	if (!show) {
		draw_rect(startX - 14,KB_YPOS-14,size * 8 + 28, KB_HEIGHT + 28 ,0);
		return;
	}
	start = ps2_vkb_pos[ps2_vkb_curr];

	char_count = ps2_vkb_pos[ps2_vkb_curr+1] - ps2_vkb_pos[ps2_vkb_curr] + 1;
	if (ps2_vkb_start + size < start + char_count) {
		ps2_vkb_start +=  (start + char_count) - (ps2_vkb_start + size);
	} else
	if (ps2_vkb_start > start) {
		ps2_vkb_start = start;
	}

	//top and bottom stripes
	draw_rect(startX, KB_YPOS,size * 8, 8,1);
	draw_rect(startX, KB_YPOS+24,size * 8, 8,1);
	draw_shade(startX, KB_YPOS, size * 8, 32, NULL, 0);


	draw_textn(startX,KB_YPOS + 8 ,size, ps2_vkb_char + ps2_vkb_start, color_hi, 2);
	x = 8*(start + dif - ps2_vkb_start) ;
	draw_textn(startX + x , KB_YPOS + 8, char_count , ps2_vkb_char  + start, color_bg, 2);
	
}

/* call vkb_left to shift keybord cursor to left */
void vkb_left(void) {
	ps2_vkb_ommit++;
	if (ps2_vkb_ommit > 0) {
		if (ps2_vkb_ommit > 2) ps2_vkb_ommit = -1;
		return;
	}
	ps2_vkb_ommit=0;

	//key was not released yet
	if (ps2_vkb_key >= 0) {
		vkb_invalidate();
	}
	
	ps2_vkb_curr--;
	if (ps2_vkb_curr < 0) {
		ps2_vkb_curr = 0;
	} else {
		vkb_redraw(1);		
	}
}

/* call vkb_right to shift keybord cursor to right */
void vkb_right(void) {
	ps2_vkb_ommit++;
	if (ps2_vkb_ommit > 0) {
		if (ps2_vkb_ommit > 2) ps2_vkb_ommit = -1;
		return;
	}
	ps2_vkb_ommit=0;

	//key was not released yet
	if (ps2_vkb_key >= 0) {
		vkb_invalidate();
	}

	ps2_vkb_curr++;
	if (ps2_vkb_curr > LAST_POS) {
		ps2_vkb_curr = LAST_POS;
	} else {
		vkb_redraw(1);		
	}
}



void vkb_press_index(int i) {
	ps2_vkb_key_ommit[i]++;
	if (ps2_vkb_key_ommit[i] > 0) {
		if (ps2_vkb_key_ommit[i] > 8) ps2_vkb_key_ommit[i] = -1;
		return;
	}

	ps2_vkb_key = ps2_vkb_code[i];
	if (ps2_vkb_key & 0xFF00) {
		inputdevice_do_keyboard((ps2_vkb_key & 0xFF00)>>8, 1); //key pressed
	}
	inputdevice_do_keyboard(ps2_vkb_key & 0xFF, 1); //key pressed
}
void vkb_release_index(int i) {
	ps2_vkb_key_ommit[i] = -1;
	ps2_vkb_key = ps2_vkb_code[i];

	if (ps2_vkb_key & 0xFF00) {
		inputdevice_do_keyboard((ps2_vkb_key & 0xFF00)>>8, 0); //key released
	}
	inputdevice_do_keyboard(ps2_vkb_key & 0xFF, 0); //key released
}
int  vkb_get_key_index(void) {
	return ps2_vkb_curr;
}

void vkb_press(void) {
	vkb_press_index(ps2_vkb_curr);
}

void vkb_invalidate(void) {
	//already invalidated
	if (ps2_vkb_key == -1) {
		return;
	}
	vkb_release_index(ps2_vkb_curr);
	ps2_vkb_key = -1;
}

