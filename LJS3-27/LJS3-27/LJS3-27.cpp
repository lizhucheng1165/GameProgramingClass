// LJS3-27.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class C_PARENT
{
public:
	virtual ~C_PARENT() = default;
};

class C_CHILD : public C_PARENT
{
public:
	void run();
};

class C_TEST : public C_PARENT
{};

int main()
{
	C_PARENT* pParent{};
	C_CHILD* pChild{};

	pParent = new C_CHILD{};
	//pChild = (C_CHILD*)pParent;
	pChild = dynamic_cast<C_CHILD*>(pParent);
	if (pChild != nullptr)
	{
		pChild->run();
	}


}

void C_CHILD::run()
{
	printf("child 기능\n");
}
