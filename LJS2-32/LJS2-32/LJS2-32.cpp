// LJS2-32.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
void printData(const int* pdata, int nLength);

int main()
{
	int arData[10]{};
	int nDataLength{};
	int nUseLength{};

	nDataLength = 10;
	while (nUseLength < nDataLength)
	{
		scanf_s("%d", &arData[nUseLength]);
		nUseLength++;
	}

	printData(arData, 10);
}

void printData(const int* pdata, int nLength)
{
	for (int i = 0; i < nLength; i++)
	{
		printf("%d ", pdata[i]);
	}
	printf("\n");

}
