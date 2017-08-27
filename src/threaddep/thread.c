 /*
  * UAE - The Un*x Amiga Emulator
  *
  * Threading support, using pthreads
  *
  * Copyright 1997 Bernd Schmidt
  * Copyright 2004 Richard Drummond
  *
  * This handles initialization when using named semaphores.
  * Idea stolen from SDL.
  */


#include "sysconfig.h"
#include "sysdeps.h"


/* Possibly dodgy? Check whether this fn is even needed */
//#define uae_sem_getvalue(PSEM) get_sem_count (*PSEM)

/* Satisfy those linkers that complain about empty linker libs */
void thread_dummy (void);

void thread_dummy (void)
{
}

#endif
