#include "stdio.h"
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")


void setgold(int a, int b, int c, int n)
{
	BlockID gold = createBlock(BLOCK_GOLD);
	BlockID glass = createBlock(BLOCK_GLASS);
	BlockID concrete_white = createConcrete(COLOR_WHITE, 1);
	BlockID yellow = createWool(COLOR_YELLOW);

	int i;

	if (n < 12) {

		locateBlock(concrete_white, a, b, c);

		for (i = 1; i < n; i++) {
			locateBlock(glass, a, b + 1, c);
			b += 1;
			if (b > 60) break;
		}

		while (true) {

			locateBlock(yellow, a, b + 1, c);
			b += 1;
			if (b > 60) break;

			for (i = 0; i < 10; i++) {
				locateBlock(gold, a, b + 1, c);
				b += 1;
				if (b > 60) break;

			}

			locateBlock(concrete_white, a, b + 1, c);
			b += 1;
			if (b > 60) break;

			for (i = 0; i < 10; i++) {
				locateBlock(glass, a, b + 1, c);
				b += 1;
				if (b > 60) break;
			}


		}
	}

	if (11 < n && n < 23) {       //아 걍 11칸 못내리나?

		int B = b;

		b -= 23 - n;

		while (true) {

			locateBlock(yellow, a, b + 1, c);
			b += 1;
			if (b > 60) break;

			for (i = 0; i < 10; i++) {
				locateBlock(gold, a, b + 1, c);
				b += 1;
				if (b > 60) break;

			}

			locateBlock(concrete_white, a, b + 1, c);
			b += 1;
			if (b > 60) break;

			for (i = 0; i < 10; i++) {
				locateBlock(glass, a, b + 1, c);
				b += 1;
				if (b > 60) break;
			}


		}

		locateBlock(concrete_white, a, B, c);
	}



}


void spiralgold(int x, int y, int z)
{

	BlockID glass = createBlock(BLOCK_GLASS); // 천장 전용




	//유리 10 다이아 10 나머지 1 + 1, 총 높이 60 ㄱㄱ

	//배열, 반복문 ,if, else 로나머지 채우고? 어 생각 ㄲㄲ



	//잠만, 이게 n 번쨰라고 생각해보자.



	setgold(x, y, z, 1);
	setgold(x, y, z + 1, 2);
	setgold(x, y, z + 2, 3);
	setgold(x, y, z + 3, 4);
	setgold(x, y, z + 4, 5);

	setgold(x + 1, y, z + 5, 6);
	setgold(x + 1, y, z + 6, 7);

	setgold(x + 2, y, z + 7, 8);

	setgold(x + 3, y, z + 8, 9);

	setgold(x + 4, y, z + 9, 10);
	setgold(x + 5, y, z + 9, 11);

	//이런식으로 하고 또 시작점이랑 좀만 바꿔서 해보자. ㅇㅇ

	setgold(x + 6, y, z + 10, 12);
	setgold(x + 7, y, z + 10, 13);
	setgold(x + 8, y, z + 10, 14);
	setgold(x + 9, y, z + 10, 15);
	setgold(x + 10, y, z + 10, 16);

	setgold(x + 11, y, z + 9, 17);
	setgold(x + 12, y, z + 9, 18);

	setgold(x + 13, y, z + 8, 19);

	setgold(x + 14, y, z + 7, 20);

	setgold(x + 15, y, z + 6, 21);
	setgold(x + 15, y, z + 5, 22);

	//

	setgold(x + 16, y, z + 4, 1);
	setgold(x + 16, y, z + 3, 2);
	setgold(x + 16, y, z + 2, 3);
	setgold(x + 16, y, z + 1, 4);
	setgold(x + 16, y, z, 5);

	setgold(x + 15, y, z - 1, 6);
	setgold(x + 15, y, z - 2, 7);

	setgold(x + 14, y, z - 3, 8);

	setgold(x + 13, y, z - 4, 9);

	setgold(x + 12, y, z - 5, 10);
	setgold(x + 11, y, z - 5, 11);

	//

	setgold(x + 10, y, z - 6, 12);
	setgold(x + 9, y, z - 6, 13);
	setgold(x + 8, y, z - 6, 14);
	setgold(x + 7, y, z - 6, 15);
	setgold(x + 6, y, z - 6, 16);

	setgold(x + 5, y, z - 5, 17);
	setgold(x + 4, y, z - 5, 18);

	setgold(x + 3, y, z - 4, 19);

	setgold(x + 2, y, z - 3, 20);

	setgold(x + 1, y, z - 2, 21);
	setgold(x + 1, y, z - 1, 22);

	// 마무리 천장

	for (int i = 0; i < 17; i++) {
		for (int j = 0; j < 17; j++) {
			locateBlock(glass, x + i, y + 58, z - 6 + j);
		}
	}



}

void spiralgold_merge() {
	for (int j = 0; j <= 2; j++) {
		for (int i = 0; i <= 2; i++) {
			spiralgold(105 + 25 * i, 4, 369 + 25 * j);
		}
	}
}
