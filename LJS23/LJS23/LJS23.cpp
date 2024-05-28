// LJS23.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	//int형 두 수를 입력받아
	//작은 수부터 큰 수까지의 총합을 구한다

	//ex) 5 1 => 1~5까지 합   7 2 -> 2~7까지의 합

	int nNumber1{};
	int nNumber2{};
	int nSmallNumber{};
	int nLargeNumber{};
	int nLoopCount{};
	int nTotal{};

	scanf_s("%d" , &nNumber1);
	scanf_s("%d" , &nNumber2);

	nSmallNumber = nNumber1;
	nLargeNumber = nNumber2;

	if (nSmallNumber > nNumber2)
	{
		nSmallNumber = nNumber2;
		nLargeNumber = nNumber1;
	}

	nLoopCount = nLargeNumber - nSmallNumber;
	nTotal = nSmallNumber;

	while (nLoopCount > 0)
	{
		nTotal += 1;


		nLoopCount--;
	}

	printf("%d\n", nTotal);

}

