﻿// LJS2-09.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int arData[5][5]{};
	int nFirstIndex{};
	int nSecondIndex{};
	int nData{};


	nFirstIndex = 0;
	nSecondIndex = 2;
	nData = 1;

	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			arData[nFirstIndex][nSecondIndex] = nData;
			nData++;
			nFirstIndex = (nFirstIndex + 4) % 5;
			nSecondIndex = (nSecondIndex + 1) % 5;

		}
		arData[nFirstIndex][nSecondIndex] = nData;
		nFirstIndex++;
		nData++;
	}
	// 인덱스   얻어야하는 수
	//  0            0
	//  -1           4     + 5
	//  -2           3     + 5
	//  -3           2     + 5
	//  -4           1	   + 5
	//  -5           0     + 5
	//  -6           4     + 10
	//  -7			 3     + 10


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%2d ", arData[i][j]);
		}
		printf("\n");
	}
}
