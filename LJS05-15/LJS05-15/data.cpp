#include "data.h"

bool C_DATA::Insert(int nData)
{
	//std::set<int>::iterator iter = m_setData.find(nData);
	//if (iter != m_setData.end())
	//{
	//	return false;
	//}

	//m_setData.insert(nData);
	//return true;

	std::pair<std::set<int>::iterator, bool> pairResult{};

	pairResult = m_setData.insert(nData);
	return pairResult.second;
}
