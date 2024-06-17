// LJS2-06.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	//문제
	/* 1  2  3  4
	*  8  7  6  5
	*  9 10 11 12
	* 16 15 14 13
	* 17 18 19 20
	* 데이터 입력
	*
	* 분석 : i -> 0 -> 4번마다 + / j -> 0 -> 증증증증, 감감감감 반복 - > i가 짝수면 증가 홀수면 감소 / 데이터 -> 1 -> 20까지 증가
	*/
	int arData[5][4]{};
	int nFirstIndex{};
	int nSecondIndex{};
	int nData{};
	int nAdd{};


	nData = 1;
	nFirstIndex = 0;
	nSecondIndex = 0;
	nAdd = 1;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arData[nFirstIndex][nSecondIndex] = nData;
			nData++;

			nSecondIndex += nAdd;
		}
		nAdd *= -1;
		nFirstIndex++;
		nSecondIndex += nAdd;
	}
	
	

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%2d ", arData[i][j]);
		}
		printf("\n");
	}
}

