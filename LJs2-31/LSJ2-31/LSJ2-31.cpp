// LSJ2-31.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


int add(int n1, int n2, int n3, int n4 = 0);

int main()
{
	printf("%d\n", add(1, 2, 3, 4));
	printf("%d\n", add(1, 2, 3));

	
}

int add(int n1, int n2, int n3, int n4)
{
	return n1 + n2 + n3 + n4;

}
