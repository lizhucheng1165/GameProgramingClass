// LJS05-02.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "math.h"
//int Add(int n1, int n2);

int main()
{
	//int(*pFunc)(int, int) {};
	//pFunc = &Add;

	//printf("%d\n", (*pFunc)(10, 20));
	//pFunc = Add;
	//pFunc = &Add;
	//pFunc = *Add;

	//C_MATH cMath{};
	C_MATH c1{};
	C_MATH c2{};
	//int (*pFunc)(int, int) {};
	//int C_MATH::(*pFunc)(int, int) {};
	int (C_MATH::*pFunc)(int, int) {};
	//int (*C_MATH::pFunc)(int, int) {};

	//pFunc = cMath.Add;
	pFunc = &C_MATH::Add;

	//printf("%d\n", (cMath.*pFunc)(10, 20));
	printf("%d\n", (c1.*pFunc)(10, 20));
	printf("%d\n", (c2.*pFunc)(10, 20));
}

//int Add(int n1, int n2)
//{
//	return n1 + n2;
//}
