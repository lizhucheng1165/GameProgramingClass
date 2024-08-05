#pragma once


#include "data.h"


class C_TEST
{
private:
	//C_DATA m_cData;
	C_DATA* m_pData;

public:
	C_TEST() = default;
	void init(int n1, int n2);
	void release();
	//C_TEST(int n1, int n2);

};