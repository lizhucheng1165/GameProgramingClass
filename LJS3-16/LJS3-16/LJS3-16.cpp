// LJS3-16.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int* p1{};
	int* p2{};
	int* p3{};
	int* p4{};

	p1 = new int{};
	p2 = p1;
	p3 = p1;
	p4 = p1;

	*p1 = 100;

	printf("%d\n", *p4);

	delete p1;

	*p4 = 100;
	printf("%d\n", *p4);
	////p = new int;
	////p = new int();
	//p = new int{};
	//*p = 100;


	//printf("%d\n", *p);

	//delete p;
}
