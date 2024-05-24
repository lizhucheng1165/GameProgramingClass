// LJS17.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	//0 ~ 100만 입력하기로 한다(int)
	//90~100 ->A / 80~89 -> B / 70~79 -> C / 60~69 -> D / 0~59 -> F
	// 1. else 사용 금지 and or 사용
	// 2. and or 금지 else 만 사용
	int nData{};

	scanf_s("%d", &nData);

	//and or 사용
	if (nData >= 90)
	{
		printf("A");
	}
	if (nData >= 80 && nData <= 89)
	{
		printf("B");
	}
	if (nData >= 70 && nData <= 79)
	{
		printf("C");
	}
	if (nData >= 60 && nData <= 69)
	{
		printf("D");
	}
	if (nData >= 0 && nData <= 59)
	{
		printf("F");
	}


	//else 사용
	if (nData >= 90)
	{
		printf("A");
	}
	else if (nData >= 80)
	{
		printf("B");
	}
	else if (nData >= 70)
	{
		printf("C");
	}
	else if (nData >= 60)
	{
		printf("D");
	}
	else
	{
		printf("F");
	}
}
