#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

void round_apart() {

	int x1 = 375, y1 = 4, z1 = 462, x2 = 415, y2 = 4, z2 = 502;
	int X1, Y1, Z1, X2, Y2, Z2;

	BlockID air = createBlock(BLOCK_AIR);
	BlockID stone = createBlock(BLOCK_NETHER_QUARTZ);
	BlockID glass = createBlock(BLOCK_GLASS);


	X1 = x1 > x2 ? x2 : x1; //Àý´ñ°ª È¿°ú¸¦ À§ÇÑ ÁÂÇ¥ ºñ±³
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	//Æ²
	for (int j = 0; j <= 21; j++) {

		//1 5Ä­ ´ë°¢
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 5 - i, Y1 + 2 * j, Z1 + 1 + i);
		}
		//2 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1, Y1 + 2 * j, Z1 + 7 + i);
		}
		//3 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 1 + i, Y1 + 2 * j, Z1 + 13 + i);
		}
		//4 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 4, Y1 + 2 * j, Z1 + 17 + i);
		}
		//5 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 3 - i, Y1 + 2 * j, Z1 + 23 + i);
		}
		//6 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1, Y1 + 2 * j, Z1 + 27 + i);
		}
		//7 5Ä­ ´ë°¢
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 1 + i, Y1 + 2 * j, Z1 + 33 + i);
		}
		//8 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 7 + i, Y1 + 2 * j, Z1 + 38);
		}
		//9 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 13 + i, Y1 + 2 * j, Z1 + 37 - i);
		}
		//10 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 17 + i, Y1 + 2 * j, Z1 + 34);
		}
		//11 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 23 + i, Y1 + 2 * j, Z1 + 35 + i);
		}
		//12 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 27 + i, Y1 + 2 * j, Z1 + 38);
		}
		//13 5Ä­ ´ë°¢
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 33 + i, Y1 + 2 * j, Z1 + 37 - i);
		}
		//14 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 38, Y1 + 2 * j, Z1 + 31 - i);
		}
		//15 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 37 - i, Y1 + 2 * j, Z1 + 25 - i);
		}
		//16 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 34, Y1 + 2 * j, Z1 + 21 - i);
		}
		//17 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 35 + i, Y1 + 2 * j, Z1 + 15 - i);
		}
		//18 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 38, Y1 + 2 * j, Z1 + 11 - i);
		}
		//19 5Ä­ ´ë°¢
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 37 - i, Y1 + 2 * j, Z1 + 5 - i);
		}
		//20 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 31 - i, Y1 + 2 * j, Z1);
		}
		//21 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 25 - i, Y1 + 2 * j, Z1 + 1 + i);
		}
		//22 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 21 - i, Y1 + 2 * j, Z1 + 4);
		}
		//23 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 15 - i, Y1 + 2 * j, Z1 + 3 - i);
		}
		//24 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 11 - i, Y1 + 2 * j, Z1);
		}
	}

	//¸ð¼­¸®

	int a = 0, b = 0;

	int arr_x[24] = { 0, 0, 4, 4, 0, 0, 6, 12, 16, 22, 26, 32, 38, 38, 34, 34,
	38, 38, 32, 26, 22, 16, 12 , 6 };
	int arr_z[24] = { 6, 12, 16, 22, 26, 32, 38, 38, 34, 34, 38, 38, 32, 26,
	22, 16, 12, 6, 0, 0, 4, 4, 0, 0 };

	for (int j = 0; j <= 42; j++) {
		for (int i = 0; i <= 23; i++) {

			a = arr_x[i];
			b = arr_z[i];

			locateBlock(stone, X1 + a, Y1 + j, Z1 + b);
		}
	}

	for (int j = 44; j <= 80; j++) {
		for (int i = 0; i <= 23; i++) {

			a = arr_x[i];
			b = arr_z[i];

			locateBlock(stone, X1 + a, Y1 + j, Z1 + b);
		}
	}

	//Ã¢¹®
	for (int j = 0; j <= 20; j++) {

		//1 5Ä­ ´ë°¢
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 5 - i, Y1 + 2 * j + 1, Z1 + 1 + i);
		}
		//2 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1, Y1 + 2 * j + 1, Z1 + 7 + i);
		}
		//3 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(glass, X1 + 1 + i, Y1 + 2 * j + 1, Z1 + 13 + i);
		}
		//4 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 4, Y1 + 2 * j + 1, Z1 + 17 + i);
		}
		//5 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(glass, X1 + 3 - i, Y1 + 2 * j + 1, Z1 + 23 + i);
		}
		//6 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1, Y1 + 2 * j + 1, Z1 + 27 + i);
		}
		//7 5Ä­ ´ë°¢
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 1 + i, Y1 + 2 * j + 1, Z1 + 33 + i);
		}
		//8 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 7 + i, Y1 + 2 * j + 1, Z1 + 38);
		}
		//9 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(glass, X1 + 13 + i, Y1 + 2 * j + 1, Z1 + 37 - i);
		}
		//10 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 17 + i, Y1 + 2 * j + 1, Z1 + 34);
		}
		//11 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(glass, X1 + 23 + i, Y1 + 2 * j + 1, Z1 + 35 + i);
		}
		//12 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 27 + i, Y1 + 2 * j + 1, Z1 + 38);
		}
		//13 5Ä­ ´ë°¢
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 33 + i, Y1 + 2 * j + 1, Z1 + 37 - i);
		}
		//14 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 38, Y1 + 2 * j + 1, Z1 + 31 - i);
		}
		//15 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(glass, X1 + 37 - i, Y1 + 2 * j + 1, Z1 + 25 - i);
		}
		//16 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 34, Y1 + 2 * j + 1, Z1 + 21 - i);
		}
		//17 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(glass, X1 + 35 + i, Y1 + 2 * j + 1, Z1 + 15 - i);
		}
		//18 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 38, Y1 + 2 * j + 1, Z1 + 11 - i);
		}
		//19 5Ä­ ´ë°¢
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 37 - i, Y1 + 2 * j + 1, Z1 + 5 - i);
		}
		//20 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 31 - i, Y1 + 2 * j + 1, Z1);
		}
		//21 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(glass, X1 + 25 - i, Y1 + 2 * j + 1, Z1 + 1 + i);
		}
		//22 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 21 - i, Y1 + 2 * j + 1, Z1 + 4);
		}
		//23 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(glass, X1 + 15 - i, Y1 + 2 * j + 1, Z1 + 3 - i);
		}
		//24 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 11 - i, Y1 + 2 * j + 1, Z1);
		}
	}

	//¶Ñ²±
	for (int j = 0; j <= 30; j++) {
		for (int i = 0; i <= 30; i++) {
			locateBlock(stone, X1 + 4 + i, Y1 + 42, Z1 + 4 + j);
		}
	}
	for (int j = 0; j <= 2; j++) {
		for (int i = 0; i <= 11 - 2 * j; i++) {
			locateBlock(stone, X1 + 3 - j, Y1 + 42, Z1 + 3 + j + i);
			locateBlock(stone, X1 + 3 + j + i, Y1 + 42, Z1 + 3 - j);
		}
	}
	for (int j = 0; j <= 2; j++) {
		for (int i = 0; i <= 11 - 2 * j; i++) {
			locateBlock(stone, X1 + 3 - j, Y1 + 42, Z1 + 35 - j - i);
			locateBlock(stone, X1 + 3 + j + i, Y1 + 42, Z1 + 35 + j);
		}
	}
	for (int j = 0; j <= 2; j++) {
		for (int i = 0; i <= 11 - 2 * j; i++) {
			locateBlock(stone, X1 + 35 + j, Y1 + 42, Z1 + 35 - j - i);
			locateBlock(stone, X1 + 35 - j - i, Y1 + 42, Z1 + 35 + j);
		}
	}
	for (int j = 0; j <= 2; j++) {
		for (int i = 0; i <= 11 - 2 * j; i++) {
			locateBlock(stone, X1 + 35 + j, Y1 + 42, Z1 + 3 + j + i);
			locateBlock(stone, X1 + 35 - j - i, Y1 + 42, Z1 + 3 - j);
		}
	}

	//°Ç¹° Áß°£ Å×µÎ¸®
	//´ë°¢ 4Ä­
	for (int i = 0; i <= 3; i++) {
		locateBlock(stone, X1 + 5 - i, Y1 + 43, Z1 + 2 + i);
	}
	for (int i = 0; i <= 3; i++) {
		locateBlock(stone, X1 + 2 + i, Y1 + 43, Z1 + 33 + i);
	}
	for (int i = 0; i <= 3; i++) {
		locateBlock(stone, X1 + 36 - i, Y1 + 43, Z1 + 33 + i);
	}
	for (int i = 0; i <= 3; i++) {
		locateBlock(stone, X1 + 33 + i, Y1 + 43, Z1 + 2 + i);
	}
	//´ë°¢ 3Ä­

	int arr_c3x[8] = { 25, 36, 4, 15, 13, 2, 34, 23 };
	int arr_c3z[8] = { 2, 13, 23, 34, 2, 13, 23, 34 };

	for (int i = 0; i <= 2; i++) {
		for (int n = 0; n <= 3; n++) {
			locateBlock(stone, X1 + arr_c3x[n] - i, Y1 + 43, Z1 + arr_c3z[n] + i);
		}
	}
	for (int i = 0; i <= 2; i++) {
		for (int n = 4; n <= 7; n++) {
			locateBlock(stone, X1 + arr_c3x[n] + i, Y1 + 43, Z1 + arr_c3z[n] + i);
		}
	}
	//Á÷¼± 7Ä­
	int sero_s7x[6] = { 32, 22, 12, 32, 22, 12 };
	int sero_s7z[6] = { 1, 5, 1, 37, 33, 37 };
	int garo_s7x[6] = { 37, 33, 37, 1, 5, 1 };
	int garo_s7z[6] = { 6, 16, 26, 6, 16, 26 };

	for (int n = 0; n <= 5; n++) {
		for (int i = 0; i <= 6; i++) {
			locateBlock(stone, X1 + sero_s7x[n] - i, Y1 + 43, Z1 + sero_s7z[n]);
		}
	}
	for (int n = 0; n <= 5; n++) {
		for (int i = 0; i <= 6; i++) {
			locateBlock(stone, X1 + garo_s7x[n], Y1 + 43, Z1 + garo_s7z[n] + i);
		}
	}

	//Æ²
	for (int j = 0; j <= 18; j++) {

		//1 5Ä­ ´ë°¢
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 5 - i, Y1 + 2 * j + 44, Z1 + 1 + i);
		}
		//2 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1, Y1 + 2 * j + 44, Z1 + 7 + i);
		}
		//3 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 1 + i, Y1 + 2 * j + 44, Z1 + 13 + i);
		}
		//4 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 4, Y1 + 2 * j + 44, Z1 + 17 + i);
		}
		//5 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 3 - i, Y1 + 2 * j + 44, Z1 + 23 + i);
		}
		//6 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1, Y1 + 2 * j + 44, Z1 + 27 + i);
		}
		//7 5Ä­ ´ë°¢
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 1 + i, Y1 + 2 * j + 44, Z1 + 33 + i);
		}
		//8 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 7 + i, Y1 + 2 * j + 44, Z1 + 38);
		}
		//9 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 13 + i, Y1 + 2 * j + 44, Z1 + 37 - i);
		}
		//10 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 17 + i, Y1 + 2 * j + 44, Z1 + 34);
		}
		//11 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 23 + i, Y1 + 2 * j + 44, Z1 + 35 + i);
		}
		//12 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 27 + i, Y1 + 2 * j + 44, Z1 + 38);
		}
		//13 5Ä­ ´ë°¢
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 33 + i, Y1 + 2 * j + 44, Z1 + 37 - i);
		}
		//14 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 38, Y1 + 2 * j + 44, Z1 + 31 - i);
		}
		//15 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 37 - i, Y1 + 2 * j + 44, Z1 + 25 - i);
		}
		//16 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 34, Y1 + 2 * j + 44, Z1 + 21 - i);
		}
		//17 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 35 + i, Y1 + 2 * j + 44, Z1 + 15 - i);
		}
		//18 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 38, Y1 + 2 * j + 44, Z1 + 11 - i);
		}
		//19 5Ä­ ´ë°¢
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 37 - i, Y1 + 2 * j + 44, Z1 + 5 - i);
		}
		//20 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 31 - i, Y1 + 2 * j + 44, Z1);
		}
		//21 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 25 - i, Y1 + 2 * j + 44, Z1 + 1 + i);
		}
		//22 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 21 - i, Y1 + 2 * j + 44, Z1 + 4);
		}
		//23 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 15 - i, Y1 + 2 * j + 44, Z1 + 3 - i);
		}
		//24 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(stone, X1 + 11 - i, Y1 + 2 * j + 44, Z1);
		}
	}

	//Ã¢¹®
	for (int j = 0; j <= 17; j++) {

		//1 5Ä­ ´ë°¢
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 5 - i, Y1 + 2 * j + 1 + 44, Z1 + 1 + i);
		}
		//2 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1, Y1 + 2 * j + 1 + 44, Z1 + 7 + i);
		}
		//3 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(glass, X1 + 1 + i, Y1 + 2 * j + 1 + 44, Z1 + 13 + i);
		}
		//4 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 4, Y1 + 2 * j + 1 + 44, Z1 + 17 + i);
		}
		//5 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(glass, X1 + 3 - i, Y1 + 2 * j + 1 + 44, Z1 + 23 + i);
		}
		//6 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1, Y1 + 2 * j + 1 + 44, Z1 + 27 + i);
		}
		//7 5Ä­ ´ë°¢
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 1 + i, Y1 + 2 * j + 1 + 44, Z1 + 33 + i);
		}
		//8 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 7 + i, Y1 + 2 * j + 1 + 44, Z1 + 38);
		}
		//9 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(glass, X1 + 13 + i, Y1 + 2 * j + 1 + 44, Z1 + 37 - i);
		}
		//10 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 17 + i, Y1 + 2 * j + 1 + 44, Z1 + 34);
		}
		//11 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(glass, X1 + 23 + i, Y1 + 2 * j + 1 + 44, Z1 + 35 + i);
		}
		//12 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 27 + i, Y1 + 2 * j + 1 + 44, Z1 + 38);
		}
		//13 5Ä­ ´ë°¢
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 33 + i, Y1 + 2 * j + 1 + 44, Z1 + 37 - i);
		}
		//14 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 38, Y1 + 2 * j + 1 + 44, Z1 + 31 - i);
		}
		//15 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(glass, X1 + 37 - i, Y1 + 2 * j + 1 + 44, Z1 + 25 - i);
		}
		//16 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 34, Y1 + 2 * j + 1 + 44, Z1 + 21 - i);
		}
		//17 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(glass, X1 + 35 + i, Y1 + 2 * j + 1 + 44, Z1 + 15 - i);
		}
		//18 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 38, Y1 + 2 * j + 1 + 44, Z1 + 11 - i);
		}
		//19 5Ä­ ´ë°¢
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 37 - i, Y1 + 2 * j + 1 + 44, Z1 + 5 - i);
		}
		//20 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 31 - i, Y1 + 2 * j + 1 + 44, Z1);
		}
		//21 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(glass, X1 + 25 - i, Y1 + 2 * j + 1 + 44, Z1 + 1 + i);
		}
		//22 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 21 - i, Y1 + 2 * j + 1 + 44, Z1 + 4);
		}
		//23 3Ä­ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(glass, X1 + 15 - i, Y1 + 2 * j + 1 + 44, Z1 + 3 - i);
		}
		//24 5Ä­ Á÷¼±
		for (int i = 0; i <= 4; i++) {
			locateBlock(glass, X1 + 11 - i, Y1 + 2 * j + 1 + 44, Z1);
		}

		//¶Ñ²±
		for (int j = 0; j <= 30; j++) {
			for (int i = 0; i <= 30; i++) {
				locateBlock(stone, X1 + 4 + i, Y1 + 80, Z1 + 4 + j);
			}
		}
		for (int j = 0; j <= 2; j++) {
			for (int i = 0; i <= 11 - 2 * j; i++) {
				locateBlock(stone, X1 + 3 - j, Y1 + 80, Z1 + 3 + j + i);
				locateBlock(stone, X1 + 3 + j + i, Y1 + 80, Z1 + 3 - j);
			}
		}
		for (int j = 0; j <= 2; j++) {
			for (int i = 0; i <= 11 - 2 * j; i++) {
				locateBlock(stone, X1 + 3 - j, Y1 + 80, Z1 + 35 - j - i);
				locateBlock(stone, X1 + 3 + j + i, Y1 + 80, Z1 + 35 + j);
			}
		}
		for (int j = 0; j <= 2; j++) {
			for (int i = 0; i <= 11 - 2 * j; i++) {
				locateBlock(stone, X1 + 35 + j, Y1 + 80, Z1 + 35 - j - i);
				locateBlock(stone, X1 + 35 - j - i, Y1 + 80, Z1 + 35 + j);
			}
		}
		for (int j = 0; j <= 2; j++) {
			for (int i = 0; i <= 11 - 2 * j; i++) {
				locateBlock(stone, X1 + 35 + j, Y1 + 80, Z1 + 3 + j + i);
				locateBlock(stone, X1 + 35 - j - i, Y1 + 80, Z1 + 3 - j);
			}
		}

	}



}
