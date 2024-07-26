#pragma once
class C_DATA
{
private:
	int m_nData;

public:
	C_DATA() = default;
	//void operator = (int nData);
	//int operator = (int nData);
	C_DATA& operator = (int nData);
	void print();
};