#include <iostream>
#include "data.h"

//C_DATA::C_DATA(int nData)
//	: m_nData(nData)
//{
//
//}

void C_DATA::init(int nData)
{
	m_nData = nData;
}

void C_DATA::print()
{
	printf("%d\n", m_nData);
}
