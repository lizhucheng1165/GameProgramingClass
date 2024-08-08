#pragma once

class C_PARENT
{
public:
	C_PARENT() = default;
	virtual ~C_PARENT() = default;
	void SetData(int nData);
	int GetData();
protected:
	int m_nData;
};
