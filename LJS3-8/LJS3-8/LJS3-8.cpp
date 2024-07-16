// LJS3-8.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class C_DATA
{
//private:
//	int n1;
//	int n2;
//	int n3;
//public:
//	int n4;
//	int n5;
//private:
//	int n6;
//	int n7;
//public:
//	int n8;

private:
	//int nData;
	int m_nData;
public:
	void setData(int nData);
	int getData();
};

int main()
{
	C_DATA cData{};

	cData.setData(100);
	printf("%d\n", cData.getData());
}

void C_DATA::setData(int nData)
{
	//nData
	//C_DATA::nData = nData;
	m_nData = nData;
}

int C_DATA::getData()
{
	return m_nData;
}
