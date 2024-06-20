// LJS2-13.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	//세개의 int형을 입력받아(scanf로 입력받기)
	//가장 작은 수를 '선택'하고 출력하시오
	int nNumber1{};
	int nNumber2{};
	int nNumber3{};
	int* ptrSmallNumber{};

	printf("숫자 세개를 입력해주세요.\n");
	scanf_s("%d", &nNumber1);
	scanf_s("%d", &nNumber2);
	scanf_s("%d", &nNumber3);

	ptrSmallNumber = &nNumber1;

	if (*ptrSmallNumber > nNumber2)
	{
		ptrSmallNumber = &nNumber2;
	}
	if (*ptrSmallNumber > nNumber3)
	{
		ptrSmallNumber = &nNumber3;
	}

	printf("가장 작은 수 : %d", *ptrSmallNumber);

}
