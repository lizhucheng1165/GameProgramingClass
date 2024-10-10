#pragma once

#include <map>
#include <string>
#include "data.h"

class C_MGR
{
private:
	std::map<std::string, C_DATA*> m_mapData;

public:
	C_MGR() = default;
	bool Insert(const char* str, int nData);
	//void Erase(const char* str);
	bool Erase(const char* str);
	void Print();

};