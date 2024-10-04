#pragma once
#include <set>

class C_DATA
{
private:
	std::set<int> m_setData;

public:
	C_DATA() = default;
	bool Insert(int nData);
};