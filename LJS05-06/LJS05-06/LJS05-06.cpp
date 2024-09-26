// LJS05-06.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

#include "add.h"

int Add(int n1, int n2);

int main()
{
	Add(10, 20);
}

int Add(int n1, int n2)
{
	printf("일반함수\n");

	return n1 + n2;
}
