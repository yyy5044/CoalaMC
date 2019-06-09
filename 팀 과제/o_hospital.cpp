#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

void hospital() {

	int x1 = 124, y1 = 4, z1 = 30, x2 = 164, y2 = 44, z2 = 60;
	int X1, Y1, Z1, X2, Y2, Z2;

	BlockID air = createBlock(BLOCK_AIR);
	BlockID stone = createBlock(BLOCK_NETHER_QUARTZ);
	BlockID glass = createBlock(BLOCK_GLASS);
	WoolID black = createWool(COLOR_BLACK);

	X1 = x1 > x2 ? x2 : x1; //Àý´ñ°ª È¿°ú¸¦ À§ÇÑ ÁÂÇ¥ ºñ±³
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	for (int j = 0; j <= 15; j++) {
		//x ¾Õ µÚ
		for (int i = 0; i <= 34; i++) {
			locateBlock(stone, X1 + i, Y1 + 2 * j, Z1 + 26);
		}
		for (int i = 0; i <= 34; i++) {
			locateBlock(stone, X1 + i, Y1 + 2 * j, Z1);
		}
		//y ÁÂ ¿ì
		for (int i = 0; i <= 26; i++) {
			locateBlock(stone, X1, Y1 + 2 * j, Z1 + i);
		}
		for (int i = 0; i <= 26; i++) {
			locateBlock(stone, X1 + 34, Y1 + 2 * j, Z1 + i);
		}
	}

	for (int j = 0; j <= 14; j++) {
		//x ¾Õ µÚ ±³Â÷ ½×±â
		for (int i = 0; i <= 17; i++) {
			locateBlock(stone, X1 + 2 * i, Y1 + 2 * j + 1, Z1 + 26);
		}
		for (int i = 0; i <= 17; i++) {
			locateBlock(stone, X1 + 2 * i, Y1 + 2 * j + 1, Z1);
		}
		//y ÁÂ ¿ì ±³Â÷ ½×±â
		for (int i = 0; i <= 13; i++) {
			locateBlock(stone, X1, Y1 + 2 * j + 1, Z1 + 2 * i);
		}
		for (int i = 0; i <= 13; i++) {
			locateBlock(stone, X1 + 34, Y1 + 2 * j + 1, Z1 + 2 * i);
		}
	}

	for (int j = 0; j <= 22; j++) {
		//x ¾Õ µÚ ±³Â÷ ½×±â
		for (int i = 0; i <= 9; i++) {
			locateBlock(stone, X1 + 2 * i + 8, Y1 + 2 * j + 29, Z1 + 26);
		}
		for (int i = 0; i <= 9; i++) {
			locateBlock(stone, X1 + 2 * i + 8, Y1 + 2 * j + 29, Z1);
		}
		//y ÁÂ ¿ì ±³Â÷ ½×±â
		for (int i = 0; i <= 5; i++) {
			locateBlock(stone, X1, Y1 + 2 * j + 29, Z1 + 2 * i + 8);
		}
		for (int i = 0; i <= 5; i++) {
			locateBlock(stone, X1 + 34, Y1 + 2 * j + 29, Z1 + 2 * i + 8);
		}
	}

	for (int j = 0; j <= 23; j++) {
		//x ¾Õ µÚ
		for (int i = 0; i <= 20; i++) {
			locateBlock(stone, X1 + i + 7, Y1 + 2 * j + 30, Z1 + 26);
		}
		for (int i = 0; i <= 20; i++) {
			locateBlock(stone, X1 + i + 7, Y1 + 2 * j + 30, Z1);
		}
		//y ÁÂ ¿ì
		for (int i = 0; i <= 12; i++) {
			locateBlock(stone, X1, Y1 + 2 * j + 30, Z1 + i + 7);
		}
		for (int i = 0; i <= 12; i++) {
			locateBlock(stone, X1 + 34, Y1 + 2 * j + 30, Z1 + i + 7);
		}
	}

	//´ë°¢
	for (int j = 0; j <= 45; j++) {
		for (int i = 0; i <= 6; i++) {
			locateBlock(stone, X1 + 6 - i, Y1 + j + 29, Z1 + i);
		}
		for (int i = 0; i <= 6; i++) {
			locateBlock(stone, X1 + i, Y1 + j + 29, Z1 + 20 + i);
		}
		for (int i = 0; i <= 6; i++) {
			locateBlock(stone, X1 + 34 - i, Y1 + j + 29, Z1 + 20 + i);
		}
		for (int i = 0; i <= 6; i++) {
			locateBlock(stone, X1 + 28 + i, Y1 + j + 29, Z1 + i);
		}
	}
	//Å×µÎ¸®
	for (int i = 0; i <= 6; i++) {
		locateBlock(stone, X1 + 6 - i, Y1 + 76, Z1 + i);
	}
	for (int i = 0; i <= 6; i++) {
		locateBlock(stone, X1 + i, Y1 + 76, Z1 + 20 + i);
	}
	for (int i = 0; i <= 6; i++) {
		locateBlock(stone, X1 + 34 - i, Y1 + 76, Z1 + 20 + i);
	}
	for (int i = 0; i <= 6; i++) {
		locateBlock(stone, X1 + 28 + i, Y1 + 76, Z1 + i);
	}

	//Ãþ
	for (int j = 0; j <= 24; j++) {
		for (int i = 0; i <= 32; i++) {
			locateBlock(black, X1 + 1 + i, Y1 + 30, Z1 + 1 + j);
		}
	}
	//²À´ë±â Ãþ
	for (int j = 0; j <= 24; j++) {
		for (int i = 0; i <= 22; i++) {
			locateBlock(black, X1 + 6 + i, Y1 + 74, Z1 + 1 + j);
		}
	}
	for (int j = 0; j <= 4; j++) {
		for (int i = 0; i <= 22 - 2 * j; i++) {
			locateBlock(black, X1 + 29 + j, Y1 + 74, Z1 + 2 + j + i);
		}
	}
	for (int j = 0; j <= 4; j++) {
		for (int i = 0; i <= 22 - 2 * j; i++) {
			locateBlock(black, X1 + 5 - j, Y1 + 74, Z1 + 2 + j + i);
		}
	}
	//¹®
	for (int j = 0; j <= 5; j++) {
		for (int i = 0; i <= 4; i++) {
			locateBlock(air, X1 + 15 + i, Y1 + j, Z1);
		}
	}
	for (int i = 0; i <= 4; i++) {
		locateBlock(stone, X1 + 14, Y1 + i, Z1 - 1);
	}
	for (int i = 0; i <= 4; i++) {
		locateBlock(stone, X1 + 20, Y1 + i, Z1 - 1);
	}
	locateBlock(stone, X1 + 15, Y1 + 5, Z1 - 1);
	locateBlock(stone, X1 + 19, Y1 + 5, Z1 - 1);
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 16 + i, Y1 + 6, Z1 - 1);
	}

}