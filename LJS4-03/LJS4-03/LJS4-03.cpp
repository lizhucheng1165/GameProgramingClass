// LJS4-03.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

#include "walkDuck.h"
#include "swimDuck.h"
#include "flyDuck.h"

int main()
{
	C_DUCK* cDuck[3]{};

	cDuck[0] = new C_FLY_DUCK{};
	cDuck[1] = new C_WALK_DUCK{};
	cDuck[2] = new C_SWIM_DUCK{};


	for (int i = 0; i < 3; i++)
	{
		cDuck[i]->move();
	}
}
