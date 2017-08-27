#ifdef __cplusplus
extern "C" {
#endif


#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>


#include <net/net.h>
#include <netinet/in.h>



static int pcslPrintSocketFD;
static int pcslPrintInitDone = 0;
#define DEBUG_IP "192.168.100.12"
#define DEBUG_PORT 18194


/**
 * Print contents of buffer to net cat. use: nc -l -u 18194
 *
 */
#ifdef ENABLE_LOG
void net_print(const char* s) {
	if (!pcslPrintInitDone) {
		struct sockaddr_in stSockAddr;
		
		pcslPrintInitDone = 1;

		netInitialize();
		pcslPrintSocketFD = netSocket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);

		memset(&stSockAddr, 0, sizeof stSockAddr);

		stSockAddr.sin_family = AF_INET;
		stSockAddr.sin_port = htons(DEBUG_PORT);
		inet_pton(AF_INET, DEBUG_IP, &stSockAddr.sin_addr);

		netConnect(pcslPrintSocketFD, (struct sockaddr *)&stSockAddr, sizeof stSockAddr);
	}
	
	if (s == NULL || *s == 0) {
		return;
	}
	
	netSend(pcslPrintSocketFD, s, strlen(s), 0);
}
void net_print_quit() {
	if (pcslPrintInitDone) {
		net_print("net_print_quit\n");
		netClose(pcslPrintSocketFD);
	}
}
#endif


#define WRITE_LOG_BUF_SIZE 4096

void write_log (const char *format, ...)
{
#ifdef ENABLE_LOG
    int count;
    static char ps3_log_buffer[WRITE_LOG_BUF_SIZE];

    va_list ap;
    va_start (ap, format);
	vsprintf(ps3_log_buffer, format, ap);
    va_end(ap);
    net_print(ps3_log_buffer);
	// sleep 0.5 sec
    //usleep(3 * 1000 * 1000);
#endif
}

void dispose_log() 
{
#ifdef ENABLE_LOG	
	net_print_quit();
#endif
}

#ifdef __cplusplus
}
#endif

