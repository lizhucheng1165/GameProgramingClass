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
	
	//�ݺ����� ������
	//���� ��� ���� ���� ��庸�� ũ�� �ٲ۴�
	int nCurrent = m_nLastIndex;
	int nUp = nCurrent / 2;


	//���� �� ���� ��尡 �� ������ ��ž�ϴ� ��� �߰�


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
