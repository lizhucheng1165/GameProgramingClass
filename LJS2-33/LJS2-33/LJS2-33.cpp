// LJS2-33.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	char arData[10]{};

	arData[5] = 'a';

	for (int i = 0; i < 10; i++)
	{
		printf("%c", arData[i]);
	}


	char c{};

	c = 0;
	c = '\0';
	c = NULL;
}
