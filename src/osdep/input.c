 /*
  * UAE - The Un*x Amiga Emulator
  *
  * Joystick emulation stubs
  *
  * Copyright 1997 Bernd Schmidt
  * Copyright 2003 Richard Drummond
  */

#include <io/mouse.h>
#include <io/kb.h>

#include "sysconfig.h"
#include "sysdeps.h"

#include "options.h"
#include "memory.h"
#include "custom.h"
#include "inputdevice.h"
#include "ps2options.h"
#include "ps2virtkb.h"
#include "ps3hwkb.h"

#include "cell.h"

#include "log.h"

extern unsigned int ps2_vkb_show;  //0-kb hidden  1-kb shown


/* function prototypes */
int waitPadReady(int port, int slot);
int initializePad(int port, int slot);


/*
 * Global var's
 */
// pad_dma_buf is provided by the user, one buf for each pad
// contains the pad's current state
static char padBuf0[512] __attribute__((aligned(64)));
static char padBuf1[512] __attribute__((aligned(64)));

static char actAlign[6];
static int actuators;

/* joysticks */
unsigned char j_ready[2];
unsigned char j_left[2];
unsigned char j_right[2];
unsigned char j_up[2];
unsigned char j_down[2];
unsigned char j_button1[2];
unsigned char j_button2[2];

//joy mode 0 : analog stick behaves as a mouse
//joy mode 1 : analog stick behaves as a joystick
unsigned char j_mode[2];

/* mices */
unsigned char m_button1[2];
unsigned char m_button2[2];

/* virtual keyboard */
int  vkb_l1[2];
char vkb_l1_press[2];
int  vkb_l2[2];
char vkb_l2_press[2];
int  vkb_r1[2];
char vkb_r1_press[2];
int  vkb_circle[2];
char vkb_circle_press[2];

int screen_x_shift = 0; //HW screen x position
int screen_y_shift = 0; //HW screen y position
int ps2_mouse_speed = 1;

int keyState = 0;
int idle_counter = 0;

int hw_mouse = 0;		//if set to 1 the HW mouse was detected
int hw_check = 0;		//check connected HW (mouse, keyboard)

void ps2_clean_pad_variables(void){
	int i;
	for (i = 0; i < 2 ; i++) {
		j_ready[i] = 0;
		j_left[i] = 0;
		j_right[i] = 0;
		j_up[i] = 0;
		j_down[i] = 0;
		j_button1[i] = 0;
		j_button2[i] = 0;
		m_button1[i] = 0;
		m_button2[i] = 0;
		vkb_l1[i] = 0;
		vkb_l2[i] = 0;
		vkb_r1[i] = 0;
		vkb_circle[i] = 0;
		vkb_l1_press[i] = 0;
		vkb_l2_press[i] = 0;
		vkb_r1_press[i] = 0;
		vkb_circle_press[i] = 0;
		j_mode[i] = 0;
	}
}

void ps2_init_pad(void) {


    ps2_clean_pad_variables();

    j_ready[0] = 1;
    j_ready[1] = 1;
}

/***************************************************************
  Joystick functions
****************************************************************/


static int init_joysticks (void)
{
   LOG_MSG(("init_joysticks" ));
   ps2_init_pad();
   return 1;
}

static void close_joysticks (void)
{
}

static int acquire_joystick (int num, int flags)
{
    return 1;
}

static void unacquire_joystick (int num)
{
}

static void read_joysticks (void)
{
}

static int get_joystick_num (void)
{
    return 2;
}

static char *get_joystick_name (int joy)
{
    return "ps3 pad";
}

static int get_joystick_widget_num (int joy)
{
    return 0;
}

static int get_joystick_widget_type (int joy, int num, char *name, uae_u32 *code)
{
    return IDEV_WIDGET_BUTTON;
}

static int get_joystick_widget_first (int joy, int type)
{
    return -1;
}

struct inputdevice_functions inputdevicefunc_joystick = {
    init_joysticks, 
    close_joysticks, 
    acquire_joystick,
    unacquire_joystick,
    read_joysticks, 
    get_joystick_num, 
    get_joystick_name,
    get_joystick_widget_num,
    get_joystick_widget_type,
    get_joystick_widget_first
};

void input_get_default_joystick (struct uae_input_device *uid)
{
    uid[0].enabled = 1;
}


/***************************************************************
  Mouse functions
****************************************************************/


static int init_mouse (void)
{
	mouseInfo mi;
	memset(&mi, 0, sizeof(mouseInfo));

	ioMouseInit(4);	
	ioMouseGetInfo(&mi);
	hw_mouse = mi.connected;	
	
	write_log("hw mouse connected=%i\n", mi.connected);
	return 1;
}

static void close_mouse (void)
{
	ioMouseEnd();
}

static int acquire_mouse (int num, int flags)
{

    return 1;
}

static void unacquire_mouse (int num)
{
}

static void read_mouse (void)
{
}

static int get_mouse_num (void)
{
    return 2;
}

static char *get_mouse_name (int mouse)
{
    return 0;
}

static int get_mouse_widget_num (int mouse)
{
    return 0;
}

static int get_mouse_widget_type (int mouse, int num, char *name, uae_u32 *code)
{
    return IDEV_WIDGET_NONE;
}

static int get_mouse_widget_first (int mouse, int type)
{
    return -1;
}


struct inputdevice_functions inputdevicefunc_mouse = {
    init_mouse, close_mouse, acquire_mouse, unacquire_mouse,
    read_mouse, get_mouse_num, get_mouse_name,
    get_mouse_widget_num, get_mouse_widget_type,
    get_mouse_widget_first
};


void input_get_default_mouse (struct uae_input_device * uid) {

}

/***************************************************************
  Keyboard functions
****************************************************************/


static int init_kb (void)
{
	vkb_init();	//virtual keyboard
	hwkb_init(); //hw keyboard
	return 1;
}

static void close_kb (void)
{
	hwkb_close();
}

static int acquire_kb (int num, int flags)
{
    return 1;
}

static void unacquire_kb (int num)
{
}

static void read_kb (void)
{
}

static int get_kb_num (void)
{
    return 1;
}

static char *get_kb_name (int mouse)
{
    return "Default keyboard";
}

static int get_kb_widget_num (int mouse)
{
    return 255; //fix me
}

static int get_kb_widget_type (int mouse, int num, char *name, uae_u32 *code)
{
    return IDEV_WIDGET_NONE;
}

static int get_kb_widget_first (int mouse, int type)
{
    return 0;
}


struct inputdevice_functions inputdevicefunc_keyboard = {
    init_kb, 
    close_kb, 
    acquire_kb, 
    unacquire_kb,
    read_kb, 
    get_kb_num, 
    get_kb_name,
    get_kb_widget_num, 
    get_kb_widget_type,
    get_kb_widget_first
};


int getcapslockstate (void)
{
    return 0;
}

void setcapslockstate (int state)
{
}


/********************************************************************
    Misc fuctions
*********************************************************************/

int needmousehack(void) {
    return 0;
}

void toggle_mousegrab(void) {
}

int map_hat_to_state(int state, unsigned int hat) {

	int hs = 0;
	int hy = (((hat >> 16) & 0xFF ) / 32) - 4;
    int hx = (((hat >> 24) & 0xFF ) / 32) - 4;
	if (hx < 0) hx ++;
	if (hy < 0) hy ++;

	if (hx < -1) {
		hs |= PAD_LEFT;
	} else
	if (hx > 1) {
		hs |= PAD_RIGHT;
	}
	if (hy < -1) {
		hs |= PAD_UP;
	} else
	if (hy > 1) {
		hs |= PAD_DOWN;
	}
	return state | hs;

}

/* handle pads in the "options" dialog */
int handle_options_events() {
	static int kb_options_state;
	int state;
	unsigned int new_hat;

	if (!PS3_appIsRunning()) {
		uae_quit();
		return -1;
 	}
	if (PS3_readPadButtons(&state, &new_hat, 0, 0)) {
		kb_options_state = map_hat_to_state(state, new_hat);
	} else
	if (PS3_readPadButtons(&state, &new_hat, 1, 0)) {
		kb_options_state = map_hat_to_state(state, new_hat);
	}
	if (kb_options_state == 0) {
		idle_counter++;
		if (idle_counter > 30) {
			idle_counter = 0;
			return -2;	//idle event
		}
	} else {
		//if a key was pressed then reset the counter
		idle_counter = 0;
	}
	return kb_options_state;
}



void handle_events() {
  int ret;
  static int hat_x1 = 0; //for pad 1
  static int hat_y1 = 0;
  static int hat_x2 = 0; //for pad 2
  static int hat_y2 = 0;
  unsigned int new_hat;

  unsigned int new_pad;
  int hw_screen_move = 0;
  static int press_vkb = 0;
  static int press_left = 0;
  static int press_right = 0;
  int press_key = 0;
  int jnr;

  int joy_event_detected = 0;
  
  //joystick ports are checked regularly, so we can safely
  //put here detection of program termination via menu by user
  if (!PS3_appIsRunning()) {
	uae_quit();
	return;
  }

	for (jnr = 0; jnr < 2 && j_ready[jnr]; jnr++) { 
		int p_left, p_right, p_up, p_down;
		int ok = PS3_readPadButtons (&new_pad, &new_hat, jnr, 0);
		if (ok) {
		int hat_x = 0;
		int hat_y = 0;
		joy_event_detected = 1;


		if (jnr == 0) {
			//analog Hat - 8 precision areas  (4 left | 4 right)
		    hat_x1 = ((new_hat >> 24) / 32) - 4;
			if (hat_x1 < 0) hat_x1 ++;
	        hat_y1 = (((new_hat >> 16) & 0xFF ) / 32) - 4;
			if (hat_y1 < 0) hat_y1 ++;
			hat_x = hat_x1;
			hat_y = hat_y1;
		} else {
			//analog Hat - 8 precision areas  (4 left | 4 right)
		    hat_x2 = ((new_hat >> 24) / 32) - 4;
			if (hat_x2 < 0) hat_x2 ++;
	        hat_y2 = (((new_hat >> 16) & 0xFF ) / 32) - 4;
			if (hat_y2 < 0) hat_y2 ++;
			hat_x = hat_x2;
			hat_y = hat_y2;
		}

		//check joy mode: 0-use analog stick as a mouse, 1-use analog stick as a joystick
		//note: +10 / -10 is because we don't want to change the j_mode flag
		//every frame - just when the button changes from pressed to released.
		if (new_pad & PAD_R3 ) {
			if (j_mode[jnr] < 2) {
				j_mode[jnr] = 1 - j_mode[jnr];
				j_mode[jnr] += 10; //set flag the button was pressed
			}
		}
		//switch joystick flag  - when L3 was released
		else if (j_mode[jnr] > 2) {
			j_mode[jnr] -= 10;
		}

		//digital pad emulates joystick
		p_left = new_pad & PAD_LEFT;
		p_down = new_pad & PAD_DOWN;
		p_right = new_pad & PAD_RIGHT;
		p_up = new_pad & PAD_UP;

		//if analog stick should emulate joystick
		if (j_mode[jnr] == 1) {
			if (hat_x < -1) {
				p_left |= 1; 	
			} else
			if (hat_x > 1) {
				p_right |= 1;
			}
			if (hat_y < -1) {
				p_up |= 1; 	
			} else
			if (hat_y > 1) {
				p_down |= 1;
			}
		}

		// Directions
		if(p_left) {
			if (ps2_vkb_show) {
				press_left = 1;
			} else
			if (!j_left[jnr]) {
				j_left[jnr] = 1;
				setjoystickstate(jnr, 0, -1, 1);
			}
	        } else {
			if (ps2_vkb_show) {
				press_left = 0;	
			} else
			if (j_left[jnr]) {
				j_left[jnr] = 0;
				setjoystickstate(jnr, 0, 0, 1);
			}
		}

		if(p_down) {
			if (!j_down[jnr]) {
				j_down[jnr] = 1;
				setjoystickstate(jnr, 1, 1, 1);
			}
	        } else {
			if (j_down[jnr]) {
				j_down[jnr] = 0;
				setjoystickstate(jnr, 1, 0, 1);
			}
		}

		if(p_right) {
			if (ps2_vkb_show) {
				press_right = 1;
			} else
			if (!j_right[jnr]) {
				j_right[jnr] = 1;
				setjoystickstate(jnr, 0, 1, 1);
			}
        	} else {
			if (ps2_vkb_show) {
				press_right = 0;	
			} else
			if (j_right[jnr]) {
				j_right[jnr] = 0;
				setjoystickstate(jnr, 0, 0, 1);
			}
		}

		if(p_up) {
			if (ps2_vkb_show) {
				press_key = 1;
			} else
			if (!j_up[jnr]) {
				j_up[jnr] = 1;
				setjoystickstate(jnr, 1, -1, 1);
			}
		} else {
			if (j_up[jnr]) {
				j_up[jnr] = 0;
				setjoystickstate(jnr, 1, 0, 1);
			}
		}

		if(new_pad & PAD_CROSS) {
			if (!j_button1[jnr]) { 
				j_button1[jnr] = 1;
				setjoybuttonstate(jnr, 0, 1); // joy0, button0, state ON
			}
		}else {
			if (j_button1[jnr]) {
				j_button1[jnr] = 0;
				setjoybuttonstate(jnr, 0, 0); // joy0, button0, state OFF
			}
		}

		//LOG_MSG2("hat= %08x   ", new_hat);

		//MOUSE movement - mode is tet to 0
		if (j_mode[jnr] == 0) {
			if (hat_x != 0) setmousestate (jnr, 0, hat_x*ps2_mouse_speed, 0);
			if (hat_y != 0) setmousestate (jnr, 1, hat_y*ps2_mouse_speed, 0);
		}

		// mouse button 1 
		if(new_pad & PAD_SQUARE) {
			if (!m_button1[jnr]) { 
				m_button1[jnr] = 1;
				setmousebuttonstate(jnr, 0, 1); // mouse0, button0, state ON
			}
		}else {
			if (m_button1[jnr]) {
				m_button1[jnr] = 0;
				setmousebuttonstate(jnr, 0, 0); // mouse0, button0, state OFF
			}
		}
		// mouse button 2 
		if(new_pad & PAD_TRIANGLE) {
			if (!m_button2[jnr]) { 
				m_button2[jnr] = 1;
				setmousebuttonstate(jnr, 1, 1); // mouse0, button0, state ON
			}
		}else {
			if (m_button2[jnr]) {
				m_button2[jnr] = 0;
				setmousebuttonstate(jnr, 1, 0); // mouse0, button0, state OFF
			}
		}

		/* show virtual keyboard */
		if(new_pad & PAD_R2) {
			press_vkb = 1;
		} else {
			press_vkb = 0;
		}

		/* enter options */
		if(new_pad & PAD_START) {
			//hide keyboard before entering options
			if (ps2_vkb_show) {
				press_vkb = 0;
				ps2_vkb_show = 0;
				vkb_redraw(0);
			}
			enter_options();
		}

		/* user defined keys L1, L2, R1, CIRCLE */
		if (new_pad & PAD_R1) {
			if (press_vkb) {
				vkb_r1[jnr] = vkb_get_key_index();
			} else {
				vkb_press_index(vkb_r1[jnr]);
				vkb_r1_press[jnr] = 1;
			}
		} else 
		if (vkb_r1_press[jnr]) {
			vkb_release_index(vkb_r1[jnr]);		
			vkb_r1_press[jnr] = 0;
		}

		if (new_pad & PAD_L1) {
			if (press_vkb) {
				vkb_l1[jnr] = vkb_get_key_index();
			} else {
				vkb_press_index(vkb_l1[jnr]);
				vkb_l1_press[jnr] = 1;
			}
		}else
		if (vkb_l1_press[jnr]) {
			vkb_release_index(vkb_l1[jnr]);		
			vkb_l1_press[jnr] = 0;
		}


		if (new_pad & PAD_L2) {
			if (press_vkb) {
				vkb_l2[jnr] = vkb_get_key_index();
			} else 
			{
				vkb_press_index(vkb_l2[jnr]);
				vkb_l2_press[jnr] = 1;
			}
		}else
		if (vkb_l2_press[jnr]) {
			vkb_release_index(vkb_l2[jnr]);		
			vkb_l2_press[jnr] = 0;
		}

		if (new_pad & PAD_CIRCLE) {
			if (press_vkb) {
				vkb_circle[jnr] = vkb_get_key_index();
			} else 
			{
				vkb_press_index(vkb_circle[jnr]);
				vkb_circle_press[jnr] = 1;
			}
		}else
		if (vkb_circle_press[jnr]) {
			vkb_release_index(vkb_circle[jnr]);		
			vkb_circle_press[jnr] = 0;
		}
	} // ok
	else 
	//no joy movement was detected 
	{
		if (j_mode[jnr] == 0) {
			//keep moving the mouse
			if (jnr == 0) {
				if (hat_x1 != 0) setmousestate (jnr, 0, hat_x1*ps2_mouse_speed, 0);
				if (hat_y1 != 0) setmousestate (jnr, 1, hat_y1*ps2_mouse_speed, 0);
			} else {
				if (hat_x2 != 0) setmousestate (jnr, 0, hat_x2*ps2_mouse_speed, 0);
				if (hat_y2 != 0) setmousestate (jnr, 1, hat_y2*ps2_mouse_speed, 0);
			}

		}
	}

  

	}  //end for


	//check HW device is plugged or unplugged (every 2  seconds)
	if (hw_check++ > 100) {
		mouseInfo mi;
		ioMouseGetInfo(&mi);
		hw_mouse = mi.connected;	

		hw_check = 0;
	} 

	//check state of the HW mice
	for (jnr = 0; jnr < hw_mouse && jnr < 2; jnr++) {
		mouseData md;
		ioMouseGetData(jnr, &md);
		if (md.update) {
			if (md.x_axis) {
				setmousestate(jnr, 0, md.x_axis * ps2_mouse_speed, 0);
			}
			if (md.y_axis) {
				setmousestate(jnr, 1, md.y_axis * ps2_mouse_speed, 0);
			}
			setmousebuttonstate(jnr, 0, md.buttons & 0x1); 			// mouse nr, button0, state
			setmousebuttonstate(jnr, 1, (md.buttons >> 1) & 0x1); 	// mouse nr, button1, state
		}
	}	

	//check HW keyboard
	hwkb_update();

	//virtual keyboard redraws
	if (press_vkb && !ps2_vkb_show) {
		ps2_vkb_show = 1;
		vkb_redraw(1);
	} else 
	if (!press_vkb && ps2_vkb_show && joy_event_detected) {
		ps2_vkb_show = 0;
		vkb_redraw(0);		
	}

	if (ps2_vkb_show) {
		if (press_left) {
			if (press_left == 1) {
				vkb_left();  //shift keyboard left
			} 
			press_left++;
			if (press_left == 2) {
				press_left = 1;
			}
		} else
		if (press_right) {
			if (press_right == 1) {
				vkb_right(); //shift keyboard right
			}
			press_right++;
			if (press_right == 2) {
				press_right = 1;
			}
		} else
		if (press_key) {
			vkb_press(); //key pressed
		}
		else {
			vkb_invalidate(); //key depressed
		}
	}


}





