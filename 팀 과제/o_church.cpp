#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

void church() {
	int x1 = 105, y1 = 4, z1 = 285, x2 = 175, y2 = 4, z2 = 335;
	int X1, Y1, Z1, X2, Y2, Z2;

	BlockID air = createBlock(BLOCK_AIR);
	BlockID stone = createBlock(BLOCK_NETHER_QUARTZ);

	X1 = x1 > x2 ? x2 : x1; //Àý´ñ°ª È¿°ú¸¦ À§ÇÑ ÁÂÇ¥ ºñ±³
	X2 = x1 > x2 ? x1 : x2;
	Y1 = y1 > y2 ? y2 : y1;
	Y2 = y1 > y2 ? y1 : y2;
	Z1 = z1 > z2 ? z2 : z1;
	Z2 = z1 > z2 ? z1 : z2;

	for (int j = 0; j <= 5; j++) {

		//Àü¸é layer1
		//±³Â÷ 4Ä­
		for (int i = 1; i <= 4; i++) {
			locateBlock(stone, X1 + 14 + 2 * i - 1, Y1 + j, Z1);
		}
		//ÀÌ¾î¼­ 7Ä­
		for (int i = 1; i <= 7; i++) {
			locateBlock(stone, X1 + 22 + i, Y1 + j, Z1);
		}
		//±³Â÷ 3Ä­
		for (int i = 1; i <= 3; i++) {
			locateBlock(stone, X1 + 30 + 2 * i - 1, Y1 + j, Z1);
		}
		//ÀÌ¾î¼­ 7Ä­
		for (int i = 1; i <= 7; i++) {
			locateBlock(stone, X1 + 36 + i, Y1 + j, Z1);
		}
		//±³Â÷ 4Ä­
		for (int i = 1; i <= 4; i++) {
			locateBlock(stone, X1 + 44 + 2 * i - 1, Y1 + j, Z1);
		}
		//Àü¸é Ã¤¿ì±â
		for (int i = 1; i <= 37; i++) {
			locateBlock(stone, X1 + 14 + i, Y1 + j, Z1 + 1);
		}
		//±³Â÷ 7Ä­ - ¿ÞÂÊ
		for (int i = 0; i <= 6; i++) {
			locateBlock(stone, X1 + 2 * i, Y1 + j, Z1 + 19);
		}
		//±³Â÷ 7Ä­ - ¿ÞÂÊ - Ã¤¿ì±â
		for (int i = 1; i <= 11; i++) {
			locateBlock(stone, X1 + i, Y1 + j, Z1 + 20);
		}
		//±³Â÷ 7Ä­ - ¿À¸¥ÂÊ
		for (int i = 0; i <= 6; i++) {
			locateBlock(stone, X1 + 54 + 2 * i, Y1 + j, Z1 + 19);
		}
		//±³Â÷ 7Ä­ - ¿À¸¥ÂÊ
		for (int i = 1; i <= 11; i++) {
			locateBlock(stone, X1 + 54 + i, Y1 + j, Z1 + 20);
		}

		//ÁÂÃø layer1
		//±³Â÷ 9Ä­
		for (int i = 0; i <= 8; i++) {
			locateBlock(stone, X1 + 14, Y1 + j, Z1 + 2 * i + 1);
		}
		//±³Â÷ 9Ä­ - Ã¤¿ì±â
		for (int i = 0; i <= 16; i++) {
			locateBlock(stone, X1 + 15, Y1 + j, Z1 + i);
		}
		locateBlock(stone, X1 + 13, Y1 + j, Z1 + 18);//´ë°¢
		//±³Â÷ 15Ä­
		for (int i = 0; i <= 14; i++) {
			locateBlock(stone, X1, Y1 + j, Z1 + 20 + 2 * i);
		}
		//±³Â÷ 15Ä­ - Ã¤¿ì±â
		for (int i = 0; i <= 27; i++) {
			locateBlock(stone, X1 + 1, Y1 + j, Z1 + 20 + i);
		}

		//¿ìÃø layer1
		//±³Â÷ 9Ä­
		for (int i = 0; i <= 8; i++) {
			locateBlock(stone, X1 + 52, Y1 + j, Z1 + 2 * i + 1);
		}
		//±³Â÷ 9Ä­ - Ã¤¿ì±â
		for (int i = 0; i <= 16; i++) {
			locateBlock(stone, X1 + 51, Y1 + j, Z1 + i);
		}
		locateBlock(stone, X1 + 53, Y1 + j, Z1 + 18);//´ë°¢
		//±³Â÷ 15Ä­
		for (int i = 0; i <= 14; i++) {
			locateBlock(stone, X1 + 66, Y1 + j, Z1 + 20 + 2 * i);
		}
		//±³Â÷ 15Ä­ - Ã¤¿ì±â
		for (int i = 0; i <= 27; i++) {
			locateBlock(stone, X1 + 65, Y1 + j, Z1 + 20 + i);
		}

		//ÈÄ¸é layer1
		//±³Â÷ 32Ä­
		for (int i = 0; i <= 31; i++) {
			locateBlock(stone, X1 + 2 + 2 * i, Y1 + j, Z1 + 48);
		}
		//±³Â÷ 32Ä­ - Ã¤¿ì±â
		for (int i = 0; i <= 63; i++) {
			locateBlock(stone, X1 + 1 + i, Y1 + j, Z1 + 47);
		}

	}

	//1Ãþ ¶Ñ²± µ¤±â
	for (int j = 0; j <= 29; j++)
	{
		for (int i = 0; i <= 66; i++) {
			locateBlock(stone, X1 + i, Y1 + 6, Z1 + 19 + j);
		}
	}
	for (int j = 0; j <= 18; j++)
	{
		for (int i = 0; i <= 38; i++) {
			locateBlock(stone, X1 + 14 + i, Y1 + 6, Z1 + j);
		}
	}
	locateBlock(stone, X1 + 53, Y1 + 6, Z1 + 18); //´ë°¢
	locateBlock(stone, X1 + 13, Y1 + 6, Z1 + 18); //´ë°¢
	locateBlock(air, X1 + 14, Y1 + 6, Z1);
	locateBlock(air, X1 + 52, Y1 + 6, Z1);

	//¿À¸¥ÂÊ °è´Ü
	for (int j = 0; j <= 7; j++)
	{
		for (int i = 0; i <= 6; i++) {
			locateBlock(stone, X1 + 23, Y1 + j - i, Z1 - 1 - i);
		}
	}
	locateBlock(stone, X1 + 23, Y1 + 7, Z1);
	for (int k = 0; k <= 4; k++)
	{
		for (int j = 0; j <= 6; j++) {
			for (int i = 0; i <= 6; i++) {
				locateBlock(stone, X1 + 24 + k, Y1 + j - i, Z1 - i);
			}
		}
	}
	for (int j = 0; j <= 7; j++)
	{
		for (int i = 0; i <= 6; i++) {
			locateBlock(stone, X1 + 29, Y1 + j - i, Z1 - 1 - i);
		}
	}
	locateBlock(stone, X1 + 29, Y1 + 7, Z1);
	//¿ÞÂÊ °è´Ü
	for (int j = 0; j <= 7; j++)
	{
		for (int i = 0; i <= 6; i++) {
			locateBlock(stone, X1 + 37, Y1 + j - i, Z1 - 1 - i);
		}
	}
	locateBlock(stone, X1 + 37, Y1 + 7, Z1);
	for (int k = 0; k <= 4; k++)
	{
		for (int j = 0; j <= 6; j++) {
			for (int i = 0; i <= 6; i++) {
				locateBlock(stone, X1 + 38 + k, Y1 + j - i, Z1 - i);
			}
		}
	}
	for (int j = 0; j <= 7; j++)
	{
		for (int i = 0; i <= 6; i++) {
			locateBlock(stone, X1 + 43, Y1 + j - i, Z1 - 1 - i);
		}
	}
	locateBlock(stone, X1 + 43, Y1 + 7, Z1);

	//1Ãþ Å×µÎ¸® - °¡¿îµ¥
	for (int i = 0; i <= 8; i++) {
		locateBlock(stone, X1 + 29 + i, Y1 + 7, Z1 + 1);
	}
	//1Ãþ Å×µÎ¸® - ¿À¸¥ÂÊ Àü¸é
	for (int i = 0; i <= 8; i++) {
		locateBlock(stone, X1 + 15 + i, Y1 + 7, Z1 + 1);
	}
	for (int i = 0; i <= 11; i++) {
		locateBlock(stone, X1 + 1 + i, Y1 + 7, Z1 + 20);
	}
	//1Ãþ Å×µÎ¸® - ¿ìÃø
	for (int i = 0; i <= 16; i++) {
		locateBlock(stone, X1 + 15, Y1 + 7, Z1 + 2 + i);
	}
	for (int i = 0; i <= 26; i++) {
		locateBlock(stone, X1 + 1, Y1 + 7, Z1 + 21 + i);
	}
	//1Ãþ Å×µÎ¸® - ¿ÞÂÊ Àü¸é
	for (int i = 0; i <= 8; i++) {
		locateBlock(stone, X1 + 43 + i, Y1 + 7, Z1 + 1);
	}
	for (int i = 0; i <= 11; i++) {
		locateBlock(stone, X1 + 54 + i, Y1 + 7, Z1 + 20);
	}
	//1Ãþ Å×µÎ¸® - ÁÂÃø
	for (int i = 0; i <= 16; i++) {
		locateBlock(stone, X1 + 51, Y1 + 7, Z1 + 2 + i);
	}
	for (int i = 0; i <= 26; i++) {
		locateBlock(stone, X1 + 65, Y1 + 7, Z1 + 21 + i);
	}
	//1Ãþ Å×µÎ¸® - ÈÄ¸é
	for (int i = 0; i <= 62; i++) {
		locateBlock(stone, X1 + 2 + i, Y1 + 7, Z1 + 47);
	}
	//1Ãþ Å×µÎ¸® - ´ë°¢
	locateBlock(stone, X1 + 53, Y1 + 7, Z1 + 19);
	locateBlock(stone, X1 + 52, Y1 + 7, Z1 + 18);
	locateBlock(stone, X1 + 13, Y1 + 7, Z1 + 19);
	locateBlock(stone, X1 + 14, Y1 + 7, Z1 + 18);

	for (int n = 0; n <= 4; n++) //Ãþ º¹»ç
	{
		//2Ãþ
		for (int j = 0; j <= 1; j++)
		{
			//2Ãþ ´ë°¢
			for (int i = 0; i <= 2; i++) {
				locateBlock(stone, X1 + 22 - i, Y1 + 7 + 6 * n + j, Z1 + 17 + i);
			}
			for (int i = 0; i <= 2; i++) {
				locateBlock(stone, X1 + 44 + i, Y1 + 7 + 6 * n + j, Z1 + 17 + i);
			}
			locateBlock(stone, X1 + 15, Y1 + 7 + 6 * n + j, Z1 + 21);
			locateBlock(stone, X1 + 51, Y1 + 7 + 6 * n + j, Z1 + 21);
			//2Ãþ Àü¸é
			for (int i = 0; i <= 20; i++) {
				locateBlock(stone, X1 + 23 + i, Y1 + 7 + 6 * n + j, Z1 + 17);
			}
			for (int i = 0; i <= 3; i++) {
				locateBlock(stone, X1 + 16 + i, Y1 + 7 + 6 * n + j, Z1 + 20);
			}
			for (int i = 0; i <= 11; i++) {
				locateBlock(stone, X1 + 3 + i, Y1 + 7 + 6 * n + j, Z1 + 22);
			}
			for (int i = 0; i <= 3; i++) {
				locateBlock(stone, X1 + 47 + i, Y1 + 7 + 6 * n + j, Z1 + 20);
			}
			for (int i = 0; i <= 11; i++) {
				locateBlock(stone, X1 + 52 + i, Y1 + 7 + 6 * n + j, Z1 + 22);
			}
			//2Ãþ ¿ìÃø
			for (int i = 0; i <= 22; i++) {
				locateBlock(stone, X1 + 3, Y1 + 7 + 6 * n + j, Z1 + 23 + i);
			}
			//2Ãþ ÁÂÃø
			for (int i = 0; i <= 22; i++) {
				locateBlock(stone, X1 + 63, Y1 + 7 + 6 * n + j, Z1 + 23 + i);
			}
			//2Ãþ ÈÄ¸é
			for (int i = 0; i <= 58; i++) {
				locateBlock(stone, X1 + 4 + i, Y1 + 7 + 6 * n + j, Z1 + 45);
			}
		}

		//2Ãþ Ã¢¹®
		for (int j = 0; j <= 1; j++) {

			//2Ãþ Á¤¸é Ã¢¹® »À´ë
			locateBlock(stone, X1 + 22, Y1 + 9 + 6 * n + j, Z1 + 17);
			locateBlock(stone, X1 + 23, Y1 + 9 + 6 * n + j, Z1 + 17);
			locateBlock(stone, X1 + 25, Y1 + 9 + 6 * n + j, Z1 + 17);
			locateBlock(stone, X1 + 29, Y1 + 9 + 6 * n + j, Z1 + 17);
			locateBlock(stone, X1 + 31, Y1 + 9 + 6 * n + j, Z1 + 17);
			locateBlock(stone, X1 + 35, Y1 + 9 + 6 * n + j, Z1 + 17);
			locateBlock(stone, X1 + 37, Y1 + 9 + 6 * n + j, Z1 + 17);
			locateBlock(stone, X1 + 41, Y1 + 9 + 6 * n + j, Z1 + 17);
			locateBlock(stone, X1 + 43, Y1 + 9 + 6 * n + j, Z1 + 17);
			locateBlock(stone, X1 + 44, Y1 + 9 + 6 * n + j, Z1 + 17);
			//¿À¸¥ÂÊ Á¤¸é Ã¢¹® »À´ë
			locateBlock(stone, X1 + 11, Y1 + 9 + 6 * n + j, Z1 + 22);
			locateBlock(stone, X1 + 9, Y1 + 9 + 6 * n + j, Z1 + 22);
			locateBlock(stone, X1 + 5, Y1 + 9 + 6 * n + j, Z1 + 22);
			locateBlock(stone, X1 + 3, Y1 + 9 + 6 * n + j, Z1 + 22);
			//¿ÞÂÊ Á¤¸é Ã¢¹® »À´ë
			locateBlock(stone, X1 + 55, Y1 + 9 + 6 * n + j, Z1 + 22);
			locateBlock(stone, X1 + 57, Y1 + 9 + 6 * n + j, Z1 + 22);
			locateBlock(stone, X1 + 61, Y1 + 9 + 6 * n + j, Z1 + 22);
			locateBlock(stone, X1 + 63, Y1 + 9 + 6 * n + j, Z1 + 22);
			//2Ãþ ¿ìÃø Ã¢¹® »À´ë
			for (int i = 0; i <= 3; i++) {
				locateBlock(stone, X1 + 3, Y1 + 9 + 6 * n + j, Z1 + 25 + 6 * i);
			}
			for (int i = 0; i <= 2; i++) {
				locateBlock(stone, X1 + 3, Y1 + 9 + 6 * n + j, Z1 + 27 + 6 * i);
				locateBlock(stone, X1 + 3, Y1 + 9 + 6 * n + j, Z1 + 28 + 6 * i);
			}
			//2Ãþ ÁÂÃø Ã¢¹® »À´ë
			for (int i = 0; i <= 3; i++) {
				locateBlock(stone, X1 + 63, Y1 + 9 + 6 * n + j, Z1 + 25 + 6 * i);
			}
			for (int i = 0; i <= 2; i++) {
				locateBlock(stone, X1 + 63, Y1 + 9 + 6 * n + j, Z1 + 27 + 6 * i);
				locateBlock(stone, X1 + 63, Y1 + 9 + 6 * n + j, Z1 + 28 + 6 * i);
			}
			//2Ãþ ÈÄ¸é Ã¢¹® »À´ë
			//ÈÄ¸é ¿À¸¥ÂÊ
			for (int i = 0; i <= 4; i++) {
				locateBlock(stone, X1 + 6 + 6 * i, Y1 + 9 + 6 * n + j, Z1 + 45);
			}
			for (int i = 0; i <= 3; i++) {
				locateBlock(stone, X1 + 8 + 6 * i, Y1 + 9 + 6 * n + j, Z1 + 45);
				locateBlock(stone, X1 + 9 + 6 * i, Y1 + 9 + 6 * n + j, Z1 + 45);
			}
			//ÈÄ¸é ¿ÞÂÊ
			for (int i = 0; i <= 4; i++) {
				locateBlock(stone, X1 + 36 + 6 * i, Y1 + 9 + 6 * n + j, Z1 + 45);
			}
			for (int i = 0; i <= 3; i++) {
				locateBlock(stone, X1 + 39 + 6 * i, Y1 + 9 + 6 * n + j, Z1 + 45);
				locateBlock(stone, X1 + 40 + 6 * i, Y1 + 9 + 6 * n + j, Z1 + 45);
			}
			//ÈÄ¸é °¡¿îµ¥
			for (int i = 0; i <= 2; i++) {
				locateBlock(stone, X1 + 32 + i, Y1 + 9 + 6 * n + j, Z1 + 45);
			}
			//ÈÄ¸é ¸ð¼­¸®
			locateBlock(stone, X1 + 3, Y1 + 9 + 6 * n + j, Z1 + 45);
			locateBlock(stone, X1 + 63, Y1 + 9 + 6 * n + j, Z1 + 45);
			//2Ãþ ´ë°¢
			for (int i = 0; i <= 3; i++) {
				locateBlock(stone, X1 + 22 - i, Y1 + 9 + 6 * n + j, Z1 + 17 + i);
			}
			for (int i = 0; i <= 3; i++) {
				locateBlock(stone, X1 + 44 + i, Y1 + 9 + 6 * n + j, Z1 + 17 + i);
			}
			for (int i = 0; i <= 2; i++) {
				locateBlock(stone, X1 + 16 - i, Y1 + 9 + 6 * n + j, Z1 + 20 + i);
			}
			for (int i = 0; i <= 2; i++) {
				locateBlock(stone, X1 + 50 + i, Y1 + 9 + 6 * n + j, Z1 + 20 + i);
			}
		}

		//2Ãþ ´ë°¢
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 22 - i, Y1 + 11 + 6 * n, Z1 + 17 + i);
		}
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 44 + i, Y1 + 11 + 6 * n, Z1 + 17 + i);
		}
		locateBlock(stone, X1 + 15, Y1 + 11 + 6 * n, Z1 + 21);
		locateBlock(stone, X1 + 51, Y1 + 11 + 6 * n, Z1 + 21);
		//2Ãþ Àü¸é
		for (int i = 0; i <= 20; i++) {
			locateBlock(stone, X1 + 23 + i, Y1 + 11 + 6 * n, Z1 + 17);
		}
		for (int i = 0; i <= 3; i++) {
			locateBlock(stone, X1 + 16 + i, Y1 + 11 + 6 * n, Z1 + 20);
		}
		for (int i = 0; i <= 11; i++) {
			locateBlock(stone, X1 + 3 + i, Y1 + 11 + 6 * n, Z1 + 22);
		}
		for (int i = 0; i <= 3; i++) {
			locateBlock(stone, X1 + 47 + i, Y1 + 11 + 6 * n, Z1 + 20);
		}
		for (int i = 0; i <= 11; i++) {
			locateBlock(stone, X1 + 52 + i, Y1 + 11 + 6 * n, Z1 + 22);
		}
		//2Ãþ ¿ìÃø
		for (int i = 0; i <= 22; i++) {
			locateBlock(stone, X1 + 3, Y1 + 11 + 6 * n, Z1 + 23 + i);
		}
		//2Ãþ ÁÂÃø
		for (int i = 0; i <= 22; i++) {
			locateBlock(stone, X1 + 63, Y1 + 11 + 6 * n, Z1 + 23 + i);
		}
		//2Ãþ ÈÄ¸é
		for (int i = 0; i <= 58; i++) {
			locateBlock(stone, X1 + 4 + i, Y1 + 11 + 6 * n, Z1 + 45);
		}

		//Ãþ ±¸ºÐ¼±
		//Ãþ ±¸ºÐ¼± - Á¤¸é
		for (int i = 0; i <= 22; i++) {
			locateBlock(stone, X1 + 22 + i, Y1 + 12 + 6 * n, Z1 + 16);
		}
		//Ãþ ±¸ºÐ¼± - ¿À¸¥ÂÊ ´ë°¢
		for (int i = 0; i <= 3; i++) {
			locateBlock(stone, X1 + 22 - i, Y1 + 12 + 6 * n, Z1 + 16 + i);
		}
		locateBlock(stone, X1 + 18, Y1 + 12 + 6 * n, Z1 + 19);
		locateBlock(stone, X1 + 17, Y1 + 12 + 6 * n, Z1 + 19);
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 16 - i, Y1 + 12 + 6 * n, Z1 + 19 + i);
		}
		//Ãþ ±¸ºÐ¼± - ¿ÞÂÊ ´ë°¢
		for (int i = 0; i <= 3; i++) {
			locateBlock(stone, X1 + 44 + i, Y1 + 12 + 6 * n, Z1 + 16 + i);
		}
		locateBlock(stone, X1 + 48, Y1 + 12 + 6 * n, Z1 + 19);
		locateBlock(stone, X1 + 49, Y1 + 12 + 6 * n, Z1 + 19);
		for (int i = 0; i <= 3; i++) {
			locateBlock(stone, X1 + 50 + i, Y1 + 12 + 6 * n, Z1 + 19 + i);
		}
		//Ãþ ±¸ºÐ¼± - ¿À¸¥ÂÊ Á¤¸é
		for (int i = 0; i <= 11; i++) {
			locateBlock(stone, X1 + 13 - i, Y1 + 12 + 6 * n, Z1 + 21);
		}
		//Ãþ ±¸ºÐ¼± - ¿ÞÂÊ Á¤¸é
		for (int i = 0; i <= 11; i++) {
			locateBlock(stone, X1 + 53 + i, Y1 + 12 + 6 * n, Z1 + 21);
		}
		//Ãþ ±¸ºÐ¼± - ¿ìÃø
		for (int i = 0; i <= 24; i++) {
			locateBlock(stone, X1 + 2, Y1 + 12 + 6 * n, Z1 + 22 + i);
		}
		//Ãþ ±¸ºÐ¼± - ÁÂÃø
		for (int i = 0; i <= 24; i++) {
			locateBlock(stone, X1 + 64, Y1 + 12 + 6 * n, Z1 + 22 + i);
		}
		//Ãþ ±¸ºÐ¼± - ÈÄ¸é
		for (int i = 0; i <= 60; i++) {
			locateBlock(stone, X1 + 3 + i, Y1 + 12 + 6 * n, Z1 + 46);
		}
	}

	//²À´ë±âÃþÀÇ ¹Ù´Ú
	for (int j = 0; j <= 23; j++) {
		for (int i = 0; i <= 60; i++) {
			locateBlock(stone, X1 + 3 + i, Y1 + 36, Z1 + 22 + j);
		}
	}
	for (int i = 0; i <= 36; i++) {
		locateBlock(stone, X1 + 15 + i, Y1 + 36, Z1 + 21);
	}
	for (int i = 0; i <= 34; i++) {
		locateBlock(stone, X1 + 16 + i, Y1 + 36, Z1 + 20);
	}
	for (int j = 0; j <= 2; j++) {
		for (int i = 0; i <= 26 - 2 * j; i++) {
			locateBlock(stone, X1 + 20 + i + j, Y1 + 36, Z1 + 19 - j);
		}
	}

	//²À´ë±âÃþ Å×µÎ¸®
	//2Ãþ ´ë°¢
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 22 - i, Y1 + 37, Z1 + 17 + i);
	}
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 44 + i, Y1 + 37, Z1 + 17 + i);
	}
	locateBlock(stone, X1 + 15, Y1 + 37, Z1 + 21);
	locateBlock(stone, X1 + 51, Y1 + 37, Z1 + 21);
	//2Ãþ Àü¸é
	for (int i = 0; i <= 20; i++) {
		locateBlock(stone, X1 + 23 + i, Y1 + 37, Z1 + 17);
	}
	for (int i = 0; i <= 3; i++) {
		locateBlock(stone, X1 + 16 + i, Y1 + 37, Z1 + 20);
	}
	for (int i = 0; i <= 11; i++) {
		locateBlock(stone, X1 + 3 + i, Y1 + 37, Z1 + 22);
	}
	for (int i = 0; i <= 3; i++) {
		locateBlock(stone, X1 + 47 + i, Y1 + 37, Z1 + 20);
	}
	for (int i = 0; i <= 11; i++) {
		locateBlock(stone, X1 + 52 + i, Y1 + 37, Z1 + 22);
	}
	//2Ãþ ¿ìÃø
	for (int i = 0; i <= 22; i++) {
		locateBlock(stone, X1 + 3, Y1 + 37, Z1 + 23 + i);
	}
	//2Ãþ ÁÂÃø
	for (int i = 0; i <= 22; i++) {
		locateBlock(stone, X1 + 63, Y1 + 37, Z1 + 23 + i);
	}
	//2Ãþ ÈÄ¸é
	for (int i = 0; i <= 58; i++) {
		locateBlock(stone, X1 + 4 + i, Y1 + 37, Z1 + 45);
	}


	for (int k = 0; k <= 1; k++) {

		//²À´ë±âÃþ ´ë°¢
		for (int i = 0; i <= 3; i++) {
			locateBlock(stone, X1 + 23 - i, Y1 + 37 + 2 * k, Z1 + 20 + i);
		}
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 17 - i, Y1 + 37 + 2 * k, Z1 + 23 + i);
		}
		locateBlock(stone, X1 + 19, Y1 + 37 + 2 * k, Z1 + 23);
		locateBlock(stone, X1 + 18, Y1 + 37 + 2 * k, Z1 + 23);
		for (int i = 0; i <= 3; i++) {
			locateBlock(stone, X1 + 43 + i, Y1 + 37 + 2 * k, Z1 + 20 + i);
		}
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 49 + i, Y1 + 37 + 2 * k, Z1 + 23 + i);
		}
		locateBlock(stone, X1 + 47, Y1 + 37 + 2 * k, Z1 + 23);
		locateBlock(stone, X1 + 48, Y1 + 37 + 2 * k, Z1 + 23);

		//²À´ë±âÃþ Á¤¸é
		//Á¤¸é °¡¿îµ¥
		for (int i = 0; i <= 18; i++) {
			locateBlock(stone, X1 + 24 + i, Y1 + 37 + 2 * k, Z1 + 20);
		}
		//Á¤¸é ¿À¸¥ÂÊ
		for (int i = 0; i <= 8; i++) {
			locateBlock(stone, X1 + 6 + i, Y1 + 37 + 2 * k, Z1 + 25);
		}
		//Á¤¸é ¿ÞÂÊ
		for (int i = 0; i <= 8; i++) {
			locateBlock(stone, X1 + 52 + i, Y1 + 37 + 2 * k, Z1 + 25);
		}

		//²À´ë±âÃþ ¿ìÃø
		for (int i = 0; i <= 17; i++) {
			locateBlock(stone, X1 + 6, Y1 + 37 + 2 * k, Z1 + 26 + i);
		}
		//²À´ë±âÃþ ÁÂÃø
		for (int i = 0; i <= 17; i++) {
			locateBlock(stone, X1 + 60, Y1 + 37 + 2 * k, Z1 + 26 + i);
		}
		//²À´ë±âÃþ ÈÄ¸é
		for (int i = 0; i <= 52; i++) {
			locateBlock(stone, X1 + 7 + i, Y1 + 37 + 2 * k, Z1 + 43);
		}
	}

	//²À´ë±âÃþ Ã¢¹® »À´ë
	locateBlock(stone, X1 + 23, Y1 + 38, Z1 + 20);
	locateBlock(stone, X1 + 25, Y1 + 38, Z1 + 20);
	locateBlock(stone, X1 + 29, Y1 + 38, Z1 + 20);
	locateBlock(stone, X1 + 31, Y1 + 38, Z1 + 20);
	locateBlock(stone, X1 + 35, Y1 + 38, Z1 + 20);
	locateBlock(stone, X1 + 37, Y1 + 38, Z1 + 20);
	locateBlock(stone, X1 + 41, Y1 + 38, Z1 + 20);
	locateBlock(stone, X1 + 43, Y1 + 38, Z1 + 20);
	//²À´ë±âÃþ ¿À¸¥ÂÊ Á¤¸é Ã¢¹® »À´ë
	locateBlock(stone, X1 + 6, Y1 + 38, Z1 + 25);
	locateBlock(stone, X1 + 8, Y1 + 38, Z1 + 25);
	locateBlock(stone, X1 + 11, Y1 + 38, Z1 + 25);
	locateBlock(stone, X1 + 13, Y1 + 38, Z1 + 25);
	//²À´ë±âÃþ ¿ÞÂÊ Á¤¸é Ã¢¹® »À´ë
	locateBlock(stone, X1 + 60, Y1 + 38, Z1 + 25);
	locateBlock(stone, X1 + 58, Y1 + 38, Z1 + 25);
	locateBlock(stone, X1 + 55, Y1 + 38, Z1 + 25);
	locateBlock(stone, X1 + 53, Y1 + 38, Z1 + 25);
	//²À´ë±âÃþ Ã¢¹® »À´ë ¿À¸¥ÂÊ ´ë°¢
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 22 - i, Y1 + 38, Z1 + 21 + i);
	}
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 17 - i, Y1 + 38, Z1 + 23 + i);
	}
	//²À´ë±âÃþ Ã¢¹® »À´ë ¿ÞÂÊ ´ë°¢
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 44 + i, Y1 + 38, Z1 + 21 + i);
	}
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 49 + i, Y1 + 38, Z1 + 23 + i);
	}
	//2Ãþ ¿ìÃø Ã¢¹® »À´ë
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 6, Y1 + 38, Z1 + 25 + 6 * i);
	}
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 6, Y1 + 38, Z1 + 27 + 6 * i);
		locateBlock(stone, X1 + 6, Y1 + 38, Z1 + 28 + 6 * i);
	}
	//2Ãþ ÁÂÃø Ã¢¹® »À´ë
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 60, Y1 + 38, Z1 + 25 + 6 * i);
	}
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 60, Y1 + 38, Z1 + 27 + 6 * i);
		locateBlock(stone, X1 + 60, Y1 + 38, Z1 + 28 + 6 * i);
	}
	//2Ãþ ÈÄ¸é Ã¢¹® »À´ë
	//ÈÄ¸é ¿À¸¥ÂÊ
	for (int i = 0; i <= 3; i++) {
		locateBlock(stone, X1 + 9 + 6 * i, Y1 + 38, Z1 + 43);
	}
	for (int i = 0; i <= 3; i++) {
		locateBlock(stone, X1 + 11 + 6 * i, Y1 + 38, Z1 + 43);
		locateBlock(stone, X1 + 12 + 6 * i, Y1 + 38, Z1 + 43);
	}
	//ÈÄ¸é ¿ÞÂÊ
	for (int i = 0; i <= 3; i++) {
		locateBlock(stone, X1 + 39 + 6 * i, Y1 + 38, Z1 + 43);
	}
	for (int i = 0; i <= 3; i++) {
		locateBlock(stone, X1 + 36 + 6 * i, Y1 + 38, Z1 + 43);
		locateBlock(stone, X1 + 37 + 6 * i, Y1 + 38, Z1 + 43);
	}
	//ÈÄ¸é °¡¿îµ¥
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 32 + i, Y1 + 38, Z1 + 43);
	}
	//ÈÄ¸é ¸ð¼­¸®
	locateBlock(stone, X1 + 6, Y1 + 38, Z1 + 43);
	locateBlock(stone, X1 + 60, Y1 + 38, Z1 + 43);

	//²À´ë±âÃþ ÁöºØ Å×µÎ¸®
	//´ë°¢
	for (int i = 0; i <= 3; i++) {
		locateBlock(stone, X1 + 23 - i, Y1 + 40, Z1 + 19 + i);
	}
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 17 - i, Y1 + 40, Z1 + 22 + i);
	}
	for (int i = 0; i <= 3; i++) {
		locateBlock(stone, X1 + 43 + i, Y1 + 40, Z1 + 19 + i);
	}
	for (int i = 0; i <= 2; i++) {
		locateBlock(stone, X1 + 49 + i, Y1 + 40, Z1 + 22 + i);
	}
	//Á¤¸é °¡¿îµ¥
	for (int i = 0; i <= 18; i++) {
		locateBlock(stone, X1 + 24 + i, Y1 + 40, Z1 + 19);
	}
	locateBlock(stone, X1 + 19, Y1 + 40, Z1 + 22);
	locateBlock(stone, X1 + 18, Y1 + 40, Z1 + 22);
	locateBlock(stone, X1 + 47, Y1 + 40, Z1 + 22);
	locateBlock(stone, X1 + 48, Y1 + 40, Z1 + 22);
	//Á¤¸é ¿À¸¥ÂÊ
	for (int i = 0; i <= 8; i++) {
		locateBlock(stone, X1 + 6 + i, Y1 + 40, Z1 + 24);
	}
	//Á¤¸é ¿ÞÂÊ
	for (int i = 0; i <= 8; i++) {
		locateBlock(stone, X1 + 52 + i, Y1 + 40, Z1 + 24);
	}
	//¿ìÃø
	for (int i = 0; i <= 19; i++) {
		locateBlock(stone, X1 + 5, Y1 + 40, Z1 + 24 + i);
	}
	//ÁÂÃø
	for (int i = 0; i <= 19; i++) {
		locateBlock(stone, X1 + 61, Y1 + 40, Z1 + 24 + i);
	}
	//ÈÄ¸é
	for (int i = 0; i <= 56; i++) {
		locateBlock(stone, X1 + 5 + i, Y1 + 40, Z1 + 44);
	}

	//²À´ë±âÃþ ÁöºØ
	for (int j = 0; j <= 18; j++) {
		for (int i = 0; i <= 54; i++) {
			locateBlock(stone, X1 + 6 + i, Y1 + 40, Z1 + 25 + j);
		}
	}
	for (int i = 0; i <= 34; i++) {
		locateBlock(stone, X1 + 16 + i, Y1 + 40, Z1 + 24);
	}
	for (int i = 0; i <= 32; i++) {
		locateBlock(stone, X1 + 17 + i, Y1 + 40, Z1 + 23);
	}
	for (int j = 0; j <= 2; j++) {
		for (int i = 0; i <= 24 - 2 * j; i++) {
			locateBlock(stone, X1 + 21 + i + j, Y1 + 40, Z1 + 22 - j);
		}
	}
	//¹®
	for (int j = 0; j <= 2; j++) {
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 32 + i, Y1 + 11, Z1 + 14 + j);
		}
	}
	for (int j = 0; j <= 3; j++) {
		for (int i = 0; i <= 3; i++) {
			locateBlock(stone, X1 + 31, Y1 + 7 + j, Z1 + 14 + i);
		}
	}
	for (int j = 0; j <= 3; j++) {
		for (int i = 0; i <= 3; i++) {
			locateBlock(stone, X1 + 35, Y1 + 7 + j, Z1 + 14 + i);
		}
	}
	for (int j = 0; j <= 2; j++) {
		for (int i = 0; i <= 2; i++) {
			locateBlock(air, X1 + 32 + i, Y1 + 7 + j, Z1 + 17);
		}
	}

	//ÁöºØ - ¿À¸¥ÂÊ
	for (int k = 0; k <= 5; k++) {
		for (int j = 0; j <= 17; j++) {
			for (int i = 0; i <= 1; i++) {
				locateBlock(stone, X1 + 20 + 2 * k + i, Y1 + 30 + k, Z1 + 3 + j);
			}
		}
	}
	//ÁöºØ - ¿ÞÂÊ
	for (int k = 0; k <= 5; k++) {
		for (int j = 0; j <= 17; j++) {
			for (int i = 0; i <= 1; i++) {
				locateBlock(stone, X1 + 46 - 2 * k - i, Y1 + 30 + k, Z1 + 3 + j);
			}
		}
	}
	//ÁöºØ - °¡¿îµ¥
	for (int j = 0; j <= 17; j++) {
		for (int i = 0; i <= 2; i++) {
			locateBlock(stone, X1 + 32 + i, Y1 + 36, Z1 + 3 + j);
		}
	}
	//ÁöºØ ¾Õ¸é Ã¤¿ì±â
	for (int j = 0; j <= 5; j++) {
		for (int i = 0; i <= 22 - 4 * j; i++) {
			locateBlock(stone, X1 + 22 + i + 2 * j, Y1 + 30 + j, Z1 + 4);
		}
	}

	//ÁöºØ ¹Ù´Ú
	for (int j = 0; j <= 17; j++) {
		for (int i = 0; i <= 32; i++) {
			locateBlock(stone, X1 + 17 + i, Y1 + 29, Z1 + 3 + j);
		}
	}

	//±âµÕ ½ÊÀÚ°¡ ¸ð¾ç
	for (int i = 0; i <= 1; i++) {
		//°¡¿îµ¥
		locateBlock(stone, X1 + 33, Y1 + 7 + i, Z1 + 3);
		locateBlock(stone, X1 + 32, Y1 + 7 + i, Z1 + 4);
		locateBlock(stone, X1 + 34, Y1 + 7 + i, Z1 + 4);
		locateBlock(stone, X1 + 33, Y1 + 7 + i, Z1 + 5);
		//¿À¸¥ÂÊ - 1
		locateBlock(stone, X1 + 19, Y1 + 7 + i, Z1 + 3);
		locateBlock(stone, X1 + 18, Y1 + 7 + i, Z1 + 4);
		locateBlock(stone, X1 + 20, Y1 + 7 + i, Z1 + 4);
		locateBlock(stone, X1 + 19, Y1 + 7 + i, Z1 + 5);
		//¿À¸¥ÂÊ - 2
		locateBlock(stone, X1 + 19, Y1 + 7 + i, Z1 + 12);
		locateBlock(stone, X1 + 18, Y1 + 7 + i, Z1 + 13);
		locateBlock(stone, X1 + 20, Y1 + 7 + i, Z1 + 13);
		locateBlock(stone, X1 + 19, Y1 + 7 + i, Z1 + 14);
		//¿ÞÂÊ - 1
		locateBlock(stone, X1 + 47, Y1 + 7 + i, Z1 + 12);
		locateBlock(stone, X1 + 46, Y1 + 7 + i, Z1 + 13);
		locateBlock(stone, X1 + 48, Y1 + 7 + i, Z1 + 13);
		locateBlock(stone, X1 + 47, Y1 + 7 + i, Z1 + 14);
		//¿ÞÂÊ - 2
		locateBlock(stone, X1 + 47, Y1 + 7 + i, Z1 + 3);
		locateBlock(stone, X1 + 46, Y1 + 7 + i, Z1 + 4);
		locateBlock(stone, X1 + 48, Y1 + 7 + i, Z1 + 4);
		locateBlock(stone, X1 + 47, Y1 + 7 + i, Z1 + 5);
	}
	for (int i = 0; i <= 1; i++) {
		//°¡¿îµ¥
		locateBlock(stone, X1 + 33, Y1 + 27 + i, Z1 + 3);
		locateBlock(stone, X1 + 32, Y1 + 27 + i, Z1 + 4);
		locateBlock(stone, X1 + 34, Y1 + 27 + i, Z1 + 4);
		locateBlock(stone, X1 + 33, Y1 + 27 + i, Z1 + 5);
		//¿À¸¥ÂÊ - 1
		locateBlock(stone, X1 + 19, Y1 + 27 + i, Z1 + 3);
		locateBlock(stone, X1 + 18, Y1 + 27 + i, Z1 + 4);
		locateBlock(stone, X1 + 20, Y1 + 27 + i, Z1 + 4);
		locateBlock(stone, X1 + 19, Y1 + 27 + i, Z1 + 5);
		//¿À¸¥ÂÊ - 2
		locateBlock(stone, X1 + 19, Y1 + 27 + i, Z1 + 12);
		locateBlock(stone, X1 + 18, Y1 + 27 + i, Z1 + 13);
		locateBlock(stone, X1 + 20, Y1 + 27 + i, Z1 + 13);
		locateBlock(stone, X1 + 19, Y1 + 27 + i, Z1 + 14);
		//¿ÞÂÊ - 1
		locateBlock(stone, X1 + 47, Y1 + 27 + i, Z1 + 12);
		locateBlock(stone, X1 + 46, Y1 + 27 + i, Z1 + 13);
		locateBlock(stone, X1 + 48, Y1 + 27 + i, Z1 + 13);
		locateBlock(stone, X1 + 47, Y1 + 27 + i, Z1 + 14);
		//¿ÞÂÊ - 2
		locateBlock(stone, X1 + 47, Y1 + 27 + i, Z1 + 3);
		locateBlock(stone, X1 + 46, Y1 + 27 + i, Z1 + 4);
		locateBlock(stone, X1 + 48, Y1 + 27 + i, Z1 + 4);
		locateBlock(stone, X1 + 47, Y1 + 27 + i, Z1 + 5);
	}

	//±âµÕ
	for (int i = 0; i <= 21; i++) {
		locateBlock(stone, X1 + 47, Y1 + 7 + i, Z1 + 13);
	}
	for (int i = 0; i <= 21; i++) {
		locateBlock(stone, X1 + 47, Y1 + 7 + i, Z1 + 4);
	}
	for (int i = 0; i <= 21; i++) {
		locateBlock(stone, X1 + 33, Y1 + 7 + i, Z1 + 4);
	}
	for (int i = 0; i <= 21; i++) {
		locateBlock(stone, X1 + 19, Y1 + 7 + i, Z1 + 4);
	}
	for (int i = 0; i <= 21; i++) {
		locateBlock(stone, X1 + 19, Y1 + 7 + i, Z1 + 13);
	}

}
