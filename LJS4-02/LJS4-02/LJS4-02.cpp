// LJS4-02.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

#include "test.h"

int main()
{
	//C_TEST cTest{1, 2};
	C_TEST cTest{};

	cTest.init(10, 20);

	cTest.release();
}
