// LJS3-22.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	//int** pp{};
	//pp = new int* [3] {};

	//pp[0] = new int[4] {};
	//pp[1] = new int[4] {};
	//pp[2] = new int[4] {};


	//int* p[3]{}; // 포인터 3개짜리 배열을 만듬

	//for (int i = 0; i < 3; i++)
	//{
	//	p[i] = new int[4] {}; //각각의 포인터에 int 4개짜리 배열 연결
	//}

	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 4; j++)
	//	{
	//		printf("%d ", p[i][j]);
	//	}
	//	printf("\n");
	//}

	int** pp{};
	int nHeight{};
	int nWidth{};

	scanf_s("%d", &nHeight);
	scanf_s("%d", &nWidth);

	pp = new int* [nHeight] {};
	for (int i = 0; i < nHeight; i++)
	{
		pp[i] = new int[nWidth] {};
	}

	for (int i = 0; i < nHeight; i++)
	{
		for (int j = 0; j < nWidth; j++)
		{
			printf("%d ", pp[i][j]);
		}
		printf("\n");
	}


	for (int i = 0; i < nHeight; i++)
	{
		delete[] pp[i];
	}
	delete[] pp;
}

