#include "heap.h"

void C_HEAP::SwapData(int& nDst, int& nSrc)
{
	int nTmp = nDst;
	nDst = nSrc;
	nSrc = nTmp;
}

bool C_HEAP::HasTwoChildNodes(int& nCurrentIndex)
{
	int nLeftChildIndex = nCurrentIndex * 2;
	int nRightChildIndex = nCurrentIndex * 2 + 1;

	if (nLeftChildIndex <= m_nLastIndex && nRightChildIndex <= m_nLastIndex)
	{
		return true;
	}

	return false;
}

bool C_HEAP::IsLeftChildSmaller(int& nLeftChildValue, int& nRightChildValue)
{
	if (nLeftChildValue < nRightChildValue)
	{
		return true;
	}

	return false;
}

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
	while (nUp > 0 && m_pData[nUp] > m_pData[nCurrent])
	{
		SwapData(m_pData[nUp], m_pData[nCurrent]);
		nCurrent = nUp;
		nUp = nCurrent / 2;
	}


	//구현 후 위의 노드가 더 작으면 스탑하는 기능 추가


	return true;
}

void C_HEAP::Release()
{
	delete[] m_pData;
	m_pData = nullptr;
}

bool C_HEAP::Empty()
{
	if (m_nLastIndex = 0)
	{
		return true;
	}

	return false;
}

int C_HEAP::GetTop()
{
	return m_pData[1];
}

void C_HEAP::Pop()
{
	if (m_nLastIndex == 0)
	{
		return;
	}

	m_pData[1] = m_pData[m_nLastIndex];
	m_nLastIndex--;

	int nCurrentIndex = 1;
	int nLeftChildIndex = nCurrentIndex * 2;
	int nRightChildIndex = nCurrentIndex * 2 + 1;

	while (nCurrentIndex != m_nLastIndex && HasTwoChildNodes(nCurrentIndex))
	{
		if (IsLeftChildSmaller(m_pData[nLeftChildIndex], m_pData[nRightChildIndex]))
		{
			SwapData(m_pData[nCurrentIndex], m_pData[nLeftChildIndex]);
			nCurrentIndex = nLeftChildIndex;
		}
		else
		{
			SwapData(m_pData[nCurrentIndex], m_pData[nRightChildIndex]);
			nCurrentIndex = nRightChildIndex;
		}
		nLeftChildIndex = nCurrentIndex * 2;
		nRightChildIndex = nCurrentIndex * 2 + 1;
	}

	

}

void C_HEAP::Print()
{
	for (int i = 1; i <= m_nLastIndex; i++)
	{
		printf("%d ", m_pData[i]);
	}
	printf("\n");
}
