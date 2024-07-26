#include <stdio.h>
#include "data.h"

C_DATA& C_DATA::operator=(int nData)
{
	m_nData = nData;
	return *this;
}

void C_DATA::print()
{
	printf("%d\n", m_nData);
}
