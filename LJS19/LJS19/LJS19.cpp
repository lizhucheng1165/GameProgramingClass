// LJS19.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	/*int nInput{};

	scanf_s("%d", &nInput);

	nInput > 5 ? printf("5보다 크다\n") : printf("5보다 작다\n");*/



	int nData{};

	scanf_s("%d", &nData);

	switch (nData)
	{
	case 1:
		printf("1\n");
		break;
	case 2:
		printf("2\n");
		break;
	default:
		printf("나머지\n");
		break;
	}
}


