// LJS3-32.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

#include "child.h"

int main()
{
	C_PARENT* arParent[4]{};

	arParent[0] = new C_CHILD_A{};
	arParent[1] = new C_CHILD_A{};
	arParent[2] = new C_CHILD_B{};
	arParent[3] = new C_CHILD_B{};

	for (int i = 0; i < 4; i++)
	{
		arParent[i]->Test();
	}
}
