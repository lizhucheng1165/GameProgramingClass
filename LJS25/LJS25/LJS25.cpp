// LJS25.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int nData{};
	int nDivideNumber{};
	int nRemainder{};

	scanf_s("%d", &nData);

	nDivideNumber = nData;
	
	while (nDivideNumber > 0)
	{
		nRemainder = nData % nDivideNumber;

		if (nRemainder == 0)
		{
			printf("%d\n", nDivideNumber);
		}

		nDivideNumber--;
	}

}

