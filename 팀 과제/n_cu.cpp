#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

void cu(int x, int y, int z) {


	BlockID glass = createBlock(BLOCK_GLASS);
	WoolID wool_lime = createWool(COLOR_LIME);
	WoolID wool_purple = createWool(COLOR_PURPLE);
	BlockID white = createBlock(BLOCK_NETHER_QUARTZ);
	DoorID door = createDoor(DOOR_OAK, false, HINGE_LEFT);
	PlanksID oak = createPlanks(PLANKS_OAK);
	SlabID slab = createSlab(SLAB_STONE, SLAB_LOWER);
	SlabID slab1 = createSlab(SLAB_STONE, SLAB_DOUBLE);
	SlabID table = createSlab(SLAB_QUARTZ, SLAB_LOWER);
	FenceID fence = createFence(FENCE_JUNGLE);
	

	//나무 바닥
	for (int i = 0; i <= 13; i++)
		for (int t = 0; t <= 20; t++)
			locateBlock(oak, x + i, y, z + t);

	//연두색 기둥
	for (int i = 1; i <= 5; i++) {
		locateBlock(wool_lime, x + 2, y + i, z + 5);
		locateBlock(wool_lime, x + 11, y + i, z + 5);
		locateBlock(wool_lime, x + 2, y + i, z + 18);
		locateBlock(wool_lime, x + 5, y + i, z + 18);
		locateBlock(wool_lime, x + 8, y + i, z + 18);
		locateBlock(wool_lime, x + 11, y + i, z + 18);
		locateBlock(wool_lime, x + 11, y + i, z + 8);
		locateBlock(wool_lime, x + 11, y + i, z + 11);
	}

	//왼쪽 옆면
	for (int i = 3; i <= 10; i++)
		for (int t = 1; t <= 5; t++)
			locateBlock(white, x + i, y + t, z + 5);

	//앞면 
	   //흰색
	for (int i = 6; i <= 7; i++) {
		locateBlock(white, x + 11, y + 1, z + i);
		locateBlock(white, x + 11, y + 5, z + i);
	}

	for (int i = 9; i <= 10; i++)
		for (int t = 3; t <= 5; t++)
			locateBlock(white, x + 11, y + t, z + i);

	for (int i = 12; i <= 17; i++) {
		locateBlock(white, x + 11, y + 1, z + i);
		locateBlock(white, x + 11, y + 5, z + i);
	}

	//유리
	for (int i = 2; i <= 4; i++)
		for (int t = 6; t <= 7; t++)
			locateBlock(glass, x + 11, y + i, z + t);

	for (int i = 2; i <= 4; i++)
		for (int t = 12; t <= 17; t++)
			locateBlock(glass, x + 11, y + i, z + t);

	//문
	installDoor(door, x + 11, y + 1, z + 9, FACING_WEST);
	installDoor(door, x + 11, y + 1, z + 10, FACING_WEST);

	//오른쪽
	   //흰색
	for (int i = 3; i <= 4; i++)
		for (int t = 1; t <= 5; t++)
			locateBlock(white, x + i, y + t, z + 18);

	for (int i = 9; i <= 10; i++)
		for (int t = 1; t <= 5; t++)
			locateBlock(white, x + i, y + t, z + 18);

	for (int i = 3; i <= 4; i++) {
		locateBlock(white, x + i, y + 1, z + 18);
		locateBlock(white, x + i, y + 5, z + 18);
	}

	for (int i = 6; i <= 7; i++) {
		locateBlock(white, x + i, y + 1, z + 18);
		locateBlock(white, x + i, y + 5, z + 18);
	}

	//유리
	for (int i = 6; i <= 7; i++)
		for (int t = 2; t <= 4; t++)
			locateBlock(glass, x + i, y + t, z + 18);

	//뒷부분
	for (int i = 1; i <= 5; i++)
		for (int t = 6; t <= 17; t++)
			locateBlock(white, x + 2, y + i, z + t);

	//바닥&위
	for (int i = 3; i <= 10; i++)
		for (int t = 6; t <= 17; t++) {
			locateBlock(white, x + i, y + 1, z + t);
			locateBlock(white, x + i, y + 5, z + t);
		}

	//돌 반블럭
	for (int i = 1; i <= 12; i++)
		for (int t = 4; t <= 19; t++) {
			locateBlock(slab1, x + i, y + 6, z + t);
			locateBlock(slab, x + i, y + 9, z + t);
		}

	//지그재그 y+7층
	   //초록
	for (int i = 1; i <= 4; i++) {
		locateBlock(wool_lime, x + 12, y + 7, z + 4 * i);
		locateBlock(wool_lime, x + 12, y + 7, z + 1 + 4 * i);
	}

	for (int i = 1; i <= 4; i++) {
		locateBlock(wool_lime, x + 1, y + 7, z + 2 + 4 * i);
		locateBlock(wool_lime, x + 1, y + 7, z + 3 + 4 * i);
	}

	locateBlock(wool_lime, x + 3, y + 7, z + 4);
	locateBlock(wool_lime, x + 4, y + 7, z + 4);
	locateBlock(wool_lime, x + 7, y + 7, z + 4);
	locateBlock(wool_lime, x + 8, y + 7, z + 4);
	locateBlock(wool_lime, x + 11, y + 7, z + 4);

	locateBlock(wool_lime, x + 2, y + 7, z + 19);
	locateBlock(wool_lime, x + 5, y + 7, z + 19);
	locateBlock(wool_lime, x + 6, y + 7, z + 19);
	locateBlock(wool_lime, x + 9, y + 7, z + 19);
	locateBlock(wool_lime, x + 10, y + 7, z + 19);

	//흰색
	for (int i = 1; i <= 4; i++) {
		locateBlock(white, x + 1, y + 7, z + 4 * i);
		locateBlock(white, x + 1, y + 7, z + 1 + 4 * i);
	}

	for (int i = 1; i <= 4; i++) {
		locateBlock(white, x + 12, y + 7, z + 2 + 4 * i);
		locateBlock(white, x + 12, y + 7, z + 3 + 4 * i);
	}

	locateBlock(white, x + 2, y + 7, z + 4);
	locateBlock(white, x + 5, y + 7, z + 4);
	locateBlock(white, x + 6, y + 7, z + 4);
	locateBlock(white, x + 9, y + 7, z + 4);
	locateBlock(white, x + 10, y + 7, z + 4);

	locateBlock(white, x + 3, y + 7, z + 19);
	locateBlock(white, x + 4, y + 7, z + 19);
	locateBlock(white, x + 7, y + 7, z + 19);
	locateBlock(white, x + 8, y + 7, z + 19);
	locateBlock(white, x + 11, y + 7, z + 19);

	//지그재그 y+8층
	   //흰색
	for (int i = 1; i <= 4; i++) {
		locateBlock(white, x + 12, y + 8, z + 4 * i);
		locateBlock(white, x + 12, y + 8, z + 1 + 4 * i);
	}

	for (int i = 1; i <= 4; i++) {
		locateBlock(white, x + 1, y + 8, z + 2 + 4 * i);
		locateBlock(white, x + 1, y + 8, z + 3 + 4 * i);
	}

	locateBlock(white, x + 3, y + 8, z + 4);
	locateBlock(white, x + 4, y + 8, z + 4);
	locateBlock(white, x + 7, y + 8, z + 4);
	locateBlock(white, x + 8, y + 8, z + 4);
	locateBlock(white, x + 11, y + 8, z + 4);

	locateBlock(white, x + 2, y + 8, z + 19);
	locateBlock(white, x + 5, y + 8, z + 19);
	locateBlock(white, x + 6, y + 8, z + 19);
	locateBlock(white, x + 9, y + 8, z + 19);
	locateBlock(white, x + 10, y + 8, z + 19);

	//초록
	for (int i = 1; i <= 4; i++) {
		locateBlock(wool_lime, x + 1, y + 8, z + 4 * i);
		locateBlock(wool_lime, x + 1, y + 8, z + 1 + 4 * i);
	}

	for (int i = 1; i <= 4; i++) {
		locateBlock(wool_lime, x + 12, y + 8, z + 2 + 4 * i);
		locateBlock(wool_lime, x + 12, y + 8, z + 3 + 4 * i);
	}

	locateBlock(wool_lime, x + 2, y + 8, z + 4);
	locateBlock(wool_lime, x + 5, y + 8, z + 4);
	locateBlock(wool_lime, x + 6, y + 8, z + 4);
	locateBlock(wool_lime, x + 9, y + 8, z + 4);
	locateBlock(wool_lime, x + 10, y + 8, z + 4);

	locateBlock(wool_lime, x + 3, y + 8, z + 19);
	locateBlock(wool_lime, x + 4, y + 8, z + 19);
	locateBlock(wool_lime, x + 7, y + 8, z + 19);
	locateBlock(wool_lime, x + 8, y + 8, z + 19);
	locateBlock(wool_lime, x + 11, y + 8, z + 19);

	//cu 로고
	   //보라
	locateBlock(wool_purple, x + 13, y + 7, z + 17);
	locateBlock(wool_purple, x + 13, y + 7, z + 16);
	locateBlock(wool_purple, x + 13, y + 7, z + 15);
	locateBlock(wool_purple, x + 13, y + 7, z + 13);
	locateBlock(wool_purple, x + 13, y + 7, z + 12);
	locateBlock(wool_purple, x + 13, y + 7, z + 11);

	locateBlock(wool_purple, x + 13, y + 8, z + 17);
	locateBlock(wool_purple, x + 13, y + 8, z + 13);
	locateBlock(wool_purple, x + 13, y + 8, z + 11);

	locateBlock(wool_purple, x + 13, y + 9, z + 17);
	locateBlock(wool_purple, x + 13, y + 9, z + 16);
	locateBlock(wool_purple, x + 13, y + 9, z + 15);
	locateBlock(wool_purple, x + 13, y + 9, z + 13);
	locateBlock(wool_purple, x + 13, y + 9, z + 11);

	//초록
	locateBlock(wool_lime, x + 13, y + 7, z + 14);

	locateBlock(wool_lime, x + 13, y + 8, z + 14);
	locateBlock(wool_lime, x + 13, y + 8, z + 15);

	//울타리
	for (int i = 0; i <= 13; i++)
		locateBlock(fence, x + i, y + 1, z);

	locateBlock(fence, x, y + 1, z + 1);
	locateBlock(fence, x, y + 1, z + 2);
	locateBlock(fence, x + 13, y + 1, z + 1);
	locateBlock(fence, x + 13, y + 1, z + 2);

	//테이블
	locateBlock(white, x + 4, y + 1, z + 2);
	locateBlock(white, x + 9, y + 1, z + 2);

	locateBlock(fence, x + 4, y + 2, z + 2);
	locateBlock(fence, x + 9, y + 2, z + 2);

	for (int i = 3; i <= 5; i++)
		for (int t = 1; t <= 3; t++)
			locateBlock(table, x + i, y + 3, z + t);

	for (int i = 8; i <= 10; i++)
		for (int t = 1; t <= 3; t++)
			locateBlock(table, x + i, y + 3, z + t);
}