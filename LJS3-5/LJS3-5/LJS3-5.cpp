// LJS3-5.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
struct S_DATA
{
	int n1;
	int n2;
	float f1;
	float f2;
};

void printData(const S_DATA* pData);

int main()
{
	S_DATA sData{};
	S_DATA* p{};

	p = &sData;

	//(*p).n1 = 100;
	//*p.n1 = 100;
	p->n1 = 100;
	p->f1 = 0.5f;

	//printf("%d\n", sData.n1);
	printData(&sData);
}

void printData(const S_DATA* pData)
{
	printf("%d, %f\n", pData->n1, pData->f1);
}
