// LJS2-11.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	const int nLength = 5;
	int arMove[4][2]{ {0,1},{1,0} ,{0,-1} ,{-1,0} };
	int arData[nLength][nLength]{};
	int nLoopCount{};
	int nMoveCount{};
	int nData{};
	int nMoveType{};
	int nIndex1{};
	int nIndex2{};
	int nNumber{};


	nLoopCount = nLength * 2 - 1;
	nData = nLength * 2;
	nIndex1 = 0;
	nIndex2 = -1;
	nNumber = 1;
	for (int i = 0; i < nLoopCount; i++)
	{
		nMoveCount = nData / 2;
		for (int j = 0; j < nMoveCount; j++)
		{
			nIndex1 += arMove[nMoveType][0];
			nIndex2 += arMove[nMoveType][1];

			
			arData[nIndex1][nIndex2] = nNumber;
			nNumber++;
		}
		nData--;
		nMoveType++;
		if (nMoveType > 3)
		{
			nMoveType = 0;
		}
	}








	for (int i = 0; i < nLength; i++)
	{
		for (int j = 0; j < nLength; j++)
		{
			printf("%2d ", arData[i][j]);
		}
		printf("\n");
	}
}

