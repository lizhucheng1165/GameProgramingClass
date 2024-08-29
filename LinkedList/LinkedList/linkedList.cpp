#include "linkedList.h"
#include <stdio.h>
void C_LINKED_LIST::PushBack(int nData)
{
	//if (!m_pBegin)
	//{
	//	m_pBegin = CreateNode(nData);
	//	m_pEnd = m_pBegin;
	//	return;
	//}

	////S_NODE* pEnd = m_pBegin;
	////while (pEnd)
	////{
	////	pEnd = pEnd->pNext;
	////}

	////pEnd = CreateNode(nData);

	////S_NODE* pEnd = m_pBegin;
	////while (pEnd->pNext)
	////{
	////	pEnd = pEnd->pNext;
	////}

	////pEnd->pNext = CreateNode(nData);

	////S_NODE* pNewNode{};
	////pNewNode = CreateNode(nData);

	////pNewNode->pNext = m_pBegin;
	////m_pBegin = pNewNode;

	//m_pEnd->pNext = CreateNode(nData);
	//m_pEnd = m_pEnd->pNext;


	S_NODE* pNew = CreateNode(nData);

	if (!m_pBegin)
	{
		m_pBegin = pNew;
	}
	else
	{
		m_pEnd->pNext = pNew;
	}

	m_pEnd = pNew;

}

void C_LINKED_LIST::Print()
{
	S_NODE* pNode = m_pBegin;
	while (pNode)
	{
		printf("%d ", pNode->nData);
		pNode = pNode->pNext;
	}
	printf("\n");
}

C_LINKED_LIST::S_NODE* C_LINKED_LIST::CreateNode(int nData)
{

	S_NODE* pNode = new S_NODE{};
	pNode->nData = nData;

	return pNode;
	
}
