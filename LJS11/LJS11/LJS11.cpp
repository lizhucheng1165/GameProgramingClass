// LJS11.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	//정수를 입력받아(단 음수는 입력x)
	//홀수 또는 짝수를 출력하는 프로그램을 작성
	//단 0은 짝수라고 가정한다
	//2로 나눠 나머지가 1이면 홀수 0이면 짝수
	//나머지를 구하는 방법은 % 사용

	int nInteger{};
	int nRemainder{};

	printf("음수가 아닌 정수를 입력하세요.\n");
	scanf_s("%d", &nInteger);
	nRemainder = nInteger % 2;

	
	if (nRemainder == 0)
	{
		printf("짝수");
	}
	if (nRemainder == 1)
	{
		printf("홀수");
	}

}
