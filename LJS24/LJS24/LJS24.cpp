// LJS24.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int nNumber1{};
	int nNumber2{};
	int nTotal{};
	int nSmallNumber{};
	int nLargeNumber{};
	int nData{};

	scanf_s("%d", &nNumber1);
	scanf_s("%d", &nNumber2);

	nSmallNumber = nNumber1;
	nLargeNumber = nNumber2;

	if (nNumber1 >= nNumber2)
	{
		nSmallNumber = nNumber2;
		nLargeNumber = nNumber1;
	}

	nData = nSmallNumber;
	while (nData <= nLargeNumber)
	{
		nTotal += nData;
		nData++;
	}

	printf("%d", nTotal);
}
