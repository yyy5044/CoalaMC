#include "stdio.h"
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

void car1(int x, int y, int z) {
	

	BlockID coal = createBlock(BLOCK_COAL);                             //������ ��ź��
	ButtonID button = createButton(BUTTON_STONE, 1);                      //��ư��
	BlockID concrete_red = createConcrete(COLOR_RED, 1);                     // ������ ��ũ��Ʈ ��
	SlabID slab_stone = createSlab(SLAB_STONE, SLAB_UPPER);                // �� �ݺ�
	BlockID sign = createSign(SING_WALL, "  ", "  ", "  ", "  ");       //ǥ���� ���
	BlockID glass = createBlock(BLOCK_GLASS);                           //����
	LadderID ladder = createLadder();
	//1��

	locateBlock(coal, x + 2, y, z + 1);
	locateBlock(coal, x + 6, y, z + 1);
	locateBlock(coal, x + 2, y, z + 3);
	locateBlock(coal, x + 6, y, z + 3);

	locateBlock(slab_stone, x + 1, y, z + 1);
	locateBlock(slab_stone, x + 3, y, z + 1);
	locateBlock(slab_stone, x + 4, y, z + 1);
	locateBlock(slab_stone, x + 5, y, z + 1);
	locateBlock(slab_stone, x + 7, y, z + 1);
	locateBlock(slab_stone, x + 1, y, z + 3);
	locateBlock(slab_stone, x + 3, y, z + 3);
	locateBlock(slab_stone, x + 4, y, z + 3);
	locateBlock(slab_stone, x + 5, y, z + 3);
	locateBlock(slab_stone, x + 7, y, z + 3);
	locateBlock(slab_stone, x + 1, y, z + 2);
	locateBlock(slab_stone, x + 7, y, z + 2);

	installSign(sign, x, y, z + 2, FACING_WEST);    //ǥ����
	installSign(sign, x + 8, y, z + 2, FACING_EAST);


	//2��

	locateBlock(concrete_red, x + 1, y + 1, z + 1);
	locateBlock(concrete_red, x + 2, y + 1, z + 1);
	locateBlock(concrete_red, x + 3, y + 1, z + 1);
	locateBlock(concrete_red, x + 4, y + 1, z + 1);
	locateBlock(concrete_red, x + 5, y + 1, z + 1);
	locateBlock(concrete_red, x + 6, y + 1, z + 1);
	locateBlock(concrete_red, x + 7, y + 1, z + 1);

	locateBlock(concrete_red, x + 1, y + 1, z + 2);
	locateBlock(concrete_red, x + 2, y + 1, z + 2);
	locateBlock(concrete_red, x + 3, y + 1, z + 2);
	locateBlock(concrete_red, x + 4, y + 1, z + 2);
	locateBlock(concrete_red, x + 5, y + 1, z + 2);
	locateBlock(concrete_red, x + 6, y + 1, z + 2);
	locateBlock(concrete_red, x + 7, y + 1, z + 2);

	locateBlock(concrete_red, x + 1, y + 1, z + 3);
	locateBlock(concrete_red, x + 2, y + 1, z + 3);
	locateBlock(concrete_red, x + 3, y + 1, z + 3);
	locateBlock(concrete_red, x + 4, y + 1, z + 3);
	locateBlock(concrete_red, x + 5, y + 1, z + 3);
	locateBlock(concrete_red, x + 6, y + 1, z + 3);
	locateBlock(concrete_red, x + 7, y + 1, z + 3);

	installButton(button, x + 3, y + 1, z, FACING_NORTH);
	installButton(button, x + 3, y + 1, z + 4, FACING_SOUTH); //��

	installLadder(ladder, x, y + 1, z + 1, FACING_WEST);
	installLadder(ladder, x, y + 1, z + 3, FACING_WEST);      // ��ٸ��� ����Ʈ

	//3��

	locateBlock(concrete_red, x + 3, y + 2, z + 1);
	locateBlock(concrete_red, x + 4, y + 2, z + 1);
	locateBlock(concrete_red, x + 3, y + 2, z + 2);
	locateBlock(concrete_red, x + 4, y + 2, z + 2);
	locateBlock(concrete_red, x + 3, y + 2, z + 3);
	locateBlock(concrete_red, x + 4, y + 2, z + 3);

	locateBlock(glass, x + 2, y + 2, z + 1);
	locateBlock(glass, x + 2, y + 2, z + 2);
	locateBlock(glass, x + 2, y + 2, z + 3);
	locateBlock(glass, x + 5, y + 2, z + 1);
	locateBlock(glass, x + 5, y + 2, z + 2);
	locateBlock(glass, x + 5, y + 2, z + 3);
}

void car2(int x, int y, int z) {

	BlockID coal = createBlock(BLOCK_COAL);                             //������ ��ź��
	ButtonID button = createButton(BUTTON_STONE, 1);                      //��ư��
	BlockID concrete_red = createConcrete(COLOR_RED, 1);                     // ������ ��ũ��Ʈ ��
	SlabID slab_stone = createSlab(SLAB_STONE, SLAB_UPPER);                // �� �ݺ�
	BlockID sign = createSign(SING_WALL, "  ", "  ", "  ", "  ");       //ǥ���� ���
	BlockID glass = createBlock(BLOCK_GLASS);                           //����
	LadderID ladder = createLadder();

	//1��

	locateBlock(coal, x + 1, y, z + 2);
	locateBlock(coal, x + 1, y, z + 6);
	locateBlock(coal, x + 3, y, z + 2);
	locateBlock(coal, x + 3, y, z + 6);

	locateBlock(slab_stone, x + 1, y, z + 1);
	locateBlock(slab_stone, x + 1, y, z + 3);
	locateBlock(slab_stone, x + 1, y, z + 4);
	locateBlock(slab_stone, x + 1, y, z + 5);
	locateBlock(slab_stone, x + 1, y, z + 7);
	locateBlock(slab_stone, x + 3, y, z + 1);
	locateBlock(slab_stone, x + 3, y, z + 3);
	locateBlock(slab_stone, x + 3, y, z + 4);
	locateBlock(slab_stone, x + 3, y, z + 5);
	locateBlock(slab_stone, x + 3, y, z + 7);
	locateBlock(slab_stone, x + 2, y, z + 1);
	locateBlock(slab_stone, x + 2, y, z + 7);

	installSign(sign, x + 2, y, z, FACING_NORTH);    //ǥ����
	installSign(sign, x + 2, y, z + 8, FACING_SOUTH);


	//2��

	locateBlock(concrete_red, x + 1, y + 1, z + 1);
	locateBlock(concrete_red, x + 1, y + 1, z + 2);
	locateBlock(concrete_red, x + 1, y + 1, z + 3);
	locateBlock(concrete_red, x + 1, y + 1, z + 4);
	locateBlock(concrete_red, x + 1, y + 1, z + 5);
	locateBlock(concrete_red, x + 1, y + 1, z + 6);
	locateBlock(concrete_red, x + 1, y + 1, z + 7);

	locateBlock(concrete_red, x + 2, y + 1, z + 1);
	locateBlock(concrete_red, x + 2, y + 1, z + 2);
	locateBlock(concrete_red, x + 2, y + 1, z + 3);
	locateBlock(concrete_red, x + 2, y + 1, z + 4);
	locateBlock(concrete_red, x + 2, y + 1, z + 5);
	locateBlock(concrete_red, x + 2, y + 1, z + 6);
	locateBlock(concrete_red, x + 2, y + 1, z + 7);

	locateBlock(concrete_red, x + 3, y + 1, z + 1);
	locateBlock(concrete_red, x + 3, y + 1, z + 2);
	locateBlock(concrete_red, x + 3, y + 1, z + 3);
	locateBlock(concrete_red, x + 3, y + 1, z + 4);
	locateBlock(concrete_red, x + 3, y + 1, z + 5);
	locateBlock(concrete_red, x + 3, y + 1, z + 6);
	locateBlock(concrete_red, x + 3, y + 1, z + 7);

	installButton(button, x, y + 1, z + 3, FACING_WEST);
	installButton(button, x + 4, y + 1, z + 3, FACING_EAST); //��

	installLadder(ladder, x + 1, y + 1, z, FACING_NORTH);
	installLadder(ladder, x + 3, y + 1, z, FACING_NORTH);      // ��ٸ��� ����Ʈ

	//3��

	locateBlock(concrete_red, x + 1, y + 2, z + 3);
	locateBlock(concrete_red, x + 1, y + 2, z + 4);
	locateBlock(concrete_red, x + 2, y + 2, z + 3);
	locateBlock(concrete_red, x + 2, y + 2, z + 4);
	locateBlock(concrete_red, x + 3, y + 2, z + 3);
	locateBlock(concrete_red, x + 3, y + 2, z + 4);

	locateBlock(glass, x + 1, y + 2, z + 2);
	locateBlock(glass, x + 2, y + 2, z + 2);
	locateBlock(glass, x + 3, y + 2, z + 2);
	locateBlock(glass, x + 1, y + 2, z + 5);
	locateBlock(glass, x + 2, y + 2, z + 5);
	locateBlock(glass, x + 3, y + 2, z + 5);

}

void blue_car1(int x, int y, int z) {


	BlockID coal = createBlock(BLOCK_COAL);                             //������ ��ź��
	ButtonID button = createButton(BUTTON_STONE, 1);                      //��ư��
	BlockID concrete_red = createConcrete(COLOR_BLUE, 1);                     // ������ ��ũ��Ʈ ��
	SlabID slab_stone = createSlab(SLAB_STONE, SLAB_UPPER);                // �� �ݺ�
	BlockID sign = createSign(SING_WALL, "  ", "  ", "  ", "  ");       //ǥ���� ���
	BlockID glass = createBlock(BLOCK_GLASS);                           //����
	LadderID ladder = createLadder();
	//1��

	locateBlock(coal, x + 2, y, z + 1);
	locateBlock(coal, x + 6, y, z + 1);
	locateBlock(coal, x + 2, y, z + 3);
	locateBlock(coal, x + 6, y, z + 3);

	locateBlock(slab_stone, x + 1, y, z + 1);
	locateBlock(slab_stone, x + 3, y, z + 1);
	locateBlock(slab_stone, x + 4, y, z + 1);
	locateBlock(slab_stone, x + 5, y, z + 1);
	locateBlock(slab_stone, x + 7, y, z + 1);
	locateBlock(slab_stone, x + 1, y, z + 3);
	locateBlock(slab_stone, x + 3, y, z + 3);
	locateBlock(slab_stone, x + 4, y, z + 3);
	locateBlock(slab_stone, x + 5, y, z + 3);
	locateBlock(slab_stone, x + 7, y, z + 3);
	locateBlock(slab_stone, x + 1, y, z + 2);
	locateBlock(slab_stone, x + 7, y, z + 2);

	installSign(sign, x, y, z + 2, FACING_WEST);    //ǥ����
	installSign(sign, x + 8, y, z + 2, FACING_EAST);


	//2��

	locateBlock(concrete_red, x + 1, y + 1, z + 1);
	locateBlock(concrete_red, x + 2, y + 1, z + 1);
	locateBlock(concrete_red, x + 3, y + 1, z + 1);
	locateBlock(concrete_red, x + 4, y + 1, z + 1);
	locateBlock(concrete_red, x + 5, y + 1, z + 1);
	locateBlock(concrete_red, x + 6, y + 1, z + 1);
	locateBlock(concrete_red, x + 7, y + 1, z + 1);

	locateBlock(concrete_red, x + 1, y + 1, z + 2);
	locateBlock(concrete_red, x + 2, y + 1, z + 2);
	locateBlock(concrete_red, x + 3, y + 1, z + 2);
	locateBlock(concrete_red, x + 4, y + 1, z + 2);
	locateBlock(concrete_red, x + 5, y + 1, z + 2);
	locateBlock(concrete_red, x + 6, y + 1, z + 2);
	locateBlock(concrete_red, x + 7, y + 1, z + 2);

	locateBlock(concrete_red, x + 1, y + 1, z + 3);
	locateBlock(concrete_red, x + 2, y + 1, z + 3);
	locateBlock(concrete_red, x + 3, y + 1, z + 3);
	locateBlock(concrete_red, x + 4, y + 1, z + 3);
	locateBlock(concrete_red, x + 5, y + 1, z + 3);
	locateBlock(concrete_red, x + 6, y + 1, z + 3);
	locateBlock(concrete_red, x + 7, y + 1, z + 3);

	installButton(button, x + 3, y + 1, z, FACING_NORTH);
	installButton(button, x + 3, y + 1, z + 4, FACING_SOUTH); //��

	installLadder(ladder, x, y + 1, z + 1, FACING_WEST);
	installLadder(ladder, x, y + 1, z + 3, FACING_WEST);      // ��ٸ��� ����Ʈ

	//3��

	locateBlock(concrete_red, x + 3, y + 2, z + 1);
	locateBlock(concrete_red, x + 4, y + 2, z + 1);
	locateBlock(concrete_red, x + 3, y + 2, z + 2);
	locateBlock(concrete_red, x + 4, y + 2, z + 2);
	locateBlock(concrete_red, x + 3, y + 2, z + 3);
	locateBlock(concrete_red, x + 4, y + 2, z + 3);

	locateBlock(glass, x + 2, y + 2, z + 1);
	locateBlock(glass, x + 2, y + 2, z + 2);
	locateBlock(glass, x + 2, y + 2, z + 3);
	locateBlock(glass, x + 5, y + 2, z + 1);
	locateBlock(glass, x + 5, y + 2, z + 2);
	locateBlock(glass, x + 5, y + 2, z + 3);
}

void blue_car2(int x, int y, int z) {

	BlockID coal = createBlock(BLOCK_COAL);                             //������ ��ź��
	ButtonID button = createButton(BUTTON_STONE, 1);                      //��ư��
	BlockID concrete_red = createConcrete(COLOR_BLUE, 1);                     // ������ ��ũ��Ʈ ��
	SlabID slab_stone = createSlab(SLAB_STONE, SLAB_UPPER);                // �� �ݺ�
	BlockID sign = createSign(SING_WALL, "  ", "  ", "  ", "  ");       //ǥ���� ���
	BlockID glass = createBlock(BLOCK_GLASS);                           //����
	LadderID ladder = createLadder();

	//1��

	locateBlock(coal, x + 1, y, z + 2);
	locateBlock(coal, x + 1, y, z + 6);
	locateBlock(coal, x + 3, y, z + 2);
	locateBlock(coal, x + 3, y, z + 6);

	locateBlock(slab_stone, x + 1, y, z + 1);
	locateBlock(slab_stone, x + 1, y, z + 3);
	locateBlock(slab_stone, x + 1, y, z + 4);
	locateBlock(slab_stone, x + 1, y, z + 5);
	locateBlock(slab_stone, x + 1, y, z + 7);
	locateBlock(slab_stone, x + 3, y, z + 1);
	locateBlock(slab_stone, x + 3, y, z + 3);
	locateBlock(slab_stone, x + 3, y, z + 4);
	locateBlock(slab_stone, x + 3, y, z + 5);
	locateBlock(slab_stone, x + 3, y, z + 7);
	locateBlock(slab_stone, x + 2, y, z + 1);
	locateBlock(slab_stone, x + 2, y, z + 7);

	installSign(sign, x + 2, y, z, FACING_NORTH);    //ǥ����
	installSign(sign, x + 2, y, z + 8, FACING_SOUTH);


	//2��

	locateBlock(concrete_red, x + 1, y + 1, z + 1);
	locateBlock(concrete_red, x + 1, y + 1, z + 2);
	locateBlock(concrete_red, x + 1, y + 1, z + 3);
	locateBlock(concrete_red, x + 1, y + 1, z + 4);
	locateBlock(concrete_red, x + 1, y + 1, z + 5);
	locateBlock(concrete_red, x + 1, y + 1, z + 6);
	locateBlock(concrete_red, x + 1, y + 1, z + 7);

	locateBlock(concrete_red, x + 2, y + 1, z + 1);
	locateBlock(concrete_red, x + 2, y + 1, z + 2);
	locateBlock(concrete_red, x + 2, y + 1, z + 3);
	locateBlock(concrete_red, x + 2, y + 1, z + 4);
	locateBlock(concrete_red, x + 2, y + 1, z + 5);
	locateBlock(concrete_red, x + 2, y + 1, z + 6);
	locateBlock(concrete_red, x + 2, y + 1, z + 7);

	locateBlock(concrete_red, x + 3, y + 1, z + 1);
	locateBlock(concrete_red, x + 3, y + 1, z + 2);
	locateBlock(concrete_red, x + 3, y + 1, z + 3);
	locateBlock(concrete_red, x + 3, y + 1, z + 4);
	locateBlock(concrete_red, x + 3, y + 1, z + 5);
	locateBlock(concrete_red, x + 3, y + 1, z + 6);
	locateBlock(concrete_red, x + 3, y + 1, z + 7);

	installButton(button, x, y + 1, z + 3, FACING_WEST);
	installButton(button, x + 4, y + 1, z + 3, FACING_EAST); //��

	installLadder(ladder, x + 1, y + 1, z, FACING_NORTH);
	installLadder(ladder, x + 3, y + 1, z, FACING_NORTH);      // ��ٸ��� ����Ʈ

	//3��

	locateBlock(concrete_red, x + 1, y + 2, z + 3);
	locateBlock(concrete_red, x + 1, y + 2, z + 4);
	locateBlock(concrete_red, x + 2, y + 2, z + 3);
	locateBlock(concrete_red, x + 2, y + 2, z + 4);
	locateBlock(concrete_red, x + 3, y + 2, z + 3);
	locateBlock(concrete_red, x + 3, y + 2, z + 4);

	locateBlock(glass, x + 1, y + 2, z + 2);
	locateBlock(glass, x + 2, y + 2, z + 2);
	locateBlock(glass, x + 3, y + 2, z + 2);
	locateBlock(glass, x + 1, y + 2, z + 5);
	locateBlock(glass, x + 2, y + 2, z + 5);
	locateBlock(glass, x + 3, y + 2, z + 5);

}

void car_merge() {
	for (int j = 0; j <= 6; j++) {

		if (j == 3)
			continue;

		for (int i = 0; i <= 8; i++) {
			car1(6 + 60 * i, 4, 6 + 87 * j);
			car2(6 + 87 * j, 4, 16 + 60 * i);
		}

		for (int i = 0; i <= 7; i++) {
			blue_car1(36 + 60 * i, 4, 6 + 87 * j);
			blue_car2(6 + 87 * j, 4, 46 + 60 * i);
		}

	}
}