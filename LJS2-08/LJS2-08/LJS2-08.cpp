// LJS2-08.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
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


	for (int i = 0; i < 5; i++)
	{
		for (int i = 0; i < 4; i++)
		{
			arData[nFirstIndex][nSecondIndex] = nData;
			nData++;
			if (nFirstIndex <= 0)
			{
				nFirstIndex = 4;
			}
			else
			{
				nFirstIndex--;
			}
			if (nSecondIndex >= 4)
			{
				nSecondIndex = 0;
			}
			else
			{
				nSecondIndex++;
			}

		}
		arData[nFirstIndex][nSecondIndex] = nData;
		nData++;
		nFirstIndex++;
	}

	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%2d ", arData[i][j]);
		}
		printf("\n");
	}
}
