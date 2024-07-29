// LJS3-24.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "data.h"

int main()
{
	C_DATA c1{};
	C_DATA c2{};

	//c1 = 100;
	//c2 = c1;
	//c2 = c1 = 100;
	

	c1.print();
	c2.print();
}

