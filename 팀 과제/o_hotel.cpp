#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

void hotel() {
	int x1 = 370, y1 = 4, z1 = 30, x2 = 435, y2 = 4, z2 = 60;
	int X1, Y1, Z1, X2, Y2, Z2;

	BlockID air = createBlock(BLOCK_AIR);
	BlockID glass = createBlock(BLOCK_GLASS);
	WoolID black = createWool(COLOR_BLACK);


	X1 = x1 > x2 ? x2 : x1; //절댓값 효과를 위한 좌표 비교
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	//1층
	//2칸 - 양털
	for (int n = 0; n <= 2; n++) {
		//1
		for (int i = 0; i <= 14; i++) {
			locateBlock(black, X1, Y1 + n, Z1 + 5 + i);
		}
		//2 대각
		for (int i = 0; i <= 3; i++) {
			locateBlock(black, X1 + 1 + i, Y1 + n, Z1 + 20 + i);
		}
		//3
		for (int i = 0; i <= 51; i++) {
			locateBlock(black, X1 + 5 + i, Y1 + n, Z1 + 23);
		}
		//4
		for (int i = 0; i <= 7; i++) {
			locateBlock(black, X1 + 57, Y1 + n, Z1 + 22 - i);
		}
		//5
		for (int i = 0; i <= 1; i++) {
			locateBlock(black, X1 + 56, Y1 + n, Z1 + 14 - i);
		}
		//6
		locateBlock(black, X1 + 55, Y1 + n, Z1 + 12);
		//7
		for (int i = 0; i <= 1; i++) {
			locateBlock(black, X1 + 54 - i, Y1 + n, Z1 + 11);
		}
		//8
		for (int i = 0; i <= 34; i++) {
			locateBlock(black, X1 + 52 - i, Y1 + n, Z1 + 10);
		}
		//9 대각
		for (int i = 0; i <= 2; i++) {
			locateBlock(black, X1 + 17 - i, Y1 + n, Z1 + 10 - i);
		}
		//10
		for (int i = 0; i <= 2; i++) {
			locateBlock(black, X1 + 14, Y1 + n, Z1 + 7 - i);
		}
		//11
		for (int i = 0; i <= 1; i++) {
			locateBlock(black, X1 + 13, Y1 + n, Z1 + 4 - i);
		}
		//12
		locateBlock(black, X1 + 12, Y1 + n, Z1 + 2);
		//13
		for (int i = 0; i <= 1; i++) {
			locateBlock(black, X1 + 11 - i, Y1 + n, Z1 + 1);
		}
		//14
		for (int i = 0; i <= 4; i++) {
			locateBlock(black, X1 + 9 - i, Y1 + n, Z1);
		}
		//15
		for (int i = 0; i <= 1; i++) {
			locateBlock(black, X1 + 4 - i, Y1 + n, Z1 + 1);
		}
		//16
		locateBlock(black, X1 + 2, Y1 + n, Z1 + 2);
		//17
		for (int i = 0; i <= 1; i++) {
			locateBlock(black, X1 + 1, Y1 + n, Z1 + 3 + i);
		}
	}

	//유리
	for (int n = 0; n <= 23; n++) { //n 높이
		//1
		for (int i = 0; i <= 14; i++) {
			locateBlock(glass, X1, Y1 + 3 + 2 * n, Z1 + 5 + i);
		}
		//2 대각
		for (int i = 0; i <= 3; i++) {
			locateBlock(glass, X1 + 1 + i, Y1 + 3 + 2 * n, Z1 + 20 + i);
		}
		//3
		for (int i = 0; i <= 51; i++) {
			locateBlock(glass, X1 + 5 + i, Y1 + 3 + 2 * n, Z1 + 23);
		}
		//4
		for (int i = 0; i <= 7; i++) {
			locateBlock(glass, X1 + 57, Y1 + 3 + 2 * n, Z1 + 22 - i);
		}
		//5
		for (int i = 0; i <= 1; i++) {
			locateBlock(glass, X1 + 56, Y1 + 3 + 2 * n, Z1 + 14 - i);
		}
		//6
		locateBlock(glass, X1 + 55, Y1 + 3 + 2 * n, Z1 + 12);
		//7
		for (int i = 0; i <= 1; i++) {
			locateBlock(glass, X1 + 54 - i, Y1 + 3 + 2 * n, Z1 + 11);
		}
		//8
		for (int i = 0; i <= 34; i++) {
			locateBlock(glass, X1 + 52 - i, Y1 + 3 + 2 * n, Z1 + 10);
		}
		//9 대각
		for (int i = 0; i <= 2; i++) {
			locateBlock(glass, X1 + 17 - i, Y1 + 3 + 2 * n, Z1 + 10 - i);
		}
		//10
		for (int i = 0; i <= 2; i++) {
			locateBlock(glass, X1 + 14, Y1 + 3 + 2 * n, Z1 + 7 - i);
		}
		//11
		for (int i = 0; i <= 1; i++) {
			locateBlock(glass, X1 + 13, Y1 + 3 + 2 * n, Z1 + 4 - i);
		}
		//12
		locateBlock(glass, X1 + 12, Y1 + 3 + 2 * n, Z1 + 2);
		//13
		for (int i = 0; i <= 1; i++) {
			locateBlock(glass, X1 + 11 - i, Y1 + 3 + 2 * n, Z1 + 1);
		}
		//14
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 9 - i, Y1 + 3 + 2 * n, Z1);
		}
		//15
		for (int i = 0; i <= 1; i++) {
			locateBlock(glass, X1 + 4 - i, Y1 + 3 + 2 * n, Z1 + 1);
		}
		//16
		locateBlock(glass, X1 + 2, Y1 + 3 + 2 * n, Z1 + 2);
		//17
		for (int i = 0; i <= 1; i++) {
			locateBlock(glass, X1 + 1, Y1 + 3 + 2 * n, Z1 + 3 + i);
		}
	}

	//양털
	for (int n = 0; n <= 23; n++) { //n 높이
		//1
		for (int i = 0; i <= 14; i++) {
			locateBlock(black, X1, Y1 + 4 + 2 * n, Z1 + 5 + i);
		}
		//2 대각
		for (int i = 0; i <= 3; i++) {
			locateBlock(black, X1 + 1 + i, Y1 + 4 + 2 * n, Z1 + 20 + i);
		}
		//3
		for (int i = 0; i <= 51; i++) {
			locateBlock(black, X1 + 5 + i, Y1 + 4 + 2 * n, Z1 + 23);
		}
		//4
		for (int i = 0; i <= 7; i++) {
			locateBlock(black, X1 + 57, Y1 + 4 + 2 * n, Z1 + 22 - i);
		}
		//5
		for (int i = 0; i <= 1; i++) {
			locateBlock(black, X1 + 56, Y1 + 4 + 2 * n, Z1 + 14 - i);
		}
		//6
		locateBlock(black, X1 + 55, Y1 + 4 + 2 * n, Z1 + 12);
		//7
		for (int i = 0; i <= 1; i++) {
			locateBlock(black, X1 + 54 - i, Y1 + 4 + 2 * n, Z1 + 11);
		}
		//8
		for (int i = 0; i <= 34; i++) {
			locateBlock(black, X1 + 52 - i, Y1 + 4 + 2 * n, Z1 + 10);
		}
		//9 대각
		for (int i = 0; i <= 2; i++) {
			locateBlock(black, X1 + 17 - i, Y1 + 4 + 2 * n, Z1 + 10 - i);
		}
		//10
		for (int i = 0; i <= 2; i++) {
			locateBlock(black, X1 + 14, Y1 + 4 + 2 * n, Z1 + 7 - i);
		}
		//11
		for (int i = 0; i <= 1; i++) {
			locateBlock(black, X1 + 13, Y1 + 4 + 2 * n, Z1 + 4 - i);
		}
		//12
		locateBlock(black, X1 + 12, Y1 + 4 + 2 * n, Z1 + 2);
		//13
		for (int i = 0; i <= 1; i++) {
			locateBlock(black, X1 + 11 - i, Y1 + 4 + 2 * n, Z1 + 1);
		}
		//14
		for (int i = 0; i <= 4; i++) {
			locateBlock(black, X1 + 9 - i, Y1 + 4 + 2 * n, Z1);
		}
		//15
		for (int i = 0; i <= 1; i++) {
			locateBlock(black, X1 + 4 - i, Y1 + 4 + 2 * n, Z1 + 1);
		}
		//16
		locateBlock(black, X1 + 2, Y1 + 4 + 2 * n, Z1 + 2);
		//17
		for (int i = 0; i <= 1; i++) {
			locateBlock(black, X1 + 1, Y1 + 4 + 2 * n, Z1 + 3 + i);
		}
	}

	//양털
	for (int n = 0; n <= 2; n++) { //n 높이
		//1
		for (int i = 0; i <= 14; i++) {
			locateBlock(black, X1, Y1 + 51 + n, Z1 + 5 + i);
		}
		//2 대각
		for (int i = 0; i <= 3; i++) {
			locateBlock(black, X1 + 1 + i, Y1 + 51 + n, Z1 + 20 + i);
		}
		//3
		for (int i = 0; i <= 51; i++) {
			locateBlock(black, X1 + 5 + i, Y1 + 51 + n, Z1 + 23);
		}
		//4
		for (int i = 0; i <= 7; i++) {
			locateBlock(black, X1 + 57, Y1 + 51 + n, Z1 + 22 - i);
		}
		//5
		for (int i = 0; i <= 1; i++) {
			locateBlock(black, X1 + 56, Y1 + 51 + n, Z1 + 14 - i);
		}
		//6
		locateBlock(black, X1 + 55, Y1 + 51 + n, Z1 + 12);
		//7
		for (int i = 0; i <= 1; i++) {
			locateBlock(black, X1 + 54 - i, Y1 + 51 + n, Z1 + 11);
		}
		//8
		for (int i = 0; i <= 34; i++) {
			locateBlock(black, X1 + 52 - i, Y1 + 51 + n, Z1 + 10);
		}
		//9 대각
		for (int i = 0; i <= 2; i++) {
			locateBlock(black, X1 + 17 - i, Y1 + 51 + n, Z1 + 10 - i);
		}
		//10
		for (int i = 0; i <= 2; i++) {
			locateBlock(black, X1 + 14, Y1 + 51 + n, Z1 + 7 - i);
		}
		//11
		for (int i = 0; i <= 1; i++) {
			locateBlock(black, X1 + 13, Y1 + 51 + n, Z1 + 4 - i);
		}
		//12
		locateBlock(black, X1 + 12, Y1 + 51 + n, Z1 + 2);
		//13
		for (int i = 0; i <= 1; i++) {
			locateBlock(black, X1 + 11 - i, Y1 + 51 + n, Z1 + 1);
		}
		//14
		for (int i = 0; i <= 4; i++) {
			locateBlock(black, X1 + 9 - i, Y1 + 51 + n, Z1);
		}
		//15
		for (int i = 0; i <= 1; i++) {
			locateBlock(black, X1 + 4 - i, Y1 + 51 + n, Z1 + 1);
		}
		//16
		locateBlock(black, X1 + 2, Y1 + 51 + n, Z1 + 2);
		//17
		for (int i = 0; i <= 1; i++) {
			locateBlock(black, X1 + 1, Y1 + 51 + n, Z1 + 3 + i);
		}
	}

	//뚜껑
	for (int j = 0; j <= 7; j++) {
		for (int i = 0; i <= 52; i++) {
			locateBlock(black, X1 + 4 + i, Y1 + 53, Z1 + 15 + j);
		}
	}
	for (int j = 0; j <= 13; j++) {
		for (int i = 0; i <= 7; i++) {
			locateBlock(black, X1 + 4 + i, Y1 + 53, Z1 + 1 + j);
		}
	}
	for (int j = 0; j <= 4; j++) {
		for (int i = 0; i <= 40; i++) {
			locateBlock(black, X1 + 12 + i, Y1 + 53, Z1 + 10 + j);
		}
	}
	for (int j = 0; j <= 2; j++) {
		for (int i = 0; i <= 2; i++) {
			locateBlock(black, X1 + 53 + i, Y1 + 53, Z1 + 12 + j);
		}
	}
	for (int j = 0; j <= 6; j++) {
		for (int i = 0; i <= 1; i++) {
			locateBlock(black, X1 + 12 + i, Y1 + 53, Z1 + 3 + j);
		}
	}
	for (int j = 0; j <= 1; j++) {
		for (int i = 0; i <= 1; i++) {
			locateBlock(black, X1 + 14 + i, Y1 + 53, Z1 + 8 + j);
		}
	}
	for (int j = 0; j <= 19; j++) {
		for (int i = 0; i <= 1; i++) {
			locateBlock(black, X1 + 2 + i, Y1 + 53, Z1 + 2 + j);
		}
	}
	for (int i = 0; i <= 15; i++) {
		locateBlock(black, X1 + 1, Y1 + 53, Z1 + 4 + i);
	}

	//문
	for (int j = 0; j <= 1; j++) {
		for (int i = 0; i <= 3; i++) {
			locateBlock(black, X1 + 21, Y1 + i, Z1 + 9 + j);
		}
		for (int i = 0; i <= 3; i++) {
			locateBlock(black, X1 + 25, Y1 + i, Z1 + 9 + j);
		}
	}
	for (int i = 0; i <= 2; i++) {
		locateBlock(black, X1 + 22 + i, Y1 + 4, Z1 + 9);
	}
	for (int j = 0; j <= 3; j++) {
		for (int i = 0; i <= 2; i++) {
			locateBlock(air, X1 + 22 + i, Y1 + j, Z1 + 10);
		}
	}


}


