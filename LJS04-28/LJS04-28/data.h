#pragma once

class C_DATA
{
private:
	//static int m_nData;
	int m_nData;

private:
	C_DATA();

public:
	static C_DATA* Create();
	//C_DATA() = default;
	//static void SetData(int nData);
	void SetData(int nData);
	//static int GetData();
	int GetData();
};