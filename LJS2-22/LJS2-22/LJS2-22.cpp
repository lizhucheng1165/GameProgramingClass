// LJS2-22.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void printData(const int* pData, int nLength);

int main()
{
	//const int nData{};
	//int const nData{};

	//nData = 100;
	//const int* p{};
	//int const *p{};

	//*p = 10;

	//const int* const** const* p{};
	//int const* const** const* p{};

	//****p = 0;

	int arData[5]{ 5,4,3,2,1 };

	printData(arData, 5);

	

}

void printData(const int* pData, int nLength)
{
	for (int i = 0; i < nLength; i++)
	{
		printf("%d\n", pData[i]);
	}
}
