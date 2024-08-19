// LJS04-18.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "data.h"
void Test();

int main()
{
	C_DATA* p{};
	C_DATA* pTest{};

	p = new C_DATA{};
	pTest = p;

	//p->SetData(20);

	delete p;
	Test();

	pTest->SetData(100);
	printf("%d\n", pTest->GetData());
}

void Test()
{
	for (int i = 0; i < 1000; i++)
	{
		printf("테스트\n");
	}
}
