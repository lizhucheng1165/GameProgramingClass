// LJS2-4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
struct S_DATA
{
	int nData;
	float fData;
	char str[64];
};

void printData(S_DATA sData);


int main()
{
	S_DATA sData{};

	sData.nData = 100;
	sData.fData = 0.5f;
	printData(sData);


}

void printData(S_DATA sData)
{
	printf("%d, %f\n", sData.nData, sData.fData);
}
