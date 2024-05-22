// LJS13.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	//홀짝 판별기
	//0이면 판단불가 / 음수 x
	//나머지 1이면 홀수 0이면 짝수
	int nNumber{};
	int nRemainder{};

	scanf_s("%d", &nNumber);

	nRemainder = nNumber % 2;

	if (nNumber == 0)
		printf("판단불가\n");
	else if (nNumber < 0)
		printf("음수는 입력할 수 없습니다\n");
	else if (nRemainder == 0)
		printf("짝수\n");
	else if (nRemainder == 1)
		printf("홀수\n");
}
