#include "test.h"

//C_TEST::C_TEST() :
//	m_cData(1, 2)
//{
//}

//C_TEST::C_TEST(int n1, int n2) :
//	 m_cData(n1, n2)
//{
//	
//}

void C_TEST::init(int n1, int n2)
{
	m_pData = new C_DATA(n1, n2);
}

void C_TEST::release()
{
	delete m_pData;
}
