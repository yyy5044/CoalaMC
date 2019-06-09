#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")
#include "nahyun.h"

void nahyun() {

	printf("나현 건물 생성 중...\n");
	printf("문어발 아파트 단지, 모던하우스 단지, 그냥 아파트, 쌍둥이 타워, CU 편의점 \n");
	//나현 건물 생성
	house_merge();
	modernhouse_merge();
	apartment();
	twinbuilding();
	cu(40, 4, 308);
	cu(475, 4, 215);
	cu(159, 4, 111);

	printf("완료\n");
}