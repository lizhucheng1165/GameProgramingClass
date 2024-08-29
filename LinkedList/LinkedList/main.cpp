// LinkedList.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "linkedList.h"

int main()
{
	C_LINKED_LIST cList{};

	cList.PushBack(1);
	cList.PushBack(2);
	cList.PushBack(3);
	cList.PushBack(4);
	cList.PushBack(5);
	cList.PushBack(6);

	cList.Print();
}

