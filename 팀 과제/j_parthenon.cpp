#define _CRT_SECURE_NO_WARNINGS
#include <CoalaMOD.h>

#pragma comment(lib,"CoalaMOD.lib")
#include <stdio.h>

void parthenon() {
	
	BlockID polished_diorite = createBlock(BLOCK_POLISHED_DIORITE);

	int x = 134, y = 4, z = 210;
	
	for (int i = 0; i < 20; i++) {
		for (int k = 0; k < 44; k++) {
			locateBlock(polished_diorite, x + i, 4, z + k);
		}
	}
	for (int i = 1; i < 19; i++) {
		for (int k = 1; k < 43; k++) {
			locateBlock(polished_diorite, x + i, 5, z + k);
		}
	}
	for (int i = 2; i < 18; i++) {
		for (int k = 2; k < 42; k++) {
			locateBlock(polished_diorite, x + i, 6, z + k);
		}
	}
	for (int q = 0; q < 13; q = q + 3) {
		for (int i = 3 + q; i < 5 + q; i++) {
			for (int k = 3; k < 5; k++) {
				for (int t = 0; t < 12; t++) {
					locateBlock(polished_diorite, x + i, 7 + t, z + k);
				}
			}
		}
	}
	for (int q = 0; q < 39; q = q + 3) {
		for (int k = 3 + q; k < 5 + q; k = k++) {
			for (int i = 3; i < 5; i++) {
				for (int t = 0; t < 12; t++) {
					locateBlock(polished_diorite, x + i, 7 + t, z + k);
				}
			}
		}
	}
	for (int q = 0; q < 13; q = q + 3) {
		for (int i = 3 + q; i < 5 + q; i++) {
			for (int k = 3; k < 5; k++) {
				for (int t = 0; t < 12; t++) {
					locateBlock(polished_diorite, x + i, 7 + t, z + 36 + k);
				}
			}
		}
	}
	for (int q = 0; q < 39; q = q + 3) {
		for (int k = 3 + q; k < 5 + q; k = k++) {
			for (int i = 3; i < 5; i++) {
				for (int t = 0; t < 12; t++) {
					locateBlock(polished_diorite, x + 12 + i, 7 + t, z + k);
				}
			}
		}
	}
	for (int i = 0; i < 20; i++) {
		for (int k = 0; k < 44; k++) {
			locateBlock(polished_diorite, x + i, 18, z + k);
		}
	}
	for (int i = 1; i < 19; i++) {
		for (int k = 1; k < 43; k++) {
			locateBlock(polished_diorite, x + i, 19, z + k);
		}
	}
	for (int i = 2; i < 18; i++) {
		for (int k = 2; k < 42; k++) {
			locateBlock(polished_diorite, x + i, 20, z + k);
		}
	}

}