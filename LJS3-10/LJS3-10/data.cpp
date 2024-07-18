#include "data.h"
#include <stdio.h>


C_DATA::C_DATA() : 
	//m_nData1{}, 
	//m_nData2{}, 
	//m_nData3{}
	m_nData1(),
	m_nData2(),
	m_nData3()
{
	//m_nData1 = 0;
	//m_nData2 = 0;
	//m_nData3 = 0;
	printf("생성자 호출\n");
}

void C_DATA::print()
{
	printf("%d, %d, %d\n", m_nData1, m_nData2, m_nData3);
}

