#ifndef _SYSP_H_
#define _SYSP_H_

typedef struct {
	int length;
	int unknown1;
	int unknown2;
	int unknown3;
	int prio;
	int stacksize;
	int unknown4;
	int unknown5;
} sys_process_t;


#define SYS_PROCESS(STACK) sys_process_t __sys_process_param __attribute__((__aligned__(8), section(".sys_proc_param"), unused)) = { \
	32, 0x13bcc5f6, 0x9000, 0x192001, 1001, STACK, 0x100000, 0}


#endif