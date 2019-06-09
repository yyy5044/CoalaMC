#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

void bigtree(int x, int y, int z) {

	WoolID wool_green = createWool(COLOR_GREEN);
	WoodID wood_oak = createWood(WOOD_OAK, STRIP_UP_DOWN);

	//釭鼠 晦菅
	for (int h = 4; h <= 7; h++)
		locateWood(wood_oak, x - 2, h, z - 2);

	//釭僱濟 1類
	locateBlock(wool_green, x - 3, 8, z - 4);
	locateBlock(wool_green, x - 2, 8, z - 4);
	locateBlock(wool_green, x - 1, 8, z - 4);

	locateBlock(wool_green, x - 4, 8, z - 3);
	locateBlock(wool_green, x - 3, 8, z - 3);
	locateBlock(wool_green, x - 2, 8, z - 3);
	locateBlock(wool_green, x - 1, 8, z - 3);
	locateBlock(wool_green, x, 8, z - 3);

	locateBlock(wool_green, x - 4, 8, z - 2);
	locateBlock(wool_green, x - 3, 8, z - 2);
	locateBlock(wool_green, x - 2, 8, z - 2);
	locateBlock(wool_green, x - 1, 8, z - 2);
	locateBlock(wool_green, x, 8, z - 2);

	locateBlock(wool_green, x - 4, 8, z - 1);
	locateBlock(wool_green, x - 3, 8, z - 1);
	locateBlock(wool_green, x - 2, 8, z - 1);
	locateBlock(wool_green, x - 1, 8, z - 1);
	locateBlock(wool_green, x, 8, z - 1);

	locateBlock(wool_green, x - 3, 8, z);
	locateBlock(wool_green, x - 2, 8, z);
	locateBlock(wool_green, x - 1, 8, z);

	//釭僱濟 2類
	locateBlock(wool_green, x - 2, 9, z - 4);
	locateBlock(wool_green, x - 3, 9, z - 3);
	locateBlock(wool_green, x - 2, 9, z - 3);
	locateBlock(wool_green, x - 1, 9, z - 3);
	locateBlock(wool_green, x - 4, 9, z - 2);
	locateBlock(wool_green, x - 3, 9, z - 2);
	locateBlock(wool_green, x - 2, 9, z - 2);
	locateBlock(wool_green, x - 1, 9, z - 2);
	locateBlock(wool_green, x, 9, z - 2);
	locateBlock(wool_green, x - 3, 9, z - 1);
	locateBlock(wool_green, x - 2, 9, z - 1);
	locateBlock(wool_green, x - 1, 9, z - 1);
	locateBlock(wool_green, x - 2, 9, z);

	//釭僱濟 3類
	locateBlock(wool_green, x - 2, 10, z - 3);
	locateBlock(wool_green, x - 3, 10, z - 2);
	locateBlock(wool_green, x - 2, 10, z - 2);
	locateBlock(wool_green, x - 1, 10, z - 2);
	locateBlock(wool_green, x - 2, 10, z - 1);

}

void bigtree_river() {
	for (int l = 0; l <= 1; l++) {
		for (int k = 0; k <= 5; k++) {
			for (int j = 0; j <= 7; j++) {
				for (int i = 0; i <= 3; i++) {
					bigtree(200 + 8 * i + 119 * l, 4, 25 + 8 * j + 87 * k);
				}
			}
		}
	}
}