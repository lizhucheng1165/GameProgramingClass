// LJS04-07.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

enum class E_TEST
{
	E_NONE = 0,
	E_A = 10,
	E_B,
	E_C,
};

int main()
{
	E_TEST eTest{};

	//eTest = E_TEST::E_A;

	printf("%d\n", eTest);
}

