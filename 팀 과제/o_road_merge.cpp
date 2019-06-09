#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

void streetlamp(int x, int y, int z) {

	BlockID glowstone = createBlock(BLOCK_GLOWSTONE);
	BlockID stone = createBlock(BLOCK_STONE);
	FenceID oakfence = createFence(FENCE_OAK);

	locateBlock(stone, x, 4, z);
	locateFence(oakfence, x, 5, z);
	locateFence(oakfence, x , 6, z);
	locateFence(oakfence, x, 7, z);
	locateBlock(glowstone, x, 8, z);

}

void streetlamp_merge() {
	for (int j = 0; j <= 10; j++) {
		for (int i = 0; i <= 10; i++) {
			streetlamp(19 * i, 4, 0);
			streetlamp(0, 4, 19 * j);
		}
	}
	for (int j = 0; j <= 9; j++) {
		for (int i = 0; i <= 9; i++) {
			streetlamp(12 + 19 * i, 4, 12);
			streetlamp(12, 4, 12 + 19 * j);
		}
	}
}

void road1()
{
	int x1 = 0, y1 = 4, z1 = 17, x2 = 17, y2 = 4, z2 = 28;
	int X1, Y1, Z1, X2, Y2, Z2;

	int n = 43;
	int N = 6;

	BricksID brick = createBricks(BRICKS);
	SlabID stone_slab = createSlab(SLAB_STONE);
	WoolID black = createWool(COLOR_BLACK);
	WoolID white = createWool(COLOR_WHITE);

	X1 = x1 > x2 ? x2 : x1; //절댓값 효과를 위한 좌표 비교
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	Y1 = Y1 - 1;

	for (int l = 0; l <= N; l++) {
		for (int k = 0; k <= n; k++) {

			if (l == 3)
				continue;

			//왼쪽 인도
			for (int i = 0; i <= 3; i++) {
				for (int j = 0; j <= 12; j++) {
					locateBlock(brick, X1 + i + 87 * l, Y1, Z1 + j + 12 * k);
				}
			}
			for (int i = 0; i <= 1; i++) {
				streetlamp(X1 + 2 + 12 * i + 87 * l, Y1, Z1 + 12 * k);
			}
			
			//왼쪽 인도 방지턱
			for (int i = 0; i <= 0; i++) {
				for (int j = 0; j <= 12; j++) {
					locateBlock(stone_slab, X1 + 3 + i + 87 * l, Y1 + 1, Z1 + j + 12 * k);
				}
			}
			//오른쪽 인도
			for (int i = 0; i <= 3; i++) {
				for (int j = 0; j <= 12; j++) {
					locateBlock(brick, X1 + 13 + i + 87 * l, Y1, Z1 + j + 12 * k);
				}
			}
			//오른쪽 인도 방지턱
			for (int i = 0; i <= 0; i++) {
				for (int j = 0; j <= 12; j++) {
					locateBlock(stone_slab, X1 + 13 + i + 87 * l, Y1 + 1, Z1 + j + 12 * k);
				}
			}
			//도로 - 아스팔트
			for (int i = 0; i <= 8; i++) {
				for (int j = 0; j <= 12; j++) {
					locateBlock(black, X1 + 4 + i + 87 * l, Y1, Z1 + j + 12 * k);
				}
			}
			//도로 - 중앙선
			for (int n = 0; n <= 2; n++) {
				for (int i = 0; i <= 0; i++) {
					for (int j = 0; j <= 2; j++) {
						locateBlock(white, X1 + 8 + i + 87 * l, Y1, Z1 + 1 + 4 * n + j + 12 * k);
					}
				}
			}
		}
	}




}

void road2()
{
	int x1 = 17, y1 = 4, z1 = 0, x2 = 28, y2 = 4, z2 = 17;
	int X1, Y1, Z1, X2, Y2, Z2;

	int n = 43;
	int N = 6;

	BricksID brick = createBricks(BRICKS);
	SlabID stone_slab = createSlab(SLAB_STONE);
	WoolID black = createWool(COLOR_BLACK);
	WoolID white = createWool(COLOR_WHITE);





	X1 = x1 > x2 ? x2 : x1; //절댓값 효과를 위한 좌표 비교
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	Y1 = Y1 - 1;

	for (int l = 0; l <= N; l++) {
		for (int k = 0; k <= n; k++) {

			//왼쪽 인도
			for (int i = 0; i <= 3; i++) {
				for (int j = 0; j <= 12; j++) {
					locateBlock(brick, X1 + j + 12 * k, Y1, Z1 + i + 87 * l);
				}
			}
			for (int i = 0; i <= 1; i++) {
				streetlamp(X1 + 12 * k, Y1, Z1 + 2 + 12 * i + 87 * l);
			}
			//왼쪽 인도 방지턱
			for (int i = 0; i <= 0; i++) {
				for (int j = 0; j <= 12; j++) {
					locateBlock(stone_slab, X1 + j + 12 * k, Y1 + 1, Z1 + 3 + i + 87 * l);
				}
			}
			//오른쪽 인도
			for (int i = 0; i <= 3; i++) {
				for (int j = 0; j <= 12; j++) {
					locateBlock(brick, X1 + j + 12 * k, Y1, Z1 + 13 + i + 87 * l);
				}
			}
			//오른쪽 인도 방지턱
			for (int i = 0; i <= 0; i++) {
				for (int j = 0; j <= 12; j++) {
					locateBlock(stone_slab, X1 + j + 12 * k, Y1 + 1, Z1 + 13 + i + 87 * l);
				}
			}
			//도로 - 아스팔트
			for (int i = 0; i <= 8; i++) {
				for (int j = 0; j <= 12; j++) {
					locateBlock(black, X1 + j + 12 * k, Y1, Z1 + 4 + i + 87 * l);
				}
			}
			//도로 - 중앙선
			for (int n = 0; n <= 2; n++) {
				for (int i = 0; i <= 0; i++) {
					for (int j = 0; j <= 2; j++) {
						locateBlock(white, X1 + 1 + 4 * n + j + 12 * k, Y1, Z1 + 8 + i + 87 * l);
					}
				}


			}
		}
	}




}

void road3()
{
	int x1 = 0, y1 = 4, z1 = 0, x2 = 17, y2 = 4, z2 = 17;
	int X1, Y1, Z1, X2, Y2, Z2;



	BricksID brick = createBricks(BRICKS);
	SlabID stone_slab = createSlab(SLAB_STONE);
	WoolID black = createWool(COLOR_BLACK);
	WoolID white = createWool(COLOR_WHITE);





	X1 = x1 > x2 ? x2 : x1; //절댓값 효과를 위한 좌표 비교
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	Y1 = Y1 - 1;


	//바깥쪽 인도
	for (int i = 0; i <= 3; i++) {
		for (int j = 0; j <= 16 - i; j++) {
			locateBlock(brick, X1 + i + j, Y1, Z1 + i);
			locateBlock(brick, X1 + i, Y1, Z1 + i + j);
		}
	}
	//안쪽 인도
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 2; j++) {
			locateBlock(brick, X1 + 14 + i, Y1, Z1 + 14 + j);
		}
	}
	//바깥쪽 방지턱
	for (int i = 0; i <= 13; i++) {
		locateBlock(stone_slab, X1 + 3 + i, Y1 + 1, Z1 + 3);
		locateBlock(stone_slab, X1 + 3, Y1 + 1, Z1 + 3 + i);
	}
	//안쪽 방지턱
	for (int i = 0; i <= 3; i++) {
		locateBlock(stone_slab, X1 + 13 + i, Y1 + 1, Z1 + 13);
		locateBlock(stone_slab, X1 + 13, Y1 + 1, Z1 + 13 + i);
	}
	//아스팔트
	for (int i = 0; i <= 8; i++) {
		for (int j = 0; j <= 12; j++) {
			locateBlock(black, X1 + 4 + i, Y1, Z1 + 4 + j);
		}
	}
	for (int i = 0; i <= 3; i++) {
		for (int j = 0; j <= 8; j++) {
			locateBlock(black, X1 + 13 + i, Y1, Z1 + 4 + j);
		}
	}
	//중앙선
	for (int i = 0; i <= 8; i++) {
		locateBlock(white, X1 + 8 + i, Y1, Z1 + 8);
		locateBlock(white, X1 + 8, Y1, Z1 + 8 + i);
	}
	locateBlock(black, X1 + 8, Y1, Z1 + 13);
	locateBlock(black, X1 + 13, Y1, Z1 + 8);

}


void road4()
{
	int x1 = 0, y1 = 4, z1 = 90, x2 = 16, y2 = 4, z2 = 99;
	int X1, Y1, Z1, X2, Y2, Z2;

	int N = 5;

	BlockID air = createBlock(BLOCK_AIR);
	BricksID brick = createBricks(BRICKS);
	SlabID stone_slab = createSlab(SLAB_STONE);
	WoolID black = createWool(COLOR_BLACK);
	WoolID white = createWool(COLOR_WHITE);


	X1 = x1 > x2 ? x2 : x1; //절댓값 효과를 위한 좌표 비교
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	Y1 = Y1 - 1;

	for (int l = 0; l <= N; l++) {

		//air
		for (int k = 0; k <= 5; k++) {
			for (int j = 0; j <= 10; j++) {
				for (int i = 0; i <= 1; i++) {
					locateBlock(air, X1 + i + 13, Y1 + k, Z1 + j + 87 * l);
				}
			}
		}

		//바깥쪽 인도
		for (int i = 0; i <= 3; i++) {
			for (int j = 0; j <= 10; j++) {
				locateBlock(black, X1 + 13 + i, Y1, Z1 + j + 87 * l);
			}
		}

		//중앙선
		for (int i = 0; i <= 1; i++) {
			for (int j = 0; j <= 2; j++) {
				locateBlock(white, X1 + 10 + j + 4 * i, Y1, Z1 + 5 + 87 * l);
			}
		}
		//턱
		for (int i = 0; i <= 1; i++) {
			for (int j = 0; j <= 3; j++) {
				locateBlock(stone_slab, X1 + 13 + j, Y1 + 1, Z1 + 10 * i + 87 * l);
			}
		}
	}

}

void road5()
{
	int x1 = 90, y1 = 4, z1 = 0, x2 = 99, y2 = 4, z2 = 16;
	int X1, Y1, Z1, X2, Y2, Z2;

	int N = 5;

	BlockID air = createBlock(BLOCK_AIR);
	BricksID brick = createBricks(BRICKS);
	SlabID stone_slab = createSlab(SLAB_STONE);
	WoolID black = createWool(COLOR_BLACK);
	WoolID white = createWool(COLOR_WHITE);


	X1 = x1 > x2 ? x2 : x1; //절댓값 효과를 위한 좌표 비교
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	Y1 = Y1 - 1;

	for (int l = 0; l <= N; l++) {

		if (l == 2)
			continue;

		//air
		for (int k = 0; k <= 5; k++) {
			for (int j = 0; j <= 10; j++) {
				for (int i = 0; i <= 1; i++) {
					locateBlock(air, X1 + j + 87 * l, Y1 + 1 + k, Z1 + 13 + i);
				}
			}
		}
		//아스팔트
		for (int i = 0; i <= 3; i++) {
			for (int j = 0; j <= 10; j++) {
				locateBlock(black, X1 + j + 87 * l, Y1, Z1 + 13 + i);
			}
		}
	
		//중앙선
		for (int i = 0; i <= 1; i++) {
			for (int j = 0; j <= 2; j++) {
				locateBlock(white, X1 + 5 + 87 * l, Y1, Z1 + 10 + j + 4 * i);
			}
		}
		//턱
		for (int i = 0; i <= 1; i++) {
			for (int j = 0; j <= 3; j++) {
				locateBlock(stone_slab, X1 + 10 * i + 87 * l, Y1 + 1, Z1 + 13 + j);
			}
		}
	}

}


void road6()
{
	int x1 = 91, y1 = 4, z1 = 86, x2 = 99, y2 = 4, z2 = 104;
	int X1, Y1, Z1, X2, Y2, Z2;

	int N = 5;

	BlockID air = createBlock(BLOCK_AIR);
	BricksID brick = createBricks(BRICKS);
	SlabID stone_slab = createSlab(SLAB_STONE);
	WoolID black = createWool(COLOR_BLACK);
	WoolID white = createWool(COLOR_WHITE);


	X1 = x1 > x2 ? x2 : x1; //절댓값 효과를 위한 좌표 비교
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	Y1 = Y1 - 1;




	for (int l = 0; l <= N; l++) {
		for (int k = 0; k <= N; k++) {

			if (l == 2)
				continue;

			
			//air
			for (int c = 0; c <= 4; c++) {
				for (int b = 0; b <= 17; b++) {
					for (int a = 0; a <= 8; a++) {
						locateBlock(air, X1 + a + 87 * l, Y1 + 1 + c, Z1 + b + 87 * k);
					}
				}
			}
			//air
			for (int c = 0; c <= 4; c++) {
				for (int b = 0; b <= 8; b++) {
					for (int a = 0; a <= 14; a++) {
						locateBlock(air, X1 - 3 + a + 87 * l, Y1 + 1 + c, Z1 + 5 + b + 87 * k);
					}
				}
			}
			

			//아스팔트
			for (int i = 0; i <= 18; i++) {
				for (int j = 0; j <= 8; j++) {
					locateBlock(black, X1 + j + 87 * l, Y1, Z1 + i + 87 * k);
				}
			}
			//air
			for (int i = 0; i <= 16; i++) {
				for (int j = 0; j <= 8; j++) {
					locateBlock(air, X1 + j + 87 * l, Y1 + 1, Z1 + i + 87 * k);
				}
			}
			//air
			for (int i = 0; i <= 8; i++) {
				for (int j = 0; j <= 10; j++) {
					locateBlock(air, X1 - 1 + j + 87 * l, Y1 + 1, Z1 + 5 + i + 87 * k);
				}
			}
			//중앙선
			for (int i = 0; i <= 4; i++) {
				for (int j = 0; j <= 2; j++) {
					locateBlock(white, X1 + 4 + 87 * l, Y1, Z1 + j + 4 * i + 87 * k);
				}
			}
			for (int i = 0; i <= 2; i++) {
				for (int j = 0; j <= 2; j++) {
					locateBlock(white, X1 - 1 + j + 4 * i + 87 * l, Y1, Z1 + 9 + 87 * k);
				}
			}




		}
	}

}
void road_merge() {
	road1();
	road2();
	road3();
	road4();
	road5();
	road6();
}
