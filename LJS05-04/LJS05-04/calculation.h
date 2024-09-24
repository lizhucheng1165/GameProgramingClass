#pragma once
enum class E_TYPE
{
	E_DEFAULT,
	E_ADD,
	E_MULTYPLY,
	E_DIVIDE,
	E_SUBSTRACT,
	E_MAX
};

class C_CALCULATION
{
private:
	int m_nData1{};
	int m_nData2{};

private:
	//void (C_CALCULATION::* m_arFunc[5])(int, int) {};
	void (C_CALCULATION::* m_arFunc[(int)E_TYPE::E_MAX])(int, int) {};

private:
	void Add(int n1, int n2);
	void Multiply(int n1, int n2);
	void Divide(int nDst, int nSrc);
	void Substract(int nDst, int nSrc);
	void Default(int n1, int n2);

public:
	C_CALCULATION() = default;
	void Init();
	void Run(E_TYPE Type);
	void SetData(int nData1, int nData2);

};