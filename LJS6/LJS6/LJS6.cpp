// LJS6.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    int nData1{};
    int nData2{};
    float fData{};

    nData1 = 10;
    nData2 = 7;

    //fData = (float)(nData1 / nData2); //
    fData = (float)nData1 / (float)nData2;
    
    std::cout << fData;


    //float(nData1); //클래스상수
    
    

   


}

