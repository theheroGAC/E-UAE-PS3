#ifndef __LOG_H__
#define __LOG_H__

#ifdef __cplusplus
extern "C" {
#endif

#define LOG_MSG(x)  write_log(x)
#define LOG_MSG2(x,y)  write_log(x,y)

#define loginit()

void write_log (const char *format, ...);
void dispose_log();

#ifdef __cplusplus
}
#endif

#endif
