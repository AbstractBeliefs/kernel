#ifndef VIDEO_H
#define VIDEO_H

#define BLACK	0x00
#define BLUE	0x01
#define GREEN	0x02
#define CYAN	0x03
#define RED	0x04
#define MAGENTA	0x05
#define BROWN	0x06
#define LGREY	0x07
#define DGREY	0x08

#define LBLUE	0x09
#define LGREEN	0x0A
#define LCYAN	0x0B
#define LRED	0x0C
#define LMAGENTA	0x0D
#define LBROWN	0x0E
#define WHITE	0x0F

void videoWrite(char line, char col, char character, unsigned char bg, unsigned char fg);

#endif
