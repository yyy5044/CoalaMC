#define _CRT_SECURE_NO_WARNINGS
#include <CoalaMOD.h>

#pragma comment(lib,"CoalaMOD.lib")
#include <stdio.h>

void bus(int x, int y, int z) {

	BlockID glowstone = createBlock(BLOCK_GLOWSTONE);
	BlockID glass = createBlock(BLOCK_GLASS);
	WoolID wool_black = createWool(COLOR_BLACK);
	WoolID wool_lime = createWool(COLOR_LIME);
	SlabID slab_stoneu = createSlab(SLAB_STONE, SLAB_UPPER);
	SlabID slab_stone = createSlab(SLAB_STONE, SLAB_LOWER);
	ButtonID button = createButton(BUTTON_STONE, 1);
	LadderID ladder = createLadder();

	for (int a = 0; a < 14; a++) {
		for (int b = 0; b < 3; b++) {
			locateBlock(wool_lime, x + a, 5, z + b);
		}
	}
	for (int a = 0; a < 14; a++) {
		for (int b = 0; b < 3; b++) {
			locateBlock(slab_stoneu, x + a, 4, z + b);
		}
	}
	locateBlock(wool_black, x + 4, 4, z);
	locateBlock(wool_black, x + 4, 4, z + 2);
	locateBlock(wool_black, x + 11, 4, z);
	locateBlock(wool_black, x + 11, 4, z + 2);
	installButton(button, x + 4, 4, z - 1, FACING_NORTH);
	installButton(button, x + 11, 4, z - 1, FACING_NORTH);
	installButton(button, x + 4, 4, z + 3, FACING_SOUTH);
	installButton(button, x + 11, 4, z + 3, FACING_SOUTH);//바퀴설치
	for (int a = 2; a < 14; a++) {
		for (int b = 0; b < 3; b++) {
			locateBlock(glass, x + a, 6, z + b);
		}
	}
	for (int a = 0; a < 14; a++) {
		for (int b = 0; b < 3; b++) {
			locateBlock(glass, x + a, 7, z + b);
		}
	}//창문설치
	for (int a = 0; a < 14; a++) {
		for (int b = 0; b < 3; b++) {
			locateBlock(wool_lime, x + a, 8, z + b);
		}
	}
	locateBlock(wool_lime, x + 11, 6, z + 2);
	locateBlock(wool_lime, x + 11, 7, z + 2);
	locateBlock(wool_lime, x + 11, 6, z);
	locateBlock(wool_lime, x + 11, 7, z);
	locateBlock(wool_lime, x, 6, z);
	locateBlock(wool_lime, x, 6, z + 1);
	locateBlock(wool_lime, x, 6, z + 2);
	locateBlock(wool_lime, x, 7, z);
	locateBlock(wool_lime, x, 7, z + 1);
	locateBlock(wool_lime, x, 7, z + 2);
	locateBlock(wool_lime, x + 1, 6, z);
	locateBlock(wool_lime, x + 1, 6, z + 1);
	locateBlock(wool_lime, x + 1, 6, z + 2);//모서리 부분 마감
	locateBlock(slab_stone, x + 8, 9, z + 1);
	locateBlock(slab_stone, x + 9, 9, z + 1);//맨위에 솟은거
	installLadder(ladder, x + 14, 5, z + 1, FACING_EAST);//번호판같은거
	locateBlock(glowstone, x + 13, 5, z);
	locateBlock(glowstone, x + 13, 5, z + 2);

}

void bus_merge() {
	for (int i = 0; i <= 11; i++) {
		bus(55, 5, 370 + 5 * i);
		bus(71, 5, 370 + 5 * i);
	}

	for (int i = 0; i <= 11; i++) {
		bus(488, 5, 110 + 5 * i);
		bus(504, 5, 110 + 5 * i);
	}
}