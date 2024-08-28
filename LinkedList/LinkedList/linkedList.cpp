#include "linkedList.h"
#include <stdio.h>
void C_LINKED_LIST::PushBack(int nData)
{
}

void C_LINKED_LIST::Print()
{
	S_NODE* pNode = m_pBegin;
	while (pNode)
	{
		printf("%d ", pNode->nData);
	}
	printf("]n");
}
