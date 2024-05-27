// LJS22.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int nData{};
	int nTotal{};
	nData = 1;

	while (nData <= 10)
	{
		printf("%d\n", nData);

		nData = nData + 1;
	}

	while (nData <= 10)
	{
		nTotal += nData;

		nData++;
	}

	printf("%d", nTotal);
}
