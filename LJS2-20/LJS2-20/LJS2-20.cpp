// LJS2-20.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void funcValue(int nData);
void funcPointer(int* pData);


int main()
{
	int nMain{};
	nMain = 100;

	funcValue(nMain);
	funcPointer(&nMain);
}

void funcValue(int nData)
{
	printf("value : %d\n", nData);
}

void funcPointer(int* pData)
{
	printf("pointer : %d\n", *pData);
}
