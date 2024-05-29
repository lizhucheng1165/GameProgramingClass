// LJS27.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	//특정 숫자 하나를 입력받아
	//모든 약수의 갯수를 출력
	
	//약수가 2개면 "소수" 출력
	
	//프로그램의 효율 확인
	int nInput{};
	int nAliquotCount{};
	int nData{};
	int nRemainder{};

	scanf_s("%d", &nInput);

	nData = 1;
	while (nInput >= nData && nAliquotCount <= 3)
	{
		nRemainder = nInput% nData;
		if (nRemainder == 0)
		{
			nAliquotCount++;
		}
		nData++;
	}

	if (nAliquotCount == 2)
	{
		printf("소수\n");
	}
}
