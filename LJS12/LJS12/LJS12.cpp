// LJS12.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    int nData{};

    scanf_s("%d", &nData);

    if (nData > 10)
        printf("10보다 크다\n");
    else if (nData > 5)
        printf("5보다 크다\n");
    else
        printf("나머지\n");
}

