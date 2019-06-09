#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")
#include "jihak.h"

void jihak() {

	printf("지학 건물 생성 중...\n");
	printf("에펠탑, 주유소, 파르테논 신전, 라임오렌지 아파트, 주택 단지 \n");
	//지학 건물 생성
	eiffeltower();
	gasstation(35, 4, 390);
	gasstation(468, 4, 130);
	parthenon();
	limeorange_apart_merge();
	stair_house_merge();

	printf("완료\n");
}