// LJS2-24.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int func();

int main()
{
	int nData{};

	nData = func();
	printf("%d\n", nData);
}

int func()
{
	return 100;
}
//C#에서도 Return은 Call By Value인가?

