 /*
  * UAE - The Un*x Amiga Emulator
  *
  * Miscellaneous machine dependent support functions and definitions
  *
  * Copyright 1996 Bernd Schmidt
  * Copyright 2004 Richard Drummond
  */

#include <sys/systime.h>

#include "sysconfig.h"
#include "sysdeps.h"

#include "options.h"
#include "machdep/m68k.h"
#include "custom.h"
#include "events.h"
#include "sleep.h"
#include "rpt.h"



//struct flag_struct regflags;
             
//static volatile frame_time_t last_time, best_time;
//static volatile int loops_to_go;
void machdep_init (void)
{
    syncbase = 1000000; // 1 MHz 
    //rpt_available = 1;
}

//return time in microseconds (usecond)
frame_time_t read_processor_time (void)
{
    u64 secs;
    u64 nsecs;
    sysGetCurrentTime(&secs, &nsecs);
    return secs * 1000000 + (nsecs / 1000);
     
}

//access all files and directories
int access(const char* path, int mode) {
	return 0;
} 


