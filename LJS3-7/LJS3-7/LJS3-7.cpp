// LJS3-7.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
namespace N_MATH
{
	int add(int n1, int n2);
	int mul(int n1, int n2);
	int div(int n1, int n2);
	
}

int add(int n1, int n2)
{
	printf("디폴트함수\n");
	return 0;
}

using namespace N_MATH;
int main()
{

	//printf("%d\n", N_MATH::add(10, 20));
	//printf("%d\n", add(1, 3));
	printf("%d\n", ::add(1, 3));
}

//int add(int n1, int n2)
//{
//	return 0;
//}
int N_MATH::add(int n1, int n2)
{
	return n1 + n2;
}

int N_MATH::mul(int n1, int n2)
{
	return n1 * n2;
}

int N_MATH::div(int n1, int n2)
{
	return n1 / n2;
}
