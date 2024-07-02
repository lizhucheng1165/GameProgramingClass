// LJS2-28.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
bool divide(int nDst, int nSrc, int* pQuotient);

int main()
{
	int nData1{};
	int nData2{};
	int nQuotient{};

	nData1 = 10;
	nData2 = 0;

	if (divide(nData1, nData2, &nQuotient))
	{
		printf("%d\n", nQuotient);
	}
	else
	{
		printf("실패\n");
	}


}

bool divide(int nDst, int nSrc, int* pQuotient)
{
	if (nSrc == 0)
	{
		return false;
	}
	
	*pQuotient = nDst / nSrc;
	return true;
	
}
