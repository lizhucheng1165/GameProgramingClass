#pragma once
#include <stdio.h>


class C_DATA
{
private:
	int m_nData;
	static int m_nDataStatic;

public:
	C_DATA() = default;
	//C_DATA();
	void SetData(int nData);
	static void SetDataStatic(int nData);
	void PrintData();
};

