#include "data.h"
C_DATA& C_DATA::operator++()
{
	m_nData++;
	return *this;
}

C_DATA C_DATA::operator++(int)
{
	int nBackUp = m_nData;
	m_nData++;

	return C_DATA(nBackUp);
}

C_DATA::C_DATA(int nData):
	C_DATA()
{
	m_nData = nData;
}

void C_DATA::print()
{
	printf("%d\n", m_nData);
}
