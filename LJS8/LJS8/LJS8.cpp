// LJS8.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    ////+ - * / 만 사용
    ////int 형 변수 2개 선언 나머지를 출력하는 프로그램 작성
    ////단, int형만 사용
    //int nNumber1{};
    //int nNumber2{};
    //int nShare{};
    //int nRemainder{};

    //std::cout << "나누고 싶은 숫자를 입력하세요.";
    //std::cin >> nNumber1;

    //std::cout << "나눌 숫자를 입력하세요.";
    //std::cin >> nNumber2;

    //// 3 / 2 -> 나머지 1
    //// 10/ 4 -> 몫 2 나머지 2 -> 숫자1 - 몫 x 숫자2 = 나머지
    //nShare = nNumber1 / nNumber2;
    //nRemainder = nNumber1 - (nShare * nNumber2);

    //std::cout << "나머지:" << nRemainder << std::endl;

    
    
    //대상, 순서가 정해진 경우 ex)나눗셈 쓰이는 변수명
    int nDst{}; //목적지 destination / 대상
    int nSrc{}; //출처 source / 동작 재료
    int nQuotient{};
    int nRemainder{};

    nDst = 20;
    nSrc = 7;

    nQuotient = nDst / nSrc;
    nRemainder = nDst - (nSrc * nQuotient);

    std::cout << "나머지:" << nRemainder << std::endl;

}
