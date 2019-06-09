#define _CRT_SECURE_NO_WARNINGS
#include <CoalaMOD.h>
#pragma comment(lib,"CoalaMOD.lib")
#include <stdio.h>

void gasstation(int x, int y, int z) {

	BlockID air = createBlock(BLOCK_AIR);
	BlockID glass = createBlock(BLOCK_GLASS);
	WoolID wool_white = createWool(COLOR_WHITE);
	WoolID wool_orange = createWool(COLOR_ORANGE);
	WoolID wool_blue = createWool(COLOR_BLUE);
	WoolID wool_gray = createWool(COLOR_GRAY);

	
	
	for (int a = 0; a < 13; a++) {
		{for (int c = 0; c < 5; c++)
			for (int b = 0; b < 11; b++) {
				locateBlock(wool_white, x + a, 4 + c, b + z);
			}
		}
	}
	for (int a = 1; a < 12; a++) {
		for (int b = 1; b < 10; b++) {
			for (int c = 0; c < 5; c++) {
				locateBlock(air, x + a, 4 + c, b + z);
			}
		}
	}
	for (int a = -1; a < 14; a++) {
		for (int b = -1; b < 12; b++) {
			locateBlock(wool_orange, x + a, 9, z + b);
		}
	}
	for (int a = 0; a < 13; a++) {
		for (int b = 0; b < 11; b++) {
			locateBlock(air, x + a, 9, z + b);
		}
	}
	for (int a = -1; a < 14; a++) {
		for (int b = -1; b < 12; b++) {
			locateBlock(wool_blue, x + a, 10, z + b);
		}
	}
	for (int a = 0; a < 13; a++) {
		for (int b = 0; b < 11; b++) {
			locateBlock(air, x + a, 10, z + b);
		}
	}
	for (int a = 0; a < 13; a++) {
		for (int b = 0; b < 11; b++) {
			locateBlock(wool_white, x + a, 11, z + b);
		}
	}//
	for (int a = 1; a < 12; a = a + 2) {
		for (int b = 6; b < 8; b++) {
			locateBlock(glass, x + a, b, z);
		}
	}
	for (int a = 1; a < 10; a = a + 2) {
		for (int b = 6; b < 8; b++) {
			locateBlock(glass, x, b, z + a);
		}
	}
	for (int a = 1; a < 10; a = a + 2) {
		for (int b = 6; b < 8; b++) {
			locateBlock(glass, x + 12, b, z + a);
		}
	}
	for (int a = 1; a < 12; a = a + 2) {
		for (int b = 6; b < 8; b++) {
			locateBlock(glass, x + a, b, z + 10);
		}
	}//유리 설치
	locateBlock(wool_gray, x, 12, z);
	locateBlock(wool_gray, x, 13, z);
	locateBlock(wool_gray, x, 14, z);

	locateBlock(wool_gray, x, 12, z + 10);
	locateBlock(wool_gray, x, 13, z + 10);
	locateBlock(wool_gray, x, 14, z + 10);
	for (int a = -3; a < 14; a++) {
		locateBlock(wool_orange, x, 15, z + a);
	}
	for (int a = -3; a < 14; a++) {
		for (int b = 0; b < 17; b++) {
			locateBlock(wool_orange, x - b, 15, z + a);
		}
	}
	for (int a = -3; a < 14; a++) {
		for (int b = 0; b < 17; b++) {
			locateBlock(wool_blue, x - b, 16, z + a);
		}
	}
	for (int a = 0; a < 11; a++) {
		locateBlock(wool_gray, x - 14, 4 + a, z - 1);
	}
	for (int a = 0; a < 11; a++) {
		locateBlock(wool_gray, x - 14, 4 + a, z + 11);
	}
	for (int a = -17; a < 17; a++) {
		for (int b = -4; b < 15; b++) {
			locateBlock(wool_white, x + a, 3, b + z);
		}
	}
	locateBlock(wool_gray, x - 11, 4, z + 2);
	locateBlock(wool_orange, x - 11, 5, z + 2);
	locateBlock(wool_gray, x - 12, 4, z + 8);
	locateBlock(wool_orange, x - 12, 5, z + 8);
	locateBlock(wool_gray, x - 7, 4, z + 8);
	locateBlock(wool_orange, x - 7, 5, z + 8);
	locateBlock(wool_gray, x - 7, 4, z + 2);
	locateBlock(wool_orange, x - 7, 5, z + 2);//주유소

}