// LJS2-03.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	//출력코드 건드리지 않고 예제풀기
	int arData[5][4]{};
	int nData{};
	int nFirstIndex{};
	int nSecondIndex{};
	int nLengthA{};
	int nLengthB{};

	//문제1 1~20까지 순서대로 데이터 입력;
	nData = 1;
	nFirstIndex = 0;
	nSecondIndex = 0;
	nLengthA = 5;
	nLengthB = 4;


	for (int i = 0; i < nLengthA; i++)
	{
		for (int j = 0; j < nLengthB; j++)
		{
			arData[nFirstIndex][nSecondIndex] = nData;
			nSecondIndex++;
			nData++;
		}
		nFirstIndex++;
		nSecondIndex = 0;
	}

	 //ndata => 1,2,3,4,5
	 //nsecondindex => 0,1,2,3,4

	for (int i = 0; i < 20; i++)
	{
		arData[nFirstIndex][nSecondIndex] = nData;

		if (nSecondIndex < nLengthB)
		{
			nSecondIndex++;
		}
		else
		{
			nSecondIndex = 0;
			nFirstIndex++;
		}
		nData++;
	}










	//출력코드
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%2d", arData[i][j]);
		}
		printf("\n");
	}

}
