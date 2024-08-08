// LJS04-09.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class C_DATA
{
private:
	int m_nData;
public:
	C_DATA() = default;
	void SetData(int nData);
	//int GetData();
	int GetData() const;
};

int main()
{
	C_DATA cData{};
	const C_DATA* pData{};

	cData.SetData(100);
	printf("%d\n", cData.GetData());

	pData = &cData;
	pData->GetData();
	printf("%d\n", pData->GetData());

}

void C_DATA::SetData(int nData)
{
	m_nData = nData;
}

int C_DATA::GetData() const
{
	return m_nData;
}
