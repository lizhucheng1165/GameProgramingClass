// LJS2-04.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int arData[5][4]{};
	int nData{};
	int nFirstIndex{};
	int nSecondIndex{};
	int nLengthA{};
	int nLengthB{};

	nData = 1;
	nFirstIndex = 0;
	nSecondIndex = 0;
	nLengthA = 5;
	nLengthB = 4;

	for (int i = 0; i < 20; i++)
	{
		if (nSecondIndex >= nLengthB)
		{
			nFirstIndex++;
			nSecondIndex = 0;
		}
		arData[nFirstIndex][nSecondIndex] = nData;
		nSecondIndex++;
		nData++;
	}



	//for (int i = 0; i < nLengthA; i++)
	//{
	//	for (int j = 0; j < nLengthB; j++)
	//	{
	//		arData[nFirstIndex][nSecondIndex] = nData;
	//		nSecondIndex++;
	//		nData++;
	//	}

	//	nFirstIndex++;
	//	nSecondIndex = 0;
	//}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%2d ", arData[i][j]);
		}
		printf("\n");
	}
}
