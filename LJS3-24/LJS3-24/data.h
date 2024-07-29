#pragma once

class C_DATA
{

private:
	int m_nData;

public:
	C_DATA() = default;
	C_DATA& operator=(const C_DATA& cInput) = delete;
	//C_DATA& operator=(int nData);
	void print();
	
};
