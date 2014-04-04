#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>

#include "game.h"


#include <linux/fb.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
#include <fcntl.h>



struct sprite spaceship = {
	.w = 15,
	.h = 10,
	.a = {
		0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xffff, 0xffff, 0xffff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
		0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xffff, 0xffff, 0xffff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
		0x0, 0x0, 0x0, 0x0, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0, 0x0, 0x0, 0x0,
		0x0, 0x0, 0x0, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x0, 0x0, 0x0,
		0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
		0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
		0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
		0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
		0xffff, 0xffff, 0xffff, 0xffff, 0x0, 0x0, 0xffff, 0xffff, 0xffff, 0x0, 0x0, 0xffff, 0xffff, 0xffff, 0xffff,
		0xffff, 0xffff, 0xffff, 0x0, 0x0, 0x0, 0x0, 0xffff, 0x0, 0x0, 0x0, 0x0, 0xffff, 0xffff, 0xffff,
	}
};



int main(int argc, char *argv[])
{
	printf("Hello World, I'm SUPER-game 1.0!\n");
	
	setupFB();
	printf("FB mapped to: %p\n", fbMap);
	
	int i;
	uint16_t *tempfbmap = fbMap;
	printf("Blank screen\n");
	for (i = 0; i < SCREENW*SCREENH; i++) { // Blank screen
		*tempfbmap = 0x0;
		tempfbmap++;
	}
	paintRect(0, 0, SCREENW, SCREENH);
	
	int posX = SCREENW/2;
	int posY = SCREENH/2;
	
	paintSprite(&spaceship, posX, posY);
	
	munmap(fbMap, 320*240*2);
	close(fbfd);
	exit(EXIT_SUCCESS);
}




void paintSprite(struct sprite *s, int posX, int posY) {
	uint16_t *tempfbmap = fbMap;
	tempfbmap += SCREENW*(posY-s->h/2)+(posX-s->w/2);
	printf("Draw sprite\n");
	int j;
	int i;
	for (j = 0; j < s->h; j++) {
		for (i = j*s->w; i < j*s->w+s->w; i++) {
			*tempfbmap = s->a[i];
			tempfbmap++;
		}
		tempfbmap += SCREENW-s->w;
	}
	
	paintRect(0, 0, SCREENW, SCREENH);
}

void setupFB() {
	printf("Initializing FB\n");
	fbfd = open("/dev/fb0", O_RDWR);
	printf("fbfd: %i\n", fbfd);
	if (fbfd < 0) printf("Error opening FB\n");
	fbMap = (uint16_t*)mmap(NULL, 320*240*2, PROT_READ | PROT_WRITE, MAP_SHARED, fbfd, 0);
}

void paintRect(int dx, int dy, int width, int height) {
 	rect.dx = dx;
	rect.dy = dy;
	rect.width = width;
	rect.height = height;
	
	ioctl(fbfd, 0x4680, &rect);
}



