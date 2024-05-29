// LJS26.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{

	//두개의 숫자를입력받아 모든 공약수를 출력하시오
	int nNumber1{};
	int nNumber2{};
	int nSmallNumber{};
	int nDivideNumber{};
	int nRemainderA{};
	int nRemainderB{};

	scanf_s("%d", &nNumber1);
	scanf_s("%d", &nNumber2);

	nSmallNumber = nNumber1;
	if (nSmallNumber > nNumber2)
	{
		nSmallNumber = nNumber2;
	}

	nDivideNumber = 1;
	while (nDivideNumber <= nSmallNumber)
	{
		nRemainderA = nNumber1 % nDivideNumber;
		nRemainderB = nNumber2 % nDivideNumber;
		if (nRemainderA == 0 && nRemainderB == 0)
		{
			printf("%d\n", nDivideNumber);
		}
		nDivideNumber++;
	}

}
