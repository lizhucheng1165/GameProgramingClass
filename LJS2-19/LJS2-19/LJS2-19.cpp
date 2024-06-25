// LJS2-19.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void function(int nData);

int main()
{
	int nMain{};
	nMain = 10;

	function(nMain);
}

void function(int nData)
{
	printf("%d\n", nData);
}
