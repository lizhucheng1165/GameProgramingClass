// LJS34.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	//배열에 소수가 몇개있는지 출력하시오
	// 배열, 소수, 갯수 -> 배열(arData)
	// 소수인지 아닌지 판별기능 -> 나머지(nRemainder), 나눌 수(nData), 약수 갯수(nDivisorCount)
	// 소수 갯수 판별기능 -> 소수 갯수(nQuotientCount)
	int arData[5]{ 34,11,2,12,4 };
	int nPrimeNumberCount{};
	int nDivisorCount{};
	int nRemainder{};
	int nData{};

	for (int i = 0; i < 5; i++)
	{

		nData = 1;
		nDivisorCount = 0;
		while (nData <= arData[i] && nDivisorCount < 3)
		{
			nRemainder = arData[i] % nData;
			if (nRemainder == 0)
			{
				nDivisorCount++;
			}
			nData++;
		}

		if (nDivisorCount == 2)
		{ 
			nPrimeNumberCount++;
		}
	}
	
	printf("%d", nPrimeNumberCount);
}
