#include "calculation.h"
#include "stdio.h"
void C_CALCULATION::Add(int n1, int n2)
{
	printf("Result : %d\n", n1 + n2);
}

void C_CALCULATION::Multiply(int n1, int n2)
{
	printf("Result : %d\n", n1 * n2);
}

void C_CALCULATION::Divide(int nDst, int nSrc)
{
	if (nSrc == 0)
	{
		printf("0이 아닌 수를 적어주세요\n");
	}
	else
	{
		printf("Result : %d\n", nDst / nSrc);
	}
}

void C_CALCULATION::Substract(int nDst, int nSrc)
{
	printf("Result : %d\n", nDst - nSrc);
}

void C_CALCULATION::Default(int n1, int n2)
{
	printf("다른 Type을 입력해 주십시오\n");
}

void C_CALCULATION::Init()
{
	m_arFunc[(int)E_TYPE::E_DEFAULT] = &C_CALCULATION::Default;
	m_arFunc[(int)E_TYPE::E_ADD] = &C_CALCULATION::Add;
	m_arFunc[(int)E_TYPE::E_MULTYPLY] = &C_CALCULATION::Multiply;
	m_arFunc[(int)E_TYPE::E_DIVIDE] = &C_CALCULATION::Divide;
	m_arFunc[(int)E_TYPE::E_SUBSTRACT] = &C_CALCULATION::Substract;
}

void C_CALCULATION::Run(E_TYPE Type)
{
	(this->*m_arFunc[(int)Type])(m_nData1, m_nData2);
}

void C_CALCULATION::SetData(int nData1, int nData2)
{
	m_nData1 = nData1;
	m_nData2 = nData2;
}
