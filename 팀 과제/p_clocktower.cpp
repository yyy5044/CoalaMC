#include "stdio.h"
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

//좌표 바꿔 줘야함. xyz로 이따가 하자.

void PILLAR(int a, int b, int c) // 시계탑 반복되는 부분  높이 9, 한변 19
{
	BlockID concrete_white = createConcrete(COLOR_WHITE, 1);
	BlockID concrete_gray = createConcrete(COLOR_GRAY, 1);

	for (int i = 0; i < 17; i++) {
		for (int t = 0; t < 9; t++) {
			for (int k = 0; k < 17; k++) {
				locateBlock(concrete_gray, a + 1 + i, b + t, c + 1 + k); // 안쪽 직육면체
			}
		}
	}

	for (int i = 0; i < 17; i++) {
		for (int j = 0; j < 17; j++) {
			locateBlock(concrete_white, a + 1 + i, b + 9, c + 1 + j);     // 뚜껑
		}

	}


	for (int i = 0; i < 9; i++) {                    //흰색 겉 테두리
		locateBlock(concrete_white, a, b + i, c);
		locateBlock(concrete_white, a + 1, b + i, c);
		locateBlock(concrete_white, a + 2, b + i, c);

		locateBlock(concrete_white, a + 4, b + i, c);
		locateBlock(concrete_white, a + 6, b + i, c);
		locateBlock(concrete_white, a + 8, b + i, c);
		locateBlock(concrete_white, a + 10, b + i, c);
		locateBlock(concrete_white, a + 12, b + i, c);
		locateBlock(concrete_white, a + 14, b + i, c);
		locateBlock(concrete_white, a + 16, b + i, c);
		locateBlock(concrete_white, a + 17, b + i, c);
		locateBlock(concrete_white, a + 18, b + i, c);
		locateBlock(concrete_white, a + 18, b + i, c + 1);
		locateBlock(concrete_white, a + 18, b + i, c + 2);

		locateBlock(concrete_white, a + 1, b + i, c + 18);
		locateBlock(concrete_white, a + 2, b + i, c + 18);
		locateBlock(concrete_white, a + 4, b + i, c + 18);
		locateBlock(concrete_white, a + 6, b + i, c + 18);
		locateBlock(concrete_white, a + 8, b + i, c + 18);
		locateBlock(concrete_white, a + 10, b + i, c + 18);
		locateBlock(concrete_white, a + 12, b + i, c + 18);
		locateBlock(concrete_white, a + 14, b + i, c + 18);

		locateBlock(concrete_white, a + 16, b + i, c + 18);
		locateBlock(concrete_white, a + 17, b + i, c + 18);

		locateBlock(concrete_white, a + 18, b + i, c + 16);
		locateBlock(concrete_white, a + 18, b + i, c + 17);
		locateBlock(concrete_white, a + 18, b + i, c + 18);

		locateBlock(concrete_white, a, b + i, c);
		locateBlock(concrete_white, a, b + i, c + 1);
		locateBlock(concrete_white, a, b + i, c + 2);

		locateBlock(concrete_white, a, b + i, c + 4);
		locateBlock(concrete_white, a, b + i, c + 6);
		locateBlock(concrete_white, a, b + i, c + 8);
		locateBlock(concrete_white, a, b + i, c + 10);
		locateBlock(concrete_white, a, b + i, c + 12);
		locateBlock(concrete_white, a, b + i, c + 14);

		locateBlock(concrete_white, a, b + i, c + 16);
		locateBlock(concrete_white, a, b + i, c + 17);
		locateBlock(concrete_white, a, b + i, c + 18);

		locateBlock(concrete_white, a + 18, b + i, c + 4);
		locateBlock(concrete_white, a + 18, b + i, c + 6);
		locateBlock(concrete_white, a + 18, b + i, c + 8);
		locateBlock(concrete_white, a + 18, b + i, c + 10);
		locateBlock(concrete_white, a + 18, b + i, c + 12);
		locateBlock(concrete_white, a + 18, b + i, c + 14);

	}





}

void TOP(int a, int b, int c) // 시계탑 시계있는 부분
{
	BlockID concrete_white = createConcrete(COLOR_WHITE, 1);
	BlockID concrete_gray = createConcrete(COLOR_GRAY, 1);
	BlockID gold = createBlock(BLOCK_GOLD);

	for (int i = 0; i < 17; i++) {
		for (int t = 0; t < 9; t++) {
			for (int k = 0; k < 17; k++) {
				locateBlock(concrete_gray, a + 1 + i, b + t, c + 1 + k); // 안쪽 직육면체
			}
		}
	}

	for (int i = 0; i < 17; i++) {
		for (int j = 0; j < 17; j++) {
			locateBlock(concrete_white, a + 1 + i, b + 9, c + 1 + j);     // 뚜껑
		}

	}


	for (int i = 0; i < 9; i++) {                    //흰색 겉 테두리
		locateBlock(concrete_white, a, b + i, c);
		locateBlock(concrete_white, a + 1, b + i, c);
		locateBlock(concrete_white, a + 2, b + i, c);

		locateBlock(concrete_white, a + 4, b + i, c);
		locateBlock(concrete_white, a + 6, b + i, c);
		locateBlock(concrete_white, a + 8, b + i, c);
		locateBlock(concrete_white, a + 10, b + i, c);
		locateBlock(concrete_white, a + 12, b + i, c);
		locateBlock(concrete_white, a + 14, b + i, c);
		locateBlock(concrete_white, a + 16, b + i, c);
		locateBlock(concrete_white, a + 17, b + i, c);
		locateBlock(concrete_white, a + 18, b + i, c);
		locateBlock(concrete_white, a + 18, b + i, c + 1);
		locateBlock(concrete_white, a + 18, b + i, c + 2);

		locateBlock(concrete_white, a + 1, b + i, c + 18);
		locateBlock(concrete_white, a + 2, b + i, c + 18);
		locateBlock(concrete_white, a + 4, b + i, c + 18);
		locateBlock(concrete_white, a + 6, b + i, c + 18);
		locateBlock(concrete_white, a + 8, b + i, c + 18);
		locateBlock(concrete_white, a + 10, b + i, c + 18);
		locateBlock(concrete_white, a + 12, b + i, c + 18);
		locateBlock(concrete_white, a + 14, b + i, c + 18);

		locateBlock(concrete_white, a + 16, b + i, c + 18);
		locateBlock(concrete_white, a + 17, b + i, c + 18);

		locateBlock(concrete_white, a + 18, b + i, c + 16);
		locateBlock(concrete_white, a + 18, b + i, c + 17);
		locateBlock(concrete_white, a + 18, b + i, c + 18);

		locateBlock(concrete_white, a, b + i, c);
		locateBlock(concrete_white, a, b + i, c + 1);
		locateBlock(concrete_white, a, b + i, c + 2);

		locateBlock(concrete_white, a, b + i, c + 4);
		locateBlock(concrete_white, a, b + i, c + 14);

		locateBlock(concrete_white, a, b + i, c + 16);
		locateBlock(concrete_white, a, b + i, c + 17);
		locateBlock(concrete_white, a, b + i, c + 18);

		locateBlock(concrete_white, a + 18, b + i, c + 4);
		locateBlock(concrete_white, a + 18, b + i, c + 6);
		locateBlock(concrete_white, a + 18, b + i, c + 8);
		locateBlock(concrete_white, a + 18, b + i, c + 10);
		locateBlock(concrete_white, a + 18, b + i, c + 12);
		locateBlock(concrete_white, a + 18, b + i, c + 14);

	}

	//여기부터 시계바늘부분

	locateBlock(gold, a, b + 4, c + 9);      //3시쪽 시계바늘부분!
	locateBlock(gold, a, b + 4, c + 10);
	locateBlock(gold, a, b + 4, c + 11);

	locateBlock(gold, a, b + 5, c + 9);       //12시쪽
	locateBlock(gold, a, b + 6, c + 9);


	//여기부터 시계 테두리 부분

	locateBlock(concrete_white, a, b + 3, c + 6);
	locateBlock(concrete_white, a, b + 4, c + 6);
	locateBlock(concrete_white, a, b + 5, c + 6);
	locateBlock(concrete_white, a, b + 2, c + 7);
	locateBlock(concrete_white, a, b + 6, c + 7);
	locateBlock(concrete_white, a, b + 1, c + 8);
	locateBlock(concrete_white, a, b + 7, c + 8);
	locateBlock(concrete_white, a, b + 1, c + 9);
	locateBlock(concrete_white, a, b + 7, c + 9);
	locateBlock(concrete_white, a, b + 1, c + 10);
	locateBlock(concrete_white, a, b + 7, c + 10);
	locateBlock(concrete_white, a, b + 2, c + 11);
	locateBlock(concrete_white, a, b + 6, c + 11);
	locateBlock(concrete_white, a, b + 3, c + 12);
	locateBlock(concrete_white, a, b + 4, c + 12);
	locateBlock(concrete_white, a, b + 5, c + 12);



}

void clock_tower()
{
	int x = 385, y = 4, z = 300;

	BlockID concrete_white = createConcrete(COLOR_WHITE, 1);
	BlockID concrete_gray = createConcrete(COLOR_GRAY, 1);

	PILLAR(x, y, z);
	PILLAR(x, y + 10, z);
	PILLAR(x, y + 20, z);
	PILLAR(x, y + 30, z);
	TOP(x, y + 40, z); // 이부분에 시계탑  // 방향 한쪽만? 이건 더 바꿀수도 있을듯
	PILLAR(x, y + 50, z);

	//꼭대기 조금 추가함

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			locateBlock(concrete_white, x + 2 + i, y + 60, z + 2 + j);     // 뚜껑
		}

	}

}
