#include "video.h"

void kmain(void){
	char *str = "Hello, world!";

	// Clear the screen
	for (int l = 0; l < 80; l++){
		for (int c = 0; c < 25; c++){
			videoWrite(l, c, ' ', BLACK, GREEN);
		}
	}

	//this loop write the string to video memory
	int i = 0;
	while (str[i] != '\0'){
		videoWrite(0, i++, str[i], BLACK, GREEN);
	}

	for (int l = 0; l < 16; l++){
		for (int c = 0; c < 16; c++){
			videoWrite(l+5, c+5, 'x', l, c);
		}
	}
	return;
}
