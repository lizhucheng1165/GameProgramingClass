// LJS2-07.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
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

	arData[nFirstIndex][nSecondIndex] = nData;
	nData++;

	nFirstIndex += 4;
	nSecondIndex++;

	arData[nFirstIndex][nSecondIndex] = nData;
	nData++;

	nFirstIndex -= 1;
	nSecondIndex++;

	arData[nFirstIndex][nSecondIndex] = nData;
	nData++;

	nFirstIndex -= 1;
	nSecondIndex -= 4;

	arData[nFirstIndex][nSecondIndex] = nData;
	nData++;

	nFirstIndex -= 1;
	nSecondIndex++;

	arData[nFirstIndex][nSecondIndex] = nData;
	nData++;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%2d ", arData[i][j]);
		}
		printf("\n");
	}

}
