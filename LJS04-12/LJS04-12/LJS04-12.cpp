#include <iostream>

void InsertionLogic(int* arData, int nLength);
int FindInsertionIndex(const int* arData, int nLength, int nKeyValue);
void MoveElementBackwards(int* arData, int nLength, int nInsertionIndex);
void Print(const int* arData, int nLength);

int main()
{
    int arData[7]{ 1, 2, 4, 5, 6, 7, 3 };

    int* pData = arData;
    int nLength = 7;

    InsertionLogic(pData, nLength);
    Print(pData, nLength);
}

void InsertionLogic(int* arData, int nLength)
{
    int nLastIndex = nLength - 1;
    int nKeyValue = arData[nLength - 1];
    int nInsertionIndex = FindInsertionIndex(arData, nLength, nKeyValue);

    MoveElementBackwards(arData, nLength, nInsertionIndex);
    arData[nInsertionIndex] = nKeyValue;
}

int FindInsertionIndex(const int* arData, int nLength, int nKeyValue)
{
    for (int i = nLength - 2; i >= 0; i--)
    {
        if (arData[i] <= nKeyValue)
        {
            return i + 1;
        }
    }
    return 0;
}

void MoveElementBackwards(int* arData, int nLength, int nInsertionIndex)
{
    for (int i = nLength - 2; i >= nInsertionIndex; i--)
    {
        arData[i + 1] = arData[i];
    }
}

void Print(const int* arData, int nLength)
{
    for (int i = 0; i < nLength; i++)
    {
        printf("%d ", arData[i]);
    }
    printf("\n");
}
