#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")
#include "jaeseong.h"

void jaeseong() {

	printf("재성 건물 생성 중...\n");
	printf("시계탑, 나이스 아파트, 다이아 나선형 빌라, 황금 나선형 빌라, 스퀘어 아파트 \n");
	//재성 건물 생성
	clock_tower();
	nice_apart();
	spiral_merge();
	spiralgold_merge();
	square_apart();
	//vench_1();
	//vench_2();

	printf("완료 \n");
}