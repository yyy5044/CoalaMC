#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")
#include "yangho.h"

void yangho() {

	printf("양호 건물 생성 중...\n");
	printf("성전, 회사 건물, 병원, 호텔, 롯데타워, 둥근 아파트 \n");
	//양호 건물 생성
	church();
	company();
	hospital();
	hotel();
	lotte();
	round_apart();

	printf("완료 \n");
}