#pragma once
#include "node.h"

class C_LINKEDLIST
{
private:
	C_NODE* m_pBegin;
	C_NODE* m_pEnd;
	C_NODE* CreateNode(int nData);
	void InsertNodeBetweenNodes(C_NODE* pNodeA, C_NODE* pNodeB, C_NODE* pSrcNode);
	void LinkNode(C_NODE* pNodeA, C_NODE* pNodeB);
	void DeleteNodeBetweenNodes(C_NODE* pPrev, C_NODE* pDel, C_NODE* pNext);
public:
	C_LINKEDLIST();
	~C_LINKEDLIST();


	void PushBack(int nData);
	void PushFront(int nData);
	void PopBack();
	void PopFront();
	void EraseNode(C_NODE* pDel);
	C_NODE* GetBegin();
	C_NODE* GetEnd();
};