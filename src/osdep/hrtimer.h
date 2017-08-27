/*
 * E-UAE - The portable Amiga Emulator
 *
 * Generic high-resolution timer support.
 *
 * (c) 2005 Richard Drummond
 */

#ifndef EUAE_OSDEP_HRTIMER_H
#define EUAE_OSDEP_HRTIMER_H


#include <sys/systime.h>

#include "machdep/rpt.h"


STATIC_INLINE frame_time_t osdep_gethrtime (void)
{
    u64 secs;
    u64 nsecs;
    sysGetCurrentTime(&secs, &nsecs);
    return secs * 1000000 + (nsecs / 1000);

}

STATIC_INLINE frame_time_t osdep_gethrtimebase (void)
{
    return 1000000;
}

STATIC_INLINE void osdep_inithrtimer (void)
{
}
#endif
