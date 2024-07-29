#pragma once

#include<stdio.h>

class C_DATA
{
private:
	int m_nData;

public:
	C_DATA() = default;
	//void operator++();
	C_DATA& operator++();
	C_DATA operator++(int);
	C_DATA(int nData);
	void print();

};