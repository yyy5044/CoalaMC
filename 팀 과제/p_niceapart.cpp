#include "stdio.h"
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

void part_red(int a, int b, int c)       //하나의 층을 하나의 함수로, (a,b,c)부터 시작
{
	BlockID concrete_red = createConcrete(COLOR_RED, 1);
	BlockID glass = createBlock(BLOCK_GLASS);

	int i;

	for (i = 0; i < 4; i++) { //기본 함수는 높이 4짜리
		locateBlock(concrete_red, a + 1, b + i, c);
		locateBlock(concrete_red, a + 2, b + i, c);
		locateBlock(concrete_red, a + 3, b + i, c);
		locateBlock(concrete_red, a + 4, b + i, c);
		locateBlock(concrete_red, a + 5, b + i, c);
		locateBlock(concrete_red, a + 6, b + i, c);
		locateBlock(concrete_red, a + 7, b + i, c);
		locateBlock(concrete_red, a + 8, b + i, c);
		locateBlock(concrete_red, a + 9, b + i, c);
		locateBlock(concrete_red, a + 10, b + i, c);        //x축방향

		locateBlock(concrete_red, a + 1, b + i, c + 14);
		locateBlock(concrete_red, a + 2, b + i, c + 14);
		locateBlock(concrete_red, a + 3, b + i, c + 14);
		locateBlock(concrete_red, a + 4, b + i, c + 14);
		locateBlock(concrete_red, a + 5, b + i, c + 14);
		locateBlock(concrete_red, a + 6, b + i, c + 14);
		locateBlock(concrete_red, a + 7, b + i, c + 14);
		locateBlock(concrete_red, a + 8, b + i, c + 14);
		locateBlock(concrete_red, a + 9, b + i, c + 14);
		locateBlock(concrete_red, a + 10, b + i, c + 14); //x축방향 멀리쪽

		locateBlock(concrete_red, a + 10, b + i, c + 1);
		locateBlock(concrete_red, a + 10, b + i, c + 2);
		locateBlock(concrete_red, a + 10, b + i, c + 3);
		locateBlock(concrete_red, a + 10, b + i, c + 4);
		locateBlock(concrete_red, a + 10, b + i, c + 5);
		locateBlock(concrete_red, a + 10, b + i, c + 6);
		locateBlock(concrete_red, a + 10, b + i, c + 7);
		locateBlock(concrete_red, a + 10, b + i, c + 8);
		locateBlock(concrete_red, a + 10, b + i, c + 9);
		locateBlock(concrete_red, a + 10, b + i, c + 10);
		locateBlock(concrete_red, a + 10, b + i, c + 11);
		locateBlock(concrete_red, a + 10, b + i, c + 12);
		locateBlock(concrete_red, a + 10, b + i, c + 13);
		locateBlock(concrete_red, a + 10, b + i, c + 14); //z방향 위쪽

		locateBlock(concrete_red, a + 1, b + i, c);
		locateBlock(concrete_red, a + 1, b + i, c + 1);
		locateBlock(concrete_red, a + 1, b + i, c + 2);
		locateBlock(concrete_red, a + 1, b + i, c + 3);
		locateBlock(concrete_red, a + 1, b + i, c + 4);

		locateBlock(concrete_red, a, b + i, c + 5);
		locateBlock(concrete_red, a, b + i, c + 6);
		locateBlock(concrete_red, a, b + i, c + 7);
		locateBlock(concrete_red, a, b + i, c + 8);
		locateBlock(concrete_red, a, b + i, c + 9);

		locateBlock(concrete_red, a + 1, b + i, c + 10);
		locateBlock(concrete_red, a + 1, b + i, c + 11);
		locateBlock(concrete_red, a + 1, b + i, c + 12);
		locateBlock(concrete_red, a + 1, b + i, c + 13);
		locateBlock(concrete_red, a + 1, b + i, c + 14); //z방향 아랫쪽

	}

	locateBlock(glass, a + 1, b + 1, c + 1);            //여기부터 창문
	locateBlock(glass, a + 1, b + 1, c + 2);
	locateBlock(glass, a + 1, b + 1, c + 3);

	locateBlock(glass, a, b + 1, c + 6);
	locateBlock(glass, a, b + 1, c + 7);
	locateBlock(glass, a, b + 1, c + 8);

	locateBlock(glass, a + 1, b + 1, c + 11);
	locateBlock(glass, a + 1, b + 1, c + 12);
	locateBlock(glass, a + 1, b + 1, c + 13);

	locateBlock(glass, a + 1, b + 2, c + 1);            //여기부터 창문
	locateBlock(glass, a + 1, b + 2, c + 2);
	locateBlock(glass, a + 1, b + 2, c + 3);

	locateBlock(glass, a, b + 2, c + 6);
	locateBlock(glass, a, b + 2, c + 7);
	locateBlock(glass, a, b + 2, c + 8);

	locateBlock(glass, a + 1, b + 2, c + 11);
	locateBlock(glass, a + 1, b + 2, c + 12);
	locateBlock(glass, a + 1, b + 2, c + 13);


}


void part_white(int a, int b, int c)       //하나의 층을 하나의 함수로, (a,b,c)부터 시작
{
	BlockID concrete_white = createConcrete(COLOR_WHITE, 1);
	BlockID glass = createBlock(BLOCK_GLASS);

	int i;

	for (i = 0; i < 4; i++) { //기본 함수는 높이 4짜리
		locateBlock(concrete_white, a + 1, b + i, c);
		locateBlock(concrete_white, a + 2, b + i, c);
		locateBlock(concrete_white, a + 3, b + i, c);
		locateBlock(concrete_white, a + 4, b + i, c);
		locateBlock(concrete_white, a + 5, b + i, c);
		locateBlock(concrete_white, a + 6, b + i, c);
		locateBlock(concrete_white, a + 7, b + i, c);
		locateBlock(concrete_white, a + 8, b + i, c);
		locateBlock(concrete_white, a + 9, b + i, c);
		locateBlock(concrete_white, a + 10, b + i, c);        //x축방향

		locateBlock(concrete_white, a + 1, b + i, c + 14);
		locateBlock(concrete_white, a + 2, b + i, c + 14);
		locateBlock(concrete_white, a + 3, b + i, c + 14);
		locateBlock(concrete_white, a + 4, b + i, c + 14);
		locateBlock(concrete_white, a + 5, b + i, c + 14);
		locateBlock(concrete_white, a + 6, b + i, c + 14);
		locateBlock(concrete_white, a + 7, b + i, c + 14);
		locateBlock(concrete_white, a + 8, b + i, c + 14);
		locateBlock(concrete_white, a + 9, b + i, c + 14);
		locateBlock(concrete_white, a + 10, b + i, c + 14); //x축방향 멀리쪽

		locateBlock(concrete_white, a + 10, b + i, c + 1);
		locateBlock(concrete_white, a + 10, b + i, c + 2);
		locateBlock(concrete_white, a + 10, b + i, c + 3);
		locateBlock(concrete_white, a + 10, b + i, c + 4);
		locateBlock(concrete_white, a + 10, b + i, c + 5);
		locateBlock(concrete_white, a + 10, b + i, c + 6);
		locateBlock(concrete_white, a + 10, b + i, c + 7);
		locateBlock(concrete_white, a + 10, b + i, c + 8);
		locateBlock(concrete_white, a + 10, b + i, c + 9);
		locateBlock(concrete_white, a + 10, b + i, c + 10);
		locateBlock(concrete_white, a + 10, b + i, c + 11);
		locateBlock(concrete_white, a + 10, b + i, c + 12);
		locateBlock(concrete_white, a + 10, b + i, c + 13);
		locateBlock(concrete_white, a + 10, b + i, c + 14); //z방향 위쪽

		locateBlock(concrete_white, a + 1, b + i, c);
		locateBlock(concrete_white, a + 1, b + i, c + 1);
		locateBlock(concrete_white, a + 1, b + i, c + 2);
		locateBlock(concrete_white, a + 1, b + i, c + 3);
		locateBlock(concrete_white, a + 1, b + i, c + 4);

		locateBlock(concrete_white, a, b + i, c + 5);
		locateBlock(concrete_white, a, b + i, c + 6);
		locateBlock(concrete_white, a, b + i, c + 7);
		locateBlock(concrete_white, a, b + i, c + 8);
		locateBlock(concrete_white, a, b + i, c + 9);

		locateBlock(concrete_white, a + 1, b + i, c + 10);
		locateBlock(concrete_white, a + 1, b + i, c + 11);
		locateBlock(concrete_white, a + 1, b + i, c + 12);
		locateBlock(concrete_white, a + 1, b + i, c + 13);
		locateBlock(concrete_white, a + 1, b + i, c + 14); //z방향 아랫쪽

	}

	locateBlock(glass, a + 1, b + 1, c + 1);            //여기부터 창문
	locateBlock(glass, a + 1, b + 1, c + 2);
	locateBlock(glass, a + 1, b + 1, c + 3);

	locateBlock(glass, a, b + 1, c + 6);
	locateBlock(glass, a, b + 1, c + 7);
	locateBlock(glass, a, b + 1, c + 8);

	locateBlock(glass, a + 1, b + 1, c + 11);
	locateBlock(glass, a + 1, b + 1, c + 12);
	locateBlock(glass, a + 1, b + 1, c + 13);

	locateBlock(glass, a + 1, b + 2, c + 1);            //여기부터 창문
	locateBlock(glass, a + 1, b + 2, c + 2);
	locateBlock(glass, a + 1, b + 2, c + 3);

	locateBlock(glass, a, b + 2, c + 6);
	locateBlock(glass, a, b + 2, c + 7);
	locateBlock(glass, a, b + 2, c + 8);

	locateBlock(glass, a + 1, b + 2, c + 11);
	locateBlock(glass, a + 1, b + 2, c + 12);
	locateBlock(glass, a + 1, b + 2, c + 13);
}


void nice_apart()
{
	int x = 470, y = 4, z = 475;
	int i, j;

	BlockID concrete_white = createConcrete(COLOR_WHITE, 1);
	BlockID concrete_red = createConcrete(COLOR_RED, 1);
	DoorID door = createDoor(DOOR_BIRCH, 0, HINGE_LEFT);

	part_red(x, y, z);
	part_red(x, y + 4, z);
	part_red(x, y + 8, z);

	part_white(x, y + 12, z);
	part_white(x, y + 16, z);
	part_white(x, y + 20, z);
	part_white(x, y + 24, z);
	part_white(x, y + 28, z);
	part_white(x, y + 32, z);
	part_white(x, y + 36, z);
	part_white(x, y + 40, z);
	part_white(x, y + 44, z);
	part_white(x, y + 48, z);

	//맨위는 내가 닫아야할듯, 뚜껑닫기, 다 덮자.

	for (i = 0; i < 35; i++) {
		for (j = 0; j < 11; j++) {
			locateBlock(concrete_white, x + j, y + 51, z - 10 + i);
		}
	}


	//양호 말대로 넓혀볼까?

	part_red(x, y, z - 10);
	part_red(x, y + 4, z - 10);
	part_red(x, y + 8, z - 10);

	part_white(x, y + 12, z - 10);
	part_white(x, y + 16, z - 10);
	part_white(x, y + 20, z - 10);
	part_white(x, y + 24, z - 10);
	part_white(x, y + 28, z - 10);
	part_white(x, y + 32, z - 10);
	part_white(x, y + 36, z - 10);
	part_white(x, y + 40, z - 10);
	part_white(x, y + 44, z - 10);
	part_white(x, y + 48, z - 10);

	part_red(x, y, z + 10);
	part_red(x, y + 4, z + 10);
	part_red(x, y + 8, z + 10);

	part_white(x, y + 12, z + 10);
	part_white(x, y + 16, z + 10);
	part_white(x, y + 20, z + 10);
	part_white(x, y + 24, z + 10);
	part_white(x, y + 28, z + 10);
	part_white(x, y + 32, z + 10);
	part_white(x, y + 36, z + 10);
	part_white(x, y + 40, z + 10);
	part_white(x, y + 44, z + 10);
	part_white(x, y + 48, z + 10);

	//문도!

	installDoor(door, x, y, z + 7, FACING_EAST);

}