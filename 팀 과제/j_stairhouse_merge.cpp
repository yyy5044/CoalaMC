#define _CRT_SECURE_NO_WARNINGS
#include <CoalaMOD.h>

#pragma comment(lib,"CoalaMOD.lib")
#include <stdio.h>

void stair_house(int x, int y, int z) {

	BlockID sand_stone = createBlock(BLOCK_SAND_STONE);
	BlockID glass = createBlock(BLOCK_GLASS);
	BlockID grass = createBlock(BLOCK_GRASS);
	WoolID wool_white = createWool(COLOR_WHITE);
	WoolID wool_orange = createWool(COLOR_ORANGE);
	WoolID wool_black = createWool(COLOR_BLACK);
	WoolID wool_gray = createWool(COLOR_GRAY);
	DoorID door_spruce = createDoor(DOOR_SPRUCE, false, HINGE_LEFT);
	FenceID oakfence = createFence(FENCE_OAK);
	BlockID oakstairs_up = createStairs(STAIRS_OAK, 0);



	for (int a = 0; a < 8; a++) {
		for (int b = 0; b < 13; b++) {
			locateBlock(sand_stone, x + a, 8, z + b);
		}
	}
	int k[3] = { 0,7,12 };
	for (int a = 0; a < 4; a++) {
		locateBlock(sand_stone, x + k[0], 4 + a, z + k[0]);
	}
	for (int a = 0; a < 4; a++) {
		locateBlock(sand_stone, x + k[1], 4 + a, z + k[0]);
	}
	for (int a = 0; a < 4; a++) {
		locateBlock(sand_stone, x + k[0], 4 + a, z + k[2]);
	}
	for (int a = 0; a < 4; a++) {
		locateBlock(sand_stone, x + k[1], 4 + a, z + k[2]);
	}
	for (int a = 0; a < 8; a++) {
		locateBlock(wool_orange, x + a, 9, z);
		locateBlock(wool_orange, x + a, 9, z + 12);
	}
	for (int b = 0; b < 13; b++) {
		locateBlock(wool_orange, x, 9, z + b);
	}
	for (int a = 0; a < 8; a++) {
		for (int b = 0; b < 10; b++) {
			locateBlock(wool_orange, x + a, 9 + b, z);
			locateBlock(wool_orange, x + a, 9 + b, z + 12);
		}
	}
	for (int a = 0; a < 13; a++) {
		for (int b = 0; b < 10; b++) {
			locateBlock(wool_orange, x, 9 + b, z + a);
		}
	}
	for (int a = 2; a < 6; a++) {
		for (int b = 0; b < 2; b++) {
			locateBlock(glass, x + a, 11 + b, z + 12);
		}
	}
	for (int a = 2; a < 6; a++) {
		for (int b = 0; b < 2; b++) {
			locateBlock(glass, x + a, 15 + b, z + 12);
		}
	}//주황벽에 유리 설치
	for (int a = 0; a < 16; a++) {
		for (int b = 0; b < 5; b++) {
			for (int c = 0; c < 13; c++) {
				locateBlock(sand_stone, x + 7 + a, 4 + b, z + c);
			}
		}
	}
	for (int a = 0; a < 8; a++) {
		for (int b = 0; b < 5; b++) {
			for (int c = 0; c < 4; c++) {
				locateBlock(sand_stone, x + 8 + a, 4 + b, z + 13 + c);
			}
		}
	}//
	for (int b = 5; b < 15; b++) {
		for (int a = 0; a < 8; a++) {
			locateBlock(wool_black, x + 8 + a, 4 + b, z);
		}
	}//창문없는 검은벽 
	for (int b = 5; b < 15; b++) {
		for (int a = 0; a < 7; a++) {
			locateBlock(wool_orange, x + 16 + a, 4 + b, z);
		}
	}//창문없는 주황벽
	for (int a = 0; a < 3; a++) {
		for (int b = 0; b < 10; b++) {
			locateBlock(wool_black, x + 8, 9 + b, z + 12 + a);
			locateBlock(wool_black, x + 15, 9 + b, z + 12 + a);
		}
	}
	for (int a = 0; a < 6; a++) {
		for (int b = 0; b < 10; b++) {
			locateBlock(wool_black, x + 9 + a, 9 + b, z + 14);
		}
	}
	for (int a = 0; a < 4; a++) {
		for (int b = 0; b < 3; b++) {
			locateBlock(glass, x + 10 + a, 10 + b, z + 14);
		}
	}
	for (int a = 0; a < 3; a++) {
		locateBlock(glass, x + 10, 14 + a, z + 14);
		locateBlock(glass, x + 12, 14 + a, z + 14);
	}//창문있는 검은벽
	for (int b = 5; b < 15; b++) {
		for (int a = 0; a < 7; a++) {
			locateBlock(wool_orange, x + 16 + a, 4 + b, z + 12);
		}
	}//창문+문있는 주황벽
	for (int a = 0; a < 10; a++) {
		for (int b = 0; b < 12; b++) {
			locateBlock(wool_orange, x + 22, 9 + a, z + b);
		}
	}//주황색벽 마감
	for (int a = 0; a < 7; a++) {
		for (int b = 0; b < 3; b++) {
			for (int c = 0; c < 9; c++) {
				locateBlock(sand_stone, x + 16 + a, c + 4, z + 13 + b);
			}
		}
	}//주황색벽 발코니 설치
	locateBlock(glass, x + 17, 16, z + 12);
	locateBlock(glass, x + 18, 16, z + 12);
	locateBlock(glass, x + 20, 14, z + 12);
	locateBlock(glass, x + 20, 15, z + 12);
	locateBlock(glass, x + 20, 16, z + 12);
	locateBlock(glass, x + 21, 14, z + 12);
	locateBlock(glass, x + 21, 15, z + 12);
	locateBlock(glass, x + 21, 16, z + 12);
	//주황색 유리설치
	installDoor(door_spruce, x + 17, 13, z + 12, FACING_NORTH);
	installDoor(door_spruce, x + 18, 13, z + 12, FACING_NORTH);
	//주황색벽 문설치
	locateFence(oakfence, x + 8, 9, z + 15);
	locateFence(oakfence, x + 15, 9, z + 15);
	for (int a = 0; a < 8; a++) {
		locateFence(oakfence, x + 8 + a, 9, z + 16);
	}//검은색 벽에 펜스 설치
	locateFence(oakfence, x + 16, 13, z + 13);
	locateFence(oakfence, x + 16, 13, z + 14);
	locateFence(oakfence, x + 22, 13, z + 13);
	locateFence(oakfence, x + 16, 13, z + 14);
	for (int a = 0; a < 7; a++) {
		locateFence(oakfence, x + 16 + a, 13, z + 15);
	}//오렌지색벽 울타리 설치
	for (int a = 0; a < 5; a++) {
		for (int b = 0; b < 5; b++) {
			installStairs(oakstairs_up, x + 8 + b, 4 + b, z + 17 + a, FACING_EAST);
		}
	}
	for (int a = 0; a < 5; a++) {
		installStairs(oakstairs_up, x + 9, 5, z + 17 + a, FACING_EAST);
	}//계단 설치
	for (int a = 0; a < 22; a++) {
		for (int b = 0; b < 5; b++) {
			locateBlock(sand_stone, x + 8 + a, 4 + b, z + 22);
		}
	}
	for (int a = 0; a < 22; a++) {
		for (int b = 0; b < 5; b++) {
			locateBlock(sand_stone, x + 29, 4 + b, z + a);
		}
	}
	for (int a = 0; a < 6; a++) {
		for (int b = 0; b < 5; b++) {
			locateBlock(sand_stone, x + 23 + a, 4 + b, z);
		}
	}//옆저리 sand블록 설치
	for (int a = 0; a < 4; a++) {
		for (int b = 0; b < 3; b++) {
			locateBlock(grass, x + 13 + b, 8, z + 17 + a);
		}
	}
	for (int a = 0; a < 13; a++) {
		for (int b = 0; b < 6; b++) {
			locateBlock(grass, x + 16 + a, 8, z + 16 + b);
		}
	}
	for (int a = 0; a < 6; a++) {
		for (int b = 0; b < 15; b++) {
			locateBlock(grass, x + 23 + a, 8, z + 1 + b);
		}
	}
	//풀밭설치
	installDoor(door_spruce, x + 22, 9, z + 4, FACING_NORTH);//후문설치
	for (int a = -1; a < 24; a++) {
		for (int b = -1; b < 14; b++) {
			locateBlock(wool_gray, x + a, 19, z + b);
		}
	}//지붕설치

}

void stair_house_merge() {

	int arr_x[4] = { 21, 21, 56, 56 };
	int arr_z[4] = { 455, 485, 455, 485 };

	for (int i = 0; i <= 3; i++) {
		stair_house(arr_x[i], 4, arr_z[i]);
	}


}

