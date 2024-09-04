#include "linkedList.h"

C_NODE* C_LINKEDLIST::CreateNode(int nData)
{
	C_NODE* pNewNode = new C_NODE{};
	pNewNode->m_nData = nData;
	return pNewNode;
}



C_LINKEDLIST::C_LINKEDLIST():
	m_pBegin{},
	m_pEnd{}
{
	m_pBegin = new C_NODE{};
	m_pEnd = new C_NODE{};

	m_pBegin->m_pNext = m_pEnd;
	m_pEnd->m_pPrev = m_pBegin;
}

C_LINKEDLIST::~C_LINKEDLIST()
{
	delete m_pBegin;
	delete m_pEnd;
}

void C_LINKEDLIST::PushBack(int nData)
{
	InsertNodeBetweenNodes(m_pEnd->m_pPrev, m_pEnd, CreateNode(nData));
}

void C_LINKEDLIST::PushFront(int nData)
{
	InsertNodeBetweenNodes(m_pBegin, m_pBegin->m_pNext, CreateNode(nData));
}

void C_LINKEDLIST::InsertNodeBetweenNodes(C_NODE* pNodeA, C_NODE* pNodeB, C_NODE* pSrcNode)
{
	LinkNode(pNodeA, pSrcNode);
	LinkNode(pSrcNode, pNodeB);
}

void C_LINKEDLIST::LinkNode(C_NODE* pNodeA, C_NODE* pNodeB)
{
	pNodeA->m_pNext = pNodeB;
	pNodeB->m_pPrev = pNodeA;
}

void C_LINKEDLIST::DeleteNodeBetweenNodes(C_NODE* pPrev, C_NODE* pDel, C_NODE* pNext)
{
	LinkNode(pPrev, pNext);
	delete pDel;
}

void C_LINKEDLIST::EraseNode(C_NODE* pDel)
{
	LinkNode(pDel->m_pPrev, pDel->m_pNext);
	delete pDel;
}

void C_LINKEDLIST::PopBack()
{
	//DeleteNodeBetweenNodes(m_pEnd->m_pPrev->m_pPrev, m_pEnd->m_pPrev, m_pEnd);
	C_NODE* pDel = m_pEnd->m_pPrev;
	EraseNode(pDel);
}

void C_LINKEDLIST::PopFront()
{
	C_NODE* pDel = m_pBegin->m_pNext;
	EraseNode(pDel);
	//DeleteNodeBetweenNodes(m_pBegin, m_pBegin->m_pNext, m_pBegin->m_pNext->m_pNext);
}


//void C_LINKEDLIST::DeleteNodeBetweenNodes(C_NODE* pPrev, C_NODE* pNext)
//{
//	C_NODE* pDel = pPrev->m_pNext;
//
//	LinkNode(pPrev, pNext);
//
//	delete pDel;
//}
//
//void C_LINKEDLIST::PopBack()
//{
//	DeleteNodeBetweenNodes(m_pEnd->m_pPrev->m_pPrev, m_pEnd);
//}
//
//void C_LINKEDLIST::PopFront()
//{
//	DeleteNodeBetweenNodes(m_pBegin, m_pBegin->m_pNext->m_pNext);
//}


C_NODE* C_LINKEDLIST::GetBegin()
{
	return m_pBegin->m_pNext;
}

C_NODE* C_LINKEDLIST::GetEnd()
{
	return m_pEnd;
}
