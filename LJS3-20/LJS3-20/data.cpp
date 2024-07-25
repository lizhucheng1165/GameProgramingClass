#include <stdio.h>
#include "data.h"

C_DATA::C_DATA() :
	m_pData{}
{
	m_pData = new int{};
}

C_DATA::C_DATA(const C_DATA& cInput) :
	m_pData{}
{
	m_pData = new int{};
	*m_pData = *cInput.m_pData;
}

C_DATA::~C_DATA()
{
	//printf("¼Ò¸êÀÚ\n");
	delete m_pData;
}

void C_DATA::setData(int nData)
{
	*m_pData = nData;
}

int C_DATA::getData()
{
	return *m_pData;
}
