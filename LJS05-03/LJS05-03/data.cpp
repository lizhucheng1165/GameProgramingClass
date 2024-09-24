#include "data.h"

void C_DATA::Nomal()
{
	printf("%d\n", m_nData);
}

void C_DATA::Double()
{
	printf("%d\n", m_nData * 2);
}

void C_DATA::Triple()
{
	printf("%d\n", m_nData * 3);
}

void C_DATA::Test()
{
	void (C_DATA:: * pFunc)() {};

	pFunc = &C_DATA::Nomal;
	pFunc = &C_DATA::Double;
	pFunc = &C_DATA::Triple;

	(this->* pFunc)();
	//(this-> * pFunc)();
}

void C_DATA::SetData(int nData)
{
	m_nData = nData;
}
