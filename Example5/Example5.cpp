#include <iostream>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

int main()
{
	int sx, sy, sz, ex, ey, ez; //��ǥ �ޱ� ���� ����
	int SX, SY, SZ, EX, EY, EZ; //���� ȿ���� ���� ����

	WoolID stone = createWool(COLOR_RED);
	WoolID stone2 = createWool(COLOR_WHITE);
	WoolID stone3 = createWool(COLOR_WHITE);
	WoolID stone4 = createWool(COLOR_RED);
	WoolID stone5 = createWool(COLOR_WHITE);

	printf("ù��° ��ǥ�� �Է��Ͻÿ�: "); // ��ǥ �ޱ�
	scanf_s("%d %d %d", &sx, &sy, &sz);
	printf("�ι�° ��ǥ�� �Է��Ͻÿ�: ");
	scanf_s("%d %d %d", &ex, &ey, &ez);

	SX = sx > ex ? ex : sx; //���� ȿ���� ���� ��ǥ ��
	EX = sx > ex ? sx : ex;
	SY = sy > ey ? ey : sy;
	EY = sy > ey ? sy : ey;
	SZ = sz > ez ? ez : sz;
	EZ = sz > ez ? sz : ez;

	printf("�Էµ� ��ǥ�� %d %d %d %d %d %d �Դϴ�. \n", sx, sy, sz, ex, ey, ez); //��ǥ�� ����� �ԷµǾ����� Ȯ��

	int x1 = SX, y1 = SY, z1 = SZ;
	int x2 = EX, y2 = (EY - SY)*(0.02) + SY, z2 = EZ;

	int X1, Y1, Z1, X2, Y2, Z2;

	X1 = x1 > x2 ? x2 : x1; //���� ȿ���� ���� ��ǥ ��
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	for (int k = 0; k <= Y2 - Y1; k++) //�ٴ�1
	{
		for (int i = 0; i <= X2 - X1; i++)
		{
			for (int j = 0; j <= Z2 - Z1; j++)
			{
				locateBlock(stone2, X1 + i, Y1, Z1);

				locateBlock(stone2, X1 + i, Y1, Z1 + j);

				locateBlock(stone2, X1 + i, Y1 + k, Z1 + j);

			}
		}
	}

	x1 = (EX - SX)*(0.05) + SX, y1 = (EY - SY)*(0.02) + SY, z1 = (EZ - SZ)*(0.05) + SZ;
	x2 = (EX - SX)*(0.95) + SX, y2 = (EY - SY)*(0.04) + SY, z2 = (EZ - SZ)*(0.95) + SZ;

	X1 = x1 > x2 ? x2 : x1; //���� ȿ���� ���� ��ǥ ��
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	for (int k = 0; k <= Y2 - Y1; k++) //�ٴ�2
	{
		for (int i = 0; i <= X2 - X1; i++)
		{
			for (int j = 0; j <= Z2 - Z1; j++)
			{
				locateBlock(stone2, X1 + i, Y1, Z1);

				locateBlock(stone2, X1 + i, Y1, Z1 + j);

				locateBlock(stone2, X1 + i, Y1 + k, Z1 + j);

			}
		}
	}

	x1 = (EX - SX)*(0.2) + SX, y1 = (EY - SY)*(0.04) + SY, z1 = (EZ - SZ)*(0.2) + SZ;
	x2 = (EX - SX)*(0.8) + SX, y2 = (EY - SY)*(0.18) + SY, z2 = (EZ - SZ)*(0.8) + SZ;

	X1 = x1 > x2 ? x2 : x1; //���� ȿ���� ���� ��ǥ ��
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	for (int k = 0; k <= Y2 - Y1; k++) //1��
	{
		for (int i = 0; i <= X2 - X1; i++)
		{
			for (int j = 0; j <= Z2 - Z1; j++)
			{
				locateBlock(stone, X1 + i, Y1, Z1);

				locateBlock(stone, X1 + i, Y1, Z1 + j);

				locateBlock(stone, X1 + i, Y1 + k, Z1 + j);

			}
		}
	}

	x1 = (EX - SX)*(0.15) + SX, y1 = (EY - SY)*(0.18) + SY, z1 = (EZ - SZ)*(0.15) + SZ;
	x2 = (EX - SX)*(0.85) + SX, y2 = (EY - SY)*(0.2) + SY, z2 = (EZ - SZ)*(0.85) + SZ;

	X1 = x1 > x2 ? x2 : x1; //���� ȿ���� ���� ��ǥ ��
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	for (int k = 0; k < Y2 - Y1; k++) //1�� ����1
	{
		for (int i = 0; i <= X2 - X1; i++)
		{
			for (int j = 0; j <= Z2 - Z1; j++)
			{
				locateBlock(stone3, X1 + i, Y1, Z1);

				locateBlock(stone3, X1 + i, Y1, Z1 + j);

				locateBlock(stone3, X1 + i, Y1 + k, Z1 + j);

			}
		}
	}

	x1 = (EX - SX)*(0.1) + SX, y1 = (EY - SY)*(0.2) + SY, z1 = (EZ - SZ)*(0.1) + SZ;
	x2 = (EX - SX)*(0.9) + SX, y2 = (EY - SY)*(0.22) + SY, z2 = (EZ - SZ)*(0.9) + SZ;

	X1 = x1 > x2 ? x2 : x1; //���� ȿ���� ���� ��ǥ ��
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	for (int k = 0; k < Y2 - Y1; k++) //1�� ����2
	{
		for (int i = 0; i <= X2 - X1; i++)
		{
			for (int j = 0; j <= Z2 - Z1; j++)
			{
				locateBlock(stone3, X1 + i, Y1, Z1);

				locateBlock(stone3, X1 + i, Y1, Z1 + j);

				locateBlock(stone3, X1 + i, Y1 + k, Z1 + j);

			}
		}
	}

	x1 = (EX - SX)*(0.3) + SX, y1 = (EY - SY)*(0.22) + SY, z1 = (EZ - SZ)*(0.3) + SZ;
	x2 = (EX - SX)*(0.7) + SX, y2 = (EY - SY)*(0.4) + SY, z2 = (EZ - SZ)*(0.7) + SZ;

	X1 = x1 > x2 ? x2 : x1; //���� ȿ���� ���� ��ǥ ��
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	for (int k = 0; k <= Y2 - Y1; k++) //2��
	{
		for (int i = 0; i <= X2 - X1; i++)
		{
			for (int j = 0; j <= Z2 - Z1; j++)
			{
				locateBlock(stone, X1 + i, Y1, Z1);

				locateBlock(stone, X1 + i, Y1, Z1 + j);

				locateBlock(stone, X1 + i, Y1 + k, Z1 + j);

			}
		}
	}

	x1 = (EX - SX)*(0.25) + SX, y1 = (EY - SY)*(0.4) + SY, z1 = (EZ - SZ)*(0.25) + SZ;
	x2 = (EX - SX)*(0.75) + SX, y2 = (EY - SY)*(0.42) + SY, z2 = (EZ - SZ)*(0.75) + SZ;

	X1 = x1 > x2 ? x2 : x1; //���� ȿ���� ���� ��ǥ ��
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	for (int k = 0; k < Y2 - Y1; k++) //2�� ����1
	{
		for (int i = 0; i <= X2 - X1; i++)
		{
			for (int j = 0; j <= Z2 - Z1; j++)
			{
				locateBlock(stone3, X1 + i, Y1, Z1);

				locateBlock(stone3, X1 + i, Y1, Z1 + j);

				locateBlock(stone3, X1 + i, Y1 + k, Z1 + j);

			}
		}
	}

	x1 = (EX - SX)*(0.2) + SX, y1 = (EY - SY)*(0.42) + SY, z1 = (EZ - SZ)*(0.2) + SZ;
	x2 = (EX - SX)*(0.8) + SX, y2 = (EY - SY)*(0.44) + SY, z2 = (EZ - SZ)*(0.8) + SZ;

	X1 = x1 > x2 ? x2 : x1; //���� ȿ���� ���� ��ǥ ��
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	for (int k = 0; k < Y2 - Y1; k++) //2�� ����2
	{
		for (int i = 0; i <= X2 - X1; i++)
		{
			for (int j = 0; j <= Z2 - Z1; j++)
			{
				locateBlock(stone3, X1 + i, Y1, Z1);

				locateBlock(stone3, X1 + i, Y1, Z1 + j);

				locateBlock(stone3, X1 + i, Y1 + k, Z1 + j);

			}
		}
	}


	x1 = (EX - SX)*(0.35) + SX, y1 = (EY - SY)*(0.44) + SY, z1 = (EZ - SZ)*(0.35) + SZ;
	x2 = (EX - SX)*(0.65) + SX, y2 = (EY - SY)*(0.58) + SY, z2 = (EZ - SZ)*(0.65) + SZ;

	X1 = x1 > x2 ? x2 : x1; //���� ȿ���� ���� ��ǥ ��
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	for (int k = 0; k <= Y2 - Y1; k++) //3��
	{
		for (int i = 0; i <= X2 - X1; i++)
		{
			for (int j = 0; j <= Z2 - Z1; j++)
			{
				locateBlock(stone, X1 + i, Y1, Z1);

				locateBlock(stone, X1 + i, Y1, Z1 + j);

				locateBlock(stone, X1 + i, Y1 + k, Z1 + j);

			}
		}
	}

	x1 = (EX - SX)*(0.3) + SX, y1 = (EY - SY)*(0.58) + SY, z1 = (EZ - SZ)*(0.3) + SZ;
	x2 = (EX - SX)*(0.7) + SX, y2 = (EY - SY)*(0.6) + SY, z2 = (EZ - SZ)*(0.7) + SZ;

	X1 = x1 > x2 ? x2 : x1; //���� ȿ���� ���� ��ǥ ��
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	for (int k = 0; k < Y2 - Y1; k++) //3�� ����1
	{
		for (int i = 0; i <= X2 - X1; i++)
		{
			for (int j = 0; j <= Z2 - Z1; j++)
			{
				locateBlock(stone3, X1 + i, Y1, Z1);

				locateBlock(stone3, X1 + i, Y1, Z1 + j);

				locateBlock(stone3, X1 + i, Y1 + k, Z1 + j);

			}
		}
	}

	x1 = (EX - SX)*(0.25) + SX, y1 = (EY - SY)*(0.6) + SY, z1 = (EZ - SZ)*(0.25) + SZ;
	x2 = (EX - SX)*(0.75) + SX, y2 = (EY - SY)*(0.62) + SY, z2 = (EZ - SZ)*(0.75) + SZ;

	X1 = x1 > x2 ? x2 : x1; //���� ȿ���� ���� ��ǥ ��
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	for (int k = 0; k < Y2 - Y1; k++) //3�� ����2
	{
		for (int i = 0; i <= X2 - X1; i++)
		{
			for (int j = 0; j <= Z2 - Z1; j++)
			{
				locateBlock(stone3, X1 + i, Y1, Z1);

				locateBlock(stone3, X1 + i, Y1, Z1 + j);

				locateBlock(stone3, X1 + i, Y1 + k, Z1 + j);

			}
		}
	}

	x1 = (EX - SX)*(0.4) + SX, y1 = (EY - SY)*(0.62) + SY, z1 = (EZ - SZ)*(0.4) + SZ;
	x2 = (EX - SX)*(0.6) + SX, y2 = (EY - SY)*(0.7) + SY, z2 = (EZ - SZ)*(0.6) + SZ;

	X1 = x1 > x2 ? x2 : x1; //���� ȿ���� ���� ��ǥ ��
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	for (int k = 0; k <= Y2 - Y1; k++) //4��
	{
		for (int i = 0; i <= X2 - X1; i++)
		{
			for (int j = 0; j <= Z2 - Z1; j++)
			{
				locateBlock(stone, X1 + i, Y1, Z1);

				locateBlock(stone, X1 + i, Y1, Z1 + j);

				locateBlock(stone, X1 + i, Y1 + k, Z1 + j);

			}
		}
	}

	x1 = (EX - SX)*(0.35) + SX, y1 = (EY - SY)*(0.7) + SY, z1 = (EZ - SZ)*(0.35) + SZ;
	x2 = (EX - SX)*(0.65) + SX, y2 = (EY - SY)*(0.72) + SY, z2 = (EZ - SZ)*(0.65) + SZ;

	X1 = x1 > x2 ? x2 : x1; //���� ȿ���� ���� ��ǥ ��
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	for (int k = 0; k < Y2 - Y1; k++) //4�� ����1
	{
		for (int i = 0; i <= X2 - X1; i++)
		{
			for (int j = 0; j <= Z2 - Z1; j++)
			{
				locateBlock(stone3, X1 + i, Y1, Z1);

				locateBlock(stone3, X1 + i, Y1, Z1 + j);

				locateBlock(stone3, X1 + i, Y1 + k, Z1 + j);

			}
		}
	}

	x1 = (EX - SX)*(0.3) + SX, y1 = (EY - SY)*(0.72) + SY, z1 = (EZ - SZ)*(0.3) + SZ;
	x2 = (EX - SX)*(0.7) + SX, y2 = (EY - SY)*(0.74) + SY, z2 = (EZ - SZ)*(0.7) + SZ;

	X1 = x1 > x2 ? x2 : x1; //���� ȿ���� ���� ��ǥ ��
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	for (int k = 0; k < Y2 - Y1; k++) //4�� ����2
	{
		for (int i = 0; i <= X2 - X1; i++)
		{
			for (int j = 0; j <= Z2 - Z1; j++)
			{
				locateBlock(stone3, X1 + i, Y1, Z1);

				locateBlock(stone3, X1 + i, Y1, Z1 + j);

				locateBlock(stone3, X1 + i, Y1 + k, Z1 + j);

			}
		}
	}

	x1 = (EX - SX)*(0.4) + SX, y1 = (EY - SY)*(0.74) + SY, z1 = (EZ - SZ)*(0.4) + SZ;
	x2 = (EX - SX)*(0.6) + SX, y2 = (EY - SY)*(0.78) + SY, z2 = (EZ - SZ)*(0.6) + SZ;

	X1 = x1 > x2 ? x2 : x1; //���� ȿ���� ���� ��ǥ ��
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	for (int k = 0; k < Y2 - Y1; k++) //4�� ����3
	{
		for (int i = 0; i <= X2 - X1; i++)
		{
			for (int j = 0; j <= Z2 - Z1; j++)
			{
				locateBlock(stone3, X1 + i, Y1, Z1);

				locateBlock(stone3, X1 + i, Y1, Z1 + j);

				locateBlock(stone3, X1 + i, Y1 + k, Z1 + j);

			}
		}
	}

	x1 = (EX - SX)*(0.5) + SX, y1 = (EY - SY)*(0.78) + SY, z1 = (EZ - SZ)*(0.5) + SZ;
	x2 = (EX - SX)*(0.5) + SX, y2 = (EY - SY) * 1 + SY, z2 = (EZ - SZ)*(0.5) + SZ;

	X1 = x1 > x2 ? x2 : x1; //���� ȿ���� ���� ��ǥ ��
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	for (int k = 0; k <= Y2 - Y1; k++) //����� ���
	{
		for (int i = 0; i <= X2 - X1; i++)
		{
			for (int j = 0; j <= Z2 - Z1; j++)
			{
				locateBlock(stone4, X1 + i, Y1, Z1);

				locateBlock(stone4, X1 + i, Y1, Z1 + j);

				locateBlock(stone4, X1 + i, Y1 + k, Z1 + j);

			}
		}
	}

	x1 = (EX - SX)*(0.45) + SX, y1 = (EY - SY)*(0.8) + SY, z1 = (EZ - SZ)*(0.45) + SZ;
	x2 = (EX - SX)*(0.55) + SX, y2 = (EY - SY)*(0.82) + SY, z2 = (EZ - SZ)*(0.55) + SZ;

	X1 = x1 > x2 ? x2 : x1; //���� ȿ���� ���� ��ǥ ��
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	for (int k = 0; k < Y2 - Y1; k++) //�����
	{
		for (int i = 0; i <= X2 - X1; i++)
		{
			for (int j = 0; j <= Z2 - Z1; j++)
			{
				locateBlock(stone5, X1 + i, Y1, Z1);

				locateBlock(stone5, X1 + i, Y1, Z1 + j);

				locateBlock(stone5, X1 + i, Y1 + k, Z1 + j);

			}
		}
	}


	x1 = (EX - SX)*(0.45) + SX, y1 = (EY - SY)*(0.84) + SY, z1 = (EZ - SZ)*(0.45) + SZ;
	x2 = (EX - SX)*(0.55) + SX, y2 = (EY - SY)*(0.86) + SY, z2 = (EZ - SZ)*(0.55) + SZ;

	X1 = x1 > x2 ? x2 : x1; //���� ȿ���� ���� ��ǥ ��
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	for (int k = 0; k < Y2 - Y1; k++) //�����
	{
		for (int i = 0; i <= X2 - X1; i++)
		{
			for (int j = 0; j <= Z2 - Z1; j++)
			{
				locateBlock(stone5, X1 + i, Y1, Z1);

				locateBlock(stone5, X1 + i, Y1, Z1 + j);

				locateBlock(stone5, X1 + i, Y1 + k, Z1 + j);

			}
		}
	}

	x1 = (EX - SX)*(0.45) + SX, y1 = (EY - SY)*(0.88) + SY, z1 = (EZ - SZ)*(0.45) + SZ;
	x2 = (EX - SX)*(0.55) + SX, y2 = (EY - SY)*(0.9) + SY, z2 = (EZ - SZ)*(0.55) + SZ;

	X1 = x1 > x2 ? x2 : x1; //���� ȿ���� ���� ��ǥ ��
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	for (int k = 0; k < Y2 - Y1; k++) //�����
	{
		for (int i = 0; i <= X2 - X1; i++)
		{
			for (int j = 0; j <= Z2 - Z1; j++)
			{
				locateBlock(stone5, X1 + i, Y1, Z1);

				locateBlock(stone5, X1 + i, Y1, Z1 + j);

				locateBlock(stone5, X1 + i, Y1 + k, Z1 + j);

			}
		}
	}

	x1 = (EX - SX)*(0.45) + SX, y1 = (EY - SY)*(0.92) + SY, z1 = (EZ - SZ)*(0.45) + SZ;
	x2 = (EX - SX)*(0.55) + SX, y2 = (EY - SY)*(0.94) + SY, z2 = (EZ - SZ)*(0.55) + SZ;

	X1 = x1 > x2 ? x2 : x1; //���� ȿ���� ���� ��ǥ ��
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	for (int k = 0; k < Y2 - Y1; k++) //�����
	{
		for (int i = 0; i <= X2 - X1; i++)
		{
			for (int j = 0; j <= Z2 - Z1; j++)
			{
				locateBlock(stone5, X1 + i, Y1, Z1);

				locateBlock(stone5, X1 + i, Y1, Z1 + j);

				locateBlock(stone5, X1 + i, Y1 + k, Z1 + j);

			}
		}
	}

	x1 = (EX - SX)*(0.45) + SX, y1 = (EY - SY)*(0.96) + SY, z1 = (EZ - SZ)*(0.45) + SZ;
	x2 = (EX - SX)*(0.55) + SX, y2 = (EY - SY)*(0.98) + SY, z2 = (EZ - SZ)*(0.55) + SZ;

	X1 = x1 > x2 ? x2 : x1; //���� ȿ���� ���� ��ǥ ��
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	for (int k = 0; k < Y2 - Y1; k++) //�����
	{
		for (int i = 0; i <= X2 - X1; i++)
		{
			for (int j = 0; j <= Z2 - Z1; j++)
			{
				locateBlock(stone5, X1 + i, Y1, Z1);

				locateBlock(stone5, X1 + i, Y1, Z1 + j);

				locateBlock(stone5, X1 + i, Y1 + k, Z1 + j);

			}
		}
	}

}