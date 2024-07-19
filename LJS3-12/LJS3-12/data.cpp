#include <iostream>
#include "data.h"


C_DATA::C_DATA(int nData) :
	//m_n1(nData),
	//m_n2{},
	//m_n3{},
	//m_n4{}
	
	//m_n4(nData),
	//m_n3{},
	//m_n2{},
	//m_n1{}
	
	//m_n1(nData),
	//m_n2(m_n1),
	//m_n3(m_n1),
	//m_n4(m_n1)

	//m_n4(nData),
	//m_n3(m_n4),
	//m_n2(m_n4),
	//m_n1(m_n4)

	m_n4{},
	m_n3{},
	m_n2{},
	m_n1{}
{
	m_n4 = nData;
	m_n1 = m_n4;
	m_n2 = m_n4;
	m_n3 = m_n4;
}

void C_DATA::print()
{
	printf("%d,%d,%d,%d\n", m_n1, m_n2, m_n3, m_n4);
}
