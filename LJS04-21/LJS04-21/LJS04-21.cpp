// LJS04-21.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void GCD(int nDst, int nSrc, int& nResult);
void GetFibonacciValue(int nIndex, int& nResult);
int main()
{
	int nResult{};

	//GCD(16, 30, nResult);
	GetFibonacciValue(-10, nResult);

	printf("%d", nResult);
}

void GCD(int nDst, int nSrc, int& nResult)
{
	if (nSrc == 0)
	{
		nResult = nDst;
		return;
	}

	int nRemainder = nDst % nSrc;

	GCD(nSrc, nRemainder, nResult);


}

void GetFibonacciValue(int nIndex, int& nResult)
{
	
	if (nIndex <= 1)
	{
		nResult = 1;
		return;
	}

	int nResult1{};
	int nResult2{};
	
	GetFibonacciValue(nIndex - 1, nResult1);
	GetFibonacciValue(nIndex - 2, nResult2);
	
	nResult = nResult1 + nResult2;
	
}
