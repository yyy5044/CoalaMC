#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

void smalltree(int x, int y, int z) {

	

	WoodID wood_birch = createWood(WOOD_BIRCH, STRIP_UP_DOWN);
	PlantID oak_leaves = createPlant(PLANT_OAK_LEAVES);

	//³ª¹« ±âµÕ
	locateWood(wood_birch, x - 1, 4, z - 1);
	locateWood(wood_birch, x - 1, 5, z - 1);

	//³ª¹µÀÙ
	locatePlant(oak_leaves, x - 2, 6, z - 1);
	locatePlant(oak_leaves, x - 1, 6, z);
	locatePlant(oak_leaves, x - 1, 6, z - 1);
	locatePlant(oak_leaves, x - 1, 6, z - 2);
	locatePlant(oak_leaves, x, 6, z - 1);
	locatePlant(oak_leaves, x - 1, 7, z - 1);

}

void smalltree_river() {
	for (int l = 0; l <= 1; l++) {
		for (int k = 0; k <= 5; k++) {
			for (int j = 0; j <= 13; j++) {
				for (int i = 0; i <= 5; i++) {
					smalltree(198 + 5 * i + 119 * l, 4, 19 + 87 * k);
					smalltree(193 + 119 * l, 4, 19 + 5 * j + 87 * k);
					smalltree(222 - 5 * i + 119 * l, 4, 84 + 87 * k);
					smalltree(228 + 119 * l, 4, 84 - 5 * j + 87 * k);
				}
			}
		}
	}
}