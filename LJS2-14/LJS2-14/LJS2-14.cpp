// LJS2-14.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int arData[5]{ 5,4,3,2,1 };
	int* p{};
	int nLength{};

	//p = &arData[0];

	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d ", *(p));
	//	p++;
	//}

	p = &arData[2];
	nLength = 3;

	for (int i = 0; i < nLength; i++)
	{
		printf("%d ", *(p + i));
	}

}

