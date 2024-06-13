// LJS2-01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	//출력라인에 절대 손대지 않고 예제풀기
	int arData[10]{};
	int nLength{};
	int nData{};
	int nIndex{};


	nLength = 10;

	//문제1 - 0번지부터 순서대로 데이터를 1부터 10까지 채워넣는다.
	//nData = 1;
	//for (int i = 0; i < nLength; i++)
	//{
	//	arData[i] = nData;
	//	nData++;
	//}

	//답안
	//nData = 1;
	//for (int i = 0; i < 10; i++)
	//{
	//	arData[nIndex] = nData;
	//	nIndex++;
	//	nData++;
	//}
	

	////문제2 - 0번지부터 순서대로 데이터를 10부터 1까지 채워넣는다.
	//nData = 10;
	//for (int i = 0; i < nLength; i++)
	//{
	//	arData[i] = nData;
	//	nData--;
	//}

	//문제3 - 짝수 인덱스에만 5의 배수를 채워넣는다.
	nData = 5;
	while (nIndex < nLength)
	{
		arData[nIndex] = nData;
		nData += 5;
		nIndex += 2;
	}

	//출력라인
	for (int  i = 0; i < 10; i++)
	{
		printf("%2d", arData[i]);
	}
	printf("\n");
}

