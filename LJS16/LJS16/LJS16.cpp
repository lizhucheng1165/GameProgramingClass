// LJS16.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int nData{};
	int nRemainder{};

	scanf_s("%d", &nData);

	nRemainder = nData % 2;

	/*if (nData == 0)
	{
		printf("판단불가\n");
	}
	else
	{
		if (nRemainder == 0)
		{
			printf("짝수\n");
		}
		else
		{
			printf("홀수\n");
		}
	}*/


	if (nData == 0)
	{
		printf("판단불가\n");
	}
	else if(nRemainder == 0)
	{
		
		printf("짝수\n");
		
	}
	else
	{
		printf("홀수\n");
	}
}


