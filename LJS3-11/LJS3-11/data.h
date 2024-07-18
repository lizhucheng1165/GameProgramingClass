#pragma once


class C_DATA
{
private:
	int m_nData;

public:
	//C_DATA(int nData);
	//explicit C_DATA(int nData);
	C_DATA() = default;
	void init(int nData);

	void print();
};