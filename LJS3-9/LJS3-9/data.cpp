#include "data.h"
#include<iostream>

C_DATA::C_DATA()
{
	printf("������ ȣ��");
}

void C_DATA::setData(int nData)
{
	m_nData = nData;
}

int C_DATA::getData()
{
	return m_nData;
}
