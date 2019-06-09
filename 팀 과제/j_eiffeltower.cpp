#define _CRT_SECURE_NO_WARNINGS
#include <CoalaMOD.h>

#pragma comment(lib,"CoalaMOD.lib")
#include <stdio.h>

void eiffeltower() {


	BlockID air = createBlock(BLOCK_AIR);
	BlockID stone = createBlock(BLOCK_STONE);
	BlockID grass = createBlock(BLOCK_GRASS);
	BlockID glowstone = createBlock(BLOCK_GLOWSTONE);
	FenceID darkoakfence = createFence(FENCE_DARK_OAK);


	int x = 377, y = 4, z = 208;
	
	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 10; k++) {
			for (int t = 0; t < 2; t++) {
				locateBlock(stone, x + i, 4 + t, z + k);
			}
		}
	}
	for (int i = 1; i < 9; i++) {
		for (int k = 1; k < 9; k++) {
			for (int t = 0; t < 2; t++) {
				locateBlock(air, x + i, 4 + t, z + k);
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 10; k++) {
			for (int t = 0; t < 2; t++) {
				locateBlock(stone, x + 25 + i, 4 + t, z + k);
			}
		}
	}
	for (int i = 1; i < 9; i++) {
		for (int k = 1; k < 9; k++) {
			for (int t = 0; t < 2; t++) {
				locateBlock(air, x + 25 + i, 4 + t, z + k);
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 10; k++) {
			for (int t = 0; t < 2; t++) {
				locateBlock(stone, x + i, 4 + t, z + 25 + k);
			}
		}
	}
	for (int i = 1; i < 9; i++) {
		for (int k = 1; k < 9; k++) {
			for (int t = 0; t < 2; t++) {
				locateBlock(air, x + i, 4 + t, z + 25 + k);
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 10; k++) {
			for (int t = 0; t < 2; t++) {
				locateBlock(stone, x + 25 + i, 4 + t, z + 25 + k);
			}
		}
	}
	for (int i = 1; i < 9; i++) {
		for (int k = 1; k < 9; k++) {
			for (int t = 0; t < 2; t++) {
				locateBlock(air, x + 25 + i, 4 + t, z + 25 + k);
			}
		}
	}
	//
	for (int a = 0; a < 10; a++) {
		locateBlock(stone, x + a, 6 + a, z + a);
	}
	for (int a = 0; a < 10; a++) {
		locateBlock(stone, x + 9 + a, 6 + a, z + a);
	}
	locateBlock(stone, x, y, z);
	for (int a = 0; a < 10; a++) {
		locateBlock(stone, x + a, 6 + a, z + 9 + a);
	}
	locateBlock(stone, x, y, z);
	for (int a = 0; a < 10; a++) {
		locateBlock(stone, x + a + 9, 6 + a, z + 9 + a);
	}//³×¸ð ÇÑÄ­
	for (int a = 0; a < 10; a++) {
		locateBlock(stone, x + a, 6 + a, z + 25 - a);
	}
	for (int a = 0; a < 10; a++) {
		locateBlock(stone, x + a + 9, 6 + a, z + 25 - a);
	}
	locateBlock(stone, x, y, z);
	for (int a = 0; a < 10; a++) {
		locateBlock(stone, x + a, 6 + a, z + 34 - a);
	}
	locateBlock(stone, x, y, z);
	for (int a = 0; a < 10; a++) {
		locateBlock(stone, x + a + 9, 6 + a, z + 34 - a);
	}//³×¸ð µÎÄ­
	for (int a = 0; a < 10; a++) {
		locateBlock(stone, x - a + 34, 6 + a, z + 34 - a);
	}
	for (int a = 0; a < 10; a++) {
		locateBlock(stone, x - a + 34, 6 + a, z + 25 - a);
	}
	for (int a = 0; a < 10; a++) {
		locateBlock(stone, x - a + 25, 6 + a, z + 34 - a);
	}
	for (int a = 0; a < 10; a++) {
		locateBlock(stone, x - a + 25, 6 + a, z + 25 - a);
	}//³×¸ð ¼¼Ä­
	for (int a = 0; a < 10; a++) {
		locateBlock(stone, x + 34 - a, 6 + a, z + a);
	}
	for (int a = 0; a < 10; a++) {
		locateBlock(stone, x + 34 - a, 6 + a, z + 9 + a);
	}
	for (int a = 0; a < 10; a++) {
		locateBlock(stone, x + 25 - a, 6 + a, z + a);
	}
	for (int a = 0; a < 10; a++) {
		locateBlock(stone, x + 25 - a, 6 + a, z + 9 + a);
	}//³×¸ð ³×Ä­
	for (int a = 9; a < 26; a++) {
		for (int b = 9; b < 26; b++) {
			locateBlock(stone, x + a, 16, z + b);
		}
	}//1Â÷ ¶Ñ²±
	for (int a = 0; a < 6; a++) {
		for (int i = 0; i < 4; i++) {
			locateBlock(stone, x + 9 + a, 17 + 3 * a + i, z + 9 + a);
		}
	}
	for (int a = 0; a < 6; a++) {
		for (int i = 0; i < 4; i++) {
			locateBlock(stone, x + 9 + a, 17 + 3 * a + i, z + 25 - a);
		}
	}for (int a = 0; a < 6; a++) {
		for (int i = 0; i < 4; i++) {
			locateBlock(stone, x + 25 - a, 17 + 3 * a + i, z + 9 + a);
		}
	}
	for (int a = 0; a < 6; a++) {
		for (int i = 0; i < 4; i++) {
			locateBlock(stone, x + 25 - a, 17 + 3 * a + i, z + 25 - a);
		}
	}//µÎ¹øÂ° ±âµÕ
	for (int a = 0; a < 7; a++) {
		for (int b = 0; b < 7; b++) {
			locateBlock(stone, x + 14 + a, 36, z + 14 + b);
		}
	}
	for (int a = 0; a < 7; a++) {
		for (int b = 0; b < 7; b++) {
			locateBlock(stone, x + 14 + a, 37, z + 14 + b);
		}
	}
	for (int a = 1; a < 6; a++) {
		for (int b = 1; b < 6; b++) {
			locateBlock(stone, x + 14 + a, 38, z + 14 + b);
		}
	}
	for (int a = 1; a < 6; a++) {
		for (int b = 1; b < 6; b++) {
			locateBlock(stone, x + 14 + a, 39, z + 14 + b);
		}
	}
	for (int a = 2; a < 5; a++) {
		for (int b = 2; b < 5; b++) {
			locateBlock(stone, x + 14 + a, 40, z + 14 + b);
		}
	}
	for (int a = 2; a < 5; a++) {
		for (int b = 2; b < 5; b++) {
			locateBlock(stone, x + 14 + a, 41, z + 14 + b);
		}
	}
	for (int t = 0; t < 3; t++) {
		for (int a = 3; a < 4; a++) {
			for (int b = 3; b < 4; b++) {
				locateBlock(stone, x + 14 + a, 42 + t, z + 14 + b);
			}
		}
	}
	locateBlock(stone, x, 6, z + 3);
	locateBlock(stone, x + 1, 7, z + 3);

	locateBlock(stone, x + 3, 6, z);
	locateBlock(stone, x + 3, 7, z + 1);
	for (int a = 0; a < 5; a++) {
		locateBlock(stone, x + 6, 6 + a, z + a);
	}
	for (int a = 0; a < 5; a++) {
		locateBlock(stone, x + a, 6 + a, z + 6);
	}
	locateBlock(stone, x, 6, z + 31);
	locateBlock(stone, x + 1, 7, z + 31);
	locateBlock(stone, x + 3, 6, z + 34);
	locateBlock(stone, x + 3, 7, z + 33);
	for (int a = 0; a < 5; a++) {
		locateBlock(stone, x + a, 6 + a, z + 28);
	}
	for (int a = 0; a < 5; a++) {
		locateBlock(stone, x + 6, 6 + a, z + 34 - a);
	}
	locateBlock(stone, x + 31, 6, z);
	locateBlock(stone, x + 31, 7, z + 1);
	locateBlock(stone, x + 34, 6, z + 3);
	locateBlock(stone, x + 33, 7, z + 3);
	for (int a = 0; a < 5; a++) {
		locateBlock(stone, x + 28, 6 + a, z + a);
	}
	for (int a = 0; a < 5; a++) {
		locateBlock(stone, x + 34 - a, 6 + a, z + 6);
	}
	locateBlock(stone, x + 31, 6, z + 34);
	locateBlock(stone, x + 31, 7, z + 33);
	locateBlock(stone, x + 34, 6, z + 31);
	locateBlock(stone, x + 33, 7, z + 31);
	for (int a = 0; a < 5; a++) {
		locateBlock(stone, x + 34 - a, 6 + a, z + 28);
	}
	for (int a = 0; a < 5; a++) {
		locateBlock(stone, x + 28, 6 + a, z + 34 - a);
	}
	for (int k = 0; k < 31; k++) {
		locateBlock(glowstone, x + 17, 15 + k, z + 17);
	}
	locateLava(createLava(1), x + 17, 15, z + 17);//¿ë¾Ï ¼³Ä¡
	for (int a = 0; a < 6; a++) {
		for (int i = 0; i < 4; i++) {
			locateBlock(stone, x + 17, 17 + 3 * a + i, z + 9 + a);
		}
	}
	for (int a = 0; a < 6; a++) {
		for (int i = 0; i < 4; i++) {
			locateBlock(stone, x + 17, 17 + 3 * a + i, z + 25 - a);
		}
	}
	for (int a = 0; a < 6; a++) {
		for (int i = 0; i < 4; i++) {
			locateBlock(stone, x + 25 - a, 17 + 3 * a + i, z + 17);
		}
	}
	for (int a = 0; a < 6; a++) {
		for (int i = 0; i < 4; i++) {
			locateBlock(stone, x + 9 + a, 17 + 3 * a + i, z + 17);
		}
	}
	locateLava(createLava(1), x + 17, 34, z + 17);//À§ÂÊ ¿ë¾Ï ¼³Ä¡
	locateFence(darkoakfence, x + 17, 44, z + 17);
	locateFence(darkoakfence, x + 17, 45, z + 17);
	locateFence(darkoakfence, x + 17, 46, z + 17);


	for (int a = 0; a < 37; a++) {
		for (int b = 0; b < 37; b++) {
			locateBlock(glowstone, x - 1 + a, 3, z - 1 + b);
		}
	}
	for (int a = 0; a < 35; a++) {
		for (int b = 0; b < 35; b++) {
			locateBlock(grass, x + a, 3, z + b);
		}
	}

}