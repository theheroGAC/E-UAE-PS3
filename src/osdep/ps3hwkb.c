
/*
PS3 Hardware keyboard (USB) support.

This is a free stuff, do whatever you want to do with it, but don't blame me if it doesn't work! :-)

*/

#include <io/kb.h>

#include "sysconfig.h"
#include "sysdeps.h"

#include "options.h"
#include "memory.h"
#include "custom.h"
#include "inputdevice.h"
#include "keyboard.h"

#include "ps3hwkb.h"

/*

Note: current implementation of ps3 keyboard library doesn't seem to send back key
release events. That's why we have to simulate them by keeping track of the pressed keys.
If a key is being pressed (and held pressed) the repeated key codes are being generated in the key queue.
Once we stop getting auto-repeated key events, we assume the key was released.

Also when system does auto-repeating of the key presses it puts a bigger delay before
the first and and subsequent key presses. This is annoying as we have to compensate the
first bigger delay and still treat the key as pressed until we know for sure it was
released (if no autorepeat happens after that initial delay). This might cause sluggish
key respones in Amiga programs if the program reacts upon key-release event instead of
the key-press event.

I tried the PACKET read-mode, but is seems even more bugy.

???: maybe other keyboards behave differently ???
I have tested it on Microsoft "Wired keyboard 600, model 1366" ;-)

*/



//the size of the pressed key cache
#define MAX_ACTIVE_KEYS 		8

//how many frames we wait until the key is released
//the values wre guessed and tested OK, but it might not work 
//properly with your keyboard. In that case increase the values slightly and 
//see the effect. The values is given in frames (25 means: it takes 25 frames till the
//key is considered to be released)

//this one is for the initial auto-repeat
#define KB_DELAY_FIRST			25

//this value is for subsequent auto-repeats
#define KB_DELAY_NEXT			5

//last known HW key code
#define MAX_KEY_CODE			99


#define MOD_LCTRL			0x1
#define MOD_LSHIFT			0x2
#define MOD_LALT			0x4
#define MOD_LWIN			0x8
#define MOD_RCTRL			0x10
#define MOD_RSHIFT			0x20
#define MOD_RALT			0x40
#define MOD_RWIN			0x80



//mapping of amiga key codes (index is the ps3 keyboard code, value is the amiga code)
int hwkb_map[] = {
	0, 		//ignore index 0
	0,		//index 1
	0,		//index 2
	0,		//index 3
	AK_A,	//index 4  - A
	AK_B,	//index 5  - B
	AK_C,	//index 6  - C
	AK_D,	//index 7  - D
	AK_E,	//index 8  - E
	AK_F,	//index 9  - F
	AK_G,	//index 10 - G
	AK_H,	//index 11 - H
	AK_I,	//index 12 - I
	AK_J,	//index 13 - J
	AK_K,	//index 14 - K
	AK_L,	//index 15 - L
	AK_M,	//index 16 - M
	AK_N,	//index 17 - N
	AK_O,	//index 18 - O
	AK_P,	//index 19 - P
	AK_Q,	//index 20 - Q
	AK_R,	//index 21 - R
	AK_S,	//index 22 - S
	AK_T,	//index 23 - T
	AK_U,	//index 24 - U
	AK_V,	//index 25 - V
	AK_W,	//index 26 - W
	AK_X,	//index 27 - X
	AK_Y,	//index 28 - Y
	AK_Z,	//index 29 - Z
	AK_1,	//index 30 - 1
	AK_2,	//index 31 - 2
	AK_3,	//index 32 - 3
	AK_4,	//index 33 - 4
	AK_5,	//index 34 - 5
	AK_6,	//index 35 - 6
	AK_7,	//index 36 - 7
	AK_8,	//index 37 - 8
	AK_9,	//index 38 - 9
	AK_0,	//index 39 - 0
	AK_RET,  	//index 40
	AK_ESC,		//index 41
	AK_BS,		//index 42
	AK_TAB,		//index 43
	AK_SPC,		//index 44
	AK_MINUS,	//index 45
	AK_EQUAL,	//index 46
	AK_LBRACKET, //index 47
	AK_RBRACKET,	//index 48 - '@' key is missing on Amiga keyboard, use it as a 'quote' key on the same key position
	AK_RBRACKET, //index 49
	AK_BACKSLASH, //index 50
	AK_SEMICOLON, //index 51
	AK_QUOTE, //index 52
	AK_QUOTE,		//index 53 - ???
	AK_COMMA,	//index 54
	AK_PERIOD,	//index 55
	AK_SLASH,	//index 56
	AK_CAPSLOCK,//index 57
	AK_F1,		//index 58
	AK_F2,		//index 59
	AK_F3,		//index 60
	AK_F4,		//index 61
	AK_F5,		//index 62
	AK_F6,		//index 63
	AK_F7,		//index 64
	AK_F8,		//index 64
	AK_F9,		//index 66
	AK_F10,		//index 67
	AK_NPLPAREN,//index 68 - F11
	AK_NPRPAREN,//index 69 - F12
	0, 			//index 70 - PrintScreen
	0,			//index 71 - scroll lock
	0,			//index 72 - pause
	AK_DEL,		//index 73 - Insert
	AK_HELP,	//index 74 - Home
	0,			//index 75 - PgUp
	AK_DEL,		//index 76 - Delete
	AK_HELP,	//index 77 - End
	0,			//index 78 - PgDown
	AK_RT,		//index 79 - right arrow
	AK_LF,		//index 80 - left arrow
	AK_DN,		//index 81 - down arrow
	AK_UP,		//index 82 - up arrow
	0,			//index 83 - num lock
	AK_NPDIV,	//index 84 - num pad slash
	AK_NPMUL,	//index 85
	AK_NPSUB,	//index 86
	AK_NPADD,	//index 87
	AK_ENT,		//index 88 - Enter
	AK_NP1,		//index 89
	AK_NP2,		//index 90
	AK_NP3,		//index 91
	AK_NP4,		//index 92
	AK_NP5,		//index 93
	AK_NP6,		//index 94
	AK_NP7,		//index 95
	AK_NP8,		//index 96
	AK_NP9,		//index 97
	AK_NP0,		//index 98
	AK_NPDEL,	//index 99
};

int hw_keyboard = 0;						//if set to 1 the HW keyboard was detected
int hwkb_check_frame = 0;					//counter for checking kb connection / disconnection
int hwkb_active_keys[MAX_ACTIVE_KEYS * 2]; 	// pairs of [keyCode, pressCounter]
int hwkb_mkey = 0; 							//current state of the key modifiers

/* check whether the keyboard is plugged in */
static void hwkb_check() {
	KbInfo kb;
	KbConfig kbConfig;

	ioKbGetInfo(&kb);	

	//get keyboard configuration
	if (!hw_keyboard && kb.connected) {
		ioKbGetConfiguration(0, &kbConfig);
		write_log("kb detected mapping=%i rmode=%i codetype=%i\n", kbConfig.mapping, kbConfig.rmode, kbConfig.codetype);
		//set raw keys
		if (kbConfig.codetype != KB_CODETYPE_RAW) {
			ioKbSetCodeType(0, KB_CODETYPE_RAW);
		}
		//set packet mode
		if (kbConfig.rmode != KB_RMODE_INPUTCHAR) {
			ioKbSetReadMode(0, KB_RMODE_INPUTCHAR);
		}
	} else 
	if (hw_keyboard && (!kb.connected)) {
		ioKbClearBuf(0);
	}
	hw_keyboard = kb.connected;
}

/* find empty index in the cache */
static int hwkb_find_emty_index(int amigaCode, int* delay) {
	//check the code already exists in the cache
	for (int i = 0; i < MAX_ACTIVE_KEYS * 2; i+=2) {
		if (hwkb_active_keys[i]  == amigaCode) {
			*delay = KB_DELAY_NEXT;
			return i;
		}
	}
	//find an empty slot
	for (int i = 0; i < MAX_ACTIVE_KEYS * 2; i+=2) {
		if (hwkb_active_keys[i] < 0) {
			*delay = KB_DELAY_FIRST;
			return i;
		}
	}
	return -1;
}

/* initialize keyboard */
void hwkb_init(void) {
	ioKbInit(1);	//hw keyboard

	for (int i = 0; i < MAX_ACTIVE_KEYS * 2; i++) {
		hwkb_active_keys[i] = -1;
	}

	hwkb_check();

}

/* close keyboard */
void hwkb_close(void) {
	ioKbEnd();
}

/* update keyboard */
void hwkb_update(void) {
	//check wheter the keyboard was connected / disconnected (every now and then)
	if (hwkb_check_frame++ >= 131) {
		hwkb_check_frame = 0;
		hwkb_check();				
	}
	
	//check state of the HW keyboard
	if (!hw_keyboard) {
		return;
	}

	{
		KbData data;

		//update array of pressed keys, then release keys
		for (int i = 0; i < MAX_ACTIVE_KEYS * 2; i+=2) {
			//if keyCode was set 
			if (hwkb_active_keys[i] >= 0) {
				//decrease the frame/release time
				hwkb_active_keys[i+1]--;

				//the key is released
			  	if (hwkb_active_keys[i+1] < 0) {
					int key = hwkb_active_keys[i];

					//write_log(" key release: value=%i cacheIndex=%i \n", key, i);
					if (key) {
						inputdevice_do_keyboard(key , 0); //key released
					}
					hwkb_active_keys[i] = -1; // clean the key from the array
				}
			}
		}

		//check for pressed keys		
		ioKbRead(0, &data);

		//go through all keys in the key buffer
		for (int i = 0; i < data.nb_keycode; i ++) {
			//known key code is detected
			if (data.keycode[i] <= MAX_KEY_CODE) {
				int amigaCode = hwkb_map[data.keycode[i]];
				int mkey = 	(int) data.mkey._KbMkeyU.mkeys;

				//write_log("key press: led=0x%x mod=0x%x value=%i amigaCode=%i \n", data.led, data.mkey, data.keycode[i], amigaCode);


				//key modifier has changed
				if (hwkb_mkey != mkey) {
					
					if ((mkey & MOD_LCTRL) != (hwkb_mkey & MOD_LCTRL)) {
						inputdevice_do_keyboard(AK_CTRL, (mkey & MOD_LCTRL) ? 1 : 0); 
					}
					if ((mkey & MOD_LSHIFT) != (hwkb_mkey & MOD_LSHIFT)) {
						inputdevice_do_keyboard(AK_LSH, (mkey & MOD_LSHIFT) ? 1 : 0); 
					}
					if ((mkey & MOD_LALT) != (hwkb_mkey & MOD_LALT)) {
						inputdevice_do_keyboard(AK_LALT, (mkey & MOD_LALT) ? 1 : 0); 
					}
					if ((mkey & MOD_LWIN) != (hwkb_mkey & MOD_LWIN)) {
						inputdevice_do_keyboard(AK_LAMI, (mkey & MOD_LWIN) ? 1 : 0); 
					}

					//ignore Right Control as Amiga keyboard doesn't have it.

					if ((mkey & MOD_RSHIFT) != (hwkb_mkey & MOD_RSHIFT) ) {
						inputdevice_do_keyboard(AK_RSH, (mkey & MOD_RSHIFT) ? 1 : 0); 
					}
					if ((mkey & MOD_RALT) != (hwkb_mkey & MOD_RALT)) {
						inputdevice_do_keyboard(AK_RALT, (mkey & MOD_RALT) ? 1 : 0);
					}
					if ((mkey & MOD_RWIN) != (hwkb_mkey & MOD_RWIN)) {
						inputdevice_do_keyboard(AK_RAMI, (mkey & MOD_RWIN) ? 1 : 0);
					}
					hwkb_mkey = mkey;
				}

				if (amigaCode) {
					int delay = 0;
					int idx = hwkb_find_emty_index(amigaCode, &delay);			
					//empty index found -> store the key to the cache
					if (idx >= 0) {
						inputdevice_do_keyboard(amigaCode, 1); //key pressed
						hwkb_active_keys[idx] = amigaCode; // | (mkey << 8);
						hwkb_active_keys[idx + 1] = delay;
					}
				}
			} //end if - known key detected

		} // end for
		
	} 

}


