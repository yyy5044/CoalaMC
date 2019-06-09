#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

void company() {

	int x1 = 377, y1 = 4, z1 = 377, x2 = 417, y2 = 4, z2 = 417;
	int X1, Y1, Z1, X2, Y2, Z2;

	BlockID air = createBlock(BLOCK_AIR);
	BlockID stone = createBlock(BLOCK_NETHER_QUARTZ);
	BlockID ice = createIce(ICE);
	WoolID black = createWool(COLOR_BLACK);


	X1 = x1 > x2 ? x2 : x1; //절댓값 효과를 위한 좌표 비교
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	int side_x[4] = { 0, 12, 0, 12 };
	int side_z[4] = { 0, 0, 12, 12 };
	int num_x[9] = { 0, 12, 24, 0, 12, 24, 0, 12, 24 };
	int num_z[9] = { 0, 0, 0, 12, 12, 12, 24, 24, 24 };
	//1층
	for (int n = 0; n <= 8; n++) {
		//틀
		for (int j = 0; j <= 50; j++) {
			for (int i = 0; i <= 10; i++) {
				locateBlock(black, X1 + 1 + i + num_x[n], Y1 + 2 * j, Z1 + num_z[n]);
			}
			for (int i = 0; i <= 10; i++) {
				locateBlock(black, X1 + 1 + i + num_x[n], Y1 + 2 * j, Z1 + 12 + num_z[n]);
			}
			for (int i = 0; i <= 10; i++) {
				locateBlock(black, X1 + num_x[n], Y1 + 2 * j, Z1 + 1 + i + num_z[n]);
			}
			for (int i = 0; i <= 10; i++) {
				locateBlock(black, X1 + 12 + num_x[n], Y1 + 2 * j, Z1 + 1 + i + num_z[n]);
			}
		}
		for (int j = 0; j <= 49; j++) {
			for (int i = 0; i <= 10; i++) {
				locateBlock(ice, X1 + 1 + i + num_x[n], Y1 + 2 * j + 1, Z1 + num_z[n]);
			}
			for (int i = 0; i <= 10; i++) {
				locateBlock(ice, X1 + 1 + i + num_x[n], Y1 + 2 * j + 1, Z1 + 12 + num_z[n]);
			}
			for (int i = 0; i <= 10; i++) {
				locateBlock(ice, X1 + num_x[n], Y1 + 2 * j + 1, Z1 + 1 + i + num_z[n]);
			}
			for (int i = 0; i <= 10; i++) {
				locateBlock(ice, X1 + 12 + num_x[n], Y1 + 2 * j + 1, Z1 + 1 + i + num_z[n]);
			}
		}

		//모서리
		for (int j = 0; j <= 100; j++) {
			for (int i = 0; i <= 3; i++) {
				locateBlock(black, X1 + side_x[i] + num_x[n], Y1 + j, Z1 + side_z[i] + num_z[n]);
			}
		}

		//꼭대기
		for (int k = 0; k <= 10; k++) {
			for (int j = 0; j <= 10; j++) {
				for (int i = 0; i <= 2; i++) {
					locateBlock(black, X1 + 1 + j + num_x[n], Y1 + 100 + i, Z1 + 1 + k + num_z[n]);
				}
			}
		}
		for (int j = 0; j <= 12; j++) {
			for (int i = 0; i <= 12; i++) {
				locateBlock(black, X1 + i + num_x[n], Y1 + 103, Z1 + j + num_z[n]);
			}
		}
		//꼭대기 무늬
		for (int j = 0; j <= 3; j++) {
			for (int i = 0; i <= 3; i++) {
				locateBlock(black, X1 + 4 * i + num_x[n], Y1 + 100 + j, Z1 + num_z[n]);
			}
			for (int i = 0; i <= 3; i++) {
				locateBlock(black, X1 + 4 * i + num_x[n], Y1 + 100 + j, Z1 + 12 + num_z[n]);
			}
			for (int i = 0; i <= 3; i++) {
				locateBlock(black, X1 + num_x[n], Y1 + 100 + j, Z1 + 4 * i + num_z[n]);
			}
			for (int i = 0; i <= 3; i++) {
				locateBlock(black, X1 + 12 + num_x[n], Y1 + 100 + j, Z1 + 4 * i + num_z[n]);
			}

		}
	}

	//2층
	int num2_x[7] = { 0, 12, 0, 12, 24, 12, 24 };
	int num2_z[7] = { 0, 0, 12, 12, 12, 24, 24 };

	for (int n = 0; n <= 6; n++) {
		//틀
		for (int j = 0; j <= 13; j++) {
			for (int i = 0; i <= 10; i++) {
				locateBlock(black, X1 + 1 + i + num2_x[n], Y1 + 2 * j + 104, Z1 + num2_z[n]);
			}
			for (int i = 0; i <= 10; i++) {
				locateBlock(black, X1 + 1 + i + num2_x[n], Y1 + 2 * j + 104, Z1 + 12 + num2_z[n]);
			}
			for (int i = 0; i <= 10; i++) {
				locateBlock(black, X1 + num2_x[n], Y1 + 2 * j + 104, Z1 + 1 + i + num2_z[n]);
			}
			for (int i = 0; i <= 10; i++) {
				locateBlock(black, X1 + 12 + num2_x[n], Y1 + 2 * j + 104, Z1 + 1 + i + num2_z[n]);
			}
		}
		for (int j = 0; j <= 12; j++) {
			for (int i = 0; i <= 10; i++) {
				locateBlock(ice, X1 + 1 + i + num2_x[n], Y1 + 2 * j + 105, Z1 + num2_z[n]);
			}
			for (int i = 0; i <= 10; i++) {
				locateBlock(ice, X1 + 1 + i + num2_x[n], Y1 + 2 * j + 105, Z1 + 12 + num2_z[n]);
			}
			for (int i = 0; i <= 10; i++) {
				locateBlock(ice, X1 + num2_x[n], Y1 + 2 * j + 105, Z1 + 1 + i + num2_z[n]);
			}
			for (int i = 0; i <= 10; i++) {
				locateBlock(ice, X1 + 12 + num2_x[n], Y1 + 2 * j + 105, Z1 + 1 + i + num2_z[n]);
			}
		}

		//모서리
		for (int j = 0; j <= 25; j++) {
			for (int i = 0; i <= 3; i++) {
				locateBlock(black, X1 + side_x[i] + num2_x[n], Y1 + 104 + j, Z1 + side_z[i] + num2_z[n]);
			}
		}

		//꼭대기
		for (int k = 0; k <= 10; k++) {
			for (int j = 0; j <= 10; j++) {
				for (int i = 0; i <= 2; i++) {
					locateBlock(black, X1 + 1 + j + num2_x[n], Y1 + 130 + i, Z1 + 1 + k + num2_z[n]);
				}
			}
		}
		for (int j = 0; j <= 12; j++) {
			for (int i = 0; i <= 12; i++) {
				locateBlock(black, X1 + i + num2_x[n], Y1 + 133, Z1 + j + num2_z[n]);
			}
		}
		//꼭대기 무늬
		for (int j = 0; j <= 3; j++) {
			for (int i = 0; i <= 3; i++) {
				locateBlock(black, X1 + 4 * i + num2_x[n], Y1 + 130 + j, Z1 + num2_z[n]);
			}
			for (int i = 0; i <= 3; i++) {
				locateBlock(black, X1 + 4 * i + num2_x[n], Y1 + 130 + j, Z1 + 12 + num2_z[n]);
			}
			for (int i = 0; i <= 3; i++) {
				locateBlock(black, X1 + num2_x[n], Y1 + 130 + j, Z1 + 4 * i + num2_z[n]);
			}
			for (int i = 0; i <= 3; i++) {
				locateBlock(black, X1 + 12 + num2_x[n], Y1 + 130 + j, Z1 + 4 * i + num2_z[n]);
			}

		}
	}

	//3층
	int num3_x[5] = { 12, 0, 12, 24, 12 };
	int num3_z[5] = { 0, 12, 12, 12, 24 };

	for (int n = 0; n <= 4; n++) {
		//틀
		for (int j = 0; j <= 13; j++) {
			for (int i = 0; i <= 10; i++) {
				locateBlock(black, X1 + 1 + i + num3_x[n], Y1 + 2 * j + 134, Z1 + num3_z[n]);
			}
			for (int i = 0; i <= 10; i++) {
				locateBlock(black, X1 + 1 + i + num3_x[n], Y1 + 2 * j + 134, Z1 + 12 + num3_z[n]);
			}
			for (int i = 0; i <= 10; i++) {
				locateBlock(black, X1 + num3_x[n], Y1 + 2 * j + 134, Z1 + 1 + i + num3_z[n]);
			}
			for (int i = 0; i <= 10; i++) {
				locateBlock(black, X1 + 12 + num3_x[n], Y1 + 2 * j + 134, Z1 + 1 + i + num3_z[n]);
			}
		}
		for (int j = 0; j <= 12; j++) {
			for (int i = 0; i <= 10; i++) {
				locateBlock(ice, X1 + 1 + i + num3_x[n], Y1 + 2 * j + 135, Z1 + num3_z[n]);
			}
			for (int i = 0; i <= 10; i++) {
				locateBlock(ice, X1 + 1 + i + num3_x[n], Y1 + 2 * j + 135, Z1 + 12 + num3_z[n]);
			}
			for (int i = 0; i <= 10; i++) {
				locateBlock(ice, X1 + num3_x[n], Y1 + 2 * j + 135, Z1 + 1 + i + num3_z[n]);
			}
			for (int i = 0; i <= 10; i++) {
				locateBlock(ice, X1 + 12 + num3_x[n], Y1 + 2 * j + 135, Z1 + 1 + i + num3_z[n]);
			}
		}

		//모서리
		for (int j = 0; j <= 25; j++) {
			for (int i = 0; i <= 3; i++) {
				locateBlock(black, X1 + side_x[i] + num3_x[n], Y1 + 134 + j, Z1 + side_z[i] + num3_z[n]);
			}
		}

		//꼭대기
		for (int k = 0; k <= 10; k++) {
			for (int j = 0; j <= 10; j++) {
				for (int i = 0; i <= 2; i++) {
					locateBlock(black, X1 + 1 + j + num3_x[n], Y1 + 160 + i, Z1 + 1 + k + num3_z[n]);
				}
			}
		}
		for (int j = 0; j <= 12; j++) {
			for (int i = 0; i <= 12; i++) {
				locateBlock(black, X1 + i + num3_x[n], Y1 + 163, Z1 + j + num3_z[n]);
			}
		}
		//꼭대기 무늬
		for (int j = 0; j <= 3; j++) {
			for (int i = 0; i <= 3; i++) {
				locateBlock(black, X1 + 4 * i + num3_x[n], Y1 + 160 + j, Z1 + num3_z[n]);
			}
			for (int i = 0; i <= 3; i++) {
				locateBlock(black, X1 + 4 * i + num3_x[n], Y1 + 160 + j, Z1 + 12 + num3_z[n]);
			}
			for (int i = 0; i <= 3; i++) {
				locateBlock(black, X1 + num3_x[n], Y1 + 160 + j, Z1 + 4 * i + num3_z[n]);
			}
			for (int i = 0; i <= 3; i++) {
				locateBlock(black, X1 + 12 + num3_x[n], Y1 + 160 + j, Z1 + 4 * i + num3_z[n]);
			}

		}
	}

	//4층
	int num4_x[5] = { 12, 12 };
	int num4_z[5] = { 0, 12 };

	for (int n = 0; n <= 1; n++) {
		//틀
		for (int j = 0; j <= 15; j++) {
			for (int i = 0; i <= 10; i++) {
				locateBlock(black, X1 + 1 + i + num4_x[n], Y1 + 2 * j + 164, Z1 + num4_z[n]);
			}
			for (int i = 0; i <= 10; i++) {
				locateBlock(black, X1 + 1 + i + num4_x[n], Y1 + 2 * j + 164, Z1 + 12 + num4_z[n]);
			}
			for (int i = 0; i <= 10; i++) {
				locateBlock(black, X1 + num4_x[n], Y1 + 2 * j + 164, Z1 + 1 + i + num4_z[n]);
			}
			for (int i = 0; i <= 10; i++) {
				locateBlock(black, X1 + 12 + num4_x[n], Y1 + 2 * j + 164, Z1 + 1 + i + num4_z[n]);
			}
		}
		for (int j = 0; j <= 14; j++) {
			for (int i = 0; i <= 10; i++) {
				locateBlock(ice, X1 + 1 + i + num4_x[n], Y1 + 2 * j + 165, Z1 + num4_z[n]);
			}
			for (int i = 0; i <= 10; i++) {
				locateBlock(ice, X1 + 1 + i + num4_x[n], Y1 + 2 * j + 165, Z1 + 12 + num4_z[n]);
			}
			for (int i = 0; i <= 10; i++) {
				locateBlock(ice, X1 + num4_x[n], Y1 + 2 * j + 165, Z1 + 1 + i + num4_z[n]);
			}
			for (int i = 0; i <= 10; i++) {
				locateBlock(ice, X1 + 12 + num4_x[n], Y1 + 2 * j + 165, Z1 + 1 + i + num4_z[n]);
			}
		}

		//모서리
		for (int j = 0; j <= 30; j++) {
			for (int i = 0; i <= 3; i++) {
				locateBlock(black, X1 + side_x[i] + num4_x[n], Y1 + 164 + j, Z1 + side_z[i] + num4_z[n]);
			}
		}

		//꼭대기
		for (int k = 0; k <= 10; k++) {
			for (int j = 0; j <= 10; j++) {
				for (int i = 0; i <= 2; i++) {
					locateBlock(black, X1 + 1 + j + num4_x[n], Y1 + 195 + i, Z1 + 1 + k + num4_z[n]);
				}
			}
		}
		for (int j = 0; j <= 12; j++) {
			for (int i = 0; i <= 12; i++) {
				locateBlock(black, X1 + i + num4_x[n], Y1 + 198, Z1 + j + num4_z[n]);
			}
		}
		//꼭대기 무늬
		for (int j = 0; j <= 3; j++) {
			for (int i = 0; i <= 3; i++) {
				locateBlock(black, X1 + 4 * i + num4_x[n], Y1 + 195 + j, Z1 + num4_z[n]);
			}
			for (int i = 0; i <= 3; i++) {
				locateBlock(black, X1 + 4 * i + num4_x[n], Y1 + 195 + j, Z1 + 12 + num4_z[n]);
			}
			for (int i = 0; i <= 3; i++) {
				locateBlock(black, X1 + num4_x[n], Y1 + 195 + j, Z1 + 4 * i + num4_z[n]);
			}
			for (int i = 0; i <= 3; i++) {
				locateBlock(black, X1 + 12 + num4_x[n], Y1 + 195 + j, Z1 + 4 * i + num4_z[n]);
			}

		}
	}



}