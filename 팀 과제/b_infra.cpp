#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")
#include "yangho.h"
#include "jaeseong.h"
#include "nahyun.h"
#include "jihak.h"

void infra() {

	printf("인프라 생성 중...\n");
	printf("강, 도로, 가로등, 다리, 자동차, 버스, 나무, 분수 \n");

	//강 생성
	river();

	//도로공사 + 가로등 설치
	road_merge();

	//다리 생성
	bridge_merge();

	//도로 위 자동차 생성
	car_merge();

	//버스 생성
	bus_merge();

	//나무 생성
	smalltree_river();
	bigtree_river();

	//분수 설치
	fountain_merge();

	printf("완료 \n");
}