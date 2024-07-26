// LJS3-23.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "data.h"

int main()
{
	//int n1{};
	//int n2{};

	//n1 = n2 = 100;

	//printf("%d, %d\n", n1, n2);
	//
	//C_DATA cData{};



	//cData.operator=(10);

	//cData.print();

	//cData = 999;
	//cData.print();



	C_DATA c1{};
	C_DATA c2{};

	c1 = c2 = 100;
	c1.print();
	c2.print();

}
