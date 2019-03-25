#include <CoalaMOD.h>
#include <stdio.h>
#pragma comment(lib, "CoalaMOD.lib")
#include <math.h>

int main()
{
	double pi = 3.14159265358979323846; //파이를 정의

	int px, py, pz; //좌표 변수를 쓰기위한 선언
	getPlayerLocation(&px, &py, &pz); //플레이어의 좌표값을 각 변수에 저장

	double dir = getPlayerDirection(); //dir변수에 플레이어의 방향을 더블형으로 저장
	double radian = dir * pi / 180.; //getPlayerDirection()함수를 통해 받은 각도를 라디안으로 변환

	int dx = -10 * sin(radian); //z축을 기준으로 하기 때문에 양수로 저장할 시에 문제가 생김
	int dz = 10 * cos(radian);

	int h = 21; //높이 변수

	px += dx;
	pz += dz;

	BlockID iron = createBlock(BLOCK_IRON);
	BlockID glass = createBlock(BLOCK_GLASS);
	BlockID glowstone = createBlock(BLOCK_GLOWSTONE);
	DoorID left_door = createDoor(DOOR_DARK_OAK, true, HINGE_RIGHT);
	DoorID right_door = createDoor(DOOR_DARK_OAK, true, HINGE_LEFT);

	//아파트의 이음벽 세우기
	for (int j = 0; j < h; j++)
	{
		for (int i = 0; i < 6; i++)
		{
			locateBlock(iron, px - 2 + i, py + j, pz);
			locateBlock(iron, px - 2 + i, py + j, pz + 4);
		}
	}
	//이음벽에 창문 달기
	for (int j = 0; j < h; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			if (j % 2 == 0)
			{
				//아무것도 하지 않음.
			}
			else
			{
				locateBlock(glass, px - 1 + i, py + j, pz);
				locateBlock(glass, px - 1 + i, py + j, pz + 4);
			}
		}
	}
	//이음새 부분 층 만들기
	for (int k = 0; k < 6; k++)
	{
		for (int j = 1; j < h / 4; j++)
		{
			for (int i = 0; i < 3; i++)
			{
				locateBlock(iron, px - 2 + k, py + 4 * j, pz + 1 + i);
			}

		}
		for (int i = 0; i < 3; i++)
		{
			locateBlock(iron, px - 2 + k, py + h, pz + 1 + i);
		}
	}

	//왼쪽 아파트
	for (int j = 0; j < h; j++)
	{
		for (int i = 0; i < 6; i++)
		{
			locateBlock(iron, px - 8 + i, py + j, pz - 1);
			locateBlock(iron, px - 8 + i, py + j, pz + 5);
		}
	}
	//왼쪽 아파트 유리
	for (int j = 0; j < h; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			if (j % 2 == 0)
			{
				//아무것도 하지 않음.
			}
			else
			{
				locateBlock(glass, px - 7 + i, py + j, pz - 1);
				locateBlock(glass, px - 7 + i, py + j, pz + 5);
			}
		}
	}
	//왼쪽 아파트 세로 벽
	for (int j = 0; j < h; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			locateBlock(iron, px - 9, py + j, pz + i);
		}
	}
	//왼쪽 아파트 층 만들기
	for (int k = 0; k < 6; k++)
	{
		for (int j = 1; j < h / 4; j++)
		{
			for (int i = 0; i < 5; i++)
			{
				locateBlock(iron, px - 8 + k, py + 4 * j, pz + i);
			}

		}
		for (int i = 0; i < 5; i++)
		{
			locateBlock(iron, px - 8 + k, py + h, pz + i);
		}
	}

	//오른쪽 아파트
	for (int j = 0; j < h; j++)
	{
		for (int i = 0; i < 6; i++)
		{
			locateBlock(iron, px + 4 + i, py + j, pz - 1);
			locateBlock(iron, px + 4 + i, py + j, pz + 5);
		}
	}
	//오른쪽 아파트 유리
	for (int j = 0; j < h; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			if (j % 2 == 0)
			{
				//아무것도 하지 않음.
			}
			else
			{
				locateBlock(glass, px + 5 + i, py + j, pz - 1);
				locateBlock(glass, px + 5 + i, py + j, pz + 5);
			}
		}
	}
	//오른쪽 아파트 벽
	for (int j = 0; j < h; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			locateBlock(iron, px + 10, py + j, pz + i);
		}
	}
	//오른쪽 아파트 층 만들기
	for (int k = 0; k < 6; k++)
	{
		for (int j = 1; j < h / 4; j++)
		{
			for (int i = 0; i < 5; i++)
			{
				locateBlock(iron, px + 4 + k, py + 4 * j, pz + i);
			}

		}
		for (int i = 0; i < 5; i++)
		{
			locateBlock(iron, px + 4 + k, py + h, pz + i);
		}
	}

	//발광석 설치
	for (int j = 0; j < h / 4; j++)
	{
		locateBlock(glowstone, px - 8, py + 3 + 4 * j, pz);
		locateBlock(glowstone, px - 8, py + 3 + 4 * j, pz + 4);
		locateBlock(glowstone, px - 3, py + 3 + 4 * j, pz);
		locateBlock(glowstone, px - 3, py + 3 + 4 * j, pz + 4);

		locateBlock(glowstone, px - 2, py + 3 + 4 * j, pz + 1);
		locateBlock(glowstone, px - 2, py + 3 + 4 * j, pz + 3);
		locateBlock(glowstone, px + 3, py + 3 + 4 * j, pz + 1);
		locateBlock(glowstone, px + 3, py + 3 + 4 * j, pz + 3);

		locateBlock(glowstone, px + 4, py + 3 + 4 * j, pz);
		locateBlock(glowstone, px + 4, py + 3 + 4 * j, pz + 4);
		locateBlock(glowstone, px + 9, py + 3 + 4 * j, pz);
		locateBlock(glowstone, px + 9, py + 3 + 4 * j, pz + 4);
	}

	//문 설치
	installDoor(right_door, px, py, pz, FACING_EAST);
	installDoor(left_door, px + 1, py, pz, FACING_WEST);

	return 0;
}