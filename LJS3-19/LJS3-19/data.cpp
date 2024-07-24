#include<iostream>
#include "data.h"

//C_DATA::C_DATA(const C_DATA& c) :
//	C_DATA()
//{
//	m_nData = c.m_nData;
//	printf("복사생성자\n");
//}

void C_DATA::print()
{
	printf("%d\n", m_nData);
}

void C_DATA::setData(int nData)
{
	m_nData = nData;
}
