all: kernel

video.o: video.c video.h
	gcc -std=gnu99 -m32 -c video.c -o video.o

kasm.o: kernel.asm
	nasm -f elf32 kernel.asm -o kasm.o

kc.o: kernel.c
	gcc -std=gnu99 -m32 -c kernel.c -o kc.o

kernel: kasm.o kc.o video.o
	ld -m elf_i386 -T link.ld -o kernel kasm.o kc.o video.o

install: kernel
	mv kernel /boot/kernel-001

clean:
	rm -rf *.o kernel
