#include <linux/fb.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <stdint.h>
#include <stdio.h>

#include "game.h"



/* Setup framebuffer */
void setupFB() {
	fbfd = open("/dev/fb0", O_RDWR);
	printf("Framebuffer fd: %i\n", fbfd);
	if (fbfd < 0) printf("Error opening FB\n");
	fbMap = (uint16_t*)mmap(NULL, 320*240*2, PROT_READ | PROT_WRITE, MAP_SHARED, fbfd, 0);
}

/* Signal framebuffer driver to actually update screen */
void paintRect(int dx, int dy, int width, int height) {
 	rect.dx = dx;
	rect.dy = dy;
	rect.width = width;
	rect.height = height;
	
	ioctl(fbfd, 0x4680, &rect);
}

/* Make screen go black */
void blankScreen() {
	int i;
	uint16_t *tempfbmap = fbMap;
	printf("Blank screen\n");
	for (i = 0; i < SCREENW*SCREENH; i++) { // Blank screen
		*tempfbmap = BL;
		tempfbmap++;
	}
	paintRect(0, 0, SCREENW, SCREENH);
}

/* Paint a sprite on screen */
void paintSprite(struct sprite *s) {
	uint16_t *tempfbmap = fbMap;
	tempfbmap += SCREENW * s->y + s->x;
	uint16_t *spriteP = s->a;
	int j;
	int i;
	for (j = 0; j < s->h; j++) {
		for (i = 0; i < s->w; i++) {
			*tempfbmap = *spriteP;
			tempfbmap++;
			spriteP++;
		}
		tempfbmap += SCREENW - s->w;
	}
	/* Pad with sprites speed to ensure updating the region the sprite came from */
	paintRect(s->x - s->speed, s->y - s->speed, s->w + s->speed * 2, s->h+1 + s->speed * 2);
}

/* Paint a sprites current area black before moving it. This should not result in a call to ioctl */
void blankSprite(struct sprite *s) {
	uint16_t *tempfbmap = fbMap;
	tempfbmap += SCREENW * s->y + s->x;
	int j;
	int i;
	for (j = 0; j < s->h; j++) {
		for (i = 0; i < s->w; i++) {
			*tempfbmap = BL;
			tempfbmap++;
		}
		tempfbmap += SCREENW - s->w;
	}
}








