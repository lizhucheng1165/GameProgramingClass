#include "data.h"

//C_DATA* C_DATA::GetInstance()
//{
//	static C_DATA cData{};
//
//	return &cData;
//}

//C_DATA* C_DATA::GetInstance()
//{
//	static C_DATA* pData{};
//
//	if (!pData)
//	{
//		pData = new C_DATA{};
//	}
//
//	return pData;
//}
C_DATA* C_DATA::m_pInstance = nullptr;

void C_DATA::CreateInstance()
{
	if (!m_pInstance)
	{
		m_pInstance = new C_DATA{};
	}
}

void C_DATA::ReleaseInstance()
{
	if (m_pInstance)
	{
		delete m_pInstance;
		m_pInstance = nullptr;
	}
}

C_DATA* C_DATA::GetInstance()
{
	return m_pInstance;
}
//C_DATA* C_DATA::GetInstance()
//{
//	if (!m_pInstance)
//	{
//		m_pInstance = new C_DATA{};
//	}
//
//	return m_pInstance;
//}




void C_DATA::SetData(int nData)
{
	m_nData = nData;
}

int C_DATA::GetData()
{
	return m_nData;
}
