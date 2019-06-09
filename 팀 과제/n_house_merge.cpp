#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

void house(int x, int y, int z) {

	BlockID glass = createBlock(BLOCK_GLASS);
	BlockID bone = createBlock(BLOCK_BONE);
	TerracottaID cyan = createTerracotta(TERRACOTTA, COLOR_CYAN);


	//°Ç¹° ±âµÕ

	for (int t = 0; t <= 3; t++) {
		locateTerracotta(cyan, x + 1, y + t, z + 1);
		locateTerracotta(cyan, x + 1, y + t, z + 4);
		locateTerracotta(cyan, x + 1, y + t, z + 7);
		locateTerracotta(cyan, x + 8, y + t, z + 1);
		locateTerracotta(cyan, x + 8, y + t, z + 4);
		locateTerracotta(cyan, x + 8, y + t, z + 7);
	}

	//°Ç¹° ÇÑ Á÷À°¸éÃ¼ È¸»öÀ¸·Î
	for (int a = 0; a <= 8; a++) {
		for (int b = 0; b <= 8; b++) {
			locateTerracotta(cyan, x + a, y + 4, z + b);
			locateTerracotta(cyan, x + a, y + 6, z + b);
		}
	}

	locateTerracotta(cyan, x, y + 5, z);
	locateTerracotta(cyan, x, y + 5, z + 4);
	locateTerracotta(cyan, x, y + 5, z + 8);
	locateTerracotta(cyan, x + 4, y + 5, z);
	locateTerracotta(cyan, x + 4, y + 5, z + 8);
	locateTerracotta(cyan, x + 8, y + 5, z);
	locateTerracotta(cyan, x + 8, y + 5, z + 4);
	locateTerracotta(cyan, x + 8, y + 5, z + 8);
	locateTerracotta(cyan, x + 4, y + 5, z);
	locateTerracotta(cyan, x + 4, y + 5, z + 8);

	locateBlock(glass, x, y + 5, z + 1);
	locateBlock(glass, x, y + 5, z + 2);
	locateBlock(glass, x, y + 5, z + 3);
	locateBlock(glass, x, y + 5, z + 5);
	locateBlock(glass, x, y + 5, z + 6);
	locateBlock(glass, x, y + 5, z + 7);

	locateBlock(glass, x + 8, y + 5, z + 1);
	locateBlock(glass, x + 8, y + 5, z + 2);
	locateBlock(glass, x + 8, y + 5, z + 3);
	locateBlock(glass, x + 8, y + 5, z + 5);
	locateBlock(glass, x + 8, y + 5, z + 6);
	locateBlock(glass, x + 8, y + 5, z + 7);

	locateBlock(glass, x + 1, y + 5, z);
	locateBlock(glass, x + 2, y + 5, z);
	locateBlock(glass, x + 3, y + 5, z);
	locateBlock(glass, x + 1, y + 5, z + 8);
	locateBlock(glass, x + 2, y + 5, z + 8);
	locateBlock(glass, x + 3, y + 5, z + 8);

	locateBlock(glass, x + 7, y + 5, z);
	locateBlock(glass, x + 5, y + 5, z);
	locateBlock(glass, x + 6, y + 5, z);
	locateBlock(glass, x + 7, y + 5, z + 8);
	locateBlock(glass, x + 5, y + 5, z + 8);
	locateBlock(glass, x + 6, y + 5, z + 8);


	//Èò»ö 1Ãþ Â¥¸® Ã³À½ º¼·Ï
	for (int c = 1; c <= 7; c++) {
		for (int d = 1; d <= 7; d++) {
			locateBlock(bone, x + c, y + 7, z + d);
			locateBlock(bone, x + c, y + 11, z + d);
			locateBlock(bone, x + c, y + 15, z + d);
			locateBlock(bone, x + c, y + 19, z + d);
			locateBlock(bone, x + c, y + 23, z + d);
		}
	} //¿Ïº®

	//À¯¸®Ãþ Á¦¿Ü
	for (int i = 0; i <= 8; i++) {
		for (int t = 0; t <= 8; t++) {
			locateBlock(bone, x + i, y + 8, z + t);
			locateBlock(bone, x + i, y + 10, z + t);
			locateBlock(bone, x + i, y + 12, z + t);
			locateBlock(bone, x + i, y + 14, z + t);
			locateBlock(bone, x + i, y + 16, z + t);
			locateBlock(bone, x + i, y + 18, z + t);
			locateBlock(bone, x + i, y + 20, z + t);
			locateBlock(bone, x + i, y + 22, z + t);
			locateBlock(bone, x + i, y + 24, z + t);
			locateBlock(bone, x + i, y + 26, z + t);
		}
	}

	//À¯¸®Ãþ 9
	locateBlock(bone, x, y + 9, z);
	locateBlock(bone, x, y + 9, z + 4);
	locateBlock(bone, x, y + 9, z + 8);
	locateBlock(bone, x + 4, y + 9, z);
	locateBlock(bone, x + 4, y + 9, z + 8);
	locateBlock(bone, x + 8, y + 9, z);
	locateBlock(bone, x + 8, y + 9, z + 4);
	locateBlock(bone, x + 8, y + 9, z + 8);
	locateBlock(bone, x + 4, y + 9, z);
	locateBlock(bone, x + 4, y + 9, z + 8);

	locateBlock(glass, x, y + 9, z + 1);
	locateBlock(glass, x, y + 9, z + 2);
	locateBlock(glass, x, y + 9, z + 3);
	locateBlock(glass, x, y + 9, z + 5);
	locateBlock(glass, x, y + 9, z + 6);
	locateBlock(glass, x, y + 9, z + 7);

	locateBlock(glass, x + 8, y + 9, z + 1);
	locateBlock(glass, x + 8, y + 9, z + 2);
	locateBlock(glass, x + 8, y + 9, z + 3);
	locateBlock(glass, x + 8, y + 9, z + 5);
	locateBlock(glass, x + 8, y + 9, z + 6);
	locateBlock(glass, x + 8, y + 9, z + 7);

	locateBlock(glass, x + 1, y + 9, z);
	locateBlock(glass, x + 2, y + 9, z);
	locateBlock(glass, x + 3, y + 9, z);
	locateBlock(glass, x + 1, y + 9, z + 8);
	locateBlock(glass, x + 2, y + 9, z + 8);
	locateBlock(glass, x + 3, y + 9, z + 8);

	locateBlock(glass, x + 7, y + 9, z);
	locateBlock(glass, x + 5, y + 9, z);
	locateBlock(glass, x + 6, y + 9, z);
	locateBlock(glass, x + 7, y + 9, z + 8);
	locateBlock(glass, x + 5, y + 9, z + 8);
	locateBlock(glass, x + 6, y + 9, z + 8);

	//À¯¸®Ãþ 13
	locateBlock(bone, x, y + 13, z);
	locateBlock(bone, x, y + 13, z + 4);
	locateBlock(bone, x, y + 13, z + 8);
	locateBlock(bone, x + 4, y + 13, z);
	locateBlock(bone, x + 4, y + 13, z + 8);
	locateBlock(bone, x + 8, y + 13, z);
	locateBlock(bone, x + 8, y + 13, z + 4);
	locateBlock(bone, x + 8, y + 13, z + 8);
	locateBlock(bone, x + 4, y + 13, z);
	locateBlock(bone, x + 4, y + 13, z + 8);

	locateBlock(glass, x, y + 13, z + 1);
	locateBlock(glass, x, y + 13, z + 2);
	locateBlock(glass, x, y + 13, z + 3);
	locateBlock(glass, x, y + 13, z + 5);
	locateBlock(glass, x, y + 13, z + 6);
	locateBlock(glass, x, y + 13, z + 7);

	locateBlock(glass, x + 8, y + 13, z + 1);
	locateBlock(glass, x + 8, y + 13, z + 2);
	locateBlock(glass, x + 8, y + 13, z + 3);
	locateBlock(glass, x + 8, y + 13, z + 5);
	locateBlock(glass, x + 8, y + 13, z + 6);
	locateBlock(glass, x + 8, y + 13, z + 7);

	locateBlock(glass, x + 1, y + 13, z);
	locateBlock(glass, x + 2, y + 13, z);
	locateBlock(glass, x + 3, y + 13, z);
	locateBlock(glass, x + 1, y + 13, z + 8);
	locateBlock(glass, x + 2, y + 13, z + 8);
	locateBlock(glass, x + 3, y + 13, z + 8);

	locateBlock(glass, x + 7, y + 13, z);
	locateBlock(glass, x + 5, y + 13, z);
	locateBlock(glass, x + 6, y + 13, z);
	locateBlock(glass, x + 7, y + 13, z + 8);
	locateBlock(glass, x + 5, y + 13, z + 8);
	locateBlock(glass, x + 6, y + 13, z + 8);

	//À¯¸®Ãþ 17
	locateBlock(bone, x, y + 17, z);
	locateBlock(bone, x, y + 17, z + 4);
	locateBlock(bone, x, y + 17, z + 8);
	locateBlock(bone, x + 4, y + 17, z);
	locateBlock(bone, x + 4, y + 17, z + 8);
	locateBlock(bone, x + 8, y + 17, z);
	locateBlock(bone, x + 8, y + 17, z + 4);
	locateBlock(bone, x + 8, y + 17, z + 8);
	locateBlock(bone, x + 4, y + 17, z);
	locateBlock(bone, x + 4, y + 17, z + 8);

	locateBlock(glass, x, y + 17, z + 1);
	locateBlock(glass, x, y + 17, z + 2);
	locateBlock(glass, x, y + 17, z + 3);
	locateBlock(glass, x, y + 17, z + 5);
	locateBlock(glass, x, y + 17, z + 6);
	locateBlock(glass, x, y + 17, z + 7);

	locateBlock(glass, x + 8, y + 17, z + 1);
	locateBlock(glass, x + 8, y + 17, z + 2);
	locateBlock(glass, x + 8, y + 17, z + 3);
	locateBlock(glass, x + 8, y + 17, z + 5);
	locateBlock(glass, x + 8, y + 17, z + 6);
	locateBlock(glass, x + 8, y + 17, z + 7);

	locateBlock(glass, x + 1, y + 17, z);
	locateBlock(glass, x + 2, y + 17, z);
	locateBlock(glass, x + 3, y + 17, z);
	locateBlock(glass, x + 1, y + 17, z + 8);
	locateBlock(glass, x + 2, y + 17, z + 8);
	locateBlock(glass, x + 3, y + 17, z + 8);

	locateBlock(glass, x + 7, y + 17, z);
	locateBlock(glass, x + 5, y + 17, z);
	locateBlock(glass, x + 6, y + 17, z);
	locateBlock(glass, x + 7, y + 17, z + 8);
	locateBlock(glass, x + 5, y + 17, z + 8);
	locateBlock(glass, x + 6, y + 17, z + 8);

	//À¯¸®Ãþ 21
	locateBlock(bone, x, y + 21, z);
	locateBlock(bone, x, y + 21, z + 4);
	locateBlock(bone, x, y + 21, z + 8);
	locateBlock(bone, x + 4, y + 21, z);
	locateBlock(bone, x + 4, y + 21, z + 8);
	locateBlock(bone, x + 8, y + 21, z);
	locateBlock(bone, x + 8, y + 21, z + 4);
	locateBlock(bone, x + 8, y + 21, z + 8);
	locateBlock(bone, x + 4, y + 21, z);
	locateBlock(bone, x + 4, y + 21, z + 8);

	locateBlock(glass, x, y + 21, z + 1);
	locateBlock(glass, x, y + 21, z + 2);
	locateBlock(glass, x, y + 21, z + 3);
	locateBlock(glass, x, y + 21, z + 5);
	locateBlock(glass, x, y + 21, z + 6);
	locateBlock(glass, x, y + 21, z + 7);

	locateBlock(glass, x + 8, y + 21, z + 1);
	locateBlock(glass, x + 8, y + 21, z + 2);
	locateBlock(glass, x + 8, y + 21, z + 3);
	locateBlock(glass, x + 8, y + 21, z + 5);
	locateBlock(glass, x + 8, y + 21, z + 6);
	locateBlock(glass, x + 8, y + 21, z + 7);

	locateBlock(glass, x + 1, y + 21, z);
	locateBlock(glass, x + 2, y + 21, z);
	locateBlock(glass, x + 3, y + 21, z);
	locateBlock(glass, x + 1, y + 21, z + 8);
	locateBlock(glass, x + 2, y + 21, z + 8);
	locateBlock(glass, x + 3, y + 21, z + 8);

	locateBlock(glass, x + 7, y + 21, z);
	locateBlock(glass, x + 5, y + 21, z);
	locateBlock(glass, x + 6, y + 21, z);
	locateBlock(glass, x + 7, y + 21, z + 8);
	locateBlock(glass, x + 5, y + 21, z + 8);
	locateBlock(glass, x + 6, y + 21, z + 8);

	//À¯¸®Ãþ 25
	locateBlock(bone, x, y + 25, z);
	locateBlock(bone, x, y + 25, z + 4);
	locateBlock(bone, x, y + 25, z + 8);
	locateBlock(bone, x + 4, y + 25, z);
	locateBlock(bone, x + 4, y + 25, z + 8);
	locateBlock(bone, x + 8, y + 25, z);
	locateBlock(bone, x + 8, y + 25, z + 4);
	locateBlock(bone, x + 8, y + 25, z + 8);
	locateBlock(bone, x + 4, y + 25, z);
	locateBlock(bone, x + 4, y + 25, z + 8);

	locateBlock(glass, x, y + 25, z + 1);
	locateBlock(glass, x, y + 25, z + 2);
	locateBlock(glass, x, y + 25, z + 3);
	locateBlock(glass, x, y + 25, z + 5);
	locateBlock(glass, x, y + 25, z + 6);
	locateBlock(glass, x, y + 25, z + 7);

	locateBlock(glass, x + 8, y + 25, z + 1);
	locateBlock(glass, x + 8, y + 25, z + 2);
	locateBlock(glass, x + 8, y + 25, z + 3);
	locateBlock(glass, x + 8, y + 25, z + 5);
	locateBlock(glass, x + 8, y + 25, z + 6);
	locateBlock(glass, x + 8, y + 25, z + 7);

	locateBlock(glass, x + 1, y + 25, z);
	locateBlock(glass, x + 2, y + 25, z);
	locateBlock(glass, x + 3, y + 25, z);
	locateBlock(glass, x + 1, y + 25, z + 8);
	locateBlock(glass, x + 2, y + 25, z + 8);
	locateBlock(glass, x + 3, y + 25, z + 8);

	locateBlock(glass, x + 7, y + 25, z);
	locateBlock(glass, x + 5, y + 25, z);
	locateBlock(glass, x + 6, y + 25, z);
	locateBlock(glass, x + 7, y + 25, z + 8);
	locateBlock(glass, x + 5, y + 25, z + 8);
	locateBlock(glass, x + 6, y + 25, z + 8);
}

void house_merge() {
	int arr_x[16] = { 475, 490, 502, 512, 475, 490, 502, 512, 475, 490, 502, 512, 475, 490, 502, 512 };
	int arr_z[16] = { 392, 392, 392, 392, 403, 403, 403, 403, 414, 414, 414, 414, 425, 425, 425, 425 };

	for (int i = 0; i <= 15; i++) {
		house(arr_x[i], 4, arr_z[i]);
	}
}