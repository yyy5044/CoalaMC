#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

void river()
{
	int x1 = 228, y1 = 4, z1 = 17, x2 = 310, y2 = 4, z2 = 521;
	int X1, Y1, Z1, X2, Y2, Z2;

	BlockID air = createBlock(BLOCK_AIR);
	BlockID stone = createBlock(BLOCK_STONE);
	BlockID  diorite = createBlock(BLOCK_DIORITE); //���Ͼ�
	BlockID andesite = createBlock(BLOCK_ANDESITE); //�Ȼ��
	BlockID smooth_sand_stone = createBlock(BLOCK_SMOOTH_SAND_STONE); //�Ų����� ���
	WoolID green = createWool(COLOR_GREEN);


	X1 = x1 > x2 ? x2 : x1; //���� ȿ���� ���� ��ǥ ��
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	Y1 = Y1 - 1;

	//��å�� ��輱
	for (int i = 0; i <= 0; i++) {
		for (int j = 0; j <= Z2; j++) {
			locateBlock(stone, X1 + i, Y1, Z1 + j);
		}
	}
	//��å��
	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j <= Z2; j++) {
			locateBlock(smooth_sand_stone, X1 + 1 + i, Y1, Z1 + j);
		}
	}
	//��å�� - ������ ���� ��輱
	for (int i = 0; i <= 0; i++) {
		for (int j = 0; j <= Z2; j++) {
			locateBlock(stone, X1 + 6 + i, Y1, Z1 + j);
		}
	}
	//������ ����
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= Z2; j++) {
			locateBlock(green, X1 + 7 + i, Y1, Z1 + j);
		}
	}
	//������ ���� ��輱
	for (int i = 0; i <= 0; i++) {
		for (int j = 0; j <= Z2; j++) {
			locateBlock(stone, X1 + 10 + i, Y1, Z1 + j);
		}
	}
	//���Ͼ� ��
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j <= Z2; j++) {
			locateBlock(air, X1 + 11 + i, Y1, Z1 + j);
		}
	}
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j <= Z2; j++) {
			locateBlock(diorite, X1 + 11 + i, Y1 - 1, Z1 + j);
		}
	}
	//�Ȼ�� ��
	for (int n = 0; n <= 1; n++) {
		for (int i = 0; i <= 5; i++) {
			for (int j = 0; j <= Z2; j++) {
				locateBlock(air, X1 + 17 + i, Y1 - n, Z1 + j);
			}
		}
	}
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j <= Z2; j++) {
			locateBlock(andesite, X1 + 17 + i, Y1 - 2, Z1 + j);
		}
	}
	//��
	for (int n = 0; n <= 2; n++) {
		for (int i = 0; i <= 17; i++) {
			for (int j = 0; j <= Z2; j++) {
				locateWater(air, X1 + 23 + i, Y1 - n, Z1 + j);
			}
		}
	}
	for (int n = 0; n <= 2; n++) {
		for (int i = 0; i <= 17; i++) {
			for (int j = 0; j <= Z2; j++) {
				locateWater(createWater(), X1 + 23 + i, Y1 - 2 - n, Z1 + j);
			}
		}
	}
	//��Ī - ��
	for (int n = 0; n <= 2; n++) {
		for (int i = 0; i <= 17; i++) {
			for (int j = 0; j <= Z2; j++) {
				locateWater(air, X1 + 41 + i, Y1 - n, Z1 + j);
			}
		}
	}
	for (int n = 0; n <= 3; n++) {
		for (int i = 0; i <= 17; i++) {
			for (int j = 0; j <= Z2; j++) {
				locateWater(createWater(), X1 + 41 + i, Y1 - 2 - n, Z1 + j);
			}
		}
	}
	//��Ī - �Ȼ�� ��
	for (int n = 0; n <= 1; n++) {
		for (int i = 0; i <= 5; i++) {
			for (int j = 0; j <= Z2; j++) {
				locateBlock(air, X1 + 59 + i, Y1 - n, Z1 + j);
			}
		}
	}
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j <= Z2; j++) {
			locateBlock(andesite, X1 + 59 + i, Y1 - 2, Z1 + j);
		}
	}
	//��Ī - ���Ͼ� ��
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j <= Z2; j++) {
			locateBlock(air, X1 + 65 + i, Y1, Z1 + j);
		}
	}
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j <= Z2; j++) {
			locateBlock(diorite, X1 + 65 + i, Y1 - 1, Z1 + j);
		}
	}
	//��Ī - ������ ���� ��輱
	for (int i = 0; i <= 0; i++) {
		for (int j = 0; j <= Z2; j++) {
			locateBlock(stone, X1 + 71 + i, Y1, Z1 + j);
		}
	}
	//��Ī -������ ����
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= Z2; j++) {
			locateBlock(green, X1 + 72 + i, Y1, Z1 + j);
		}
	}
	//��Ī - ��å�� - ������ ���� ��輱
	for (int i = 0; i <= 0; i++) {
		for (int j = 0; j <= Z2; j++) {
			locateBlock(stone, X1 + 75 + i, Y1, Z1 + j);
		}
	}
	//��Ī - ��å��
	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j <= Z2; j++) {
			locateBlock(smooth_sand_stone, X1 + 76 + i, Y1, Z1 + j);
		}
	}
	//��Ī - ��å�� ��輱
	for (int i = 0; i <= 0; i++) {
		for (int j = 0; j <= Z2; j++) {
			locateBlock(stone, X1 + i + 81, Y1, Z1 + j);
		}
	}

}
