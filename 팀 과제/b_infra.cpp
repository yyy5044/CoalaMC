#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")
#include "yangho.h"
#include "jaeseong.h"
#include "nahyun.h"
#include "jihak.h"

void infra() {

	printf("������ ���� ��...\n");
	printf("��, ����, ���ε�, �ٸ�, �ڵ���, ����, ����, �м� \n");

	//�� ����
	river();

	//���ΰ��� + ���ε� ��ġ
	road_merge();

	//�ٸ� ����
	bridge_merge();

	//���� �� �ڵ��� ����
	car_merge();

	//���� ����
	bus_merge();

	//���� ����
	smalltree_river();
	bigtree_river();

	//�м� ��ġ
	fountain_merge();

	printf("�Ϸ� \n");
}