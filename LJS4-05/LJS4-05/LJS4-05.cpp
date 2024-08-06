// LJS4-05.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "moveManager.h"


int main()
{
	C_MOVEMGR cMoveMgr{};

	cMoveMgr.init();

	C_MOVE* pMove{};

	pMove = cMoveMgr.getMove(1);
	pMove->move();

}
