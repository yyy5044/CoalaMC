#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

void lotte() {

	int x1 = 377, y1 = 4, z1 = 116, x2 = 417, y2 = 4, z2 = 156;
	int X1, Y1, Z1, X2, Y2, Z2;

	BlockID air = createBlock(BLOCK_AIR);
	BlockID stone = createBlock(BLOCK_NETHER_QUARTZ);
	BlockID glass = createBlock(BLOCK_GLASS);
	BlockID ice = createIce(ICE);
	BlockID glowstone = createBlock(BLOCK_GLOWSTONE);
	SlabID slab_double = createSlab(SLAB_STONE, SLAB_DOUBLE);
	SlabID slab_upper = createSlab(SLAB_STONE, SLAB_UPPER);
	FenceID fence = createFence(FENCE_NETHER_BRICK);


	X1 = x1 > x2 ? x2 : x1; //���� ȿ���� ���� ��ǥ ��
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;


	//�ö󰡴� �밢 - ����
	for (int n = 0; n <= 3; n++) {
		for (int j = 0; j <= 6; j++) {
			for (int i = 0; i <= 4 - n; i++) {
				locateBlock(stone, X1 + 4 - i - n, Y1 + j + 7 * n, Z1 + i);
			}
		}
	}
	for (int n = 0; n <= 3; n++) {
		for (int j = 0; j <= 6; j++) {
			for (int i = 0; i <= 4 - n; i++) {
				locateBlock(stone, X1 + 30 + i + n, Y1 + j + 7 * n, Z1 + i);
			}
		}
	}
	for (int n = 0; n <= 3; n++) {
		for (int j = 0; j <= 6; j++) {
			for (int i = 0; i <= 4 - n; i++) {
				locateBlock(stone, X1 + 34 - i, Y1 + j + 7 * n, Z1 + 30 + i + n);
			}
		}
	}
	for (int n = 0; n <= 3; n++) {
		for (int j = 0; j <= 6; j++) {
			for (int i = 0; i <= 4 - n; i++) {
				locateBlock(stone, X1 + i, Y1 + j + 7 * n, Z1 + 30 + i + n);
			}
		}
	}

	//�� ����
	//���� 7ĭ - 1�� ����
	for (int i = 0; i <= 6; i++) {
		locateBlock(stone, X1 + 5 + i, Y1, Z1);
	}
	for (int i = 0; i <= 6; i++) {
		locateBlock(stone, X1 + 23 + i, Y1, Z1);
	}
	//���� 7ĭ - 2�� ����
	for (int i = 0; i <= 6; i++) {
		locateBlock(stone, X1, Y1, Z1 + 5 + i);
	}
	for (int i = 0; i <= 6; i++) {
		locateBlock(stone, X1, Y1, Z1 + 23 + i);
	}
	//���� 7ĭ - 3�� ����
	for (int i = 0; i <= 6; i++) {
		locateBlock(stone, X1 + 5 + i, Y1, Z1 + 34);
	}
	for (int i = 0; i <= 6; i++) {
		locateBlock(stone, X1 + 23 + i, Y1, Z1 + 34);
	}
	//���� 7ĭ - 4�� ����
	for (int i = 0; i <= 6; i++) {
		locateBlock(stone, X1 + 34, Y1, Z1 + 5 + i);
	}
	for (int i = 0; i <= 6; i++) {
		locateBlock(stone, X1 + 34, Y1, Z1 + 23 + i);
	}
	//3x13 ��� - 1�� ����
	for (int j = 0; j <= 12; j++) {
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 12, Y1 + j, Z1 + i);
		}
	}
	for (int j = 0; j <= 12; j++) {
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 22, Y1 + j, Z1 + i);
		}
	}
	//3x13 ��� - 2�� ����
	for (int j = 0; j <= 12; j++) {
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + i, Y1 + j, Z1 + 12);
		}
	}
	for (int j = 0; j <= 12; j++) {
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + i, Y1 + j, Z1 + 22);
		}
	}
	//3x13 ��� - 3�� ����
	for (int j = 0; j <= 12; j++) {
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 12, Y1 + j, Z1 + 34 - i);
		}
	}
	for (int j = 0; j <= 12; j++) {
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 22, Y1 + j, Z1 + 34 - i);
		}
	}
	//3x13 ��� - 4�� ����
	for (int j = 0; j <= 12; j++) {
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 34 - i, Y1 + j, Z1 + 12);
		}
	}
	for (int j = 0; j <= 12; j++) {
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 34 - i, Y1 + j, Z1 + 22);
		}
	}
	//3x9 ��� - 1�� ����
	for (int j = 0; j <= 8; j++) {
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 13 + j, Y1 + 12, Z1 + i);
		}
	}
	//3x9 ��� - 2�� ����
	for (int j = 0; j <= 8; j++) {
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + i, Y1 + 12, Z1 + 13 + j);
		}
	}
	//3x9 ��� - 3�� ����
	for (int j = 0; j <= 8; j++) {
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 13 + j, Y1 + 12, Z1 + 34 - i);
		}
	}
	//3x9 ��� - 4�� ����
	for (int j = 0; j <= 8; j++) {
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 34 - i, Y1 + 12, Z1 + 13 + j);
		}
	}
	//�� ���� ��� - 1�� ����
	for (int j = 0; j <= 8; j++) {
		for (int i = 0; i <= 4; i++) {
			locateBlock(ice, X1 + 13 + 2 * i, Y1 + 3 + j, Z1 + 2);
		}
	}
	for (int j = 0; j <= 8; j++) {
		for (int i = 0; i <= 3; i++) {
			locateBlock(glass, X1 + 14 + 2 * i, Y1 + 3 + j, Z1 + 2);
		}
	}
	//�� ���� ��� - 2�� ����
	for (int j = 0; j <= 8; j++) {
		for (int i = 0; i <= 4; i++) {
			locateBlock(ice, X1 + 2, Y1 + 3 + j, Z1 + 13 + 2 * i);
		}
	}
	for (int j = 0; j <= 8; j++) {
		for (int i = 0; i <= 3; i++) {
			locateBlock(glass, X1 + 2, Y1 + 3 + j, Z1 + 14 + 2 * i);
		}
	}
	//�� ���� ��� - 3�� ����
	for (int j = 0; j <= 8; j++) {
		for (int i = 0; i <= 4; i++) {
			locateBlock(ice, X1 + 13 + 2 * i, Y1 + 3 + j, Z1 + 32);
		}
	}
	for (int j = 0; j <= 8; j++) {
		for (int i = 0; i <= 3; i++) {
			locateBlock(glass, X1 + 14 + 2 * i, Y1 + 3 + j, Z1 + 32);
		}
	}
	//�� ���� ��� - 4�� ����
	for (int j = 0; j <= 8; j++) {
		for (int i = 0; i <= 4; i++) {
			locateBlock(ice, X1 + 32, Y1 + 3 + j, Z1 + 13 + 2 * i);
		}
	}
	for (int j = 0; j <= 8; j++) {
		for (int i = 0; i <= 3; i++) {
			locateBlock(glass, X1 + 32, Y1 + 3 + j, Z1 + 14 + 2 * i);
		}
	}

	//1�� ����� ����
	//(0,0)
	for (int j = 0; j <= 33; j++) {
		for (int i = 0; i <= 34; i++) {
			locateBlock(stone, X1 + i, Y1 + 28, Z1);
			locateBlock(stone, X1, Y1 + 28, Z1 + j);
		}
	}
	//(34, 34)
	for (int j = 0; j <= 33; j++) {
		for (int i = 0; i <= 34; i++) {
			locateBlock(stone, X1 + 34 - i, Y1 + 28, Z1 + 34);
			locateBlock(stone, X1 + 34, Y1 + 28, Z1 + 34 - j);
		}
	}

	//1�� ���� ��� - 1�� ����
	//���� ���� ���� ��� - ����
	for (int j = 0; j <= 1; j++) {
		for (int i = 0; i <= 20 - 14 * j; i++) {
			locateBlock(glass, X1 + 30 + 2 * j, Y1 + 7 + i + 14 * j, Z1);
		}
	}
	//���� ���� ���� ��� - ����
	for (int i = 0; i <= 13; i++) {
		locateBlock(ice, X1 + 31, Y1 + 14 + i, Z1);
	}
	//������ ���� ���� ��� - ����
	for (int j = 0; j <= 1; j++) {
		for (int i = 0; i <= 20 - 14 * j; i++) {
			locateBlock(glass, X1 + 4 - 2 * j, Y1 + 7 + i + 14 * j, Z1);
		}
	}
	//������ ���� ���� ��� - ����
	for (int i = 0; i <= 13; i++) {
		locateBlock(ice, X1 + 3, Y1 + 14 + i, Z1);
	}
	//���� ���� ��� - ����
	for (int j = 0; j <= 3; j++) {
		for (int i = 0; i <= 26; i++) {
			locateBlock(ice, X1 + 23 + 2 * j, Y1 + 1 + i, Z1);
		}
	}
	//���� ���� ��� - ����
	for (int j = 0; j <= 2; j++) {
		for (int i = 0; i <= 26; i++) {
			locateBlock(glass, X1 + 24 + 2 * j, Y1 + 1 + i, Z1);
		}
	}
	//������ ���� ��� - ����
	for (int j = 0; j <= 3; j++) {
		for (int i = 0; i <= 26; i++) {
			locateBlock(ice, X1 + 11 - 2 * j, Y1 + 1 + i, Z1);
		}
	}
	//������ ���� ��� - ����
	for (int j = 0; j <= 2; j++) {
		for (int i = 0; i <= 26; i++) {
			locateBlock(glass, X1 + 10 - 2 * j, Y1 + 1 + i, Z1);
		}
	}
	//��� ���� ��� - ����
	for (int j = 0; j <= 4; j++) {
		for (int i = 0; i <= 14; i++) {
			locateBlock(ice, X1 + 13 + 2 * j, Y1 + 13 + i, Z1);
		}
	}
	//��� ���� ��� - ����
	for (int j = 0; j <= 5; j++) {
		for (int i = 0; i <= 14; i++) {
			locateBlock(glass, X1 + 12 + 2 * j, Y1 + 13 + i, Z1);
		}
	}

	//1�� ���� ��� - 2�� ����
	//���� ���� ���� ��� - ����
	for (int j = 0; j <= 1; j++) {
		for (int i = 0; i <= 20 - 14 * j; i++) {
			locateBlock(glass, X1, Y1 + 7 + i + 14 * j, Z1 + 4 - 2 * j);
		}
	}
	//���� ���� ���� ��� - ����
	for (int i = 0; i <= 13; i++) {
		locateBlock(ice, X1, Y1 + 14 + i, Z1 + 3);
	}
	//������ ���� ���� ��� - ����
	for (int j = 0; j <= 1; j++) {
		for (int i = 0; i <= 20 - 14 * j; i++) {
			locateBlock(glass, X1, Y1 + 7 + i + 14 * j, Z1 + 30 + 2 * j);
		}
	}
	//������ ���� ���� ��� - ����
	for (int i = 0; i <= 13; i++) {
		locateBlock(ice, X1, Y1 + 14 + i, Z1 + 31);
	}
	//���� ���� ��� - ����
	for (int j = 0; j <= 3; j++) {
		for (int i = 0; i <= 26; i++) {
			locateBlock(ice, X1, Y1 + 1 + i, Z1 + 5 + 2 * j);
		}
	}
	//���� ���� ��� - ����
	for (int j = 0; j <= 2; j++) {
		for (int i = 0; i <= 26; i++) {
			locateBlock(glass, X1, Y1 + 1 + i, Z1 + 6 + 2 * j);
		}
	}
	//������ ���� ��� - ����
	for (int j = 0; j <= 3; j++) {
		for (int i = 0; i <= 26; i++) {
			locateBlock(ice, X1, Y1 + 1 + i, Z1 + 23 + 2 * j);
		}
	}
	//������ ���� ��� - ����
	for (int j = 0; j <= 2; j++) {
		for (int i = 0; i <= 26; i++) {
			locateBlock(glass, X1, Y1 + 1 + i, Z1 + 24 + 2 * j);
		}
	}
	//��� ���� ��� - ����
	for (int j = 0; j <= 4; j++) {
		for (int i = 0; i <= 14; i++) {
			locateBlock(ice, X1, Y1 + 13 + i, Z1 + 13 + 2 * j);
		}
	}
	//��� ���� ��� - ����
	for (int j = 0; j <= 5; j++) {
		for (int i = 0; i <= 14; i++) {
			locateBlock(glass, X1, Y1 + 13 + i, Z1 + 12 + 2 * j);
		}
	}

	//1�� ���� ��� - 3�� ����
	//���� ���� ���� ��� - ����
	for (int j = 0; j <= 1; j++) {
		for (int i = 0; i <= 20 - 14 * j; i++) {
			locateBlock(glass, X1 + 30 + 2 * j, Y1 + 7 + i + 14 * j, Z1 + 34);
		}
	}
	//���� ���� ���� ��� - ����
	for (int i = 0; i <= 13; i++) {
		locateBlock(ice, X1 + 31, Y1 + 14 + i, Z1 + 34);
	}
	//������ ���� ���� ��� - ����
	for (int j = 0; j <= 1; j++) {
		for (int i = 0; i <= 20 - 14 * j; i++) {
			locateBlock(glass, X1 + 4 - 2 * j, Y1 + 7 + i + 14 * j, Z1 + 34);
		}
	}
	//������ ���� ���� ��� - ����
	for (int i = 0; i <= 13; i++) {
		locateBlock(ice, X1 + 3, Y1 + 14 + i, Z1 + 34);
	}
	//���� ���� ��� - ����
	for (int j = 0; j <= 3; j++) {
		for (int i = 0; i <= 26; i++) {
			locateBlock(ice, X1 + 23 + 2 * j, Y1 + 1 + i, Z1 + 34);
		}
	}
	//���� ���� ��� - ����
	for (int j = 0; j <= 2; j++) {
		for (int i = 0; i <= 26; i++) {
			locateBlock(glass, X1 + 24 + 2 * j, Y1 + 1 + i, Z1 + 34);
		}
	}
	//������ ���� ��� - ����
	for (int j = 0; j <= 3; j++) {
		for (int i = 0; i <= 26; i++) {
			locateBlock(ice, X1 + 11 - 2 * j, Y1 + 1 + i, Z1 + 34);
		}
	}
	//������ ���� ��� - ����
	for (int j = 0; j <= 2; j++) {
		for (int i = 0; i <= 26; i++) {
			locateBlock(glass, X1 + 10 - 2 * j, Y1 + 1 + i, Z1 + 34);
		}
	}
	//��� ���� ��� - ����
	for (int j = 0; j <= 4; j++) {
		for (int i = 0; i <= 14; i++) {
			locateBlock(ice, X1 + 13 + 2 * j, Y1 + 13 + i, Z1 + 34);
		}
	}
	//��� ���� ��� - ����
	for (int j = 0; j <= 5; j++) {
		for (int i = 0; i <= 14; i++) {
			locateBlock(glass, X1 + 12 + 2 * j, Y1 + 13 + i, Z1 + 34);
		}
	}

	//1�� ���� ��� - 4�� ����
	//���� ���� ���� ��� - ����
	for (int j = 0; j <= 1; j++) {
		for (int i = 0; i <= 20 - 14 * j; i++) {
			locateBlock(glass, X1 + 34, Y1 + 7 + i + 14 * j, Z1 + 4 - 2 * j);
		}
	}
	//���� ���� ���� ��� - ����
	for (int i = 0; i <= 13; i++) {
		locateBlock(ice, X1 + 34, Y1 + 14 + i, Z1 + 3);
	}
	//������ ���� ���� ��� - ����
	for (int j = 0; j <= 1; j++) {
		for (int i = 0; i <= 20 - 14 * j; i++) {
			locateBlock(glass, X1 + 34, Y1 + 7 + i + 14 * j, Z1 + 30 + 2 * j);
		}
	}
	//������ ���� ���� ��� - ����
	for (int i = 0; i <= 13; i++) {
		locateBlock(ice, X1 + 34, Y1 + 14 + i, Z1 + 31);
	}
	//���� ���� ��� - ����
	for (int j = 0; j <= 3; j++) {
		for (int i = 0; i <= 26; i++) {
			locateBlock(ice, X1 + 34, Y1 + 1 + i, Z1 + 5 + 2 * j);
		}
	}
	//���� ���� ��� - ����
	for (int j = 0; j <= 2; j++) {
		for (int i = 0; i <= 26; i++) {
			locateBlock(glass, X1 + 34, Y1 + 1 + i, Z1 + 6 + 2 * j);
		}
	}
	//������ ���� ��� - ����
	for (int j = 0; j <= 3; j++) {
		for (int i = 0; i <= 26; i++) {
			locateBlock(ice, X1 + 34, Y1 + 1 + i, Z1 + 23 + 2 * j);
		}
	}
	//������ ���� ��� - ����
	for (int j = 0; j <= 2; j++) {
		for (int i = 0; i <= 26; i++) {
			locateBlock(glass, X1 + 34, Y1 + 1 + i, Z1 + 24 + 2 * j);
		}
	}
	//��� ���� ��� - ����
	for (int j = 0; j <= 4; j++) {
		for (int i = 0; i <= 14; i++) {
			locateBlock(ice, X1 + 34, Y1 + 13 + i, Z1 + 13 + 2 * j);
		}
	}
	//��� ���� ��� - ����
	for (int j = 0; j <= 5; j++) {
		for (int i = 0; i <= 14; i++) {
			locateBlock(glass, X1 + 34, Y1 + 13 + i, Z1 + 12 + 2 * j);
		}
	}

	//2�� ���� - 1�� ����
	for (int j = 0; j <= 9; j++) {
		for (int i = 0; i <= 17; i++) {
			locateBlock(stone, X1 + i, Y1 + 29 + 10 * i + j, Z1);
		}
	}
	for (int j = 0; j <= 9; j++) {
		for (int i = 0; i <= 17; i++) {
			locateBlock(stone, X1 + 34 - i, Y1 + 29 + 10 * i + j, Z1);
		}
	}
	//2�� ���� - 2�� ����
	for (int j = 0; j <= 9; j++) {
		for (int i = 0; i <= 17; i++) {
			locateBlock(stone, X1, Y1 + 29 + 10 * i + j, Z1 + i);
		}
	}
	for (int j = 0; j <= 9; j++) {
		for (int i = 0; i <= 17; i++) {
			locateBlock(stone, X1, Y1 + 29 + 10 * i + j, Z1 + 34 - i);
		}
	}
	//2�� ���� - 3�� ����
	for (int j = 0; j <= 9; j++) {
		for (int i = 0; i <= 17; i++) {
			locateBlock(stone, X1 + i, Y1 + 29 + 10 * i + j, Z1 + 34);
		}
	}
	for (int j = 0; j <= 9; j++) {
		for (int i = 0; i <= 17; i++) {
			locateBlock(stone, X1 + 34 - i, Y1 + 29 + 10 * i + j, Z1 + 34);
		}
	}
	//2�� ���� - 4�� ����
	for (int j = 0; j <= 9; j++) {
		for (int i = 0; i <= 17; i++) {
			locateBlock(stone, X1 + 34, Y1 + 29 + 10 * i + j, Z1 + i);
		}
	}
	for (int j = 0; j <= 9; j++) {
		for (int i = 0; i <= 17; i++) {
			locateBlock(stone, X1 + 34, Y1 + 29 + 10 * i + j, Z1 + 34 - i);
		}
	}

	//2�� �밢 �� - ������ �ϴ�
	for (int k = 0; k <= 9; k++) {
		for (int j = 0; j <= 15; j++) {
			for (int i = 0; i <= j; i++) {
				locateBlock(ice, X1 + 1 + j - i, Y1 + 49 + 10 * j + k, Z1 + 1 + i);
			}
		}
	}
	//2�� �밢 �� - ������ ���
	for (int k = 0; k <= 9; k++) {
		for (int j = 0; j <= 15; j++) {
			for (int i = 0; i <= j; i++) {
				locateBlock(ice, X1 + 1 + j - i, Y1 + 49 + 10 * j + k, Z1 + 33 - i);
			}
		}
	}
	//2�� �밢 �� - ���� �ϴ�
	for (int k = 0; k <= 9; k++) {
		for (int j = 0; j <= 15; j++) {
			for (int i = 0; i <= j; i++) {
				locateBlock(ice, X1 + 33 - i, Y1 + 49 + 10 * j + k, Z1 + 1 - i + j);
			}
		}
	}
	//2�� �밢 �� - ���� ���
	for (int k = 0; k <= 9; k++) {
		for (int j = 0; j <= 15; j++) {
			for (int i = 0; i <= j; i++) {
				locateBlock(ice, X1 + 33 + i - j, Y1 + 49 + 10 * j + k, Z1 + 33 - i);
			}
		}
	}

	//2�� ��� �� - 1�� ����
	for (int k = 0; k <= 9; k++) {
		for (int j = 0; j <= 17; j++) {
			for (int i = 0; i <= 32 - 2 * j; i++) {
				locateBlock(ice, X1 + 1 + i + j, Y1 + 29 + 10 * j + k, Z1);
			}
		}
	}
	//2�� ��� �� - 2�� ����
	for (int k = 0; k <= 9; k++) {
		for (int j = 0; j <= 17; j++) {
			for (int i = 0; i <= 32 - 2 * j; i++) {
				locateBlock(ice, X1, Y1 + 29 + 10 * j + k, Z1 + 1 + i + j);
			}
		}
	}
	//2�� ��� �� - 3�� ����
	for (int k = 0; k <= 9; k++) {
		for (int j = 0; j <= 17; j++) {
			for (int i = 0; i <= 32 - 2 * j; i++) {
				locateBlock(ice, X1 + 1 + i + j, Y1 + 29 + 10 * j + k, Z1 + 34);
			}
		}
	}
	//2�� ��� �� - 4�� ����
	for (int k = 0; k <= 9; k++) {
		for (int j = 0; j <= 17; j++) {
			for (int i = 0; i <= 32 - 2 * j; i++) {
				locateBlock(ice, X1 + 34, Y1 + 29 + 10 * j + k, Z1 + 1 + i + j);
			}
		}
	}

	//����� �Ѳ�

	for (int k = 0; k <= 1; k++) {
		for (int j = 0; j <= 17; j++) {
			for (int i = 0; i <= 2 * j; i++) {
				locateBlock(stone, X1 + 17 + i - j, Y1 + 207 + k, Z1 + j);
			}
		}
		for (int j = 0; j <= 17; j++) {
			for (int i = 0; i <= 2 * j; i++) {
				locateBlock(stone, X1 + 17 - i + j, Y1 + 207 + k, Z1 + 34 - j);
			}
		}
	}

	//���� ����
	for (int k = 0; k <= 160; k++) {
		for (int i = 0; i <= 17; i++) {
			locateBlock(glass, X1 + 9 + i, Y1 + k, Z1 + 8);
			locateBlock(glass, X1 + 8, Y1 + k, Z1 + 8 + i);
		}
		for (int i = 0; i <= 17; i++) {
			locateBlock(glass, X1 + 25 - i, Y1 + k, Z1 + 26);
			locateBlock(glass, X1 + 26, Y1 + k, Z1 + 26 - i);
		}
		for (int j = 0; j <= 16; j++) {
			for (int i = 0; i <= 16; i++) {
				locateBlock(glowstone, X1 + 9 + i, Y1 + k, Z1 + 9 + j);
			}
		}
	}

	//��
	for (int i = 0; i <= 8; i++) {
		locateBlock(slab_double, X1 + 13 + i, Y1 + 3, Z1 + 2);
	}
	for (int i = 0; i <= 8; i++) {
		locateBlock(slab_upper, X1 + 13 + i, Y1 + 3, Z1 + 1);
	}

	for (int i = 0; i <= 8; i++) {
		locateBlock(slab_double, X1 + 2, Y1 + 3, Z1 + 13 + i);
	}
	for (int i = 0; i <= 8; i++) {
		locateBlock(slab_upper, X1 + 1, Y1 + 3, Z1 + 13 + i);
	}

	for (int i = 0; i <= 8; i++) {
		locateBlock(slab_double, X1 + 13 + i, Y1 + 3, Z1 + 32);
	}
	for (int i = 0; i <= 8; i++) {
		locateBlock(slab_upper, X1 + 13 + i, Y1 + 3, Z1 + 33);
	}

	for (int i = 0; i <= 8; i++) {
		locateBlock(slab_double, X1 + 32, Y1 + 3, Z1 + 13 + i);
	}
	for (int i = 0; i <= 8; i++) {
		locateBlock(slab_upper, X1 + 33, Y1 + 3, Z1 + 13 + i);
	}

	//��Ʋ
	int door[4] = { 13, 16, 18, 21 };

	for (int j = 0; j <= 3; j++) {
		for (int i = 0; i <= 2; i++) {
			locateBlock(slab_double, X1 + door[j], Y1 + i, Z1 + 2);
		}
	}
	for (int j = 0; j <= 3; j++) {
		for (int i = 0; i <= 2; i++) {
			locateBlock(slab_double, X1 + door[j], Y1 + i, Z1 + 32);
		}
	}
	for (int j = 0; j <= 3; j++) {
		for (int i = 0; i <= 2; i++) {
			locateBlock(slab_double, X1 + 2, Y1 + i, Z1 + door[j]);
		}
	}
	for (int j = 0; j <= 3; j++) {
		for (int i = 0; i <= 2; i++) {
			locateBlock(slab_double, X1 + 32, Y1 + i, Z1 + door[j]);
		}
	}

	//��Ʋ ��Ÿ��
	for (int j = 0; j <= 3; j++) {
		for (int i = 0; i <= 7; i++) {
			locateBlock(fence, X1 + 14 + 2 * j, Y1 + 4 + i, Z1 + 1);
		}
	}
	for (int j = 0; j <= 3; j++) {
		for (int i = 0; i <= 7; i++) {
			locateBlock(fence, X1 + 14 + 2 * j, Y1 + 4 + i, Z1 + 33);
		}
	}
	for (int j = 0; j <= 3; j++) {
		for (int i = 0; i <= 7; i++) {
			locateBlock(fence, X1 + 1, Y1 + 4 + i, Z1 + 14 + 2 * j);
		}
	}
	for (int j = 0; j <= 3; j++) {
		for (int i = 0; i <= 7; i++) {
			locateBlock(fence, X1 + 33, Y1 + 4 + i, Z1 + 14 + 2 * j);
		}
	}

}
