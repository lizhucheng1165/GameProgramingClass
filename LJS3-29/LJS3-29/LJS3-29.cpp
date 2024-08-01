// LJS3-29.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class C_PARENT
{
public:
	virtual ~C_PARENT() = default;
	//virtual void Run();
	//virtual void Run() = 0;
	//virtual void Run() PURE;
	virtual void Run() abstract;
};

class C_CHILD : public C_PARENT
{
public:
	virtual void Run() override;
	
};

int main()
{
	//C_PARENT c{};
	C_PARENT* pParent = new C_CHILD{};

	pParent->Run();
	

}

void C_CHILD::Run()
{
	printf("실행\n");
}
