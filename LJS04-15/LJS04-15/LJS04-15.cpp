// LJS04-15.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void SwapData(int& nDst, int& nSrc);
void BubbleLogic(int& nFirst, int& nSecond);
void BubbleOneCycle(int* pData, int nLength);
void BubbleSort(int* pData, int nLength);

void PrintData(const int* pData, int nLength);
int main()
{
    int arData[9]{ 6,4,5,8,7,9,1,2,3 };

    BubbleSort(arData, 9);
    PrintData(arData, 9);
}

void SwapData(int& nDst, int& nSrc)
{
    int nTmp = nDst;
    nDst = nSrc;
    nSrc = nTmp;
}

void BubbleLogic(int& nFirst, int& nSecond)
{
    if (nSecond < nFirst)
    {
        SwapData(nFirst, nSecond);
    }
}

void BubbleOneCycle(int* pData, int nLength)
{
    for (int i = 1; i < nLength ; i++)
    {
        BubbleLogic(pData[i - 1], pData[i]);
    }
}

void BubbleSort(int* pData, int nLength)
{
    while (nLength > 1)
    {
        BubbleOneCycle(pData, nLength);
        nLength--;
    }
}

void PrintData(const int* pData, int nLength)
{
    for (int i = 0; i < nLength; i++)
    {
        printf("%d ", pData[i]);
    }
    printf("\n");
}
