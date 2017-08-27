#ifndef _PS2_FSELECT_H_
#define _PS2_FSELECT_H_
char* fsel_open(char** rpath, char* name, char* previous_disk_name, int file_type);
void  fsel_update_menu(void);

char* fsel_get_name(int i);
unsigned char fsel_is_dir(int i);
void fsel_init_name_pool(void);
void fsel_add_name_pool(char* name, int dir);
void fsel_get_dir(char* dirname, char* filename) ;
void fsel_fill_name_pool(char** rpath, char* name);
void  fsel_clean_main_screen (void);
void  fsel_init_main_screen(void);
void fsel_resolve_dir(char* name);
int fsel_do_action(char** rpath);
int fsel_valid_file(char* name, int dir);

int fsel_file_exists(char * path);
int fsel_file_create(char * path);

/* _FSELECT_H_ */
#endif


