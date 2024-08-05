// LJS4-04.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

#include "duck.h"
#include "fly.h"
#include "walk.h"

int main()
{
	C_WALK cWalk{};
	C_FLY cFly{};
	C_DUCK arDuck[3]{};

	arDuck[0].init(&cFly);
	arDuck[1].init(&cWalk);
	arDuck[2].init(&cWalk);

	for (int i = 0; i < 3; i++)
	{
		arDuck[i].getMove()->move();
	}

}

