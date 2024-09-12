#include "data.h"

//int C_DATA::m_nData{};

C_DATA::C_DATA() :
	m_nData{}
{

}

C_DATA* C_DATA::Create()
{
	C_DATA* pData = new C_DATA{};
	//초기세팅

	return pData;
}

void C_DATA::SetData(int nData)
{
	m_nData = nData;
}

int C_DATA::GetData()
{
	return m_nData;
}
