// LJS04-17.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
int Add(int n1, int n2);

int main()
{
	int nData1{};
	int nData2{};
	int nTotal{};


	nData1 = 10;
	nData2 = 20;

	//nData1++;
	
	//nTotal = nData1 + nData2;
	nTotal = Add(nData1,nData2);
	Add(nData1, nData2);
	Add(nData1, nData2);
	Add(nData1,0);
	Add(nData1, nData2);

	//for (int i = 0; i < 100; i++)
	//{
	//	nData1++;
	//}


	printf("%d\n", nTotal);
	
}

int Add(int n1, int n2)
{
	int nTotal{};

	//nTotal = n1 + n2;
	nTotal = n1 / n2;

	return nTotal;
}
