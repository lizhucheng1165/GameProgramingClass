// LJS2-17.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int arData[2][3]{ {6,5,4},{3,2,1} };
	int(*p)[3] {};

	p = arData;
	p = &arData[0];

	for (int i = 0; i < 3; i++)
	{
		//printf("%d\n", (*p)[i]);
		printf("%d\n", (*(p + 1))[i]);
	}
	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		//printf("%d\n", (p[1])[i]);
		printf("%d\n", p[1][i]);
	}
	printf("\n");

}
