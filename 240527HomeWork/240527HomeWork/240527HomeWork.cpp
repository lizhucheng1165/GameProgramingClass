// 240527HomeWork.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	//int형 두 수를 입력받아 작은수부터 큰 수까지의 합을 구한다
	//ex) 5 1 -> 1~5까지의 합

	int nNumber1{};
	int nNumber2{};
	int nTotal{};
	int nSmallNumber{};
	int nLargeNumber{};

	scanf_s("%d", &nNumber1);
	scanf_s("%d", &nNumber2);


	if (nNumber1 > nNumber2)
	{
		nSmallNumber = nNumber2;
		nLargeNumber = nNumber1;
	}
	else if (nNumber2 > nNumber1)
	{
		nSmallNumber = nNumber1;
		nLargeNumber = nNumber2;
	}
	else
	{
		nTotal = nNumber1 * 2;
	}

	nTotal = nSmallNumber;
	while (nSmallNumber != nLargeNumber)
	{
		nSmallNumber++;
		nTotal += nSmallNumber;
	}

	printf("%d\n", nTotal);

}

