// LJS20.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	//숫자를 0부터 100까지만 입력하자
	//90~100 A 80~89 B 70~79 C 60~69 D 0~59 F
	//10으로 나눠서 표현

	int nData{};

	scanf_s("%d", &nData);

	nData = nData / 10;

	switch (nData)
	{
	case 10:
	case 9:
	{
		int nTmp{};
		printf("A");
	}
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	default:
		printf("F");
		break;
	}

}


