#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")
#include "jihak.h"

void jihak() {

	printf("���� �ǹ� ���� ��...\n");
	printf("����ž, ������, �ĸ��׳� ����, ���ӿ����� ����Ʈ, ���� ���� \n");
	//���� �ǹ� ����
	eiffeltower();
	gasstation(35, 4, 390);
	gasstation(468, 4, 130);
	parthenon();
	limeorange_apart_merge();
	stair_house_merge();

	printf("�Ϸ�\n");
}