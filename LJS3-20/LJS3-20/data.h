#pragma once

class C_DATA
{
private:
	int* m_pData;

public:
	C_DATA();
	C_DATA(const C_DATA& cInput);
	~C_DATA();

	void setData(int nData);
	int getData();
};