// LJS05-01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int Add(int n1, int n2);
int Mul(int n1, int n2);
//int Test(int, int, int);
void Print(int n1, int n2, int (*pFunc)(int, int));

int main()
{
	////int* p(int, int);
	//int (*pFunc)(int, int) {};
	//int (*pFunc2)(int, int) {};

	//pFunc = Add;
	//printf("%d\n", pFunc(10, 20));

	//pFunc = Mul;
	//printf("%d\n", pFunc(10, 20));

	//pFunc2 = Mul;

	//if (pFunc == pFunc2)
	//{
	//	printf("실험");
	//}
	////pFunc = Test;

	//Print(10, 20, Add);
	//Print(10, 20, Mul);

	int(*arFunc[2])(int,int) {};
	int n1{};
	int n2{};
	int nType{};

	arFunc[0] = Add;
	arFunc[1] = Mul;

	scanf_s("%d", &n1);
	scanf_s("%d", &n2);
	scanf_s("%d", &nType);
	

	printf("%d\n", arFunc[nType](n1, n2));
}

int Add(int n1, int n2)
{
	return n1 + n2;
}

int Mul(int n1, int n2)
{
	return n1 * n2;
}

void Print(int n1, int n2, int(*pFunc)(int, int))
{
	printf("%d\n", pFunc(n1, n2));
}
