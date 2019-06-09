#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

void church() {
	int x1 = 105, y1 = 4, z1 = 285, x2 = 175, y2 = 4, z2 = 335;
	int X1, Y1, Z1, X2, Y2, Z2;

	BlockID air = createBlock(BLOCK_AIR);
	BlockID stone = createBlock(BLOCK_NETHER_QUARTZ);

	X1 = x1 > x2 ? x2 : x1; //���� ȿ���� ���� ��ǥ ��
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	for (int j = 0; j <= 5; j++) {

		//���� layer1
		//���� 4ĭ
		for (int i = 1; i <= 4; i++) {
			locateBlock(stone, X1 + 14 + 2 * i - 1, Y1 + j, Z1);
		}
		//�̾ 7ĭ
		for (int i = 1; i <= 7; i++) {
			locateBlock(stone, X1 + 22 + i, Y1 + j, Z1);
		}
		//���� 3ĭ
		for (int i = 1; i <= 3; i++) {
			locateBlock(stone, X1 + 30 + 2 * i - 1, Y1 + j, Z1);
		}
		//�̾ 7ĭ
		for (int i = 1; i <= 7; i++) {
			locateBlock(stone, X1 + 36 + i, Y1 + j, Z1);
		}
		//���� 4ĭ
		for (int i = 1; i <= 4; i++) {
			locateBlock(stone, X1 + 44 + 2 * i - 1, Y1 + j, Z1);
		}
		//���� ä���
		for (int i = 1; i <= 37; i++) {
			locateBlock(stone, X1 + 14 + i, Y1 + j, Z1 + 1);
		}
		//���� 7ĭ - ����
		for (int i = 0; i <= 6; i++) {
			locateBlock(stone, X1 + 2 * i, Y1 + j, Z1 + 19);
		}
		//���� 7ĭ - ���� - ä���
		for (int i = 1; i <= 11; i++) {
			locateBlock(stone, X1 + i, Y1 + j, Z1 + 20);
		}
		//���� 7ĭ - ������
		for (int i = 0; i <= 6; i++) {
			locateBlock(stone, X1 + 54 + 2 * i, Y1 + j, Z1 + 19);
		}
		//���� 7ĭ - ������
		for (int i = 1; i <= 11; i++) {
			locateBlock(stone, X1 + 54 + i, Y1 + j, Z1 + 20);
		}

		//���� layer1
		//���� 9ĭ
		for (int i = 0; i <= 8; i++) {
			locateBlock(stone, X1 + 14, Y1 + j, Z1 + 2 * i + 1);
		}
		//���� 9ĭ - ä���
		for (int i = 0; i <= 16; i++) {
			locateBlock(stone, X1 + 15, Y1 + j, Z1 + i);
		}
		locateBlock(stone, X1 + 13, Y1 + j, Z1 + 18);//�밢
		//���� 15ĭ
		for (int i = 0; i <= 14; i++) {
			locateBlock(stone, X1, Y1 + j, Z1 + 20 + 2 * i);
		}
		//���� 15ĭ - ä���
		for (int i = 0; i <= 27; i++) {
			locateBlock(stone, X1 + 1, Y1 + j, Z1 + 20 + i);
		}

		//���� layer1
		//���� 9ĭ
		for (int i = 0; i <= 8; i++) {
			locateBlock(stone, X1 + 52, Y1 + j, Z1 + 2 * i + 1);
		}
		//���� 9ĭ - ä���
		for (int i = 0; i <= 16; i++) {
			locateBlock(stone, X1 + 51, Y1 + j, Z1 + i);
		}
		locateBlock(stone, X1 + 53, Y1 + j, Z1 + 18);//�밢
		//���� 15ĭ
		for (int i = 0; i <= 14; i++) {
			locateBlock(stone, X1 + 66, Y1 + j, Z1 + 20 + 2 * i);
		}
		//���� 15ĭ - ä���
		for (int i = 0; i <= 27; i++) {
			locateBlock(stone, X1 + 65, Y1 + j, Z1 + 20 + i);
		}

		//�ĸ� layer1
		//���� 32ĭ
		for (int i = 0; i <= 31; i++) {
			locateBlock(stone, X1 + 2 + 2 * i, Y1 + j, Z1 + 48);
		}
		//���� 32ĭ - ä���
		for (int i = 0; i <= 63; i++) {
			locateBlock(stone, X1 + 1 + i, Y1 + j, Z1 + 47);
		}

	}

	//1�� �Ѳ� ����
	for (int j = 0; j <= 29; j++)
	{
		for (int i = 0; i <= 66; i++) {
			locateBlock(stone, X1 + i, Y1 + 6, Z1 + 19 + j);
		}
	}
	for (int j = 0; j <= 18; j++)
	{
		for (int i = 0; i <= 38; i++) {
			locateBlock(stone, X1 + 14 + i, Y1 + 6, Z1 + j);
		}
	}
	locateBlock(stone, X1 + 53, Y1 + 6, Z1 + 18); //�밢
	locateBlock(stone, X1 + 13, Y1 + 6, Z1 + 18); //�밢
	locateBlock(air, X1 + 14, Y1 + 6, Z1);
	locateBlock(air, X1 + 52, Y1 + 6, Z1);

	//������ ���
	for (int j = 0; j <= 7; j++)
	{
		for (int i = 0; i <= 6; i++) {
			locateBlock(stone, X1 + 23, Y1 + j - i, Z1 - 1 - i);
		}
	}
	locateBlock(stone, X1 + 23, Y1 + 7, Z1);
	for (int k = 0; k <= 4; k++)
	{
		for (int j = 0; j <= 6; j++) {
			for (int i = 0; i <= 6; i++) {
				locateBlock(stone, X1 + 24 + k, Y1 + j - i, Z1 - i);
			}
		}
	}
	for (int j = 0; j <= 7; j++)
	{
		for (int i = 0; i <= 6; i++) {
			locateBlock(stone, X1 + 29, Y1 + j - i, Z1 - 1 - i);
		}
	}
	locateBlock(stone, X1 + 29, Y1 + 7, Z1);
	//���� ���
	for (int j = 0; j <= 7; j++)
	{
		for (int i = 0; i <= 6; i++) {
			locateBlock(stone, X1 + 37, Y1 + j - i, Z1 - 1 - i);
		}
	}
	locateBlock(stone, X1 + 37, Y1 + 7, Z1);
	for (int k = 0; k <= 4; k++)
	{
		for (int j = 0; j <= 6; j++) {
			for (int i = 0; i <= 6; i++) {
				locateBlock(stone, X1 + 38 + k, Y1 + j - i, Z1 - i);
			}
		}
	}
	for (int j = 0; j <= 7; j++)
	{
		for (int i = 0; i <= 6; i++) {
			locateBlock(stone, X1 + 43, Y1 + j - i, Z1 - 1 - i);
		}
	}
	locateBlock(stone, X1 + 43, Y1 + 7, Z1);

	//1�� �׵θ� - ���
	for (int i = 0; i <= 8; i++) {
		locateBlock(stone, X1 + 29 + i, Y1 + 7, Z1 + 1);
	}
	//1�� �׵θ� - ������ ����
	for (int i = 0; i <= 8; i++) {
		locateBlock(stone, X1 + 15 + i, Y1 + 7, Z1 + 1);
	}
	for (int i = 0; i <= 11; i++) {
		locateBlock(stone, X1 + 1 + i, Y1 + 7, Z1 + 20);
	}
	//1�� �׵θ� - ����
	for (int i = 0; i <= 16; i++) {
		locateBlock(stone, X1 + 15, Y1 + 7, Z1 + 2 + i);
	}
	for (int i = 0; i <= 26; i++) {
		locateBlock(stone, X1 + 1, Y1 + 7, Z1 + 21 + i);
	}
	//1�� �׵θ� - ���� ����
	for (int i = 0; i <= 8; i++) {
		locateBlock(stone, X1 + 43 + i, Y1 + 7, Z1 + 1);
	}
	for (int i = 0; i <= 11; i++) {
		locateBlock(stone, X1 + 54 + i, Y1 + 7, Z1 + 20);
	}
	//1�� �׵θ� - ����
	for (int i = 0; i <= 16; i++) {
		locateBlock(stone, X1 + 51, Y1 + 7, Z1 + 2 + i);
	}
	for (int i = 0; i <= 26; i++) {
		locateBlock(stone, X1 + 65, Y1 + 7, Z1 + 21 + i);
	}
	//1�� �׵θ� - �ĸ�
	for (int i = 0; i <= 62; i++) {
		locateBlock(stone, X1 + 2 + i, Y1 + 7, Z1 + 47);
	}
	//1�� �׵θ� - �밢
	locateBlock(stone, X1 + 53, Y1 + 7, Z1 + 19);
	locateBlock(stone, X1 + 52, Y1 + 7, Z1 + 18);
	locateBlock(stone, X1 + 13, Y1 + 7, Z1 + 19);
	locateBlock(stone, X1 + 14, Y1 + 7, Z1 + 18);

	for (int n = 0; n <= 4; n++) //�� ����
	{
		//2��
		for (int j = 0; j <= 1; j++)
		{
			//2�� �밢
			for (int i = 0; i <= 2; i++) {
				locateBlock(stone, X1 + 22 - i, Y1 + 7 + 6 * n + j, Z1 + 17 + i);
			}
			for (int i = 0; i <= 2; i++) {
				locateBlock(stone, X1 + 44 + i, Y1 + 7 + 6 * n + j, Z1 + 17 + i);
			}
			locateBlock(stone, X1 + 15, Y1 + 7 + 6 * n + j, Z1 + 21);
			locateBlock(stone, X1 + 51, Y1 + 7 + 6 * n + j, Z1 + 21);
			//2�� ����
			for (int i = 0; i <= 20; i++) {
				locateBlock(stone, X1 + 23 + i, Y1 + 7 + 6 * n + j, Z1 + 17);
			}
			for (int i = 0; i <= 3; i++) {
				locateBlock(stone, X1 + 16 + i, Y1 + 7 + 6 * n + j, Z1 + 20);
			}
			for (int i = 0; i <= 11; i++) {
				locateBlock(stone, X1 + 3 + i, Y1 + 7 + 6 * n + j, Z1 + 22);
			}
			for (int i = 0; i <= 3; i++) {
				locateBlock(stone, X1 + 47 + i, Y1 + 7 + 6 * n + j, Z1 + 20);
			}
			for (int i = 0; i <= 11; i++) {
				locateBlock(stone, X1 + 52 + i, Y1 + 7 + 6 * n + j, Z1 + 22);
			}
			//2�� ����
			for (int i = 0; i <= 22; i++) {
				locateBlock(stone, X1 + 3, Y1 + 7 + 6 * n + j, Z1 + 23 + i);
			}
			//2�� ����
			for (int i = 0; i <= 22; i++) {
				locateBlock(stone, X1 + 63, Y1 + 7 + 6 * n + j, Z1 + 23 + i);
			}
			//2�� �ĸ�
			for (int i = 0; i <= 58; i++) {
				locateBlock(stone, X1 + 4 + i, Y1 + 7 + 6 * n + j, Z1 + 45);
			}
		}

		//2�� â��
		for (int j = 0; j <= 1; j++) {

			//2�� ���� â�� ����
			locateBlock(stone, X1 + 22, Y1 + 9 + 6 * n + j, Z1 + 17);
			locateBlock(stone, X1 + 23, Y1 + 9 + 6 * n + j, Z1 + 17);
			locateBlock(stone, X1 + 25, Y1 + 9 + 6 * n + j, Z1 + 17);
			locateBlock(stone, X1 + 29, Y1 + 9 + 6 * n + j, Z1 + 17);
			locateBlock(stone, X1 + 31, Y1 + 9 + 6 * n + j, Z1 + 17);
			locateBlock(stone, X1 + 35, Y1 + 9 + 6 * n + j, Z1 + 17);
			locateBlock(stone, X1 + 37, Y1 + 9 + 6 * n + j, Z1 + 17);
			locateBlock(stone, X1 + 41, Y1 + 9 + 6 * n + j, Z1 + 17);
			locateBlock(stone, X1 + 43, Y1 + 9 + 6 * n + j, Z1 + 17);
			locateBlock(stone, X1 + 44, Y1 + 9 + 6 * n + j, Z1 + 17);
			//������ ���� â�� ����
			locateBlock(stone, X1 + 11, Y1 + 9 + 6 * n + j, Z1 + 22);
			locateBlock(stone, X1 + 9, Y1 + 9 + 6 * n + j, Z1 + 22);
			locateBlock(stone, X1 + 5, Y1 + 9 + 6 * n + j, Z1 + 22);
			locateBlock(stone, X1 + 3, Y1 + 9 + 6 * n + j, Z1 + 22);
			//���� ���� â�� ����
			locateBlock(stone, X1 + 55, Y1 + 9 + 6 * n + j, Z1 + 22);
			locateBlock(stone, X1 + 57, Y1 + 9 + 6 * n + j, Z1 + 22);
			locateBlock(stone, X1 + 61, Y1 + 9 + 6 * n + j, Z1 + 22);
			locateBlock(stone, X1 + 63, Y1 + 9 + 6 * n + j, Z1 + 22);
			//2�� ���� â�� ����
			for (int i = 0; i <= 3; i++) {
				locateBlock(stone, X1 + 3, Y1 + 9 + 6 * n + j, Z1 + 25 + 6 * i);
			}
			for (int i = 0; i <= 2; i++) {
				locateBlock(stone, X1 + 3, Y1 + 9 + 6 * n + j, Z1 + 27 + 6 * i);
				locateBlock(stone, X1 + 3, Y1 + 9 + 6 * n + j, Z1 + 28 + 6 * i);
			}
			//2�� ���� â�� ����
			for (int i = 0; i <= 3; i++) {
				locateBlock(stone, X1 + 63, Y1 + 9 + 6 * n + j, Z1 + 25 + 6 * i);
			}
			for (int i = 0; i <= 2; i++) {
				locateBlock(stone, X1 + 63, Y1 + 9 + 6 * n + j, Z1 + 27 + 6 * i);
				locateBlock(stone, X1 + 63, Y1 + 9 + 6 * n + j, Z1 + 28 + 6 * i);
			}
			//2�� �ĸ� â�� ����
			//�ĸ� ������
			for (int i = 0; i <= 4; i++) {
				locateBlock(stone, X1 + 6 + 6 * i, Y1 + 9 + 6 * n + j, Z1 + 45);
			}
			for (int i = 0; i <= 3; i++) {
				locateBlock(stone, X1 + 8 + 6 * i, Y1 + 9 + 6 * n + j, Z1 + 45);
				locateBlock(stone, X1 + 9 + 6 * i, Y1 + 9 + 6 * n + j, Z1 + 45);
			}
			//�ĸ� ����
			for (int i = 0; i <= 4; i++) {
				locateBlock(stone, X1 + 36 + 6 * i, Y1 + 9 + 6 * n + j, Z1 + 45);
			}
			for (int i = 0; i <= 3; i++) {
				locateBlock(stone, X1 + 39 + 6 * i, Y1 + 9 + 6 * n + j, Z1 + 45);
				locateBlock(stone, X1 + 40 + 6 * i, Y1 + 9 + 6 * n + j, Z1 + 45);
			}
			//�ĸ� ���
			for (int i = 0; i <= 2; i++) {
				locateBlock(stone, X1 + 32 + i, Y1 + 9 + 6 * n + j, Z1 + 45);
			}
			//�ĸ� �𼭸�
			locateBlock(stone, X1 + 3, Y1 + 9 + 6 * n + j, Z1 + 45);
			locateBlock(stone, X1 + 63, Y1 + 9 + 6 * n + j, Z1 + 45);
			//2�� �밢
			for (int i = 0; i <= 3; i++) {
				locateBlock(stone, X1 + 22 - i, Y1 + 9 + 6 * n + j, Z1 + 17 + i);
			}
			for (int i = 0; i <= 3; i++) {
				locateBlock(stone, X1 + 44 + i, Y1 + 9 + 6 * n + j, Z1 + 17 + i);
			}
			for (int i = 0; i <= 2; i++) {
				locateBlock(stone, X1 + 16 - i, Y1 + 9 + 6 * n + j, Z1 + 20 + i);
			}
			for (int i = 0; i <= 2; i++) {
				locateBlock(stone, X1 + 50 + i, Y1 + 9 + 6 * n + j, Z1 + 20 + i);
			}
		}

		//2�� �밢
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 22 - i, Y1 + 11 + 6 * n, Z1 + 17 + i);
		}
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 44 + i, Y1 + 11 + 6 * n, Z1 + 17 + i);
		}
		locateBlock(stone, X1 + 15, Y1 + 11 + 6 * n, Z1 + 21);
		locateBlock(stone, X1 + 51, Y1 + 11 + 6 * n, Z1 + 21);
		//2�� ����
		for (int i = 0; i <= 20; i++) {
			locateBlock(stone, X1 + 23 + i, Y1 + 11 + 6 * n, Z1 + 17);
		}
		for (int i = 0; i <= 3; i++) {
			locateBlock(stone, X1 + 16 + i, Y1 + 11 + 6 * n, Z1 + 20);
		}
		for (int i = 0; i <= 11; i++) {
			locateBlock(stone, X1 + 3 + i, Y1 + 11 + 6 * n, Z1 + 22);
		}
		for (int i = 0; i <= 3; i++) {
			locateBlock(stone, X1 + 47 + i, Y1 + 11 + 6 * n, Z1 + 20);
		}
		for (int i = 0; i <= 11; i++) {
			locateBlock(stone, X1 + 52 + i, Y1 + 11 + 6 * n, Z1 + 22);
		}
		//2�� ����
		for (int i = 0; i <= 22; i++) {
			locateBlock(stone, X1 + 3, Y1 + 11 + 6 * n, Z1 + 23 + i);
		}
		//2�� ����
		for (int i = 0; i <= 22; i++) {
			locateBlock(stone, X1 + 63, Y1 + 11 + 6 * n, Z1 + 23 + i);
		}
		//2�� �ĸ�
		for (int i = 0; i <= 58; i++) {
			locateBlock(stone, X1 + 4 + i, Y1 + 11 + 6 * n, Z1 + 45);
		}

		//�� ���м�
		//�� ���м� - ����
		for (int i = 0; i <= 22; i++) {
			locateBlock(stone, X1 + 22 + i, Y1 + 12 + 6 * n, Z1 + 16);
		}
		//�� ���м� - ������ �밢
		for (int i = 0; i <= 3; i++) {
			locateBlock(stone, X1 + 22 - i, Y1 + 12 + 6 * n, Z1 + 16 + i);
		}
		locateBlock(stone, X1 + 18, Y1 + 12 + 6 * n, Z1 + 19);
		locateBlock(stone, X1 + 17, Y1 + 12 + 6 * n, Z1 + 19);
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 16 - i, Y1 + 12 + 6 * n, Z1 + 19 + i);
		}
		//�� ���м� - ���� �밢
		for (int i = 0; i <= 3; i++) {
			locateBlock(stone, X1 + 44 + i, Y1 + 12 + 6 * n, Z1 + 16 + i);
		}
		locateBlock(stone, X1 + 48, Y1 + 12 + 6 * n, Z1 + 19);
		locateBlock(stone, X1 + 49, Y1 + 12 + 6 * n, Z1 + 19);
		for (int i = 0; i <= 3; i++) {
			locateBlock(stone, X1 + 50 + i, Y1 + 12 + 6 * n, Z1 + 19 + i);
		}
		//�� ���м� - ������ ����
		for (int i = 0; i <= 11; i++) {
			locateBlock(stone, X1 + 13 - i, Y1 + 12 + 6 * n, Z1 + 21);
		}
		//�� ���м� - ���� ����
		for (int i = 0; i <= 11; i++) {
			locateBlock(stone, X1 + 53 + i, Y1 + 12 + 6 * n, Z1 + 21);
		}
		//�� ���м� - ����
		for (int i = 0; i <= 24; i++) {
			locateBlock(stone, X1 + 2, Y1 + 12 + 6 * n, Z1 + 22 + i);
		}
		//�� ���м� - ����
		for (int i = 0; i <= 24; i++) {
			locateBlock(stone, X1 + 64, Y1 + 12 + 6 * n, Z1 + 22 + i);
		}
		//�� ���м� - �ĸ�
		for (int i = 0; i <= 60; i++) {
			locateBlock(stone, X1 + 3 + i, Y1 + 12 + 6 * n, Z1 + 46);
		}
	}

	//��������� �ٴ�
	for (int j = 0; j <= 23; j++) {
		for (int i = 0; i <= 60; i++) {
			locateBlock(stone, X1 + 3 + i, Y1 + 36, Z1 + 22 + j);
		}
	}
	for (int i = 0; i <= 36; i++) {
		locateBlock(stone, X1 + 15 + i, Y1 + 36, Z1 + 21);
	}
	for (int i = 0; i <= 34; i++) {
		locateBlock(stone, X1 + 16 + i, Y1 + 36, Z1 + 20);
	}
	for (int j = 0; j <= 2; j++) {
		for (int i = 0; i <= 26 - 2 * j; i++) {
			locateBlock(stone, X1 + 20 + i + j, Y1 + 36, Z1 + 19 - j);
		}
	}

	//������� �׵θ�
	//2�� �밢
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 22 - i, Y1 + 37, Z1 + 17 + i);
	}
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 44 + i, Y1 + 37, Z1 + 17 + i);
	}
	locateBlock(stone, X1 + 15, Y1 + 37, Z1 + 21);
	locateBlock(stone, X1 + 51, Y1 + 37, Z1 + 21);
	//2�� ����
	for (int i = 0; i <= 20; i++) {
		locateBlock(stone, X1 + 23 + i, Y1 + 37, Z1 + 17);
	}
	for (int i = 0; i <= 3; i++) {
		locateBlock(stone, X1 + 16 + i, Y1 + 37, Z1 + 20);
	}
	for (int i = 0; i <= 11; i++) {
		locateBlock(stone, X1 + 3 + i, Y1 + 37, Z1 + 22);
	}
	for (int i = 0; i <= 3; i++) {
		locateBlock(stone, X1 + 47 + i, Y1 + 37, Z1 + 20);
	}
	for (int i = 0; i <= 11; i++) {
		locateBlock(stone, X1 + 52 + i, Y1 + 37, Z1 + 22);
	}
	//2�� ����
	for (int i = 0; i <= 22; i++) {
		locateBlock(stone, X1 + 3, Y1 + 37, Z1 + 23 + i);
	}
	//2�� ����
	for (int i = 0; i <= 22; i++) {
		locateBlock(stone, X1 + 63, Y1 + 37, Z1 + 23 + i);
	}
	//2�� �ĸ�
	for (int i = 0; i <= 58; i++) {
		locateBlock(stone, X1 + 4 + i, Y1 + 37, Z1 + 45);
	}


	for (int k = 0; k <= 1; k++) {

		//������� �밢
		for (int i = 0; i <= 3; i++) {
			locateBlock(stone, X1 + 23 - i, Y1 + 37 + 2 * k, Z1 + 20 + i);
		}
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 17 - i, Y1 + 37 + 2 * k, Z1 + 23 + i);
		}
		locateBlock(stone, X1 + 19, Y1 + 37 + 2 * k, Z1 + 23);
		locateBlock(stone, X1 + 18, Y1 + 37 + 2 * k, Z1 + 23);
		for (int i = 0; i <= 3; i++) {
			locateBlock(stone, X1 + 43 + i, Y1 + 37 + 2 * k, Z1 + 20 + i);
		}
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 49 + i, Y1 + 37 + 2 * k, Z1 + 23 + i);
		}
		locateBlock(stone, X1 + 47, Y1 + 37 + 2 * k, Z1 + 23);
		locateBlock(stone, X1 + 48, Y1 + 37 + 2 * k, Z1 + 23);

		//������� ����
		//���� ���
		for (int i = 0; i <= 18; i++) {
			locateBlock(stone, X1 + 24 + i, Y1 + 37 + 2 * k, Z1 + 20);
		}
		//���� ������
		for (int i = 0; i <= 8; i++) {
			locateBlock(stone, X1 + 6 + i, Y1 + 37 + 2 * k, Z1 + 25);
		}
		//���� ����
		for (int i = 0; i <= 8; i++) {
			locateBlock(stone, X1 + 52 + i, Y1 + 37 + 2 * k, Z1 + 25);
		}

		//������� ����
		for (int i = 0; i <= 17; i++) {
			locateBlock(stone, X1 + 6, Y1 + 37 + 2 * k, Z1 + 26 + i);
		}
		//������� ����
		for (int i = 0; i <= 17; i++) {
			locateBlock(stone, X1 + 60, Y1 + 37 + 2 * k, Z1 + 26 + i);
		}
		//������� �ĸ�
		for (int i = 0; i <= 52; i++) {
			locateBlock(stone, X1 + 7 + i, Y1 + 37 + 2 * k, Z1 + 43);
		}
	}

	//������� â�� ����
	locateBlock(stone, X1 + 23, Y1 + 38, Z1 + 20);
	locateBlock(stone, X1 + 25, Y1 + 38, Z1 + 20);
	locateBlock(stone, X1 + 29, Y1 + 38, Z1 + 20);
	locateBlock(stone, X1 + 31, Y1 + 38, Z1 + 20);
	locateBlock(stone, X1 + 35, Y1 + 38, Z1 + 20);
	locateBlock(stone, X1 + 37, Y1 + 38, Z1 + 20);
	locateBlock(stone, X1 + 41, Y1 + 38, Z1 + 20);
	locateBlock(stone, X1 + 43, Y1 + 38, Z1 + 20);
	//������� ������ ���� â�� ����
	locateBlock(stone, X1 + 6, Y1 + 38, Z1 + 25);
	locateBlock(stone, X1 + 8, Y1 + 38, Z1 + 25);
	locateBlock(stone, X1 + 11, Y1 + 38, Z1 + 25);
	locateBlock(stone, X1 + 13, Y1 + 38, Z1 + 25);
	//������� ���� ���� â�� ����
	locateBlock(stone, X1 + 60, Y1 + 38, Z1 + 25);
	locateBlock(stone, X1 + 58, Y1 + 38, Z1 + 25);
	locateBlock(stone, X1 + 55, Y1 + 38, Z1 + 25);
	locateBlock(stone, X1 + 53, Y1 + 38, Z1 + 25);
	//������� â�� ���� ������ �밢
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 22 - i, Y1 + 38, Z1 + 21 + i);
	}
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 17 - i, Y1 + 38, Z1 + 23 + i);
	}
	//������� â�� ���� ���� �밢
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 44 + i, Y1 + 38, Z1 + 21 + i);
	}
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 49 + i, Y1 + 38, Z1 + 23 + i);
	}
	//2�� ���� â�� ����
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 6, Y1 + 38, Z1 + 25 + 6 * i);
	}
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 6, Y1 + 38, Z1 + 27 + 6 * i);
		locateBlock(stone, X1 + 6, Y1 + 38, Z1 + 28 + 6 * i);
	}
	//2�� ���� â�� ����
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 60, Y1 + 38, Z1 + 25 + 6 * i);
	}
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 60, Y1 + 38, Z1 + 27 + 6 * i);
		locateBlock(stone, X1 + 60, Y1 + 38, Z1 + 28 + 6 * i);
	}
	//2�� �ĸ� â�� ����
	//�ĸ� ������
	for (int i = 0; i <= 3; i++) {
		locateBlock(stone, X1 + 9 + 6 * i, Y1 + 38, Z1 + 43);
	}
	for (int i = 0; i <= 3; i++) {
		locateBlock(stone, X1 + 11 + 6 * i, Y1 + 38, Z1 + 43);
		locateBlock(stone, X1 + 12 + 6 * i, Y1 + 38, Z1 + 43);
	}
	//�ĸ� ����
	for (int i = 0; i <= 3; i++) {
		locateBlock(stone, X1 + 39 + 6 * i, Y1 + 38, Z1 + 43);
	}
	for (int i = 0; i <= 3; i++) {
		locateBlock(stone, X1 + 36 + 6 * i, Y1 + 38, Z1 + 43);
		locateBlock(stone, X1 + 37 + 6 * i, Y1 + 38, Z1 + 43);
	}
	//�ĸ� ���
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 32 + i, Y1 + 38, Z1 + 43);
	}
	//�ĸ� �𼭸�
	locateBlock(stone, X1 + 6, Y1 + 38, Z1 + 43);
	locateBlock(stone, X1 + 60, Y1 + 38, Z1 + 43);

	//������� ���� �׵θ�
	//�밢
	for (int i = 0; i <= 3; i++) {
		locateBlock(stone, X1 + 23 - i, Y1 + 40, Z1 + 19 + i);
	}
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 17 - i, Y1 + 40, Z1 + 22 + i);
	}
	for (int i = 0; i <= 3; i++) {
		locateBlock(stone, X1 + 43 + i, Y1 + 40, Z1 + 19 + i);
	}
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 49 + i, Y1 + 40, Z1 + 22 + i);
	}
	//���� ���
	for (int i = 0; i <= 18; i++) {
		locateBlock(stone, X1 + 24 + i, Y1 + 40, Z1 + 19);
	}
	locateBlock(stone, X1 + 19, Y1 + 40, Z1 + 22);
	locateBlock(stone, X1 + 18, Y1 + 40, Z1 + 22);
	locateBlock(stone, X1 + 47, Y1 + 40, Z1 + 22);
	locateBlock(stone, X1 + 48, Y1 + 40, Z1 + 22);
	//���� ������
	for (int i = 0; i <= 8; i++) {
		locateBlock(stone, X1 + 6 + i, Y1 + 40, Z1 + 24);
	}
	//���� ����
	for (int i = 0; i <= 8; i++) {
		locateBlock(stone, X1 + 52 + i, Y1 + 40, Z1 + 24);
	}
	//����
	for (int i = 0; i <= 19; i++) {
		locateBlock(stone, X1 + 5, Y1 + 40, Z1 + 24 + i);
	}
	//����
	for (int i = 0; i <= 19; i++) {
		locateBlock(stone, X1 + 61, Y1 + 40, Z1 + 24 + i);
	}
	//�ĸ�
	for (int i = 0; i <= 56; i++) {
		locateBlock(stone, X1 + 5 + i, Y1 + 40, Z1 + 44);
	}

	//������� ����
	for (int j = 0; j <= 18; j++) {
		for (int i = 0; i <= 54; i++) {
			locateBlock(stone, X1 + 6 + i, Y1 + 40, Z1 + 25 + j);
		}
	}
	for (int i = 0; i <= 34; i++) {
		locateBlock(stone, X1 + 16 + i, Y1 + 40, Z1 + 24);
	}
	for (int i = 0; i <= 32; i++) {
		locateBlock(stone, X1 + 17 + i, Y1 + 40, Z1 + 23);
	}
	for (int j = 0; j <= 2; j++) {
		for (int i = 0; i <= 24 - 2 * j; i++) {
			locateBlock(stone, X1 + 21 + i + j, Y1 + 40, Z1 + 22 - j);
		}
	}
	//��
	for (int j = 0; j <= 2; j++) {
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 32 + i, Y1 + 11, Z1 + 14 + j);
		}
	}
	for (int j = 0; j <= 3; j++) {
		for (int i = 0; i <= 3; i++) {
			locateBlock(stone, X1 + 31, Y1 + 7 + j, Z1 + 14 + i);
		}
	}
	for (int j = 0; j <= 3; j++) {
		for (int i = 0; i <= 3; i++) {
			locateBlock(stone, X1 + 35, Y1 + 7 + j, Z1 + 14 + i);
		}
	}
	for (int j = 0; j <= 2; j++) {
		for (int i = 0; i <= 2; i++) {
			locateBlock(air, X1 + 32 + i, Y1 + 7 + j, Z1 + 17);
		}
	}

	//���� - ������
	for (int k = 0; k <= 5; k++) {
		for (int j = 0; j <= 17; j++) {
			for (int i = 0; i <= 1; i++) {
				locateBlock(stone, X1 + 20 + 2 * k + i, Y1 + 30 + k, Z1 + 3 + j);
			}
		}
	}
	//���� - ����
	for (int k = 0; k <= 5; k++) {
		for (int j = 0; j <= 17; j++) {
			for (int i = 0; i <= 1; i++) {
				locateBlock(stone, X1 + 46 - 2 * k - i, Y1 + 30 + k, Z1 + 3 + j);
			}
		}
	}
	//���� - ���
	for (int j = 0; j <= 17; j++) {
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 32 + i, Y1 + 36, Z1 + 3 + j);
		}
	}
	//���� �ո� ä���
	for (int j = 0; j <= 5; j++) {
		for (int i = 0; i <= 22 - 4 * j; i++) {
			locateBlock(stone, X1 + 22 + i + 2 * j, Y1 + 30 + j, Z1 + 4);
		}
	}

	//���� �ٴ�
	for (int j = 0; j <= 17; j++) {
		for (int i = 0; i <= 32; i++) {
			locateBlock(stone, X1 + 17 + i, Y1 + 29, Z1 + 3 + j);
		}
	}

	//��� ���ڰ� ���
	for (int i = 0; i <= 1; i++) {
		//���
		locateBlock(stone, X1 + 33, Y1 + 7 + i, Z1 + 3);
		locateBlock(stone, X1 + 32, Y1 + 7 + i, Z1 + 4);
		locateBlock(stone, X1 + 34, Y1 + 7 + i, Z1 + 4);
		locateBlock(stone, X1 + 33, Y1 + 7 + i, Z1 + 5);
		//������ - 1
		locateBlock(stone, X1 + 19, Y1 + 7 + i, Z1 + 3);
		locateBlock(stone, X1 + 18, Y1 + 7 + i, Z1 + 4);
		locateBlock(stone, X1 + 20, Y1 + 7 + i, Z1 + 4);
		locateBlock(stone, X1 + 19, Y1 + 7 + i, Z1 + 5);
		//������ - 2
		locateBlock(stone, X1 + 19, Y1 + 7 + i, Z1 + 12);
		locateBlock(stone, X1 + 18, Y1 + 7 + i, Z1 + 13);
		locateBlock(stone, X1 + 20, Y1 + 7 + i, Z1 + 13);
		locateBlock(stone, X1 + 19, Y1 + 7 + i, Z1 + 14);
		//���� - 1
		locateBlock(stone, X1 + 47, Y1 + 7 + i, Z1 + 12);
		locateBlock(stone, X1 + 46, Y1 + 7 + i, Z1 + 13);
		locateBlock(stone, X1 + 48, Y1 + 7 + i, Z1 + 13);
		locateBlock(stone, X1 + 47, Y1 + 7 + i, Z1 + 14);
		//���� - 2
		locateBlock(stone, X1 + 47, Y1 + 7 + i, Z1 + 3);
		locateBlock(stone, X1 + 46, Y1 + 7 + i, Z1 + 4);
		locateBlock(stone, X1 + 48, Y1 + 7 + i, Z1 + 4);
		locateBlock(stone, X1 + 47, Y1 + 7 + i, Z1 + 5);
	}
	for (int i = 0; i <= 1; i++) {
		//���
		locateBlock(stone, X1 + 33, Y1 + 27 + i, Z1 + 3);
		locateBlock(stone, X1 + 32, Y1 + 27 + i, Z1 + 4);
		locateBlock(stone, X1 + 34, Y1 + 27 + i, Z1 + 4);
		locateBlock(stone, X1 + 33, Y1 + 27 + i, Z1 + 5);
		//������ - 1
		locateBlock(stone, X1 + 19, Y1 + 27 + i, Z1 + 3);
		locateBlock(stone, X1 + 18, Y1 + 27 + i, Z1 + 4);
		locateBlock(stone, X1 + 20, Y1 + 27 + i, Z1 + 4);
		locateBlock(stone, X1 + 19, Y1 + 27 + i, Z1 + 5);
		//������ - 2
		locateBlock(stone, X1 + 19, Y1 + 27 + i, Z1 + 12);
		locateBlock(stone, X1 + 18, Y1 + 27 + i, Z1 + 13);
		locateBlock(stone, X1 + 20, Y1 + 27 + i, Z1 + 13);
		locateBlock(stone, X1 + 19, Y1 + 27 + i, Z1 + 14);
		//���� - 1
		locateBlock(stone, X1 + 47, Y1 + 27 + i, Z1 + 12);
		locateBlock(stone, X1 + 46, Y1 + 27 + i, Z1 + 13);
		locateBlock(stone, X1 + 48, Y1 + 27 + i, Z1 + 13);
		locateBlock(stone, X1 + 47, Y1 + 27 + i, Z1 + 14);
		//���� - 2
		locateBlock(stone, X1 + 47, Y1 + 27 + i, Z1 + 3);
		locateBlock(stone, X1 + 46, Y1 + 27 + i, Z1 + 4);
		locateBlock(stone, X1 + 48, Y1 + 27 + i, Z1 + 4);
		locateBlock(stone, X1 + 47, Y1 + 27 + i, Z1 + 5);
	}

	//���
	for (int i = 0; i <= 21; i++) {
		locateBlock(stone, X1 + 47, Y1 + 7 + i, Z1 + 13);
	}
	for (int i = 0; i <= 21; i++) {
		locateBlock(stone, X1 + 47, Y1 + 7 + i, Z1 + 4);
	}
	for (int i = 0; i <= 21; i++) {
		locateBlock(stone, X1 + 33, Y1 + 7 + i, Z1 + 4);
	}
	for (int i = 0; i <= 21; i++) {
		locateBlock(stone, X1 + 19, Y1 + 7 + i, Z1 + 4);
	}
	for (int i = 0; i <= 21; i++) {
		locateBlock(stone, X1 + 19, Y1 + 7 + i, Z1 + 13);
	}

}
