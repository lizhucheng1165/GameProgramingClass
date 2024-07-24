#pragma once

class C_DATA
{
private:
	int m_nData;



public:
	C_DATA() = default;
	C_DATA(const C_DATA& ) = delete;
	void print();
	void setData(int nData);
};