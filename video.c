#include "video.h"

char *video = (char*)0xB8000;

void videoWrite(char line, char col, char character, unsigned char bg, unsigned char fg){
	video[((line*80) + col) * 2]     = character;
	video[((line*80) + col) * 2 + 1] = (bg << 4)|fg;
	return;
}
