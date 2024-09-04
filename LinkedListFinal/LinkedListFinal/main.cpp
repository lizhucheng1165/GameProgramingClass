// LinkedListFinal.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "linkedList.h"

void PrintList(C_LINKEDLIST* pList);

int main()
{
	C_LINKEDLIST cList{};

	cList.PushBack(1);
	cList.PushBack(2);
	cList.PushBack(2);
	cList.PushBack(3);
	cList.PushBack(3);
	cList.PushBack(7);
	cList.PushBack(3);
	cList.PushBack(1);
	cList.PushBack(5);
	cList.PushBack(0);
	cList.PushFront(2);
	cList.PushFront(9);
	cList.PushFront(9);

	//cList.PopBack();
	//cList.PopFront();
	PrintList(&cList);

	C_NODE* pNode = cList.GetBegin();
	while (pNode != cList.GetEnd())
	{
		C_NODE* pNextNode = pNode->GetNext();
		if (pNode->GetData() > 5)
		{
			cList.EraseNode(pNode);
		}
		pNode = pNextNode;
		//pNode = pNode->GetNext();
	}
	PrintList(&cList);
}

void PrintList(C_LINKEDLIST* pList)
{
	C_NODE* pNode = pList->GetBegin();
	while (pNode != pList->GetEnd())
	{
		printf("%d ", pNode->GetData());
		pNode = pNode->GetNext();
	}
	printf("\n");
}
