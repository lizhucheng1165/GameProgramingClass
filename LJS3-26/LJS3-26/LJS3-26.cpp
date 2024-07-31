// LJS3-26.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "child.h"
//
//class C_TEST : public C_PARENT
//{};

int main()
{
	//C_CHILD cChild1{};
	////C_TEST cTest{};

	////cChild.Use();
	////C_PARENT* cParent{};
	//C_PARENT* arParent[2]{};

	////cParent = &cChild1;
	////cParent = &cTest;
	//arParent[0] = &cChild1;
	////arParent[1] = &cTest;
	
	C_PARENT* pParent{};

	pParent = new C_CHILD{};

	delete pParent;

}

