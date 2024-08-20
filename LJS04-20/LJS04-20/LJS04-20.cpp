// LJS04-20.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void Add(int nData, int* pResult);

int main()
{
	int nData{};
	Add(5, &nData);
	printf("%d\n", nData);

}

void Add(int nData, int* pResult)
{
	if (nData <= 0)
	{
		return;
	}
	int nResult{};

	Add(nData - 1, &nResult);
	*pResult = nResult + nData;
}
