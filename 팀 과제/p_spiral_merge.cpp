#include "stdio.h"
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")


void set(int a, int b, int c, int n)
{
	BlockID dia = createBlock(BLOCK_DIAMOND);
	BlockID glass = createBlock(BLOCK_GLASS);
	BlockID concrete_white = createConcrete(COLOR_WHITE, 1);
	BlockID wool_light_blue = createWool(COLOR_LIGHT_BLUE);

	int i;

	if (n < 12) {

		locateBlock(concrete_white, a, b, c);

		for (i = 1; i < n; i++) {
			locateBlock(glass, a, b + 1, c);
			b += 1;
			if (b > 60) break;
		}

		while (true) {

			locateBlock(wool_light_blue, a, b + 1, c);
			b += 1;
			if (b > 60) break;

			for (i = 0; i < 10; i++) {
				locateBlock(dia, a, b + 1, c);
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

			locateBlock(wool_light_blue, a, b + 1, c);
			b += 1;
			if (b > 60) break;

			for (i = 0; i < 10; i++) {
				locateBlock(dia, a, b + 1, c);
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


void spiral(int x, int y , int z)
{

	BlockID glass = createBlock(BLOCK_GLASS); // 천장 전용

	


	//유리 10 다이아 10 나머지 1 + 1, 총 높이 60 ㄱㄱ

	//배열, 반복문 ,if, else 로나머지 채우고? 어 생각 ㄲㄲ



	//잠만, 이게 n 번쨰라고 생각해보자.



	set(x, y, z, 1);
	set(x, y, z + 1, 2);
	set(x, y, z + 2, 3);
	set(x, y, z + 3, 4);
	set(x, y, z + 4, 5);

	set(x + 1, y, z + 5, 6);
	set(x + 1, y, z + 6, 7);

	set(x + 2, y, z + 7, 8);

	set(x + 3, y, z + 8, 9);

	set(x + 4, y, z + 9, 10);
	set(x + 5, y, z + 9, 11);

	//이런식으로 하고 또 시작점이랑 좀만 바꿔서 해보자. ㅇㅇ

	set(x + 6, y, z + 10, 12);
	set(x + 7, y, z + 10, 13);
	set(x + 8, y, z + 10, 14);
	set(x + 9, y, z + 10, 15);
	set(x + 10, y, z + 10, 16);

	set(x + 11, y, z + 9, 17);
	set(x + 12, y, z + 9, 18);

	set(x + 13, y, z + 8, 19);

	set(x + 14, y, z + 7, 20);

	set(x + 15, y, z + 6, 21);
	set(x + 15, y, z + 5, 22);

	//

	set(x + 16, y, z + 4, 1);
	set(x + 16, y, z + 3, 2);
	set(x + 16, y, z + 2, 3);
	set(x + 16, y, z + 1, 4);
	set(x + 16, y, z, 5);

	set(x + 15, y, z - 1, 6);
	set(x + 15, y, z - 2, 7);

	set(x + 14, y, z - 3, 8);

	set(x + 13, y, z - 4, 9);

	set(x + 12, y, z - 5, 10);
	set(x + 11, y, z - 5, 11);

	//

	set(x + 10, y, z - 6, 12);
	set(x + 9, y, z - 6, 13);
	set(x + 8, y, z - 6, 14);
	set(x + 7, y, z - 6, 15);
	set(x + 6, y, z - 6, 16);

	set(x + 5, y, z - 5, 17);
	set(x + 4, y, z - 5, 18);

	set(x + 3, y, z - 4, 19);

	set(x + 2, y, z - 3, 20);

	set(x + 1, y, z - 2, 21);
	set(x + 1, y, z - 1, 22);

	// 마무리 천장

	for (int i = 0; i < 17; i++) {
		for (int j = 0; j < 17; j++) {
			locateBlock(glass, x + i, y + 58, z - 6 + j);
		}
	}



}

void spiral_merge() {
	for (int j = 0; j <= 2; j++) {
		for (int i = 0; i <= 2; i++) {
			spiral(19 + 25 * i, 4, 24 + 25 * j);
		}
	}
}
