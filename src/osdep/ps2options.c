/**********************************************
               Main Menu options

**********************************************/

/* few bits and pieces taken from winuae: */
/*==========================================================================
*
*  Copyright (C) 1996 Brian King
*
*  File:       win32gui.c
*  Content:    Win32-specific gui features for UAE port.
*
***************************************************************************/



#include "sysconfig.h"
#include "sysdeps.h"
#include "uae.h"
#include "options.h"
#include "disk.h"
#include "sleep.h"

#include "ps3main.h"
#include "ps2options.h"
#include "ps2fselect.h"
#include "ps3display.h"
#include "custom.h"
#include "inputdevice.h"
#include "memory.h"
#include "savestate.h"
#include "filesys.h"
#include "zfile.h"
#include "gensound.h"

#include "ps3thumbnail.h"
#include "cell.h"
#include "log.h"
#include <sys/stat.h>
#include <lv2/sysfs.h>


#define MPOS_CFG_SELECT 0
#define MPOS_FLOPPY1 1
#define MPOS_FLOPPY2 2
#define MPOS_FLOPPY3 3
#define MPOS_FLOPPY4 4
#define MPOS_KICK_ROM 5


#define MPOS_MENU_HDF 6
#define MPOS_MENU_SAVE 7
#define MPOS_MENU_CPU 8
#define MPOS_MENU_VIDEO 9
#define MPOS_MENU_SOUND 10
#define MPOS_MENU_MISC 11
#define MPOS_RESET 12
#define MPOS_BACKFBNEO 13


#define MPOS_STATE_SLOT 0
#define MPOS_STATE_LOAD 1
#define MPOS_STATE_EPTY_1 2
#define MPOS_STATE_EPTY_2 3
#define MPOS_STATE_EPTY_3 4
#define MPOS_STATE_SAVE 5

#define MPOS_HDF0 0
#define MPOS_HDF1 1
#define MPOS_HDF2 2
#define MPOS_HDF3 3
#define MPOS_HDF4 4
#define MPOS_HDF5 5
#define MPOS_HDF6 6


#define MPOS_CPU_TYPE 0
#define MPOS_CPU_SPEED 1
#define MPOS_CPU_EXACT 2
#define MPOS_CPU_COMPAT 3
#define MPOS_CPU_CHIP_MEM 4
#define MPOS_CPU_BOGO_MEM 5
#define MPOS_CPU_FAST_MEM 6

#define MPOS_VIDEO_CHIP 0
#define MPOS_VIDEO_SIGNAL 1
#define MPOS_VIDEO_FSKIP 2
#define MPOS_VIDEO_VSYNC 3
#define MPOS_VIDEO_BLITS 4
#define MPOS_VIDEO_COLLISION 5
#define MPOS_VIDEO_BLIT_EXACT 6
#define MPOS_VIDEO_SCAN_LINE 7
#define MPOS_VIDEO_SHADER 8
#define MPOS_VIDEO_SCALE_X 9
#define MPOS_VIDEO_SCALE_Y 10
#define MPOS_VIDEO_POS_X 11
#define MPOS_VIDEO_POS_Y 12


#define MPOS_SOUND_TYPE 0
#define MPOS_SOUND_INTERPOL 1
#define MPOS_SOUND_MASTER_VOL 2
#define MPOS_SOUND_CLICKS 3
#define MPOS_SOUND_CLICKS_VOL 4

#define MPOS_MISC_LEDS 0
#define MPOS_MISC_JOY_PORTS 1
#define MPOS_MISC_MOUSE_SPEED 2
#define MPOS_MISC_FLOPPY_SPEED 3
#define MPOS_MISC_QUIT 4


#define MENU_MAIN 0
#define MENU_FILE 1
#define MENU_HDF 2
#define MENU_SAVE 3
#define MENU_CPU 4
#define MENU_VIDEO 5
#define MENU_SOUND 6
#define MENU_MISC 7

#define ACTION_CROSS 1
#define ACTION_SQUARE 2
#define ACTION_LEFT 4
#define ACTION_RIGHT 3
#define ACTION_IDLE 10

#define THUMB_X 340
#define THUMB_Y 50

#define MAX_DISK 6

#ifdef __PS3__
#define SAVE_PATH "/dev_hdd0/game/FBNE00123/USRDIR/EUAE/SAVE/"
#define FLOPPYTMP "/dev_hdd0/game/FBNE00123/USRDIR/EUAE/FLOPPYTMP/"
//#define SAVE_PATH "/dev_usb000/uae/save/"
#else
#define SAVE_PATH "./save/"
#endif

extern int ps2_mouse_speed;
extern int vsync_enabled;

#ifdef __PS3__
char** rpath = NULL; //use "/" as a root path
#else
char* rpath[] = {"/", "/home/ole/apps/uae", NULL};
#endif


#ifdef RELEASE_V
#undef RELEASE_VER
#include "release_ver.h"
#else
#define RELEASE_VER " "
#endif

void clearFloppyTmp(const char * dir) {
    int i;
    s32 fd;
    sysFSDirent entry;
	u64 read;
	char path[1024];

    i = sysFsOpendir( dir, &fd );
	if( i )
	{
		printf("sysFsOpendir( %s ): %i\n", dir, i );
		return ;
	}
	while( !sysFsReaddir( fd, &entry , &read ) && read > 0 )
	{
	    if( !entry.d_namlen )//wtf?!
			continue;

		if( entry.d_name[ 0 ] == '.' )
		{
			//dot
			if( entry.d_name[ 1 ] == 0 )
			{
				continue;
			}
			//dotdot
			if( entry.d_name[ 1 ] == '.' && entry.d_name[ 2 ] == 0 )
			{
				continue;
			}
		}
		if( entry.d_type == 2 )
		{
			//Delete file
			snprintf(path, 1024, "%s%s", FLOPPYTMP, entry.d_name);
			sysFsUnlink(path);
			continue;
		}
	}
    return;
}

char* statline[] = {
	"\a1 select file    \a0 exit",			//0
	"\a1 insert    \a2 eject    \a0 exit",		//1
	"\a1 enter    \a0 exit",					//2
	"\a1 confirm    \a0 exit",					//3
	"\a1 select    \a0 back",				//4
	"\a3 \a4 select    \a0 back",			//5
	"\a1 confirm    \a0 back",				//6
	"\a1 mount    \a2 unmount    \a0 exit",		//7
};

char* opt_scanline_name[] = {
	"off ", "10% ", "20% ", "30% ", "40% ", "50% ", "60% ", "70% ", "80% ", "90% ", "100%"
};

//             68000, 68010, 68ec020, 68020, 68ec020/68881, 68020/68881, 68040, xxx,xxx   68060,     end
int cpus[] = {0,-1,   2,-1,  4,       5,     6,             7,          -1, 9,  -3,-1,   -1,13   , -100};

unsigned char color_hi[] = {1,2};
unsigned char color_lo[] = {1,3};
unsigned char color_inv[] = {3,1};
unsigned char color_bg[] = {3,2};
unsigned char color_top[] = {2,4};

char* statline_msg[128] = {0};

char* config_name = NULL;
char* kickrom_name = NULL;
char* hdf_name[MAX_DISK];
char memsize[16 * 2];

int menu_pos = 0;
int max_menu_pos;
int ovl_left = 0;
int ovl_top = 60;

char tmpPath[512];
// screen params
int params[21];


int screenId = 0;
int stateSlot = 1; // save state slot
int * thumb =  NULL;
char thumbLoaded = 0;
int statusId = -1;

//user defined keyboard values for 2 joypads
extern int  vkb_l1[2];
extern int  vkb_l2[2];
extern int  vkb_r1[2];
extern int  vkb_l3[2];
extern int  vkb_r3[2];
extern int  vkb_circle[2];
extern int  vkb_select[2];

extern int opt_scanline;
extern int opt_scanline_density;
extern int opt_scale_x;
extern int opt_scale_y;
extern int opt_pos_x;
extern int opt_pos_y;
extern int opt_master_vol;

/***************************************************************
function declaration
****************************************************************/
char * getBogoSize(int val);
char * getMemorySize(int val, int index);
void update_title_bar(void);
void  init_main_screen(int full);
void paint_status_bar(void);
int update_menu(void);
void update_menu_before_flush(void);
static int draw_menu_item(int index, char* name, char* value, int statId);
static int draw_menu_item2(int index, char* name, char* value, int statId);
void update_cpu_menu(void);
char* get_hdf_name(int index);
static int hardfile_testrdb (char *filename);
void update_hdf_menu(void);
void update_video_menu(void);
void update_sound_menu(void);
void update_misc_menu(void);
void update_save_menu(void);
void update_main_menu(void);
int do_action(int action);
int action_state_menu(int action);
static void mount_hdf(int index, char* name);
static void unmount_all_hdfs(void);
int action_hdf_menu(int action);
int action_misc_menu(int action);
int action_sound_menu(int action);
int action_video_menu(int action);
int action_cpu_menu(int action);
int action_main_menu(int action);


/***************************************************************
function implementation
****************************************************************/

char * getBogoSize(int val) {
	switch (val) {
	        case 0x1C0000 : return "1.75M";
		case  0x80000 : return "512k";
	        case 0x100000 : return "1M";
		default: return "0";
	}
}
char * getMemorySize(int val, int index) {
	if (val == 0) return "0";
	if (val == 0x80000) return "512k";
	int meg = val / (0x100000);
	int k = (val % 0x100000) / 10240;
	sprintf(memsize + index* 16, "%i.%iM", meg, k);
	return (char *) memsize + index * 16;
}

//paint cpu chipset and memory information
void update_title_bar(void) {
	int screenFreq = PS3_getScreenHeight() == 576 ? 50 : 60;
	char * chipset = "OCS";

	if (currprefs.chipset_mask & CSMASK_AGA)
		chipset = "AGA";
	else if ((currprefs.chipset_mask & CSMASK_ECS_AGNUS) && (currprefs.chipset_mask & CSMASK_ECS_DENISE))
		chipset = "ECS";
	else if (currprefs.chipset_mask & CSMASK_ECS_AGNUS)
		chipset = "ECS_AGNUS";
	else if (currprefs.chipset_mask & CSMASK_ECS_DENISE)
		chipset = "ECS_DENISE";


//CPU
	const char* cpu_name = get_cpu_mode(currprefs.cpu_level * 2 + !currprefs.address_space_24);
//memory
	char tmp[256];
	sprintf(tmp, "scr:%iHz cpu:%s %s mem:chip=%s fast=%s bogo=%s",
			screenFreq,
		cpu_name,
		chipset,
		getMemorySize(currprefs.chipmem_size,0),
		getMemorySize(currprefs.fastmem_size,1),
		getBogoSize(currprefs.bogomem_size)
	);
	draw_rect(ovl_left+2*8-30,ovl_top+26,580+60,8,1); //clean the previous text off the scrren //24 * 8, 408
	draw_text(ovl_left+2*8-30,ovl_top+26, (unsigned char*) tmp , color_hi);

}

void  init_main_screen(int full) {

	if (config_name == NULL) {
		config_name = (char *) malloc(512);
		if (config_name) {
			sprintf(config_name, "%s", get_current_config_name());
		}
	}
	if (kickrom_name == NULL) {
		kickrom_name = (char *) malloc(512);
	}
	if (hdf_name[0] == NULL) {
		int i;
		for (i = 0; i < MAX_DISK; i++) {
			hdf_name[i] = (char *) malloc(512);
		}
	}

	//border rectangle
	int posY = ovl_top + 20;

	//shade around the menu edges
	//draw_shade(ovl_left - 1, posY - 12, 602, 212, NULL, 0);
	draw_shade(ovl_left - 1 -30, posY - 10, 602+30+30, 217, NULL, 0);

	if (full) {
		//background
		draw_rect(ovl_left -30, posY - 10, 600+30+30,20, 4);
		//stripes
		for (int i = 0; i < 3; i++) {
			draw_rect(ovl_left - 1 -30, posY - 10 + (i * 5), 602+30+30, 2,  2);
		}
		//top line
		draw_rect(ovl_left - 1-30, posY + 1, 602+30+30, 1,  2);
	}

	//bottom line
	//draw_rect(ovl_left - 1, posY + 200, 602, 1,  2);
	draw_rect(ovl_left - 1 -30, posY + 207, 602+30+30, 1,  2);
	//left line
	//draw_rect(ovl_left - 1, posY - 12, 1, 213, 2);
	draw_rect(ovl_left - 1 -30, posY - 10, 1, 218, 2);
	//right line
	//draw_rect(ovl_left + 600, posY - 12, 1, 213, 2);
	draw_rect(ovl_left + 600+30, posY - 10, 1, 218, 2);


	if (full) {
		//test alpha rectangle
		draw_rect(ovl_left+0-30,ovl_top+22,600+30+30,180,1);
		draw_rect(ovl_left+10-30,ovl_top+42,580+30+30,1,3);
		//	draw_rect(10,132,300,1,3);

		//decoration in top right corner
		draw_rect(ovl_left + 584+30, ovl_top + 10, 12, 12, 2);
		draw_text(ovl_left + 586+30,ovl_top + 12, "\a2", color_top);

		//black left and right delimiters around the decoration
		draw_rect(ovl_left + 582+30, ovl_top + 10, 2, 12, 4);
		draw_rect(ovl_left + 596+30, ovl_top + 10, 2, 12, 4);

		//orange left and right  delimiters around the decoration
		draw_rect(ovl_left + 580+30, ovl_top + 10, 2, 12, 2);
		draw_rect(ovl_left + 598+30, ovl_top + 10, 2, 12, 2);


		{
			unsigned char version[256];
			sprintf(version, " %s %s ", PACKAGE_STRING, RELEASE_VER);
			draw_text(ovl_left-30,ovl_top + 12, version, color_top); // + 26
		}

		sprintf(kickrom_name, "%s", currprefs.romfile);

		update_title_bar();

		screenId = MENU_MAIN;
		max_menu_pos = 13;
		thumbLoaded = 0;
		update_menu();
	}
}

void paint_status_bar(void) {
	//draw_rect(ovl_left+10,ovl_top+200,580,1,3);
	draw_rect(ovl_left+10-30,ovl_top+207,580+60,1,3);
	if (statusId < 0) {
		return;
	}
	//draw either status line help text or the last message
	if (statline_msg[0] == 0) {
		//draw_text(ovl_left+10,ovl_top+206, (unsigned char*)statline[statusId], color_lo);
		draw_text(ovl_left+10-30,ovl_top+213, (unsigned char*)statline[statusId], color_lo);
	} else {
		//draw_text(ovl_left+10,ovl_top+206, (unsigned char*)statline_msg, color_lo);
		draw_text(ovl_left+10-30,ovl_top+213, (unsigned char*)statline_msg, color_lo);
		statline_msg[0] = 0;
	}

}


void show_gui_message(char* msg) {
	if (msg == NULL) {
		return;
	}
	write_log ("gui message: %s \n", msg);

	int len = strlen(msg);
	if (len > 127) {
		len = 127;
	}
	if (msg[len - 1] == '\n') {
		len--;
	}
	if (len < 1) {
		return;
	}
	memset(statline_msg, 0, sizeof(statline_msg));
	memcpy(statline_msg, msg, len);
}

int  wait_for_idle_event(int wait) {
	int event_count = 0;
	int quick_exit = 0;
	int event;

	while (event_count < (12 + wait*0x2F) ) {
		event = handle_options_events();
		if (event < 0) {
			return event;
		}
		if (event == 0) {
			quick_exit = 1; //when next event comes -> exit quickly
		} else
		if (quick_exit) {
			return event;
		}
		uae_msleep(10);
		event_count++;
	}
	return event;
}

int  wait_for_no_key(void) {
	int event = 1;

	while (event) {
		event = handle_options_events();
		if (event < 0) {
			return event;
		}
		uae_msleep(10);
	}
	return event;
}


int update_menu(void) {

	//clean menu area
	//draw_rect(ovl_left+0,ovl_top+50,600,170,1);
	draw_rect(ovl_left+0-30,ovl_top+52,600+60,175,1);

	switch (screenId) {
		case MENU_MAIN:  update_main_menu(); break;
		case MENU_CPU:   update_cpu_menu(); break;
		case MENU_VIDEO: update_video_menu(); break;
		case MENU_SOUND: update_sound_menu(); break;
		case MENU_MISC:  update_misc_menu(); break;
		case MENU_SAVE:  update_save_menu(); break;
		case MENU_HDF:   update_hdf_menu(); break;

	} //end of switch

	paint_status_bar();

	update_menu_before_flush();
	//draw_screen(1);

	//wait_for_idle_event(0);
	return 0;
}

void update_menu_before_flush(void) {
	//repaint thumb
	if (screenId == MENU_SAVE) {
		char drawThumb = (thumb != NULL && thumb[0]);
		//thumb exists and correctly loaded
		if (drawThumb) {
			int w = thumb[1];
			int h = thumb[2];
			//write_log("blit thumb w=%i h=%i \n", w, h);
			PS3_blitARGB(ovl_left + THUMB_X, ovl_top + THUMB_Y, w, h, w,(unsigned int*) thumb + 2, 0);
		}
	}
}


static int draw_menu_item(int index, char* name, char* value, int statId) {
	draw_text(ovl_left+10-30,ovl_top+52 + index * 11, (unsigned char*)name , menu_pos == index ? color_bg:color_hi);
	draw_text(ovl_left+118-30, ovl_top+52 + index * 11, (unsigned char*)value, color_lo);
	if (menu_pos == index) {
		statusId = statId;
	}
	return 0;
}

//more space for the property name
static int draw_menu_item2(int index, char* name, char* value, int statId) {
	draw_text(ovl_left+10-30,ovl_top+52 + index * 11, (unsigned char*)name , menu_pos == index ? color_bg:color_hi);
	draw_text(ovl_left+178-30, ovl_top+52 + index * 11, (unsigned char*)value, color_lo);
	if (menu_pos == index) {
		statusId = statId;
	}
	return 0;
}

void update_cpu_menu(void) {
	char string[32];


	char* cpu_name = (char*)get_cpu_mode(currprefs.cpu_level * 2 + !currprefs.address_space_24);
	draw_menu_item2(MPOS_CPU_TYPE, " CPU type           ", cpu_name, 4 );

	if (currprefs.m68k_speed == 0) {
		strcpy(string, "real");
	} else
	if (currprefs.m68k_speed == -1) {
		strcpy(string, "max ");
	} else {
		sprintf(string, "%d   ", currprefs.m68k_speed/512);
	}
	draw_menu_item2(MPOS_CPU_SPEED,  " CPU speed          ", string, 4);

	draw_menu_item2(MPOS_CPU_EXACT,  " CPU cycle exact    ", currprefs.cpu_cycle_exact ? "on" : "off", 4);
	draw_menu_item2(MPOS_CPU_COMPAT, " CPU compatible     ", currprefs.cpu_compatible ? "on" : "off", 4);

	draw_menu_item2(MPOS_CPU_CHIP_MEM, " Chip memory        ", 	getMemorySize(currprefs.chipmem_size,0), 4);
	draw_menu_item2(MPOS_CPU_BOGO_MEM, " Bogo memory        ", 	getBogoSize(currprefs.bogomem_size), 4);
	draw_menu_item2(MPOS_CPU_FAST_MEM, " Fast memory        ", 	getMemorySize(currprefs.fastmem_size,0), 4);

	max_menu_pos = MPOS_CPU_FAST_MEM;
	update_title_bar();

}

 char* get_hdf_name(int index) {
		int     secspertrack, surfaces, reserved, blocksize, bootpri;
		uae_u64 size;
		int     cylinders, readonly, flags;
		char   *devname, *volname, *rootdir, *filesysdir;
		const char *failure;

		/* We always use currprefs.mountinfo for the GUI.  The filesystem
		   code makes a private copy which is updated every reset.  */
		failure = get_filesys_unit (currprefs.mountinfo, index,
				    &devname, &volname, &rootdir, &readonly,
				    &secspertrack, &surfaces, &reserved,
				    &cylinders, &size, &blocksize, &bootpri,
				    &filesysdir, &flags);
		if (failure) {
			write_log("%s \n",failure);
			return NULL;
		}
		if (is_hardfile (currprefs.mountinfo, index)) {
			return rootdir;
		}
		return NULL;
}

static int hardfile_testrdb (char *filename)
{
	struct zfile *f = zfile_fopen (filename, "rb");
	uae_u8 tmp[8];
	int i;
	int result = 0;

	if (!f)
		return -1;
	for (i = 0; i < 16; i++) {
		zfile_fseek (f, i * 512, SEEK_SET);
		memset (tmp, 0, sizeof tmp);
		zfile_fread (tmp, 1, sizeof tmp, f);
		/*
		if (i == 0 && !memcmp (tmp + 2, "CIS", 3)) {
			hdf->controller = HD_CONTROLLER_PCMCIA_SRAM;
			break;
		}
		*/
		if (
			!memcmp (tmp, "RDSK\0\0\0", 7) ||
			!memcmp (tmp, "DRKS\0\0", 6) ||
			(tmp[0] == 0x53 && tmp[1] == 0x10 && tmp[2] == 0x9b && tmp[3] == 0x13 && tmp[4] == 0 && tmp[5] == 0))
		{
			// RDSK or ADIDE "encoded" RDSK
			result = 1;
			break;
		}
	}
	zfile_fclose (f);
	return result;
}


void update_hdf_menu(void) {
	char string[32];
	char* name;
	int i;
	int len;
	struct uaedev_mount_info* mi = currprefs.mountinfo;

	//draw hdf names
	for (i = 0; i < MAX_DISK; i++) {
		name = get_hdf_name(i);
		if (name != NULL) {
			strcpy(hdf_name[i], name);
			len = strlen(name);
			if (len > 60) { //28
				name += (len-60); //28
			}
		} else {
			name = "\0";
			hdf_name[i][0] = 0;
		}
		sprintf(string	, " Disk %d      \0", i);
		draw_menu_item(MPOS_HDF0 + i, string, name, 7);
	}

	max_menu_pos = MPOS_HDF0 + MAX_DISK - 1;

}

void update_video_menu(void) {
	char string[32];

	char * chipset = "OCS";

	if (currprefs.chipset_mask & CSMASK_AGA)
		chipset = "AGA";
	else if ((currprefs.chipset_mask & CSMASK_ECS_AGNUS) && (currprefs.chipset_mask & CSMASK_ECS_DENISE))
		chipset = "ECS";
	else if (currprefs.chipset_mask & CSMASK_ECS_AGNUS)
		chipset = "ECS_AGNUS";
	else if (currprefs.chipset_mask & CSMASK_ECS_DENISE)
		chipset = "ECS_DENISE";

	draw_menu_item2(MPOS_VIDEO_CHIP,      " Chipset            ", chipset , 4);

	draw_menu_item2(MPOS_VIDEO_SIGNAL,    " Signal             ", currprefs.ntscmode ? "NTSC" : "PAL", 4);
	sprintf(string, "%d ", currprefs.gfx_framerate);
	draw_menu_item2(MPOS_VIDEO_FSKIP,     " Frame skip         ", string, 4);
	draw_menu_item2(MPOS_VIDEO_VSYNC,     " Vsync              ", currprefs.gfx_vsync? "on ": "off", 4);
	draw_menu_item2(MPOS_VIDEO_BLITS,     " Immediate blits    ", currprefs.immediate_blits ? "on ": "off", 4);
	draw_menu_item2(MPOS_VIDEO_COLLISION, " Collision          ", (char*)get_collision_mode(currprefs.collision_level), 4);
	draw_menu_item2(MPOS_VIDEO_BLIT_EXACT," Blitter cyc. exact ", currprefs.blitter_cycle_exact ? "on": "off", 4);
	draw_menu_item2(MPOS_VIDEO_SCAN_LINE, " Scan lines         ", opt_scanline_name[opt_scanline], 4);
	sprintf(string, "%d ", opt_scanline_density);
	draw_menu_item2(MPOS_VIDEO_SHADER,    " Scan line density  ", string, 4);

	sprintf(string, "%d %", opt_scale_x);
	draw_menu_item2(MPOS_VIDEO_SCALE_X,   " Scale X            ", string, 4);

	sprintf(string, "%d %", opt_scale_y);
	draw_menu_item2(MPOS_VIDEO_SCALE_Y,   " Scale Y            ", string, 4);

	sprintf(string, "%d ", opt_pos_x);
	draw_menu_item2(MPOS_VIDEO_POS_X,   " Position X         ", string, 4);

	sprintf(string, "%d ", opt_pos_y);
	draw_menu_item2(MPOS_VIDEO_POS_Y,   " Position Y            ", string, 4);


	max_menu_pos = MPOS_VIDEO_POS_Y;

	update_title_bar();

}

void update_sound_menu(void) {
	char string[32];

	draw_menu_item2(MPOS_SOUND_TYPE,     " Sound              ", (char *)get_sound_mode1(currprefs.produce_sound), 4);
	draw_menu_item2(MPOS_SOUND_INTERPOL, " Interpolation      ", (char *)get_sound_interpol_mode(currprefs.sound_interpol), 4);
	sprintf(string, "%d ", opt_master_vol);
	draw_menu_item2(MPOS_SOUND_MASTER_VOL,  " Master volume      ", string, 4);
	draw_menu_item2(MPOS_SOUND_CLICKS,   " Drive click        ", currprefs.dfxclick[0] ? "on" : "off", 4);
	sprintf(string, "%d ", (100 - currprefs.dfxclickvolume));
	draw_menu_item2(MPOS_SOUND_CLICKS_VOL,  " Drive click volume ", string, 4);

	max_menu_pos = MPOS_SOUND_CLICKS_VOL;
}

void update_misc_menu(void) {
	char string[32];

	draw_menu_item2(MPOS_MISC_LEDS,       " LEDs               ", currprefs.leds_on_screen? "on ": "off", 4);


	int j0 = currprefs.jport0 / JSEM_JOYS;
	int j1 = currprefs.jport1 / JSEM_JOYS;
	if (j0 == 2 && j1 == 1) {
		strcpy(string, "mouse & joy-1  ");
	} else
	if (j0 == 1 && j1 == 1) {
		strcpy(string, "joy-1 & joy-2  ");
	} else {
		strcpy(string, "mouse & mouse");
	}
	//sprintf(string, " %i  %i ",  currprefs.jport0, currprefs.jport1);
	draw_menu_item2(MPOS_MISC_JOY_PORTS, " Joy ports          ", string, 4);

	sprintf(string, "%d ", ps2_mouse_speed);
	draw_menu_item2(MPOS_MISC_MOUSE_SPEED, " Mouse speed        ", string, 4);

	sprintf(string, "%d %%", currprefs.floppy_speed);
	draw_menu_item2(MPOS_MISC_FLOPPY_SPEED, " Floppy speed       ", string, 4);

	draw_menu_item2(MPOS_MISC_QUIT, " >>  QUIT E-UAE  << ", " ", 6);

	max_menu_pos = MPOS_MISC_QUIT;
}

void update_save_menu(void) {
	char string[32];
	int excludeArea = (thumb != NULL && thumb[0]);

	if (excludeArea) {
		draw_rect(ovl_left+0,ovl_top+50,340,150,1);
	} else {
		draw_rect(ovl_left+0-30,ovl_top+50,600+60,150,1);
	}

	sprintf(string, "%d", stateSlot);
	draw_menu_item2(MPOS_STATE_SLOT,    " Slot               ",  string, 5);
	draw_menu_item2(MPOS_STATE_LOAD,    "     >> LOAD <<     ", " ", 6);
	draw_menu_item2(MPOS_STATE_EPTY_1,  "                    ", " ", 6);
	draw_menu_item2(MPOS_STATE_EPTY_2,  "                    ", " ", 6);
	draw_menu_item2(MPOS_STATE_EPTY_3,  "                    ", " ", 6);
	draw_menu_item2(MPOS_STATE_SAVE,    "     >> SAVE <<     ", " ", 6);


	max_menu_pos = MPOS_STATE_SAVE;

}

void update_main_menu(void) {
	char string[32];
	char* name;
	int len;
	int i;

	//draw config name
	len = strlen(config_name);
	name = config_name;
	if (len > 64) { //28
		name += (len-64); //28
	}
	draw_menu_item(MPOS_CFG_SELECT, " Config file ", name, 0);

	//draw floppy names
	for (i = 0; i < 4; i++) {
		sprintf(string	, " Floppy %d    ", i);
		len = strlen(currprefs.df[i]);
		name = currprefs.df[i];
		if (len > 60) { //28
			name += (len-60); //28
		}
		draw_menu_item(MPOS_FLOPPY1 + i, string, name, 1);
	}

	draw_menu_item(MPOS_KICK_ROM,   " Kick ROM    ", currprefs.romfile, 0);

	draw_menu_item(MPOS_MENU_HDF,   " Hard files  ", "=>", 2);
	draw_menu_item(MPOS_MENU_SAVE,  " Save state  ", "=>", 2);
	draw_menu_item(MPOS_MENU_CPU,   " CPU & RAM   ", "=>", 2);
	draw_menu_item(MPOS_MENU_VIDEO, " Video       ", "=>", 2);
	draw_menu_item(MPOS_MENU_SOUND, " Sound       ", "=>", 2);
	draw_menu_item(MPOS_MENU_MISC,  " Misc.       ", "=>", 2);

	draw_menu_item(MPOS_RESET,      " >> RESET << ", " ", 3);
	draw_menu_item2(MPOS_BACKFBNEO,				" Back to FB Neo RL Plus", "", 3);

	//max_menu_pos = MPOS_RESET;
	max_menu_pos = MPOS_BACKFBNEO;

}

//action is either primary or secondary
int do_action(int action) {
	switch (screenId) {
		case MENU_MAIN:  return action_main_menu(action); break;
		case MENU_CPU:   return action_cpu_menu(action); break;
		case MENU_VIDEO: return action_video_menu(action); break;
		case MENU_SOUND: return action_sound_menu(action); break;
		case MENU_MISC:  return action_misc_menu(action); break;
		case MENU_SAVE:  return action_state_menu(action); break;
		case MENU_HDF:   return action_hdf_menu(action); break;
	} //end of switch

	return 0;
}

static void applySavedParams() {
	if (params[0] == 0) {
		opt_scanline = 0;
		opt_scale_x = 100;
		opt_scale_y = 100;
		opt_pos_x = 0;
		opt_pos_y = 0;

		vkb_l1[0] = 5;
		vkb_l1[1] = 5;
		vkb_r1[0] = 0;
		vkb_r1[1] = 0;
		vkb_l2[0] = 20;
		vkb_l2[1] = 20;
		vkb_l3[0] = 21;
		vkb_l3[1] = 21;
		vkb_r3[0] = 22;
		vkb_r3[1] = 22;
		vkb_circle[0] = 3;
		vkb_circle[1] = 3;
		vkb_select[0] = 2;
		vkb_select[1] = 2;

	} else {
		opt_scanline = params[1];
		opt_scanline_density = params[2];
		opt_scale_x = params[3];
		opt_scale_y = params[4];
		opt_pos_x = params[5];
		opt_pos_y = params[6];

		vkb_l1[0] = params[7];
		vkb_l1[1] = params[8];
		vkb_r1[0] = params[9];
		vkb_r1[1] = params[10];
		vkb_l2[0] = params[11];
		vkb_l2[1] = params[12];
		vkb_circle[0] = params[13];
		vkb_circle[1] = params[14];
		vkb_select[0] = params[15];
		vkb_select[1] = params[16];
		vkb_r3[0] = params[17];
		vkb_r3[1] = params[18];
		vkb_l3[0] = params[19];
		vkb_l3[1] = params[20];
	}

	if (opt_scanline == 0) {
		PS3_setScanlineBrightness(1.0f);
		PS3_setScanLineType(0.0f);
	} else {
		PS3_setScanLineType(0.1f);
		float val = 1.0f - ((float) opt_scanline / 10.f);
		PS3_setScanlineBrightness(val);
		PS3_setScanlineDepth(2.0f / (1.0f - val));
	}

	PS3_setScanlineDensity(getDefaultScanlineDensity() + ( opt_scanline_density * 0.2f));
	PS3_setVideoSizeH(((float) opt_scale_x) / 100.0f);
	PS3_setVideoSizeV(((float) opt_scale_y) / 100.0f);
	PS3_setPositionX(((float) opt_pos_x) / -30.0f);
	PS3_setPositionY(((float) opt_pos_y) / -30.0f);

}

int action_state_menu(int action) {
	//write_log("state_menu : menu_pos=%i action=%i\n", menu_pos, action);
	switch(menu_pos) {
		case MPOS_STATE_SLOT : {
			if (action == ACTION_RIGHT || action == ACTION_CROSS) { //right arrow or cross button
				stateSlot ++;
				if (stateSlot > 100) {
					stateSlot = 1;
				}
				thumbLoaded = 0;
				update_menu();

			} else
			if (action == ACTION_LEFT) { //left arrow
				stateSlot --;
				if (stateSlot < 1) {
					stateSlot = 100;
				}
				thumbLoaded = 0;
				update_menu();
			} else
			//load thumbnail of the slot
			if (action == ACTION_IDLE && !thumbLoaded) {
				write_log("idle state -> load thumbnail\n");
				thumbLoaded = 1;
				sprintf(tmpPath, "%sstate%03d.img", SAVE_PATH, stateSlot);
				params[0] = 0;
				thumb = ps3_load_thumbnail((unsigned char*) tmpPath, thumb, params, 20);
				update_menu();
			} else
			if (action == ACTION_IDLE) {
				write_log("idle state -> thumbnail loaded ??\n");
			}
		}; break;

		case MPOS_STATE_LOAD : {
			if (action == 1) {
				sprintf(tmpPath, "%sstate%03d.asf", SAVE_PATH, stateSlot);
				//check the file exists
				if (fsel_file_exists(tmpPath)) {
					applySavedParams();
					savestate_initsave (tmpPath, 1);
					savestate_state = STATE_DORESTORE;
					return 1;
				}
				update_menu();
			}

		} break;

		case MPOS_STATE_SAVE : {
			if (action == 1) {
				params[0] = opt_scanline;
				params[1] = opt_scanline_density;
				params[2] = opt_scale_x;
				params[3] = opt_scale_y;
				params[4] = opt_pos_x;
				params[5] = opt_pos_y;
				params[6] = vkb_l1[0];
				params[7] = vkb_l1[1];
				params[8] = vkb_r1[0];
				params[9] = vkb_r1[1];
				params[10] = vkb_l2[0];
				params[11] = vkb_l2[1];
				params[12] = vkb_circle[0];
				params[13] = vkb_circle[1];
				params[14] = vkb_select[0];
				params[15] = vkb_select[1];
				params[16] = vkb_r3[0];
				params[17] = vkb_r3[1];
				params[18] = vkb_l3[0];
				params[19] = vkb_l3[1];

				//save thumbnail
				sprintf(tmpPath, "%sstate%03d.img", SAVE_PATH, stateSlot);
				ps3_save_thumb((unsigned char*)tmpPath, params, 20);

				sprintf(tmpPath, "%sstate%03d.asf", SAVE_PATH, stateSlot);
				//bug ? if file doesn't exist it cannot be written to ??
				if (!fsel_file_exists(tmpPath)) {
					fsel_file_create(tmpPath);
				}

				savestate_initsave (tmpPath, 1);
				save_state (tmpPath, "e-uae");
				return 1;
			}
		} break;

	}
	return 0;
}

static void mount_hdf(int index, char* name) {
	char * error = NULL;

	//check harddisk type
	int type = hardfile_testrdb (name);

	//invalid hardfile
	if (type < 0) {
		error = "invalid hardfile";
	} else {
		//RDB file system -> use autodetection
		int secspertrack = 0;
		int surfaces = 0;
		int reserved = 0;
		int blocksize = 512;

		//Old File System -> use default values
		if (type == 0) {
			secspertrack = 32;
			surfaces = 1;
			reserved = 2;
		}

		//a different hardfile entered
		if (strcmp(name, hdf_name[index])) {
			//ho previous hardfile in this slot -> add it
			if (hdf_name[index] == NULL || hdf_name[index][0] == 0) {
				//write_log("hardfile added!\n");
				error = (char*)add_filesys_unit (currprefs.mountinfo, NULL /*dirdlg_devname*/, NULL /*dirdlg_volname */, name,
  					0 /*readonly */, secspertrack, surfaces, reserved, blocksize, 0 /*bootpri*/, 0, 0);
			}
			//hardfile already exists in this slot -> reset it
			else
			{
				//write_log("hardfile set!\n");
				error = (char *)set_filesys_unit (currprefs.mountinfo, index, NULL /*dirdlg_devname*/, NULL /*dirdlg_volname*/, name,
				  0 /*readonly */, secspertrack, surfaces, reserved, blocksize, 0 /*bootpri*/, 0, 0);
			}
		}
	}
	if (error) {
 		write_log("%s\n", error);
	}
}

static void unmount_all_hdfs(void) {
	int units = nr_units(currprefs.mountinfo);
	while (units > 0) {
		units--;
		kill_filesys_unit(currprefs.mountinfo, units);
	}
}

int action_hdf_menu(int action) {
	char* name;
	if (action == ACTION_IDLE) {
		return 0;
	}
	if (menu_pos >= MPOS_HDF0 && (menu_pos - MPOS_HDF0) < MAX_DISK) {
		int index = menu_pos - MPOS_HDF0;
		//mount disk
		if (action == ACTION_CROSS) {
			char* previousDiskName = NULL;
			if (index > 0 && hdf_name[index - 1] != NULL && hdf_name[index - 1][0] != 0) {
				previousDiskName = hdf_name[index - 1];
			}
			name = fsel_open(rpath, hdf_name[index], previousDiskName, 3);
			init_main_screen(0); //redraw decorations
			//write_log("hardfile selected=%s \n", name);
			if (name != NULL) {
				mount_hdf(index, name);
			}
		}
		else
		//unmount disk
		if (action == ACTION_SQUARE) {
			//check the hardfile name in the slot index exists
			if (hdf_name[index] != NULL && hdf_name[index][0] != 0) {
				kill_filesys_unit(currprefs.mountinfo, index);
			}
		}
	} // end if
	update_menu();
	return 0;
}

int action_misc_menu(int action) {
	if (action == ACTION_IDLE) {
		return 0;
	}
	switch(menu_pos) {
		case MPOS_MISC_LEDS : {
			if (currprefs.leds_on_screen) {
				currprefs.leds_on_screen = 0;
				clean_led_area();
		} else {
				currprefs.leds_on_screen = 1;
			}
		}; break;

		case MPOS_MISC_MOUSE_SPEED : {
			ps2_mouse_speed ++;
			if (ps2_mouse_speed > 5) {
				ps2_mouse_speed = 1;
			}
		}; break;

		case MPOS_MISC_JOY_PORTS : {
			int j0 = currprefs.jport0 / JSEM_JOYS;
			int j1 = currprefs.jport1 / JSEM_JOYS;
			if (j0 == 2 && j1 == 1) { //mouse & joy-1
				//switch to joy-2 & joy-1
				changed_prefs.jport0 = JSEM_JOYS + 1;
				changed_prefs.mouse_settings[1]->enabled = 0;
			} else
			if (j0 == 1 && j1 == 1) { //joy-2 & joy-1
				//switch to mouse & mouse
				changed_prefs.jport0 = JSEM_MICE;
				changed_prefs.jport1 = JSEM_MICE + 1;
				changed_prefs.mouse_settings[1]->enabled = 1;
			} else { //mouse & mouse
				//switch to mouse & joy-1
				changed_prefs.jport1 = JSEM_JOYS;
				changed_prefs.mouse_settings[1]->enabled = 0;
			}
			inputdevice_config_change();
			check_prefs_changed_custom();
		}; break;

		case MPOS_MISC_FLOPPY_SPEED : {
			changed_prefs.floppy_speed += 100;
			if (changed_prefs.floppy_speed > 800) {
				changed_prefs.floppy_speed = 100;
			}else
			if (changed_prefs.floppy_speed > 400) {
				changed_prefs.floppy_speed = 800;
			}
			DISK_check_change();
		} break;

		case MPOS_MISC_QUIT : {
			/*
			if (uae_get_state() == UAE_STATE_STOPPED) {
			}
			write_log("uae state=%i \n", uae_get_state() );
			*/
			clearFloppyTmp(FLOPPYTMP);
			uae_quit();
			return -1;
		}
	} //end of switch
	update_menu();
	return 0;
}

int action_sound_menu(int action) {
	if (action == ACTION_IDLE) {
		return 0;
	}
	switch(menu_pos) {
		case MPOS_SOUND_TYPE : {
			char* model = (char*)get_sound_mode1(currprefs.produce_sound + 1);
			if (model == NULL) {
				changed_prefs.produce_sound = 0;
			} else {
				changed_prefs.produce_sound = currprefs.produce_sound + 1;
			}
		}; break;

		case  MPOS_SOUND_INTERPOL : {
			char* mode = (char*)get_sound_interpol_mode(currprefs.sound_interpol + 1);
			if (mode == NULL) {
				changed_prefs.sound_interpol = 0;
			} else {
				changed_prefs.sound_interpol = currprefs.sound_interpol + 1;
			}
		} break;
		case MPOS_SOUND_MASTER_VOL : {
			if (action == ACTION_RIGHT || action == ACTION_CROSS) { //right arrow or cross button
				opt_master_vol += 10;
				if (opt_master_vol > 100) {
					opt_master_vol = 0;
				}
			} else
			if (action == ACTION_LEFT) { //left arrow
				opt_master_vol -= 10;
				if (opt_master_vol < 0) {
					opt_master_vol = 0;
				}
			}
			PS3_setMasterVolume(opt_master_vol);
		} break;
		case MPOS_SOUND_CLICKS : {
			//turn on / off clicks in all 4 floopy drives
			changed_prefs.dfxclick[0] = 1 - currprefs.dfxclick[0];
			changed_prefs.dfxclick[1] = changed_prefs.dfxclick[0];
			changed_prefs.dfxclick[2] = changed_prefs.dfxclick[0];
			changed_prefs.dfxclick[3] = changed_prefs.dfxclick[0];
		} break;

		case MPOS_SOUND_CLICKS_VOL : {
			changed_prefs.dfxclickvolume = ((currprefs.dfxclickvolume / 10) * 10) - 10;
			if (changed_prefs.dfxclickvolume < 0) {
				changed_prefs.dfxclickvolume = 90;
			}
		} break;
	} //end of switch
	check_prefs_changed_audio();
	update_menu();
	return 0;
}

int action_video_menu(int action) {
	if (action == ACTION_IDLE) {
		return 0;
	}
	switch(menu_pos) {
		case MPOS_VIDEO_CHIP: {

		//from AGA switch to OCS
		if (currprefs.chipset_mask & CSMASK_AGA) {
			changed_prefs.chipset_mask = currprefs.chipset_mask;
			changed_prefs.chipset_mask &= ~CSMASK_AGA; //remove AGA flag
			changed_prefs.chipset_mask &= ~(CSMASK_ECS_AGNUS | CSMASK_ECS_DENISE);  //remove ECS flags
		}
		//from full ECS switch to AGA
		else if ((currprefs.chipset_mask & CSMASK_ECS_AGNUS) && (currprefs.chipset_mask & CSMASK_ECS_DENISE)) {
			changed_prefs.chipset_mask = currprefs.chipset_mask;
			changed_prefs.chipset_mask |= CSMASK_AGA;  //keep ECS flags coz AGA chip supports ECS modes
		}
		//from OCS switch to ECS_AGNUS
		else if ((currprefs.chipset_mask & CSMASK_ECS_AGNUS) == 0 && (currprefs.chipset_mask & CSMASK_ECS_DENISE) == 0 ) {
			changed_prefs.chipset_mask = currprefs.chipset_mask;
			changed_prefs.chipset_mask |= CSMASK_ECS_AGNUS;
		}
		//from ECS_AGNUS switch to ECS_DENISE
		else if ((currprefs.chipset_mask & CSMASK_ECS_AGNUS) == 1 && (currprefs.chipset_mask & CSMASK_ECS_DENISE) == 0 ) {
			changed_prefs.chipset_mask = currprefs.chipset_mask;
			changed_prefs.chipset_mask &= ~CSMASK_ECS_AGNUS;
			changed_prefs.chipset_mask |= CSMASK_ECS_DENISE;
		}
		//from ECS_DENISE switch to full ECS
		else if ((currprefs.chipset_mask & CSMASK_ECS_AGNUS) == 0 && (currprefs.chipset_mask & CSMASK_ECS_DENISE) ) {
			changed_prefs.chipset_mask = currprefs.chipset_mask;
			changed_prefs.chipset_mask |= CSMASK_ECS_AGNUS;
		}

		} break;

		case MPOS_VIDEO_SIGNAL: {
			changed_prefs.ntscmode = 1 - currprefs.ntscmode;
		} break;

		case MPOS_VIDEO_FSKIP : {
			changed_prefs.gfx_framerate++;
			if (changed_prefs.gfx_framerate > 20) {
				changed_prefs.gfx_framerate = 1;
			}
		} break;

		case MPOS_VIDEO_VSYNC : {
			changed_prefs.gfx_vsync = 1 - changed_prefs.gfx_vsync;
			vsync_enabled = changed_prefs.gfx_vsync;
		} break;

		case MPOS_VIDEO_BLITS : {
			changed_prefs.immediate_blits = 1 - changed_prefs.immediate_blits;
		} break;

		case MPOS_VIDEO_COLLISION : {
			char * mode = (char*)get_collision_mode(currprefs.collision_level + 1);
			if (mode == NULL) {
				changed_prefs.collision_level = 0;
			}  else {
				changed_prefs.collision_level = currprefs.collision_level+1;
			}
		} break;

		case MPOS_VIDEO_BLIT_EXACT: {
			changed_prefs.blitter_cycle_exact = 1 - currprefs.blitter_cycle_exact;
			currprefs.blitter_cycle_exact = changed_prefs.blitter_cycle_exact;
		} break;

		case MPOS_VIDEO_SCAN_LINE: {
			if (action == 4) {
				opt_scanline--;
				if (opt_scanline < 0) {
					opt_scanline = 10;
				}
			} else {
				opt_scanline++;
				if (opt_scanline > 10) {
					opt_scanline = 0;
				}
			}

			if (opt_scanline == 0) {
				PS3_setScanlineBrightness(1.0f);
				PS3_setScanLineType(0.0f);
			} else {
				PS3_setScanLineType(0.1f);
				float val = 1.0f - ((float) opt_scanline / 10.f);
				PS3_setScanlineBrightness(val);
				PS3_setScanlineDepth(2.0f / (1.0f - val));
			}
		} break;

		case MPOS_VIDEO_SHADER : {
			int update = 0;
			if (action == ACTION_LEFT) {
				update = -1;
				opt_scanline_density--;
				if (opt_scanline_density < -500) {
					opt_scanline_density = -500;
					update = 0;
				}
			} else
			if (action == ACTION_RIGHT) {
				update = 1;
				opt_scanline_density++;
				if (opt_scanline_density > 500) {
					opt_scanline_density = 500;
					update = 0;
				}
			}
			if (update != 0) {
				PS3_setScanlineDensity(PS3_getScanlineDensity() + ( update > 0 ? 0.2f : -0.2f));
			}
		} break;

		case MPOS_VIDEO_SCALE_X : {
			int update = 0;
			if (action == ACTION_LEFT) {
				update = -1;
				opt_scale_x--;
				if (opt_scale_x < 70) {
					opt_scale_x = 70;
					update = 0;
				}
			} else
			if (action == ACTION_RIGHT) {
				update = 1;
				opt_scale_x++;
				if (opt_scale_x > 130) {
					opt_scale_x = 130;
					update = 0;
				}
			}
			if (update != 0) {
				PS3_setVideoSizeH(((float) opt_scale_x) / 100.0f);
			}

		} break;

		case MPOS_VIDEO_SCALE_Y : {
			int update = 0;
			if (action == ACTION_LEFT) {
				update = -1;
				opt_scale_y--;
				if (opt_scale_y < 70) {
					opt_scale_y = 70;
					update = 0;
				}
			} else
			if (action == ACTION_RIGHT) {
				update = 1;
				opt_scale_y++;
				if (opt_scale_y > 160) {
					opt_scale_y = 160;
					update = 0;
				}
			}
			if (update != 0) {
				PS3_setVideoSizeV(((float) opt_scale_y) / 100.0f);
			}

		} break;

		case MPOS_VIDEO_POS_X : {
			int update = 0;
			if (action == ACTION_LEFT) {
				update = -1;
				opt_pos_x--;
				if (opt_pos_x < -30) {
					opt_pos_x = -30;
					update = 0;
				}
			} else
			if (action == ACTION_RIGHT) {
				update = 1;
				opt_pos_x++;
				if (opt_pos_x > 30) {
					opt_pos_x = 30;
					update = 0;
				}
			}
			if (update != 0) {
				PS3_setPositionX(((float) opt_pos_x) / -30.0f);
			}

		} break;

		case MPOS_VIDEO_POS_Y : {
			int update = 0;
			if (action == ACTION_LEFT) {
				update = -1;
				opt_pos_y--;
				if (opt_pos_y < -60) {
					opt_pos_y = -60;
					update = 0;
				}
			} else
			if (action == ACTION_RIGHT) {
				update = 1;
				opt_pos_y++;
				if (opt_pos_y > 60) {
					opt_pos_y = 60;
					update = 0;
				}
			}
			if (update != 0) {
				PS3_setPositionY(((float) opt_pos_y) / -30.0f);
			}

		} break;


	} // end of switch
	check_prefs_changed_custom();

	update_menu();
	return 0;
}

int action_cpu_menu(int action) {
	if (action == ACTION_IDLE) {
		return 0;
	}
	switch(menu_pos) {
		case MPOS_CPU_TYPE: {

			int type = currprefs.cpu_level * 2 + !currprefs.address_space_24;
			int index = cpus[++type];
			//skip to the beginning of the cpu types
			if (index == -100) {
				index = 0;
				type = 0;
			}
			//skip undefined cpus
			if (index < 0) {
				type -= index; //note: subtracting negative value  -> addition
			}

			changed_prefs.cpu_level = type / 2;
			changed_prefs.address_space_24 = 1 - ( type % 2 );

		}; break;

		case MPOS_CPU_SPEED: {
			if (changed_prefs.m68k_speed > 0) {
				changed_prefs.m68k_speed /= 512;
			}
			changed_prefs.m68k_speed ++;
			if (changed_prefs.m68k_speed > 12) {
				changed_prefs.m68k_speed = -1;
			} else

			if (changed_prefs.m68k_speed > 0) {
				changed_prefs.m68k_speed*=512;
			}
		};	break;

		case MPOS_CPU_EXACT: {
			changed_prefs.cpu_cycle_exact = 1 - currprefs.cpu_cycle_exact;
			//exact & compatible cannot be turned on both at the same time
			if (changed_prefs.cpu_cycle_exact && currprefs.cpu_compatible) {
				changed_prefs.cpu_compatible = 0;
			}
		}; break;

		case MPOS_CPU_COMPAT: {
			changed_prefs.cpu_compatible = 1 - currprefs.cpu_compatible;
			//exact & compatible cannot be turned on both at the same time
			if (changed_prefs.cpu_compatible && currprefs.cpu_cycle_exact) {
				changed_prefs.cpu_cycle_exact = 0;
			}
		}; break;

		case MPOS_CPU_CHIP_MEM : {
			changed_prefs.chipmem_size = currprefs.chipmem_size;
			if (changed_prefs.chipmem_size == 0x80000) { // 512 kb
				changed_prefs.chipmem_size = 0x100000;
			} else
			{
				changed_prefs.chipmem_size += 0x100000;
				//if fastmem is present then max chip size is 2 Megs
				if (currprefs.fastmem_size != 0 && changed_prefs.chipmem_size > 0x200000) {
					changed_prefs.chipmem_size = 0x80000; // back to 512 k
				} else
				//more than 8 megs of chip
				if (changed_prefs.chipmem_size > 0x800000) {
					changed_prefs.chipmem_size = 0x80000; // back to 512 k
				}
			}
			memory_reset();
		} ; break;

		case MPOS_CPU_BOGO_MEM : {
			changed_prefs.bogomem_size = currprefs.bogomem_size;
			if (changed_prefs.bogomem_size == 0x80000) {
				changed_prefs.bogomem_size = 0x100000;
			} else
			if (changed_prefs.bogomem_size == 0x100000) {
				changed_prefs.bogomem_size = 0x1C0000;
			} else
			if (changed_prefs.bogomem_size == 0) {
				changed_prefs.bogomem_size = 0x80000;
			}
			else {
				changed_prefs.bogomem_size = 0;
			}
			memory_reset();
		} break;

		case MPOS_CPU_FAST_MEM : {
			changed_prefs.fastmem_size = (currprefs.fastmem_size / 0x100000) * 0x100000;
			changed_prefs.fastmem_size += 0x100000;
			if (changed_prefs.fastmem_size > 0x800000) {
				changed_prefs.fastmem_size = 0;
			}
			if (changed_prefs.fastmem_size > 0 && currprefs.chipmem_size > 0x200000) {
				changed_prefs.chipmem_size = 0x200000;
			}
			expamem_reset();
			memory_reset();
		} break;
	} //end of switch
	check_prefs_changed_cpu();
	update_menu();
	return 0;
}

int action_main_menu(int action) {
	char* name;
	if (!((action == ACTION_CROSS) | (action == ACTION_SQUARE))) {
		return 0;
	}
	char* params[2] = { 0 };
	params[0] = "gamesList";
	params[1] = NULL;

	switch(menu_pos) {
		case MPOS_CFG_SELECT:
			{
				name = fsel_open(rpath, config_name, NULL, 1);
				init_main_screen(0); //redraw decorations
				if (name != NULL) {
					strcpy(config_name, name);
					default_prefs(& changed_prefs, 0);
					changed_prefs.chipmem_size = 0;
					changed_prefs.bogomem_size = 0;
					unmount_all_hdfs();
					int ret = cfgfile_load (& changed_prefs, config_name, NULL);
					if (ret) {
						fixup_prefs_joysticks (& changed_prefs);
						check_prefs_changed_cpu();
						check_prefs_changed_audio();
						check_prefs_changed_custom();
						uae_reset(1);
					}
					return 1;
				} else {
					update_menu();
				}
			}; break;
		case MPOS_KICK_ROM: {
				name = fsel_open(rpath, kickrom_name, NULL, 2);
				init_main_screen(0); //redraw decorations
				if (name != NULL) {
					write_log("ps3: uae: kick rom open: %s\n", name);
					if (uae_get_state() != UAE_STATE_STOPPED) {
						strcpy(changed_prefs.romfile, name);
						write_log("ps3: uae: memory_reset \n");
						memory_reset();
						write_log("ps3: uae: uae_rest(1) \n");
						uae_reset(1);
						return 1;
					} else {
						strcpy(changed_prefs.romfile, name);
						strcpy(currprefs.romfile, name);
					}
				} else {
					write_log("ps3: uae: kick rom NULL!\n");
				}
				update_menu();
		} break;
		case MPOS_FLOPPY1:
		case MPOS_FLOPPY2:
		case MPOS_FLOPPY3:
		case MPOS_FLOPPY4: {
			int floppyIdx = menu_pos - MPOS_FLOPPY1;
			if (action == ACTION_CROSS) { //insert disk
				char* previousDiskName = NULL;
				if (menu_pos > 0) {
					previousDiskName = currprefs.df[floppyIdx - 1];
				}
				name = fsel_open(rpath, currprefs.df[floppyIdx], previousDiskName, 0);
				init_main_screen(0); //redraw decorations
				if (name != NULL) {
					if (currprefs.nr_floppies-1 < floppyIdx ) {
						currprefs.nr_floppies = floppyIdx  + 1;
					}
					//check whether drive is enabled
					if (currprefs.dfxtype[floppyIdx ] < 0) {
						changed_prefs.dfxtype[floppyIdx ] = 0;
						DISK_check_change();
					}
					strcpy (changed_prefs.df[floppyIdx ], name);
					DISK_check_change();
	//				disk_eject(menu_pos);
	//				disk_insert(menu_pos, name);
				}
			} else
			if (action == ACTION_SQUARE) { //eject disk
				changed_prefs.df[floppyIdx][0] = 0;
				DISK_check_change();
				disk_eject(floppyIdx);
			}
			update_menu();
			return 0;
			} ; break;
		case MPOS_MENU_HDF:
		case MPOS_MENU_SAVE :
		case MPOS_MENU_CPU :
		case MPOS_MENU_VIDEO :
		case MPOS_MENU_SOUND :
		case MPOS_MENU_MISC :{
			screenId = MENU_HDF + (menu_pos - MPOS_MENU_HDF);
			menu_pos = 0;
			update_menu();
		} break;

		/* RESET */
		case MPOS_RESET : uae_reset(0);
			return 1;

		case MPOS_BACKFBNEO:
            clearFloppyTmp(FLOPPYTMP);
			sysProcessExitSpawn2( "/dev_hdd0/game/FBNE00123/USRDIR/RELOAD.SELF", (const char**)params, NULL, NULL, 0, 1001, 0x70 );
			break;
	}
	return 0;
}


void enter_options(void) {
	int event;
	int exit = 0;
	write_log("entering options...\n");
	ovl_left = (currprefs.gfx_width - 600) / 2;

	if (ovl_left < 0) {
		ovl_left = (720 - 600) / 2;
	}

	pause_sound();
	uae_pause();

	init_main_screen(1);
	draw_screen(1); // show screen with overlay
	wait_for_idle_event(3);

	while (!exit) {
		event = wait_for_idle_event(0);
		if (event == -1) {
			write_log("ps3: enter options: event quit!\n");
			return;
		}
		/*
		if (event != 0) {
			write_log("menu loop. screen=%i menu_pos=%i event=%i \n", screenId, menu_pos, event);
		}
		*/
		ps3_vsync();
		//idle event
		if (event == -2) {
			exit = do_action(ACTION_IDLE);
		} else
		if (event & PAD_DOWN) {
			menu_pos ++;
			if ( menu_pos > max_menu_pos) {
				menu_pos = 0;
			}
			update_menu();
		} else
		if (event & PAD_UP) {
			menu_pos --;
			if ( menu_pos < 0) {
				menu_pos = max_menu_pos;
			}
			update_menu();
		} else

		if (event & PAD_CROSS) {
			wait_for_no_key();
			exit = do_action(ACTION_CROSS); /* action can trigger exit from menu */
		} else
		if (event & PAD_SQUARE) {
			exit = do_action(ACTION_SQUARE); /* action can trigger exit from menu */
		} else
		if (event & PAD_RIGHT) {
			exit = do_action(ACTION_RIGHT);
		} else
		if (event & PAD_LEFT) {
			exit = do_action(ACTION_LEFT);
		}else
		if (event & PAD_CIRCLE) {
			if (screenId == MENU_MAIN) {
				exit = 1;
			} else {
				menu_pos =  (screenId - MENU_HDF) + MPOS_MENU_HDF;
				screenId = MENU_MAIN;
				wait_for_idle_event(3);
				update_menu();
			}
		} else
		if (event & PAD_START) {
			wait_for_no_key();
			exit = 1;
		}

		draw_screen(0);
	}
	wait_for_idle_event(3);
	//clean menu
	draw_rect(ovl_left-14-30,ovl_top+0,628+60,240, 0);
	draw_screen(0); // show screen without overlay
	write_log("ps3: returning from options! exit=%i \n", exit);

	if (exit != -1) {
		//stopped state - if gui called before emulation started
		if (uae_get_state() == UAE_STATE_STOPPED) {
			uae_start();
		} else
		//when gui called when emulation is running
		{
			uae_resume();
		}
		resume_sound();
	} else {
		//PS3_quit();
		write_log("ps3: quit \n");
	}

}




