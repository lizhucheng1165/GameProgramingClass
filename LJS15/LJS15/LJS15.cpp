// LJS15.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int nNumber{};
	int nRemainder{};

	scanf_s("%d", &nNumber);

	nRemainder = nNumber % 2;

	if (nNumber == 0)
	{
		printf("판단불가\n");
	}

	if (nNumber != 0 && nRemainder == 0)
	{
		printf("짝수\n");
	}

	if (nRemainder == 1)
	{
		printf("홀수\n");
	}
}
