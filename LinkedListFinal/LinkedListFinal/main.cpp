// LinkedListFinal.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "linkedList.h"

int main()
{
	C_LINKEDLIST cList{};

	cList.PushBack(1);
	cList.PushBack(2);
	cList.PushBack(2);
	cList.PushBack(3);
	cList.PushBack(3);
	cList.PushFront(9);
	cList.PushFront(9);
	cList.PushFront(9);

	C_NODE* pNode = cList.GetBegin();
	while (pNode != cList.GetEnd())
	{
		printf("%d ", pNode->GetData());
		pNode = pNode->GetNext();
	}
	printf("\n");
}

