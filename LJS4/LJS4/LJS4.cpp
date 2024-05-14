// LJS4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    int nData1{};
    int nData2{};
    int nResult{};

    nData1 = 20;
    nData2 = 10;

    nResult = (nData1 + nData2) * nData1;


    std::cout << nResult;
}

