#include "heap.h"

void C_HEAP::Init(int nSize)
{
	m_nSize = nSize + 1;
	m_pData = new int[m_nSize] {};
}

bool C_HEAP::Add(int nData)
{
	if (m_nLastIndex >= m_nSize - 1)
	{
		return false;
	}

	m_nLastIndex++;
	m_pData[m_nLastIndex] = nData;
	
	//반복문을 돌려서
	//위의 노드 값이 현재 노드보다 크면 바꾼다
	int nCurrent = m_nLastIndex;
	int nUp = nCurrent / 2;


	//구현 후 위의 노드가 더 작으면 스탑하는 기능 추가


	return true;
}

void C_HEAP::Release()
{
	delete[] m_pData;
	m_pData = nullptr;
}

void C_HEAP::Print()
{
	for (int i = 0; i < m_nSize; i++)
	{
		printf("%d ", m_pData[i]);
	}
	printf("\n");
}
