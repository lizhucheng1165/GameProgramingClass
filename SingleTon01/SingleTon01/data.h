#pragma once
#include <stdio.h>

class C_DATA
{
private:
	static C_DATA* m_pInstance;
private:
	int m_nData;
private:
	C_DATA() = default;
public:
	static void CreateInstance();
	static void ReleaseInstance();
	static C_DATA* GetInstance();


public:
	void SetData(int nData);
	int GetData();
};