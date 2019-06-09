#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

void apartment() {

	int x = 470, y = 4, z = 40;

	BlockID glass = createBlock(BLOCK_GLASS);
	BlockID bone = createBlock(BLOCK_BONE);
	TerracottaID cyan = createTerracotta(TERRACOTTA, COLOR_CYAN);
	SlabID slab = createSlab(SLAB_STONE, SLAB_LOWER);


	//아래 검정부분
	for (int i = 0; i <= 4; i++)
		for (int t = 0; t <= 6; t++) {
			locateTerracotta(cyan, x, y + t, z + 4 * i);
			locateTerracotta(cyan, x, y + t, z + 1 + 4 * i);
			locateTerracotta(cyan, x + 17, y + t, z + 4 * i);
			locateTerracotta(cyan, x + 17, y + t, z + 1 + 4 * i);

			locateTerracotta(cyan, x + 4 * i, y + t, z);
			locateTerracotta(cyan, x + 1 + 4 * i, y + t, z);
			locateTerracotta(cyan, x + 4 * i, y + t, z + 17);
			locateTerracotta(cyan, x + 1 + 4 * i, y + t, z + 17);
		}

	for (int i = 0; i <= 17; i++)
		for (int t = 7; t <= 8; t++)
			for (int k = 0; k <= 17; k++)
				locateTerracotta(cyan, x + i, y + t, z + k);

	//아래 유리
	for (int i = 0; i <= 6; i++)
		for (int t = 0; t <= 3; t++) {
			locateBlock(glass, x, y + i, z + 2 + 4 * t);
			locateBlock(glass, x, y + i, z + 3 + 4 * t);
			locateBlock(glass, x + 17, y + i, z + 2 + 4 * t);
			locateBlock(glass, x + 17, y + i, z + 3 + 4 * t);
			locateBlock(glass, x + 2 + 4 * t, y + i, z);
			locateBlock(glass, x + 3 + 4 * t, y + i, z);
			locateBlock(glass, x + 2 + 4 * t, y + i, z + 17);
			locateBlock(glass, x + 3 + 4 * t, y + i, z + 17);
		}

	//직사각형 흰색
	for (int i = 0; i <= 17; i++)
		for (int t = 1; t <= 10; t++)
			for (int k = 0; k <= 17; k++)
				locateBlock(bone, x + i, y + 4 + 5 * t, z + k);

	//첫번째 구역
	   //흰색
	for (int i = 0; i <= 4; i++)
		for (int k = 1; k <= 5; k++) {
			//x 4i
			locateBlock(bone, x, y + 10 * k, z + 4 * i);
			locateBlock(bone, x, y + 1 + 10 * k, z + 4 * i);
			locateBlock(bone, x, y + 2 + 10 * k, z + 4 * i);
			locateBlock(bone, x, y + 3 + 10 * k, z + 4 * i);
			//x 4i+1
			locateBlock(bone, x, y + 10 * k, z + 1 + 4 * i);
			locateBlock(bone, x, y + 1 + 10 * k, z + 1 + 4 * i);
			locateBlock(bone, x, y + 2 + 10 * k, z + 1 + 4 * i);
			locateBlock(bone, x, y + 3 + 10 * k, z + 1 + 4 * i);
			//x+17 4i
			locateBlock(bone, x + 17, y + 10 * k, z + 4 * i);
			locateBlock(bone, x + 17, y + 1 + 10 * k, z + 4 * i);
			locateBlock(bone, x + 17, y + 2 + 10 * k, z + 4 * i);
			locateBlock(bone, x + 17, y + 3 + 10 * k, z + 4 * i);
			//x+17 4i+1
			locateBlock(bone, x + 17, y + 10 * k, z + 1 + 4 * i);
			locateBlock(bone, x + 17, y + 1 + 10 * k, z + 1 + 4 * i);
			locateBlock(bone, x + 17, y + 2 + 10 * k, z + 1 + 4 * i);
			locateBlock(bone, x + 17, y + 3 + 10 * k, z + 1 + 4 * i);
			//4i z
			locateBlock(bone, x + 4 * i, y + 10 * k, z);
			locateBlock(bone, x + 4 * i, y + 1 + 10 * k, z);
			locateBlock(bone, x + 4 * i, y + 2 + 10 * k, z);
			locateBlock(bone, x + 4 * i, y + 3 + 10 * k, z);
			//4i+1 z
			locateBlock(bone, x + 1 + 4 * i, y + 10 * k, z);
			locateBlock(bone, x + 1 + 4 * i, y + 1 + 10 * k, z);
			locateBlock(bone, x + 1 + 4 * i, y + 2 + 10 * k, z);
			locateBlock(bone, x + 1 + 4 * i, y + 3 + 10 * k, z);
			//4i z+17
			locateBlock(bone, x + 4 * i, y + 10 * k, z + 17);
			locateBlock(bone, x + 4 * i, y + 1 + 10 * k, z + 17);
			locateBlock(bone, x + 4 * i, y + 2 + 10 * k, z + 17);
			locateBlock(bone, x + 4 * i, y + 3 + 10 * k, z + 17);
			//4i+1 Z+17
			locateBlock(bone, x + 1 + 4 * i, y + 10 * k, z + 17);
			locateBlock(bone, x + 1 + 4 * i, y + 1 + 10 * k, z + 17);
			locateBlock(bone, x + 1 + 4 * i, y + 2 + 10 * k, z + 17);
			locateBlock(bone, x + 1 + 4 * i, y + 3 + 10 * k, z + 17);
		}//완벽

	   //유리
	for (int i = 0; i <= 3; i++)
		for (int k = 1; k <= 5; k++) {
			//x 4i+2
			locateBlock(glass, x, y + 10 * k, z + 2 + 4 * i);
			locateBlock(glass, x, y + 1 + 10 * k, z + 2 + 4 * i);
			locateBlock(glass, x, y + 2 + 10 * k, z + 2 + 4 * i);
			locateBlock(glass, x, y + 3 + 10 * k, z + 2 + 4 * i);
			//x 4i+3   glass
			locateBlock(glass, x, y + 10 * k, z + 3 + 4 * i);
			locateBlock(glass, x, y + 1 + 10 * k, z + 3 + 4 * i);
			locateBlock(glass, x, y + 2 + 10 * k, z + 3 + 4 * i);
			locateBlock(glass, x, y + 3 + 10 * k, z + 3 + 4 * i);
			//x+17 4i+2   glass
			locateBlock(glass, x + 17, y + 10 * k, z + 2 + 4 * i);
			locateBlock(glass, x + 17, y + 1 + 10 * k, z + 2 + 4 * i);
			locateBlock(glass, x + 17, y + 2 + 10 * k, z + 2 + 4 * i);
			locateBlock(glass, x + 17, y + 3 + 10 * k, z + 2 + 4 * i);
			//x+17 4i+3   glass
			locateBlock(glass, x + 17, y + 10 * k, z + 3 + 4 * i);
			locateBlock(glass, x + 17, y + 1 + 10 * k, z + 3 + 4 * i);
			locateBlock(glass, x + 17, y + 2 + 10 * k, z + 3 + 4 * i);
			locateBlock(glass, x + 17, y + 3 + 10 * k, z + 3 + 4 * i);
			//4i+2 z   glass
			locateBlock(glass, x + 2 + 4 * i, y + 10 * k, z);
			locateBlock(glass, x + 2 + 4 * i, y + 1 + 10 * k, z);
			locateBlock(glass, x + 2 + 4 * i, y + 2 + 10 * k, z);
			locateBlock(glass, x + 2 + 4 * i, y + 3 + 10 * k, z);
			//4i+3  z   glass
			locateBlock(glass, x + 3 + 4 * i, y + 10 * k, z);
			locateBlock(glass, x + 3 + 4 * i, y + 1 + 10 * k, z);
			locateBlock(glass, x + 3 + 4 * i, y + 2 + 10 * k, z);
			locateBlock(glass, x + 3 + 4 * i, y + 3 + 10 * k, z);
			//4i+2 z+17   glass
			locateBlock(glass, x + 2 + 4 * i, y + 10 * k, z + 17);
			locateBlock(glass, x + 2 + 4 * i, y + 1 + 10 * k, z + 17);
			locateBlock(glass, x + 2 + 4 * i, y + 2 + 10 * k, z + 17);
			locateBlock(glass, x + 2 + 4 * i, y + 3 + 10 * k, z + 17);
			//4i+3 Z+17   glass
			locateBlock(glass, x + 3 + 4 * i, y + 10 * k, z + 17);
			locateBlock(glass, x + 3 + 4 * i, y + 1 + 10 * k, z + 17);
			locateBlock(glass, x + 3 + 4 * i, y + 2 + 10 * k, z + 17);
			locateBlock(glass, x + 3 + 4 * i, y + 3 + 10 * k, z + 17);
		}

	//두번째 구역
	   //유리
	for (int i = 0; i <= 4; i++)
		for (int k = 1; k <= 4; k++) {
			//x 4i
			locateBlock(glass, x, y + 5 + 10 * k, z + 4 * i);
			locateBlock(glass, x, y + 6 + 10 * k, z + 4 * i);
			locateBlock(glass, x, y + 7 + 10 * k, z + 4 * i);
			locateBlock(glass, x, y + 8 + 10 * k, z + 4 * i);
			//x 4i+1   glass
			locateBlock(glass, x, y + 5 + 10 * k, z + 1 + 4 * i);
			locateBlock(glass, x, y + 6 + 10 * k, z + 1 + 4 * i);
			locateBlock(glass, x, y + 7 + 10 * k, z + 1 + 4 * i);
			locateBlock(glass, x, y + 8 + 10 * k, z + 1 + 4 * i);
			//x+17 4i   glass
			locateBlock(glass, x + 17, y + 5 + 10 * k, z + 4 * i);
			locateBlock(glass, x + 17, y + 6 + 10 * k, z + 4 * i);
			locateBlock(glass, x + 17, y + 7 + 10 * k, z + 4 * i);
			locateBlock(glass, x + 17, y + 8 + 10 * k, z + 4 * i);
			//x+17 4i+1   glass
			locateBlock(glass, x + 17, y + 5 + 10 * k, z + 1 + 4 * i);
			locateBlock(glass, x + 17, y + 6 + 10 * k, z + 1 + 4 * i);
			locateBlock(glass, x + 17, y + 7 + 10 * k, z + 1 + 4 * i);
			locateBlock(glass, x + 17, y + 8 + 10 * k, z + 1 + 4 * i);
			//4i z      glass
			locateBlock(glass, x + 4 * i, y + 5 + 10 * k, z);
			locateBlock(glass, x + 4 * i, y + 6 + 10 * k, z);
			locateBlock(glass, x + 4 * i, y + 7 + 10 * k, z);
			locateBlock(glass, x + 4 * i, y + 8 + 10 * k, z);
			//4i+1 z   glass
			locateBlock(glass, x + 1 + 4 * i, y + 5 + 10 * k, z);
			locateBlock(glass, x + 1 + 4 * i, y + 6 + 10 * k, z);
			locateBlock(glass, x + 1 + 4 * i, y + 7 + 10 * k, z);
			locateBlock(glass, x + 1 + 4 * i, y + 8 + 10 * k, z);
			//4i z+17   glass
			locateBlock(glass, x + 4 * i, y + 5 + 10 * k, z + 17);
			locateBlock(glass, x + 4 * i, y + 6 + 10 * k, z + 17);
			locateBlock(glass, x + 4 * i, y + 7 + 10 * k, z + 17);
			locateBlock(glass, x + 4 * i, y + 8 + 10 * k, z + 17);
			//4i+1 Z+17   glass
			locateBlock(glass, x + 1 + 4 * i, y + 5 + 10 * k, z + 17);
			locateBlock(glass, x + 1 + 4 * i, y + 6 + 10 * k, z + 17);
			locateBlock(glass, x + 1 + 4 * i, y + 7 + 10 * k, z + 17);
			locateBlock(glass, x + 1 + 4 * i, y + 8 + 10 * k, z + 17);
		}
	//흰색

	for (int i = 0; i <= 3; i++)
		for (int k = 1; k <= 4; k++) {
			//x 4i+2
			locateBlock(bone, x, y + 5 + 10 * k, z + 2 + 4 * i);
			locateBlock(bone, x, y + 6 + 10 * k, z + 2 + 4 * i);
			locateBlock(bone, x, y + 7 + 10 * k, z + 2 + 4 * i);
			locateBlock(bone, x, y + 8 + 10 * k, z + 2 + 4 * i);
			//x 4i+3   bone
			locateBlock(bone, x, y + 5 + 10 * k, z + 3 + 4 * i);
			locateBlock(bone, x, y + 6 + 10 * k, z + 3 + 4 * i);
			locateBlock(bone, x, y + 7 + 10 * k, z + 3 + 4 * i);
			locateBlock(bone, x, y + 8 + 10 * k, z + 3 + 4 * i);
			//x+17 4i+2   bone
			locateBlock(bone, x + 17, y + 5 + 10 * k, z + 2 + 4 * i);
			locateBlock(bone, x + 17, y + 6 + 10 * k, z + 2 + 4 * i);
			locateBlock(bone, x + 17, y + 7 + 10 * k, z + 2 + 4 * i);
			locateBlock(bone, x + 17, y + 8 + 10 * k, z + 2 + 4 * i);
			//x+17 4i+3   bone
			locateBlock(bone, x + 17, y + 5 + 10 * k, z + 3 + 4 * i);
			locateBlock(bone, x + 17, y + 6 + 10 * k, z + 3 + 4 * i);
			locateBlock(bone, x + 17, y + 7 + 10 * k, z + 3 + 4 * i);
			locateBlock(bone, x + 17, y + 8 + 10 * k, z + 3 + 4 * i);
			//4i+2 z   bone
			locateBlock(bone, x + 2 + 4 * i, y + 5 + 10 * k, z);
			locateBlock(bone, x + 2 + 4 * i, y + 6 + 10 * k, z);
			locateBlock(bone, x + 2 + 4 * i, y + 7 + 10 * k, z);
			locateBlock(bone, x + 2 + 4 * i, y + 8 + 10 * k, z);
			//4i+3  z   bone
			locateBlock(bone, x + 3 + 4 * i, y + 5 + 10 * k, z);
			locateBlock(bone, x + 3 + 4 * i, y + 6 + 10 * k, z);
			locateBlock(bone, x + 3 + 4 * i, y + 7 + 10 * k, z);
			locateBlock(bone, x + 3 + 4 * i, y + 8 + 10 * k, z);
			//4i+2 z+17   bone
			locateBlock(bone, x + 2 + 4 * i, y + 5 + 10 * k, z + 17);
			locateBlock(bone, x + 2 + 4 * i, y + 6 + 10 * k, z + 17);
			locateBlock(bone, x + 2 + 4 * i, y + 7 + 10 * k, z + 17);
			locateBlock(bone, x + 2 + 4 * i, y + 8 + 10 * k, z + 17);
			//4i+3 Z+17   bone
			locateBlock(bone, x + 3 + 4 * i, y + 5 + 10 * k, z + 17);
			locateBlock(bone, x + 3 + 4 * i, y + 6 + 10 * k, z + 17);
			locateBlock(bone, x + 3 + 4 * i, y + 7 + 10 * k, z + 17);
			locateBlock(bone, x + 3 + 4 * i, y + 8 + 10 * k, z + 17);
		}


	//꼭대기
	   //흰색
	for (int i = 2; i <= 15; i++)
		for (int k = 2; k <= 15; k++) {
			locateBlock(bone, x + i, y + 59, z + k);
			locateBlock(bone, x + i, y + 55, z + k);
		}

	for (int i = 0; i <= 3; i++)
		for (int t = 56; t <= 58; t++) {
			locateBlock(bone, x + 2 + 4 * i, y + t, z + 2);
			locateBlock(bone, x + 3 + 4 * i, y + t, z + 2);
			locateBlock(bone, x + 2 + 4 * i, y + t, z + 15);
			locateBlock(bone, x + 3 + 4 * i, y + t, z + 15);

			locateBlock(bone, x + 2, y + t, z + 2 + 4 * i);
			locateBlock(bone, x + 2, y + t, z + 3 + 4 * i);
			locateBlock(bone, x + 15, y + t, z + 2 + 4 * i);
			locateBlock(bone, x + 15, y + t, z + 3 + 4 * i);
		}

	//유리
	for (int i = 0; i <= 2; i++)
		for (int t = 56; t <= 58; t++) {
			locateBlock(glass, x + 4 + 4 * i, y + t, z + 2);
			locateBlock(glass, x + 4 + 4 * i, y + t, z + 15);
			locateBlock(glass, x + 5 + 4 * i, y + t, z + 2);
			locateBlock(glass, x + 5 + 4 * i, y + t, z + 15);

			locateBlock(glass, x + 2, y + t, z + 4 + 4 * i);
			locateBlock(glass, x + 2, y + t, z + 5 + 4 * i);
			locateBlock(glass, x + 15, y + t, z + 4 + 4 * i);
			locateBlock(glass, x + 15, y + t, z + 5 + 4 * i);
		}
	//반블럭
	for (int i = 1; i <= 16; i++)
		for (int t = 1; t <= 16; t++)
			locateSlab(slab, x + i, y + 60, z + t);
}