// LJS04-10.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "child.h"

int main()
{
	C_CHILD cChild{};

	cChild.SetData(100);
	cChild.print();
}

