 /*
  * UAE - The Un*x Amiga Emulator
  *
  * Threading support, using pthreads
  *
  * Copyright 1997 Bernd Schmidt
  * Copyright 2004 Richard Drummond
  */



#include <sys/thread.h>
#include <sys/sem.h>

#include "sysconfig.h"
#include "sysdeps.h"


typedef sys_sem_t uae_sem_t;

STATIC_INLINE int uae_sem_init (uae_sem_t *PSEM, int DUMMY, int INIT)
{
    static sys_sem_attr_t sem_attr;
    sem_attr.attr_protocol = SYS_SEM_ATTR_PROTOCOL;
    sem_attr.attr_pshared = SYS_SEM_ATTR_PSHARED;
    sem_attr.key = 0;
    sem_attr.flags = 0;
    sem_attr.pad = 0;
    sem_attr.name[0] = 'e';
    sem_attr.name[1] = 0;
	
    return sysSemCreate(PSEM, &sem_attr, INIT, INIT > 0 ? INIT : 1);
}

#define uae_sem_destroy(PSEM)  sysSemDestroy(*PSEM)
#define uae_sem_post(PSEM)     sysSemPost(*PSEM, 1)
#define uae_sem_wait(PSEM)     sysSemWait(*PSEM, 0)
#define uae_sem_trywait(PSEM)  sysSemTryWait(*PSEM)


#include "commpipe.h"

//typedef pthread_t uae_thread_id;
typedef sys_ppu_thread_t uae_thread_id;

#define BAD_THREAD -1

STATIC_INLINE int uae_start_thread (void *(*f) (void *), void *arg, uae_thread_id *foo)
{
	return sysThreadCreate(foo, f, (u64) arg, 1200, 0x4000, THREAD_JOINABLE, "e-uae");
}

STATIC_INLINE int uae_wait_thread (uae_thread_id thread)
{
	u64 retval;
	return sysThreadJoin(thread, &retval);
}

#define UAE_THREAD_EXIT sys_ppu_thread_exit(0)

#define uae_set_thread_priority(pri)
