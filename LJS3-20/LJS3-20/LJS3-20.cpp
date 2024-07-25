// LJS3-20.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "data.h"

void func(C_DATA c);

int main()
{
	//C_DATA cData{};
	//C_DATA* p{};

	//p = new C_DATA{};

	//delete p;

	C_DATA cData{};

	cData.setData(100);
	printf("%d\n", cData.getData());

	//C_DATA cTest = cData;
	//C_DATA cTest{};

	//cTest = cData;

	func(cData);
}

void func(C_DATA c)
{
	printf("%d\n", c.getData());
}
