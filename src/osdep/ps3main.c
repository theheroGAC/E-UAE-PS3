/*
 * UAE - The Un*x Amiga Emulator
 *
 * Copyright 2004 Ole
 * 
 * Start-up and support functions used by PS2 
 */

#include <stdio.h>

#include "sysconfig.h"
#include "sysdeps.h"

#include "options.h"
#include "debug.h"

#include "cell.h"
#include "log.h"


static int ps3initDone = 0;


/*
//test stack size
static void runStackTest(void) {
	static int cnt = 0;
	char tmpData[1024];

	sprintf(tmpData, "Stackp=%p, iterator=%i\n\0", tmpData, cnt++);
	write_log(tmpData);
	usleep(500 * 1000);
	runStackTest();
}
*/

int init_ps3(void) {
	PS3_initialize();
#ifdef ENABLE_LOG
	loginit();
	//runStackTest();
#endif
	return 1;
}

void gui_init (int argc, char **argv)
{
	init_ps3();
}


/*
 * Handle target-specific cfgfile options
 */
void target_save_options (FILE *f, const struct uae_prefs *p)
{
}

int target_parse_option (struct uae_prefs *p, const char *option, const char *value)
{
    return 0;
}

void target_default_options (struct uae_prefs *p)
{
}

int machdep_parse_option (struct uae_prefs *p, const char *option, const char *value)
{
    return 0;
}

void machdep_default_options (struct uae_prefs *p)
{
}

void machdep_save_options (FILE *f, const struct uae_prefs *p)
{
}
