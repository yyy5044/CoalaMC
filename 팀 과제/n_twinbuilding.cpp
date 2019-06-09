#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

void twinbuilding() {

	int x=130, y=4, z=120;

	BlockID glass = createBlock(BLOCK_GLASS);
	TerracottaID blue = createTerracotta(TERRACOTTA, COLOR_BLUE);
	

	//±æÂßÇÑ ±âµÕ
	for (int i = 0; i <= 48; i++) {
		locateTerracotta(blue, x, y + i, z + 5);
		locateTerracotta(blue, x, y + i, z + 10);
		locateTerracotta(blue, x + 15, y + i, z + 5);
		locateTerracotta(blue, x + 15, y + i, z + 10);

		locateTerracotta(blue, x + 1, y + i, z + 4);
		locateTerracotta(blue, x + 1, y + i, z + 11);
		locateTerracotta(blue, x + 14, y + i, z + 4);
		locateTerracotta(blue, x + 14, y + i, z + 11);

		locateTerracotta(blue, x + 4, y + i, z + 1);
		locateTerracotta(blue, x + 4, y + i, z + 14);
		locateTerracotta(blue, x + 11, y + i, z + 1);
		locateTerracotta(blue, x + 11, y + i, z + 14);

		locateTerracotta(blue, x + 5, y + i, z);
		locateTerracotta(blue, x + 10, y + i, z);
		locateTerracotta(blue, x + 5, y + i, z + 15);
		locateTerracotta(blue, x + 10, y + i, z + 15);
	}
	//ÆÄ¶û
	for (int i = 6; i <= 9; i++)
		for (int t = 0; t <= 24; t++) {
			locateTerracotta(blue, x, y + 2 * t, z + i);
			locateTerracotta(blue, x + 15, y + 2 * t, z + i);
		}

	for (int i = 6; i <= 9; i++)
		for (int t = 0; t <= 24; t++) {
			locateTerracotta(blue, x + i, y + 2 * t, z);
			locateTerracotta(blue, x + i, y + 2 * t, z + 15);
		}

	for (int t = 0; t <= 24; t++) {
		locateTerracotta(blue, x + 2, y + 2 * t, z + 3);
		locateTerracotta(blue, x + 3, y + 2 * t, z + 2);
		locateTerracotta(blue, x + 12, y + 2 * t, z + 2);
		locateTerracotta(blue, x + 13, y + 2 * t, z + 3);
		locateTerracotta(blue, x + 2, y + 2 * t, z + 12);
		locateTerracotta(blue, x + 3, y + 2 * t, z + 13);
		locateTerracotta(blue, x + 12, y + 2 * t, z + 13);
		locateTerracotta(blue, x + 13, y + 2 * t, z + 12);
	}

	//À¯¸®
	for (int i = 6; i <= 9; i++)
		for (int t = 0; t <= 23; t++) {
			locateTerracotta(glass, x, y + 1 + 2 * t, z + i);
			locateTerracotta(glass, x + 15, y + 1 + 2 * t, z + i);
		}

	for (int i = 6; i <= 9; i++)
		for (int t = 0; t <= 23; t++) {
			locateTerracotta(glass, x + i, y + 1 + 2 * t, z);
			locateTerracotta(glass, x + i, y + 1 + 2 * t, z + 15);
		}

	for (int t = 0; t <= 23; t++) {
		locateTerracotta(glass, x + 2, y + 1 + 2 * t, z + 3);
		locateTerracotta(glass, x + 3, y + 1 + 2 * t, z + 2);
		locateTerracotta(glass, x + 12, y + 1 + 2 * t, z + 2);
		locateTerracotta(glass, x + 13, y + 1 + 2 * t, z + 3);

		locateTerracotta(glass, x + 2, y + 1 + 2 * t, z + 12);
		locateTerracotta(glass, x + 3, y + 1 + 2 * t, z + 13);
		locateTerracotta(glass, x + 12, y + 1 + 2 * t, z + 13);
		locateTerracotta(glass, x + 13, y + 1 + 2 * t, z + 12);
	}

	//¶Ñ²±
	for (int i = 5; i <= 10; i++) {
		locateTerracotta(blue, x + i, y + 48, z);
		locateTerracotta(blue, x + i, y + 48, z + 15);
	}

	for (int i = 4; i <= 11; i++) {
		locateTerracotta(blue, x + i, y + 48, z + 1);
		locateTerracotta(blue, x + i, y + 48, z + 14);
	}

	for (int i = 3; i <= 12; i++) {
		locateTerracotta(blue, x + i, y + 48, z + 2);
		locateTerracotta(blue, x + i, y + 48, z + 13);
	}

	for (int i = 2; i <= 13; i++) {
		locateTerracotta(blue, x + i, y + 48, z + 3);
		locateTerracotta(blue, x + i, y + 48, z + 12);
	}

	for (int i = 1; i <= 14; i++) {
		locateTerracotta(blue, x + i, y + 48, z + 4);
		locateTerracotta(blue, x + i, y + 48, z + 11);
	}

	for (int i = 0; i <= 15; i++)
		for (int t = 5; t <= 10; t++) {
			locateTerracotta(blue, x + i, y + 48, z + t);
			locateTerracotta(blue, x + i, y + 48, z + t);
		}

	//½ÖµÕÀÌ (Z+13)
	int a = 29;

	//±æÂßÇÑ ±âµÕ
	for (int i = 0; i <= 48; i++) {
		locateTerracotta(blue, x, y + i, z + 5 + a);
		locateTerracotta(blue, x, y + i, z + 10 + a);
		locateTerracotta(blue, x + 15, y + i, z + 5 + a);
		locateTerracotta(blue, x + 15, y + i, z + 10 + a);

		locateTerracotta(blue, x + 1, y + i, z + 4 + a);
		locateTerracotta(blue, x + 1, y + i, z + 11 + a);
		locateTerracotta(blue, x + 14, y + i, z + 4 + a);
		locateTerracotta(blue, x + 14, y + i, z + 11 + a);

		locateTerracotta(blue, x + 4, y + i, z + 1 + a);
		locateTerracotta(blue, x + 4, y + i, z + 14 + a);
		locateTerracotta(blue, x + 11, y + i, z + 1 + a);
		locateTerracotta(blue, x + 11, y + i, z + 14 + a);

		locateTerracotta(blue, x + 5, y + i, z + a);
		locateTerracotta(blue, x + 10, y + i, z + a);
		locateTerracotta(blue, x + 5, y + i, z + 15 + a);
		locateTerracotta(blue, x + 10, y + i, z + 15 + a);
	}
	//ÆÄ¶û
	for (int i = 6; i <= 9; i++)
		for (int t = 0; t <= 24; t++) {
			locateTerracotta(blue, x, y + 2 * t, z + i + a);
			locateTerracotta(blue, x + 15, y + 2 * t, z + i + a);
		}

	for (int i = 6; i <= 9; i++)
		for (int t = 0; t <= 24; t++) {
			locateTerracotta(blue, x + i, y + 2 * t, z + a);
			locateTerracotta(blue, x + i, y + 2 * t, z + 15 + a);
		}

	for (int t = 0; t <= 24; t++) {
		locateTerracotta(blue, x + 2, y + 2 * t, z + 3 + a);
		locateTerracotta(blue, x + 3, y + 2 * t, z + 2 + a);
		locateTerracotta(blue, x + 12, y + 2 * t, z + 2 + a);
		locateTerracotta(blue, x + 13, y + 2 * t, z + 3 + a);
		locateTerracotta(blue, x + 2, y + 2 * t, z + 12 + a);
		locateTerracotta(blue, x + 3, y + 2 * t, z + 13 + a);
		locateTerracotta(blue, x + 12, y + 2 * t, z + 13 + a);
		locateTerracotta(blue, x + 13, y + 2 * t, z + 12 + a);
	}

	//À¯¸®
	for (int i = 6; i <= 9; i++)
		for (int t = 0; t <= 23; t++) {
			locateTerracotta(glass, x, y + 1 + 2 * t, z + i + a);
			locateTerracotta(glass, x + 15, y + 1 + 2 * t, z + i + a);
		}

	for (int i = 6; i <= 9; i++)
		for (int t = 0; t <= 23; t++) {
			locateTerracotta(glass, x + i, y + 1 + 2 * t, z + a);
			locateTerracotta(glass, x + i, y + 1 + 2 * t, z + 15 + a);
		}

	for (int t = 0; t <= 23; t++) {
		locateTerracotta(glass, x + 2, y + 1 + 2 * t, z + 3 + a);
		locateTerracotta(glass, x + 3, y + 1 + 2 * t, z + 2 + a);
		locateTerracotta(glass, x + 12, y + 1 + 2 * t, z + 2 + a);
		locateTerracotta(glass, x + 13, y + 1 + 2 * t, z + 3 + a);

		locateTerracotta(glass, x + 2, y + 1 + 2 * t, z + 12 + a);
		locateTerracotta(glass, x + 3, y + 1 + 2 * t, z + 13 + a);
		locateTerracotta(glass, x + 12, y + 1 + 2 * t, z + 13 + a);
		locateTerracotta(glass, x + 13, y + 1 + 2 * t, z + 12 + a);
	}

	//¶Ñ²±
	for (int i = 5; i <= 10; i++) {
		locateTerracotta(blue, x + i, y + 48, z + a);
		locateTerracotta(blue, x + i, y + 48, z + 15 + a);
	}

	for (int i = 4; i <= 11; i++) {
		locateTerracotta(blue, x + i, y + 48, z + 1 + a);
		locateTerracotta(blue, x + i, y + 48, z + 14 + a);
	}

	for (int i = 3; i <= 12; i++) {
		locateTerracotta(blue, x + i, y + 48, z + 2 + a);
		locateTerracotta(blue, x + i, y + 48, z + 13 + a);
	}

	for (int i = 2; i <= 13; i++) {
		locateTerracotta(blue, x + i, y + 48, z + 3 + a);
		locateTerracotta(blue, x + i, y + 48, z + 12 + a);
	}

	for (int i = 1; i <= 14; i++) {
		locateTerracotta(blue, x + i, y + 48, z + 4 + a);
		locateTerracotta(blue, x + i, y + 48, z + 11 + a);
	}

	for (int i = 0; i <= 15; i++)
		for (int t = 5; t <= 10; t++) {
			locateTerracotta(blue, x + i, y + 48, z + t + a);
			locateTerracotta(blue, x + i, y + 48, z + t + a);
		}

	//¿¬°áÅë·Î
	for (int i = 5; i <= 10; i++)
		for (int t = 16; t <= 28; t++) {
			locateTerracotta(blue, x + i, y + 30, z + t);
			locateTerracotta(blue, x + i, y + 36, z + t);
		}

	for (int i = 16; i <= 28; i++) {
		locateBlock(glass, x + 5, y + 31, z + i);
		locateBlock(glass, x + 5, y + 32, z + i);
		locateBlock(glass, x + 10, y + 31, z + i);
		locateBlock(glass, x + 10, y + 32, z + i);
		locateBlock(glass, x + 5, y + 34, z + i);
		locateBlock(glass, x + 5, y + 35, z + i);
		locateBlock(glass, x + 10, y + 34, z + i);
		locateBlock(glass, x + 10, y + 35, z + i);

		locateTerracotta(blue, x + 5, y + 33, z + i);
		locateTerracotta(blue, x + 10, y + 33, z + i);
	}
}