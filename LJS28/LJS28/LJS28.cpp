// LJS28.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	/*int nCount{};

	while (nCount < 5)
	{
		printf("테스트\n");

		nCount++;
	}*/

	//두개의 정수를 입력받아(단 음수x)
	//int형만 사용
	//소수점 20자리까지 출력하세요. -> 몫을 21번 구하라
	int nDst{};
	int nSrc{};
	int nCount{};
	int nRemainder{};
	int nQuotient{};


	scanf_s("%d", &nDst);
	scanf_s("%d", &nSrc);

	
	nCount = 0;

	while (nCount < 21)
	{
		nRemainder = nDst % nSrc;
		nQuotient = nDst / nSrc;
		nDst = nRemainder * 10;

		printf("%d", nQuotient);
		if (nCount == 0)
		{
			printf(".");
		}

		nCount++;
	}

}

