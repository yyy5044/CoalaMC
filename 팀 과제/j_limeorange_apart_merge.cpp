#define _CRT_SECURE_NO_WARNINGS
#include <CoalaMOD.h>

#pragma comment(lib,"CoalaMOD.lib")
#include <stdio.h>

void limeorange_apart(int x, int y, int z) {

	WoolID wool_white = createWool(COLOR_WHITE);
	WoolID wool_orange = createWool(COLOR_ORANGE);
	WoolID wool_lime = createWool(COLOR_LIME);
	BlockID glass = createBlock(BLOCK_GLASS);

	for (int a = 0; a < 21; a++) {
		for (int b = 0; b < 31; b++) {
			locateBlock(wool_white, x + a, 4 + b, z);
		}
		for (int a = 3; a < 21; a++) {
			for (int b = 3; b < 28; b++) {
				locateBlock(wool_orange, x + a, 4 + b, z);
			}
			for (int a = 1; a < 20; a = a + 2) {
				for (int b = 1; b < 30; b = b + 2) {
					locateBlock(glass, x + a, 4 + b, z);
				}
			}
		}
	}
	for (int a = 0; a < 21; a++) {
		for (int b = 0; b < 31; b++) {
			locateBlock(wool_white, x + a, 4 + b, z + 3);
		}
		for (int a = 3; a < 21; a++) {
			for (int b = 3; b < 28; b++) {
				locateBlock(wool_orange, x + a, 4 + b, z + 3);
			}
			for (int a = 1; a < 20; a = a + 2) {
				for (int b = 1; b < 30; b = b + 2) {
					locateBlock(glass, x + a, 4 + b, z + 3);
				}
			}
		}
	}
	for (int a = 0; a < 4; a++) {
		for (int b = 0; b < 31; b++) {
			locateBlock(wool_white, x, 4 + b, z + a);
		}
	}
	for (int a = 1; a < 3; a++) {
		for (int b = 0; b < 31; b++) {
			locateBlock(wool_white, x + 20, 4 + b, z + a);
		}
	}
	for (int a = -1; a < 5; a++) {
		for (int b = -1; b < 22; b++) {
			locateBlock(wool_white, x + b, 35, z + a);
		}
	}//건물 하나
	for (int a = 0; a < 21; a++) {
		for (int b = 0; b < 31; b++) {
			locateBlock(wool_white, x + a + 21, 4 + b, z - 1);
		}
		for (int a = 3; a < 21; a++) {
			for (int b = 3; b < 28; b++) {
				locateBlock(wool_lime, x + a + 21, 4 + b, z - 1);
			}
			for (int a = 1; a < 20; a = a + 2) {
				for (int b = 1; b < 30; b = b + 2) {
					locateBlock(glass, x + a + 21, 4 + b, z - 1);
				}
			}
		}
	}
	for (int a = 0; a < 21; a++) {
		for (int b = 0; b < 31; b++) {
			locateBlock(wool_white, x + a + 21, 4 + b, z + 4);
		}
		for (int a = 3; a < 21; a++) {
			for (int b = 3; b < 28; b++) {
				locateBlock(wool_lime, x + a + 21, 4 + b, z + 4);
			}
			for (int a = 1; a < 20; a = a + 2) {
				for (int b = 1; b < 30; b = b + 2) {
					locateBlock(glass, x + a + 21, 4 + b, z + 4);
				}
			}
		}
	}
	for (int a = 0; a < 5; a++) {
		for (int b = 0; b < 31; b++) {
			locateBlock(wool_white, x + 21, 4 + b, z + a);
		}
	}
	for (int a = 0; a < 4; a++) {
		for (int b = 0; b < 31; b++) {
			locateBlock(wool_white, x + 20 + 21, 4 + b, z + a);
		}
	}//옆면
	for (int a = -2; a < 7; a++) {
		for (int b = -1; b < 22; b++) {
			locateBlock(wool_white, x + b + 21, 35, z + a);
		}
	}//천장

}

void limeorange_apart_merge() {

	int arr_z[4] = {456, 476, 496, 516};

	for (int i = 0; i <= 3; i++) {
		limeorange_apart(108, 4, arr_z[i]);
	}
	
}