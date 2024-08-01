// LJS3-28.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class C_SUPER
{
public:
	virtual ~C_SUPER() = default;
	//void Run();
	virtual void Run();
};
class C_SUB : public C_SUPER
{
public:
	//void Run();
	//virtual void Run();
	virtual void Run() override;
};

class C_TEST : public C_SUPER
{
public:

};

int main()
{
	//C_SUB cSub{};
	//C_SUPER* pSuper{};

	//pSuper = &cSub;

	////cSub.Run();
	////cSub.C_SUB::Run();
	////cSub.C_SUPER::Run();

	//pSuper->Run();

	C_SUPER* pSuper{};
	pSuper = new C_TEST{};

	pSuper->Run();
}

void C_SUPER::Run()
{
	printf("super run\n");
}

void C_SUB::Run()
{
	printf("sub run\n");
}
