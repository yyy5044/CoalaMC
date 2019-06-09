#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

void fountain(int x, int y, int z) {

	BlockID cobblestone = createBlock(BLOCK_COBBLESTONE);
	BlockID water = createWater(1);

	// ºÐ¼ö ²®µ¥±â

	locateBlock(cobblestone, x, 4, z + 4);
	locateBlock(cobblestone, x, 4, z + 5);
	locateBlock(cobblestone, x, 4, z + 6);
	locateBlock(cobblestone, x, 4, z + 7);
	locateBlock(cobblestone, x, 4, z + 8);

	locateBlock(cobblestone, x + 12, 4, z + 4);
	locateBlock(cobblestone, x + 12, 4, z + 5);
	locateBlock(cobblestone, x + 12, 4, z + 6);
	locateBlock(cobblestone, x + 12, 4, z + 7);
	locateBlock(cobblestone, x + 12, 4, z + 8);

	locateBlock(cobblestone, x + 4, 4, z);
	locateBlock(cobblestone, x + 5, 4, z);
	locateBlock(cobblestone, x + 6, 4, z);
	locateBlock(cobblestone, x + 7, 4, z);
	locateBlock(cobblestone, x + 8, 4, z);

	locateBlock(cobblestone, x + 5, 4, z + 12);
	locateBlock(cobblestone, x + 6, 4, z + 12);
	locateBlock(cobblestone, x + 7, 4, z + 12);
	locateBlock(cobblestone, x + 8, 4, z + 12);
	locateBlock(cobblestone, x + 4, 4, z + 12);

	locateBlock(cobblestone, x + 1, 4, z + 9);
	locateBlock(cobblestone, x + 1, 4, z + 3);
	locateBlock(cobblestone, x + 11, 4, z + 9);
	locateBlock(cobblestone, x + 11, 4, z + 3);

	locateBlock(cobblestone, x + 2, 4, z + 2);
	locateBlock(cobblestone, x + 2, 4, z + 10);
	locateBlock(cobblestone, x + 10, 4, z + 2);
	locateBlock(cobblestone, x + 10, 4, z + 10);

	locateBlock(cobblestone, x + 3, 4, z + 1);
	locateBlock(cobblestone, x + 3, 4, z + 11);
	locateBlock(cobblestone, x + 9, 4, z + 1);
	locateBlock(cobblestone, x + 9, 4, z + 11);

	locateBlock(cobblestone, x, 4, z + 4);
	locateBlock(cobblestone, x, 4, z + 5);
	locateBlock(cobblestone, x, 4, z + 6);
	locateBlock(cobblestone, x, 4, z + 7);
	locateBlock(cobblestone, x, 4, z + 8);

	locateBlock(cobblestone, x + 12, 4, z + 4);
	locateBlock(cobblestone, x + 12, 4, z + 5);
	locateBlock(cobblestone, x + 12, 4, z + 6);
	locateBlock(cobblestone, x + 12, 4, z + 7);
	locateBlock(cobblestone, x + 12, 4, z + 8);

	locateBlock(cobblestone, x + 4, 4, z);
	locateBlock(cobblestone, x + 5, 4, z);
	locateBlock(cobblestone, x + 6, 4, z);
	locateBlock(cobblestone, x + 7, 4, z);
	locateBlock(cobblestone, x + 8, 4, z);

	locateBlock(cobblestone, x + 5, 4, z + 12);
	locateBlock(cobblestone, x + 6, 4, z + 12);
	locateBlock(cobblestone, x + 7, 4, z + 12);
	locateBlock(cobblestone, x + 8, 4, z + 12);
	locateBlock(cobblestone, x + 4, 4, z + 12);

	locateBlock(cobblestone, x + 1, 4, z + 9);
	locateBlock(cobblestone, x + 1, 4, z + 3);
	locateBlock(cobblestone, x + 11, 4, z + 9);
	locateBlock(cobblestone, x + 11, 4, z + 3);

	locateBlock(cobblestone, x + 2, 4, z + 2);
	locateBlock(cobblestone, x + 2, 4, z + 10);
	locateBlock(cobblestone, x + 10, 4, z + 2);
	locateBlock(cobblestone, x + 10, 4, z + 10);

	locateBlock(cobblestone, x + 3, 4, z + 1);
	locateBlock(cobblestone, x + 3, 4, z + 11);
	locateBlock(cobblestone, x + 9, 4, z + 1);
	locateBlock(cobblestone, x + 9, 4, z + 11);
	//


	//ºÐ¼ö ±âµÕ
	locateBlock(cobblestone, x + 5, y, z + 6);
	locateBlock(cobblestone, x + 6, y, z + 6);
	locateBlock(cobblestone, x + 7, y, z + 6);
	locateBlock(cobblestone, x + 6, y, z + 5);
	locateBlock(cobblestone, x + 6, y, z + 7);

	locateBlock(cobblestone, x + 6, y + 1, z + 6);
	locateBlock(cobblestone, x + 6, y + 2, z + 6);

	locateBlock(cobblestone, x + 5, y + 3, z + 6);
	locateBlock(cobblestone, x + 6, y + 3, z + 6);
	locateBlock(cobblestone, x + 7, y + 3, z + 6);
	locateBlock(cobblestone, x + 6, y + 3, z + 5);
	locateBlock(cobblestone, x + 6, y + 3, z + 7);

	locateBlock(cobblestone, x + 6, y + 4, z + 6);
	locateBlock(cobblestone, x + 6, y + 5, z + 6);

	locateBlock(cobblestone, x + 6, y + 6, z + 6);
	locateBlock(cobblestone, x + 5, y + 6, z + 5);
	locateBlock(cobblestone, x + 5, y + 6, z + 7);
	locateBlock(cobblestone, x + 7, y + 6, z + 5);
	locateBlock(cobblestone, x + 7, y + 6, z + 7);

	locateBlock(cobblestone, x + 6, y + 7, z + 6);
	locateBlock(cobblestone, x + 6, y + 8, z + 6);

	//¹°
	locateBlock(water, x + 6, y + 9, z + 6);


}

void circlefountain(int x, int y, int z) {

	BlockID stone = createBlock(BLOCK_STONE);
	BlockID water = createWater(1);

	//ºÐ¼ö ²®µ¥±â
	locateBlock(stone, x, y, z + 4);
	locateBlock(stone, x, y, z + 5);
	locateBlock(stone, x, y, z + 6);
	locateBlock(stone, x + 10, y, z + 4);
	locateBlock(stone, x + 10, y, z + 5);
	locateBlock(stone, x + 10, y, z + 6);

	locateBlock(stone, x + 1, y, z + 3);
	locateBlock(stone, x + 1, y, z + 7);
	locateBlock(stone, x + 9, y, z + 3);
	locateBlock(stone, x + 9, y, z + 7);

	locateBlock(stone, x + 2, y, z + 2);
	locateBlock(stone, x + 2, y, z + 8);
	locateBlock(stone, x + 8, y, z + 2);
	locateBlock(stone, x + 8, y, z + 8);

	locateBlock(stone, x + 3, y, z + 1);
	locateBlock(stone, x + 3, y, z + 9);
	locateBlock(stone, x + 7, y, z + 1);
	locateBlock(stone, x + 7, y, z + 9);

	locateBlock(stone, x + 4, y, z);
	locateBlock(stone, x + 5, y, z);
	locateBlock(stone, x + 6, y, z);
	locateBlock(stone, x + 4, y, z + 10);
	locateBlock(stone, x + 5, y, z + 10);
	locateBlock(stone, x + 6, y, z + 10);

	locateBlock(stone, x + 5, y + 1, z + 3);
	locateBlock(stone, x + 5, y + 1, z + 7);
	locateBlock(stone, x + 3, y + 1, z + 5);
	locateBlock(stone, x + 7, y + 1, z + 5);

	locateBlock(stone, x + 5, y + 11, z + 3);
	locateBlock(stone, x + 5, y + 11, z + 7);
	locateBlock(stone, x + 3, y + 11, z + 5);
	locateBlock(stone, x + 7, y + 11, z + 5);

	locateBlock(stone, x + 5, y + 2, z + 2);
	locateBlock(stone, x + 5, y + 2, z + 8);
	locateBlock(stone, x + 2, y + 2, z + 5);
	locateBlock(stone, x + 8, y + 2, z + 5);

	locateBlock(stone, x + 5, y + 10, z + 2);
	locateBlock(stone, x + 5, y + 10, z + 8);
	locateBlock(stone, x + 2, y + 10, z + 5);
	locateBlock(stone, x + 8, y + 10, z + 5);

	locateBlock(stone, x + 5, y + 3, z + 1);
	locateBlock(stone, x + 5, y + 3, z + 9);
	locateBlock(stone, x + 1, y + 3, z + 5);
	locateBlock(stone, x + 9, y + 3, z + 5);

	locateBlock(stone, x + 5, y + 4, z + 1);
	locateBlock(stone, x + 5, y + 4, z + 9);
	locateBlock(stone, x + 1, y + 4, z + 5);
	locateBlock(stone, x + 9, y + 4, z + 5);

	locateBlock(stone, x + 5, y + 8, z + 1);
	locateBlock(stone, x + 5, y + 8, z + 9);
	locateBlock(stone, x + 1, y + 8, z + 5);
	locateBlock(stone, x + 9, y + 8, z + 5);

	locateBlock(stone, x + 5, y + 9, z + 1);
	locateBlock(stone, x + 5, y + 9, z + 9);
	locateBlock(stone, x + 1, y + 9, z + 5);
	locateBlock(stone, x + 9, y + 9, z + 5);

	locateBlock(stone, x + 5, y + 5, z);
	locateBlock(stone, x + 5, y + 5, z + 10);
	locateBlock(stone, x, y + 5, z + 5);
	locateBlock(stone, x + 10, y + 5, z + 5);

	locateBlock(stone, x + 5, y + 6, z);
	locateBlock(stone, x + 5, y + 6, z + 10);
	locateBlock(stone, x, y + 6, z + 5);
	locateBlock(stone, x + 10, y + 6, z + 5);

	locateBlock(stone, x + 5, y + 7, z);
	locateBlock(stone, x + 5, y + 7, z + 10);
	locateBlock(stone, x, y + 7, z + 5);
	locateBlock(stone, x + 10, y + 7, z + 5);

	locateBlock(stone, x + 4, y + 12, z + 4);
	locateBlock(stone, x + 4, y + 12, z + 5);
	locateBlock(stone, x + 4, y + 12, z + 6);
	locateBlock(stone, x + 6, y + 12, z + 4);
	locateBlock(stone, x + 6, y + 12, z + 5);
	locateBlock(stone, x + 6, y + 12, z + 6);
	locateBlock(stone, x + 5, y + 12, z + 4);
	locateBlock(stone, x + 5, y + 12, z + 6);

	locateBlock(stone, x + 4, y, z + 4);
	locateBlock(stone, x + 4, y, z + 5);
	locateBlock(stone, x + 4, y, z + 6);
	locateBlock(stone, x + 6, y, z + 4);
	locateBlock(stone, x + 6, y, z + 5);
	locateBlock(stone, x + 6, y, z + 6);
	locateBlock(stone, x + 5, y, z + 4);
	locateBlock(stone, x + 5, y, z + 6);



	for (int t = 0; t <= 10; t++)
		locateBlock(stone, x + 5, y + t, z + 5);

	//¹°
	locateBlock(water, x + 5, y + 12, z + 5);
	locateBlock(water, x + 5, y + 11, z + 5);
}

void fountain_merge() {

	int fx[4] = { 69, 64, 415, 475 };
	int fz[4] = { 200, 289, 300, 242 };

	for (int i = 0; i <= 3; i++) {
		fountain(fx[i], 4, fz[i]);
	}

	int cx[3] = { 126, 112, 377 };
	int cz[3] = { 66, 215, 67 };

	for (int i = 0; i <= 2; i++) {
		circlefountain(cx[i], 4, cz[i]);
	}
}