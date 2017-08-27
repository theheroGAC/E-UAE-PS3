#ifndef _PS3_THUMBNAIL_H_
#define _PS3_THUMBNAIL_H_

void ps3_save_thumb(unsigned char * filename, int* params, int paramsLen);
int* ps3_load_thumbnail(unsigned char * filename, int* dstBuf, int* params, int paramsLen);

#endif /* _PS3_THUMBNAIL_H_*/

