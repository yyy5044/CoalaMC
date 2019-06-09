#include "stdio.h"
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

void WINDOWS(int a, int b, int c) // ��������� �ϳ��ϳ�..  //���� �������� �� ��ǥ�� // �ٵ� �̰� �ٸ����� Ȱ�� �����ҵ�
{
	WoolID wool_white = createWool(COLOR_WHITE);
	BlockID glass = createBlock(BLOCK_GLASS);

	c -= 1;

	locateBlock(wool_white, a, b, c);
	locateBlock(wool_white, a + 1, b, c);
	locateBlock(wool_white, a + 2, b, c);
	locateBlock(wool_white, a + 3, b, c);
	locateBlock(wool_white, a, b + 1, c);
	locateBlock(wool_white, a, b + 2, c);
	locateBlock(wool_white, a, b + 3, c);
	locateBlock(wool_white, a + 3, b + 1, c);
	locateBlock(wool_white, a + 3, b + 2, c);
	locateBlock(wool_white, a + 3, b + 3, c);
	locateBlock(wool_white, a + 1, b + 3, c);
	locateBlock(wool_white, a + 2, b + 3, c);

	locateBlock(glass, a + 1, b + 1, c);
	locateBlock(glass, a + 1, b + 2, c);
	locateBlock(glass, a + 2, b + 1, c);
	locateBlock(glass, a + 2, b + 2, c);
}


void square_apart()
{
	int x = 40, y = 4, z = 220;
	int	i, j, k;                // ���� 25, ���μ��� 11x11

	WoolID wool_black = createWool(COLOR_BLACK);
	WoolID wool_white = createWool(COLOR_WHITE);
	BlockID glass = createBlock(BLOCK_GLASS);

	for (j = 0; j < 25; j++) {           //y ���� �ݺ���
		for (i = 0; i < 21; i++) {
			locateBlock(wool_black, x + i, y + j, z);
			locateBlock(wool_black, x + i, y + j, z + 20);
		}
		for (k = 0; k < 21; k++) {
			locateBlock(wool_black, x, y + j, z + k);
			locateBlock(wool_black, x + 20, y + j, z + k); //���簢�� �عٴ�		
		}
	}

	for (i = 0; i < 21; i++) {
		for (j = 0; j < 21; j++) {
			locateBlock(wool_black, x + i, y + 24, z + j);
		}
	}	//õ�嵤��



	//�ؿ��� ����â����

	locateBlock(glass, x + 1, y + 1, z);
	locateBlock(glass, x + 2, y + 2, z);
	locateBlock(glass, x + 1, y + 2, z);
	locateBlock(glass, x + 2, y + 1, z);

	locateBlock(glass, x + 4, y + 1, z);
	locateBlock(glass, x + 5, y + 1, z);
	locateBlock(glass, x + 6, y + 1, z);
	locateBlock(glass, x + 7, y + 1, z);
	locateBlock(glass, x + 8, y + 1, z);
	locateBlock(glass, x + 4, y + 2, z);
	locateBlock(glass, x + 5, y + 2, z);
	locateBlock(glass, x + 6, y + 2, z);
	locateBlock(glass, x + 7, y + 2, z);
	locateBlock(glass, x + 8, y + 2, z);

	locateBlock(glass, x + 10, y + 1, z);
	locateBlock(glass, x + 10, y + 2, z);

	locateBlock(glass, x + 18, y + 1, z);
	locateBlock(glass, x + 18, y + 2, z);
	locateBlock(glass, x + 19, y + 1, z);
	locateBlock(glass, x + 19, y + 2, z);

	locateBlock(glass, x + 12, y + 1, z);
	locateBlock(glass, x + 12, y + 2, z);
	locateBlock(glass, x + 13, y + 1, z);
	locateBlock(glass, x + 13, y + 2, z);
	locateBlock(glass, x + 14, y + 1, z);
	locateBlock(glass, x + 14, y + 2, z);
	locateBlock(glass, x + 15, y + 1, z);
	locateBlock(glass, x + 15, y + 2, z);
	locateBlock(glass, x + 16, y + 1, z);
	locateBlock(glass, x + 16, y + 2, z);


	// ���� �ϳ��� ���� �����ϸ鼭.. �ٵ� �� ���� �� �Ϸ��� �� ���ݸ� �ٲٸ� �ǳ�?


	WINDOWS(x + 1, y + 4, z);
	WINDOWS(x + 5, y + 8, z);
	WINDOWS(x + 11, y + 4, z);
	WINDOWS(x + 15, y + 8, z);
	WINDOWS(x + 9, y + 12, z);
	WINDOWS(x + 2, y + 16, z);
	WINDOWS(x + 6, y + 20, z);
	WINDOWS(x + 13, y + 16, z);
	WINDOWS(x + 17, y + 20, z);

	//�߰�
	WINDOWS(x + 1, y + 4, z + 22);
	WINDOWS(x + 5, y + 8, z + 22);
	WINDOWS(x + 11, y + 4, z + 22);
	WINDOWS(x + 15, y + 8, z + 22);
	WINDOWS(x + 9, y + 12, z + 22);
	WINDOWS(x + 2, y + 16, z + 22);
	WINDOWS(x + 6, y + 20, z + 22);
	WINDOWS(x + 13, y + 16, z + 22);
	WINDOWS(x + 17, y + 20, z + 22);

}
