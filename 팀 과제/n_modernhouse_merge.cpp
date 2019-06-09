#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

void modernhouse(int x, int y, int z) {
	
	BlockID stained_glass = createBlock(BLOCK_STAINED_GLASS);
	BlockID white = createBlock(BLOCK_NETHER_QUARTZ);
	WoolID black = createWool(COLOR_GRAY);
	DoorID door = createDoor(DOOR_OAK, false, HINGE_LEFT);
	PlanksID planks = createPlanks(PLANKS_ACACIA);

	//검정 부분
	//뒷부분
	for (int i = 0; i <= 9; i++)
		for (int t = 2; t <= 7; t++)
			locateConcrete(black, x, y + i, z + t);

	//윗부분
	for (int i = 1; i <= 10; i++)
		for (int t = 2; t <= 7; t++)
			locateConcrete(black, x + i, y + 9, z + t);

	//앞부분
	for (int i = 0; i <= 9; i++) {
		locateConcrete(black, x + 11, y + i, z + 2);
		locateConcrete(black, x + 11, y + i, z + 5);
		locateConcrete(black, x + 11, y + i, z + 7);
	}

	for (int i = 2; i <= 9; i++)
		locateConcrete(black, x + 11, y + i, z + 4);

	locateConcrete(black, x + 11, y + 2, z + 3);
	locateConcrete(black, x + 11, y + 3, z + 3);
	locateConcrete(black, x + 11, y + 6, z + 3);
	locateConcrete(black, x + 11, y + 9, z + 3);

	locateConcrete(black, x + 11, y, z + 6);
	locateConcrete(black, x + 11, y + 1, z + 6);
	locateConcrete(black, x + 11, y + 2, z + 6);
	locateConcrete(black, x + 11, y + 3, z + 6);
	locateConcrete(black, x + 11, y + 6, z + 6);
	locateConcrete(black, x + 11, y + 9, z + 6);

	//유리
	locateBlock(stained_glass, x + 11, y + 4, z + 3);
	locateBlock(stained_glass, x + 11, y + 5, z + 3);
	locateBlock(stained_glass, x + 11, y + 7, z + 3);
	locateBlock(stained_glass, x + 11, y + 8, z + 3);

	locateBlock(stained_glass, x + 11, y + 4, z + 6);
	locateBlock(stained_glass, x + 11, y + 5, z + 6);
	locateBlock(stained_glass, x + 11, y + 7, z + 6);
	locateBlock(stained_glass, x + 11, y + 8, z + 6);


	installDoor(door, x + 11, y, z + 3, FACING_WEST);
	installDoor(door, x + 11, y, z + 4, FACING_WEST);

	//흰색

	for (int i = 1; i <= 10; i++)
		for (int t = 0; t <= 9; t++) {
			locateBlock(white, x + i, y + t, z);
		}

	for (int i = 1; i <= 10; i++)
		for (int t = 4; t <= 9; t++) {
			locateBlock(white, x + i, y + t, z + 15);//fin
		}

	for (int i = 1; i <= 10; i++)
		for (int t = 0; t <= 15; t++) {
			locateBlock(white, x + i, y + 9, z + t);//
		}

	for (int i = 1; i <= 10; i++)
		for (int t = 2; t <= 15; t++) {
			locateBlock(white, x + i, y + 3, z + t);
		}

	for (int i = 3; i <= 9; i++)
		for (int t = 0; t <= 15; t++) {
			locateBlock(white, x + 8, y + i, z + t);
		}
	//갈색

	//아래
	for (int i = 0; i <= 2; i++)
		for (int t = 8; t <= 14; t++)
			locateBlock(planks, x + 9, y + i, z + t);

	//위
	for (int i = 4; i <= 8; i++) {
		locateBlock(planks, x + 9, y + i, z + 10);
		locateBlock(planks, x + 9, y + i, z + 13);
	}

	//이상한거
	locateBlock(planks, x + 9, y + 5, z + 11);
	locateBlock(planks, x + 9, y + 7, z + 11);
	locateBlock(planks, x + 9, y + 5, z + 12);
	locateBlock(planks, x + 9, y + 7, z + 12);

	for (int i = 0; i <= 15; i++)
		for (int t = 4; t <= 8; t++) {
			locateBlock(white, x + 1, y + t, z + i);
		}
}

void modernhouse_merge() {
	int arr_x[8] = { 40, 40, 70, 70, 465, 465, 495, 495 };
	int arr_z[8] = { 120, 140, 120, 140, 280, 300, 280, 300 };

	for (int i = 0; i <= 7; i++) {
		modernhouse(arr_x[i], 4, arr_z[i]);
	}
}
