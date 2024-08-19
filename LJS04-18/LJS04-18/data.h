#pragma once

class C_DATA
{
private:
	int m_nData;
	int m_1;
	int m_2;
	int m_3;
	int m_4;
	int m_5;
	int m_6;
	int m_7;
	float m_f1;
	float m_f2;
	float m_f3;
	float m_f4;
	float m_f5;

public:
	C_DATA() = default;
	C_DATA(const C_DATA&) = delete;
	C_DATA& operator = (const C_DATA&) = delete;

	int GetData();
	void SetData(int nData);
};