#include "data.h"

int C_DATA::m_nDataStatic{};

//C_DATA::C_DATA() :
//	m_nData{},
//	m_nDataStatic{}
//{
//
//}

void C_DATA::SetData(int nData)
{
	m_nData = nData;
	m_nDataStatic = nData;
}

void C_DATA::SetDataStatic(int nData)
{
	//m_nData = nData;
	m_nDataStatic = nData;
}

void C_DATA::PrintData()
{
	printf("Member : %d\n", m_nData);
	printf("Static : %d\n", m_nDataStatic);
}
