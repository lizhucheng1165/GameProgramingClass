// LJS30.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int nStarCount{};
	int nSpaceCount{};
	int nStarCountVariation{};
	int nSpaceCountVariation{};


	nSpaceCount = 4;
	nSpaceCountVariation = -1;

	nStarCount = 1;
	nStarCountVariation = 1;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < nSpaceCount; j++)
		{
			printf(" ");
		}

		for (int k = 0; k < nStarCount; k++)
		{
			printf("*");
		}

		printf("\n");
		nStarCount += nStarCountVariation;
		nSpaceCount += nSpaceCountVariation;
	}




}

