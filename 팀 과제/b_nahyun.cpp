#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")
#include "nahyun.h"

void nahyun() {

	printf("���� �ǹ� ���� ��...\n");
	printf("����� ����Ʈ ����, ����Ͽ콺 ����, �׳� ����Ʈ, �ֵ��� Ÿ��, CU ������ \n");
	//���� �ǹ� ����
	house_merge();
	modernhouse_merge();
	apartment();
	twinbuilding();
	cu(40, 4, 308);
	cu(475, 4, 215);
	cu(159, 4, 111);

	printf("�Ϸ�\n");
}