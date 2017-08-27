#include <stdio.h>

#include "sysconfig.h"
#include "sysdeps.h"

#include "options.h"

#include "uae.h"
#include "memory.h"
#include "custom.h"

#include "xwin.h"

#include "cell.h"
#include "ps3display.h"
#include "ps2fselect.h"

#include "ps3thumbnail.h"

extern unsigned int* pixbuf;

//save thumbnail of current screen
void ps3_save_thumb(unsigned char * filename, int* params, int paramsLen) {
	int scrw = gfxvidinfo.width < 720 ? gfxvidinfo.width : 720;
	int scrh = gfxvidinfo.height < 568 ? gfxvidinfo.height : 568;
	FILE* f;
	short * line = NULL;
	short w = scrw / 4;
	short h = scrh / 4;
	int y, x, i;
	char header;
	
	line = (short *) malloc(w * 2);
	if (line == NULL) {
		return;
	}
	
	if (!fsel_file_exists(filename)) {
		fsel_file_create(filename);
	}
	
	
	f = fopen(filename, "w+b");
	if (f == NULL) {
		return;
	}
	header = 'i';
	fwrite(&header, 1, 1, f);
	header = 'm';
	fwrite(&header, 1, 1, f);
	header = 'g';
	fwrite(&header, 1, 1, f);
	header = ' ';
	fwrite(&header, 1, 1, f);
	
	fwrite(&w, 2, 1, f);
	fwrite(&h, 2, 1, f);
	
	for (y = 0; y < scrh; y += 4) {
		i = 0;
		for (x = 0; x < scrw; x+= 4) {
			unsigned int pixel = pixbuf[y * gfxvidinfo.width + x];
			int r = ((pixel >> 16) & 0xFF) >> 3;
			int g = ((pixel >> 8) & 0xFF) >> 3;
			int b = (pixel & 0xFF) >> 3;
			line[i++] = (r << 10) | (g << 5) | b;
		} 
		fwrite(line, w * 2, 1, f);
	} 
	free(line);

	if (params != NULL && paramsLen > 0) {
		write_log("w1 len=%i\n", paramsLen);
		int w = fwrite(&paramsLen, 4, 1, f);
		write_log("w2 w=%i\n", w);
		w = fwrite(params, 4 * paramsLen, 1, f);
		write_log("w3 w=%i\n", w);

	}

	fclose(f);
	
}

int* ps3_load_thumbnail(unsigned char * filename, int* dstBuf, int* params, int paramsLen) {
	FILE* f;
	short* line = NULL;
	int* data = NULL;
	int w;
	int h;
	int y, x, i;
	short s;
	char header[4];

	f = fopen(filename, "rb");
	if (f == NULL) {
		write_log("failed to open file %s \n", filename);
		if (dstBuf != NULL) {
			dstBuf[0] = 0;
			return dstBuf;
		}
		return  NULL;
	}
	fread(&header, 4, 1, f);
	if (header[0] != 'i' || header[1] != 'm' || header[2] != 'g' || header[3] != ' ') {
		fclose(f);
		write_log("incorrect header.\n");
		return NULL;
	}
	
	fread(&s, 2, 1, f);
	w = s;
	
	
	fread(&s, 2, 1, f);
	h = s;
	
	if (w > 720 || h > 568) {
		fclose(f);
		write_log("incorrect dimensions.\n");
		return NULL;
	}

	line = (short *) malloc(w * 2);
	if (line == NULL) {
		fclose(f);
		if (dstBuf != NULL) {
			dstBuf[0] = 0;
			return dstBuf;
		}
		return NULL;
	}
	if (dstBuf == NULL || dstBuf[1] != w || dstBuf[2] != h ) {
		if (dstBuf != NULL) {
			free(dstBuf);
			dstBuf = NULL;
		}
		data = (int *) malloc ((w * h + 3) * 4);
		if (data == NULL) {
			fclose(f);
			return NULL;
		}
	} else {
		data = dstBuf;
	}
	write_log ("loading thumbnnail. w= %i h=%i \n", w, h); 
	data[0] = 0; //failure
	data[1] = w;
	data[2] = h;
	for (y = 0; y < h; y++) {
		fread(line, w * 2, 1, f);
		for (x = 0 ; x < w; x++) {
			short p1 = line[x];
			int r = ((p1 >> 10) & 0x1f) << 3;
			int g = ((p1 >> 5) & 0x1f) << 3;
			int b = (p1 & 0x1f) << 3;
			data[3 + y * w + x] = 0xFF000000 | (r << 16) | (g << 8) | b;
		}
	}
	data[0] = 1; //ok
	free(line);

	//try to read params
	{
		int max = 0;
		int read = fread(&max, 4, 1, f);
		if (read > 0 && read < 100 && params != NULL) {
			if (max > paramsLen) {
				max = paramsLen;
			}
			params[0] = max;
			fread(&params[1], 4, max, f);
		}
	}

	fclose(f);
	return data;
}
