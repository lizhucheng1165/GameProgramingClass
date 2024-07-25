// LJS3-21.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class C_TEST
{
public:
	C_TEST() = default;
	C_TEST(const C_TEST&);

};

C_TEST::C_TEST(const C_TEST&)
{
	printf("복사생성자\n");
}

void func(C_TEST c);
C_TEST funcReturn();
int main()
{
	C_TEST c1{};
	//C_TEST c2 = c1;

	//func(c1);
	funcReturn();
}

void func(C_TEST c)
{

}

C_TEST funcReturn()
{
	C_TEST c{};
	return c;
}
