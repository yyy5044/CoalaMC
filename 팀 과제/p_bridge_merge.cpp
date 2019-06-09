#include "stdio.h"
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

void bridge(int x, int y, int z)
{
	BlockID stone = createBlock(BLOCK_STONE);
	

	locateBlock(stone, x, y, z);
	locateBlock(stone, x + 1, y, z);
	locateBlock(stone, x + 2, y + 1, z);
	locateBlock(stone, x + 3, y + 1, z);
	locateBlock(stone, x + 4, y + 2, z);
	locateBlock(stone, x + 5, y + 2, z);
	locateBlock(stone, x + 6, y + 3, z);
	locateBlock(stone, x + 7, y + 3, z);
	locateBlock(stone, x + 8, y + 4, z);
	locateBlock(stone, x + 9, y + 4, z);

	locateBlock(stone, x + 10, y + 5, z);
	locateBlock(stone, x + 11, y + 6, z);

	locateBlock(stone, x + 12, y + 7, z);
	locateBlock(stone, x + 12, y + 8, z);

	locateBlock(stone, x + 13, y + 9, z);
	locateBlock(stone, x + 13, y + 10, z);

	locateBlock(stone, x + 14, y + 11, z);
	locateBlock(stone, x + 14, y + 12, z);

	locateBlock(stone, x + 15, y + 13, z);
	locateBlock(stone, x + 15, y + 14, z);

	for (int i = 0; i < 17; i++) {
		locateBlock(stone, x + 16, y + i, z);
	}

	locateBlock(stone, x + 17, y + 16, z);

	for (int i = 0; i < 17; i++) {
		locateBlock(stone, x + 18, y + i, z);
	}


	locateBlock(stone, x + 19, y + 14, z);
	locateBlock(stone, x + 19, y + 13, z);

	locateBlock(stone, x + 20, y + 12, z);
	locateBlock(stone, x + 20, y + 11, z);

	locateBlock(stone, x + 21, y + 10, z);
	locateBlock(stone, x + 21, y + 9, z);

	locateBlock(stone, x + 22, y + 8, z);
	locateBlock(stone, x + 22, y + 7, z);

	locateBlock(stone, x + 23, y + 6, z);
	locateBlock(stone, x + 24, y + 5, z);

	locateBlock(stone, x + 25, y + 4, z);
	locateBlock(stone, x + 26, y + 4, z);

	locateBlock(stone, x + 27, y + 3, z);
	locateBlock(stone, x + 28, y + 3, z);

	locateBlock(stone, x + 29, y + 2, z);
	locateBlock(stone, x + 30, y + 2, z);

	locateBlock(stone, x + 31, y + 1, z);
	locateBlock(stone, x + 32, y + 1, z);

	locateBlock(stone, x + 33, y, z);
	locateBlock(stone, x + 34, y, z);

}

void bridge_merge() {
	for (int j = 0; j <= 4; j++) {
		for (int i = 0; i <= 1; i++) {
			bridge(232, 4, 88 + 14 * i + 87 * j);
			bridge(275, 4, 88 + 14 * i + 87 * j);
		}
	}
}