/**************************************************
                   File Selector
***************************************************/


#include <dirent.h>

#include "ps3main.h"


#include "sysconfig.h"
#include "sysdeps.h"
#include "uae.h"
#include "options.h"

#include "ps2options.h"
#include "ps2fselect.h"
#include "ps3display.h"

#include "cell.h"
#include "log.h"

#ifndef FIO_SO_IFREG
#define FIO_SO_IFREG		0x0010		// Regular file
#endif

#ifndef FIO_SO_IFDIR
#define FIO_SO_IFDIR		0x0020		// Directory
#endif

#undef dirent
typedef struct dirent dirent_t;

extern unsigned char color_hi[];
extern unsigned char color_lo[];
//extern unsigned char color_inv[];
extern unsigned char color_bg[];
extern int ovl_left;
extern int ovl_top;

char** fsel_ext;
char* fsel_ext_disk[] = {".adf", ".ADF", ".dms", ".DMS", ".zip", ".ZIP", ".ipf", ".IPF", NULL};
char* fsel_ext_config[] = {".cfg", ".CFG", ".rc", ".RC", NULL};
char* fsel_ext_kickrom[] = {".rom", ".ROM",  NULL};
char* fsel_ext_hardfile[] = {".hdf", ".HDF",  NULL};

#define MAX_IDX  1024
//unsigned int name_idx[MAX_IDX];
unsigned int* name_idx = NULL;
char* name_pool = NULL;
int max_name = 0;

int fsel_menu_pos = 0;
int fsel_menu_start = 0;
int fsel_max_menu_pos;
char* fsel_dir = NULL;
char* fsel_name = NULL;
char* name_buf = NULL;

//unsigned char fsel_dir[512];
//unsigned char fsel_name[256];
//unsigned char name_buf[256];

char* fsel_get_name(int i) {
	return name_pool + (name_idx[i]&0xFFFFFF);
}

unsigned char fsel_is_dir(int i) {
	return (name_idx[i] >> 24);
}

void fsel_init() {
	if (name_idx != NULL) {
		return;
	}
	name_idx = (int*) malloc(MAX_IDX  * sizeof(unsigned int));
	if (!name_idx) {
	        LOG_MSG("Error!: not enough memory to allocate name index. \n");
		abort();
	}

	fsel_dir = (char *) malloc(1024);
	fsel_name = (char *) malloc (512);
	name_buf = (char *) malloc(512);
	if (fsel_dir == NULL || fsel_name == NULL || name_buf == NULL) {
	        LOG_MSG("Error!: not enough memory to allocate name arrays. \n");
		abort();
	}
}

void fsel_init_name_pool(void)  {
	int i;
	fsel_init();
	for (i = 0; i < MAX_IDX; i++) name_idx[i] = 0;
	max_name = 0;
	fsel_menu_start = 0;
	fsel_menu_pos = 0;
	if (name_pool == NULL) {
		name_pool = (char*) malloc(65 * 1024);
	}
	if (!name_pool) {
	    LOG_MSG("Error!: not enough memory to allocate name pool. \n");
		abort(); 
	} else {
		memset(name_pool, 0, 65 * 1024);
	}
}

//add filename to the name pool
void fsel_add_name_pool(char* name, int dir) {
	int len;
	char* pool;
	if (max_name >= MAX_IDX) {
		return;
	}
	//copy the name at the end of the name_pool
	pool = fsel_get_name(max_name);
	strcpy(pool, name);
	len = strlen(name);
	pool[len] = 0;
	//store directory attribute
	if (dir) {
		name_idx[max_name] |= 0x01000000;
	}
	//prepare next record start addres
	max_name++;
	name_idx[max_name] = (name_idx[max_name-1]&0xFFFFFF) + len + 1;
}

static int fsel_find_file_index(int nameIndex) {
	int i;
	for (i = 0; i < max_name; i++) {
		if (name_idx[i] == nameIndex) {
			return i;
		}
	}
	return -1;
}


//compare two string case insensitive (stricmp was not available)
static int xstricmp(char* s1, char* s2) {
	int i = 0;
	while(1) {
		char a = s1[i];
		char b = s2[i];
		if (a == 0 && b == 0) {
			return 0;
		} 
		if (a >= 'A' && a <= 'Z') {
			a += 32;
		}
		if (b >= 'A' && b <= 'Z') {
			b += 32;
		}
		if (a < b) {
			return -1;
		}
		if (a > b) {
			return 1;
		}
		//continue with next character
		i++;
	}
	return 0;
}

//compare name at the index and the next one, then swap indices if required
//retrun 1 if swap was done, or 0 if no swap
int fsel_compare_and_swap(int index) {
	char * name1 = fsel_get_name(index);
	char * name2 = fsel_get_name(index + 1);
	int isDir1 = (name_idx[index] & 0x01000000) ? 1 : 0; 
	int isDir2 = (name_idx[index + 1] & 0x01000000) ? : 0; 

	if ((isDir1 && !isDir2)) {
		return 0;
	}
	
	if ((isDir2 && !isDir1) || xstricmp(name1, name2) > 0) {
		int tmp = name_idx[index];
		name_idx[index] = name_idx[index + 1];
		name_idx[index + 1] = tmp;
		return 1;
	}
	return 0;
}

//sort the name index in ascending order, directories first
void fsel_sort_index() {
	int i;
	int change = 1;
	while (change) {
		change = 0;
		for (i = 0; i < max_name - 1; i++) {
			if (fsel_compare_and_swap(i)) {
				change++;
			}
		}
		//backwards
		if (change) {
			change = 0;
			for (i = max_name -2; i >= 0; i--) {
				if (fsel_compare_and_swap(i)) {
					change ++;
				}
			}
		}
	}
}

//returns the directory of the filename
void fsel_get_dir(char* dirname, char* filename) {
	int i,j;
	int len;
	int nameIndex = 0;
	char c;

	len = strlen(dirname);
	for (i = len; i > 0; i--) {
		if (dirname[i] == '\\' || dirname[i] == '/' || dirname[i] == ':') {
			dirname[i+1] = 0;
			break;
		} else {
		    filename[nameIndex++] = dirname[i];
		}
	}
	
	filename[nameIndex+1] = 0;
	//swap filename characters
	for (j = 0; j < nameIndex / 2; j++) {
		c = filename[j];
		filename[j] = filename[nameIndex - 1 - j];
		filename[nameIndex - 1 - j] = c; 
	}

	//no directory found
	if (i == 0) {
#ifdef __PS3__
		strcpy(dirname,"/");
#else
		strcpy(dirname, ".");
#endif
	}
}

//check extensions of the file
int fsel_valid_file(char* name, int dir) {
	int len, ext_len;
	int i,j;
	char* ext;
	int match;

	len = strlen(name);
	if (len < 2) return 0;
	if (len == 2 && name[0] == '.' && name[1] == '.') return 1;
	if (dir) return 1;

	for (i = 0; fsel_ext[i] != NULL; i++) {
		ext = fsel_ext[i];
		ext_len = strlen(ext);
		if (ext_len < len) {
			match = 0;
			for (j = 0; j < ext_len; j++) {
				if (ext[j] == name[len-ext_len+j]) match++;
			}
			if (match == ext_len) return 1;
		}
	}
	
	return 0;
}

void fsel_fill_name_pool(char** rpath, char* name) {
	int i;
	int ret;
	DIR* fd;
	dirent_t* de;
	int fileIndex = 0;
	int fileCounter = 0;
	int nameIndex = -1;

	fsel_dir[0] = 0;
	if ((name != NULL && name[0] != 0) || rpath == NULL) {
		if (name == NULL || name[0] == 0) {
			strcpy((char*)fsel_dir, "/");
		} else {
			strcpy((char*)fsel_dir, name);
		}
		fsel_get_dir((char*) fsel_dir, (char*) fsel_name );
		fd = opendir((char*)fsel_dir);
		if (fd ) {
			de = (dirent_t*) readdir(fd);
			while(de != 0) {
				//printf("file: %s \n", de->d_name);
				if (fsel_valid_file(de->d_name, de->d_type == DT_DIR ? 1:0)) {
					fsel_add_name_pool(de->d_name, de->d_type == DT_DIR ? 1:0);
					//found current file (case insensitive)
					if (xstricmp(de->d_name, fsel_name) == 0) {
						fileIndex = fileCounter; 
						nameIndex = name_idx[fileCounter];
						//write_log("** found name: %s at index %i, nameIndex=%x \n", fsel_name, fileIndex, nameIndex);
					}
					fileCounter++;
				}
				de = readdir(fd);
			}
			closedir(fd);
		}

	} else {
		for (i=0; rpath[i] != NULL; i++) {
			fsel_add_name_pool(rpath[i], 1);
		}
	}
	
	//sort the result
	fsel_sort_index();
	
	//file was found - position current item selector to the file
	//note: we've reindexed the pool - we have to find the new index
	if (nameIndex != -1) {
		fileIndex = fsel_find_file_index(nameIndex);
		//write_log("** reindex %i \n", fileIndex);
		if (fileIndex > 0) {
			fsel_menu_start = fileIndex;
			if (fsel_menu_start > fsel_max_menu_pos && 
			    fsel_menu_start >= (fileCounter - fsel_max_menu_pos - 1)) {
				fsel_menu_start  = (fileCounter - fsel_max_menu_pos);
				fsel_menu_pos = fileIndex - fsel_menu_start;
			}
		}
	}
}

void  fsel_init_main_screen(void) {
	int posY = ovl_top + 20;
	fsel_init_name_pool();

	draw_rect(ovl_left+0,ovl_top+116,600,124,1);
	draw_rect(ovl_left+10,ovl_top+132,580,1,3);
	//draw_rect(10,112,300,1,3);

	//shade around the menu edges
	draw_shade(ovl_left - 1, posY - 12, 602, 237, NULL, 0);
	//bottom line
	draw_rect(ovl_left - 1, ovl_top + 244, 602, 1,  2);

	//left line
	draw_rect(ovl_left - 1, ovl_top + 200, 1, 44, 2);
	//right line
	draw_rect(ovl_left + 600, ovl_top + 200, 1, 44, 2);

	draw_text(ovl_left+10,ovl_top+120," path:", color_hi);
	fsel_max_menu_pos = 10;
	fsel_dir[0] = 0;
	fsel_update_menu();
}

void  fsel_clean_main_screen (void) {
	draw_rect(ovl_left-14,ovl_top+190,628,100,0); //clean bottom
	draw_rect(ovl_left+0,ovl_top+100,600,90,1); //repaint top 

}
void  fsel_update_menu(void) {
	int i;
	int idx;
	int len;
	int start_offs;

	draw_rect(ovl_left+0,ovl_top+136,600,108,1);
	//clean and draw the path
	draw_rect(ovl_left+58,ovl_top+120,600-58,8,1);
	draw_text(ovl_left+58,ovl_top+120, (unsigned char*)fsel_dir, color_lo);
	
//	printf("update menu...menu_start=%d max_name=%d \n", fsel_menu_start, max_name);
	if (max_name > 0) {
		for (i = 0; i < fsel_max_menu_pos; i++) {
			idx = fsel_menu_start + i;
			if (idx < max_name) {
				if (fsel_is_dir(idx)) {
					draw_text(ovl_left+10, ovl_top+140 + i*10, "\a5", fsel_menu_pos == i? color_bg: color_hi);
				} else {
					draw_text(ovl_left+10, ovl_top+140 + i*10, " ", fsel_menu_pos == i? color_bg: color_hi);
				}
				strcpy(name_buf, fsel_get_name(idx));
				len = strlen(name_buf);
				start_offs = 0;
				if (len > 71) {  //36
					start_offs = len - 71;  //36
				}
				draw_text(ovl_left+18, ovl_top+140 + i*10, name_buf + start_offs, fsel_menu_pos == i? color_bg: color_hi);
			}
		}
	}

	//draw_screen(0);
	//wait_for_idle_event(0);
}

void fsel_resolve_dir(char* name) {
	int i;
	int len;
	if (name == NULL) {
		return;
	}
	len = strlen((char*)fsel_dir) - 1;

	if (name[0] == '.' && name[1] == '.') {
		if (len > 0 && (fsel_dir[len] == '\\' || fsel_dir[len] == '/')) {
			fsel_dir[len] = 0;
		} 
	} else 
	if (len > 0 && (fsel_dir[len] == '\\' || fsel_dir[len] == '/')) {
		strcat((char*)fsel_dir, name);
		strcat((char*)fsel_dir, "/");
	} else 
	if (len >0) {
		strcat((char*)fsel_dir, "/");
		strcat((char*)fsel_dir, name);
		strcat((char*)fsel_dir, "/");
	} else {
		strcat((char*)fsel_dir, name);
		strcat((char*)fsel_dir, "/");
	}

}


int fsel_do_action(char** rpath) {
	int idx;
	static char name[256];

	idx = fsel_menu_start + fsel_menu_pos;
	if ( fsel_is_dir(idx) ) {
		fsel_resolve_dir( fsel_get_name(idx) );
		strcpy(name, (char*)fsel_dir);
		fsel_init_name_pool();
		fsel_fill_name_pool(rpath,  name);
		fsel_update_menu();		

	} else {
		strcat(fsel_dir, fsel_get_name(idx));
		return 2;	
	}
	return 0;
}


char* fsel_open(char** rpath, char* name, char* previous_disk_name, int file_type) {
	int event;
	int exit = 0;
	char* inspectName = name;

	fsel_ext = fsel_ext_disk;
	if (file_type == 1) {
		fsel_ext = fsel_ext_config;
	} else
	if (file_type == 2) {
		fsel_ext = fsel_ext_kickrom;
	} else 
	if (file_type == 3) {
		fsel_ext = fsel_ext_hardfile;
	}

	//use previous disk name to search path if current  name
	//is empty
	if (previous_disk_name != NULL && previous_disk_name[0] != 0 && 
		(name == NULL || name[0] == 0) ) {
		inspectName = previous_disk_name;
	}

	fsel_init_main_screen();
	fsel_fill_name_pool(rpath, inspectName);

	fsel_update_menu();

	while (!exit) {
		event = handle_options_events();
		//printf("event=%x \n", event);
		if (event == -1) {
			exit = 1;
		}
		
		wait_for_idle_event(0);
		ps3_vsync();

		if (event < -1) {
			event = 0;
		} else
		
		if (event & PAD_DOWN) {
			printf("down...");
			if (fsel_menu_pos + fsel_menu_start < max_name-1) {
				fsel_menu_pos ++;
			}
			if ( fsel_menu_pos > fsel_max_menu_pos-1) {
				if (fsel_menu_pos + fsel_menu_start < max_name) {
					fsel_menu_start ++;
				}
				fsel_menu_pos = fsel_max_menu_pos-1;
			}
			fsel_update_menu();
		} else
		if (event & PAD_UP) {
			if (fsel_menu_pos + fsel_menu_start > 0) {
				fsel_menu_pos --;
			}
			if ( fsel_menu_pos < 0) {
				if (fsel_menu_start > 0) {
					fsel_menu_start --;
				}
				fsel_menu_pos = 0;
			}
			fsel_update_menu();
		} else

		if (event & PAD_CROSS) {
			wait_for_no_key();
			exit = fsel_do_action(rpath); /* action can trigger exit from menu */
		} else
		if (event & PAD_CIRCLE) {
			wait_for_no_key();
			exit = 1;
		}else
		if (event & PAD_START) {
			wait_for_no_key();
			exit = 1;
		}	
		draw_screen(0);
	}
	ps3_vsync();
	fsel_clean_main_screen();
	wait_for_idle_event(0);
	draw_screen(1); // show screen without overlay
	if (exit == 2) {
		return fsel_dir;
	}
	return NULL;
}

int fsel_file_exists(char * path) {
	FILE* f;
	f = fopen(path, "rb");
	if (f == NULL) {
		return 0;
	}
	fclose(f);
	return 1;
}
int fsel_file_create(char * path) {
	char data = 0;
	FILE* f;
	
	f = fopen(path, "w+b");
	if (f == NULL) {
		return -1;
	}
	fwrite(&data,1,1,f); 
	fclose(f);
	return 0;
}

