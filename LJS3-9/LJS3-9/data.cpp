#include "data.h"
#include<iostream>

C_DATA::C_DATA()
{
	printf("생성자 호출");
}

void C_DATA::setData(int nData)
{
	m_nData = nData;
}

int C_DATA::getData()
{
	return m_nData;
}
