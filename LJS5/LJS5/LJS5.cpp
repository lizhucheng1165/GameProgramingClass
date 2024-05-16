// LJS5.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    //직사각형의 넓이를 구하는 프로그램을 작성하라
    //int형 데이터 밑변과 높이가 주어진다
    int nRectangleWidth{};
    int nRectangleHeight{};
    int nRectangleArea{};

    std::cout << "직사각형의 가로 길이를 입력하세요";
    std::cin >> nRectangleWidth;
    

    std::cout << "직사각형의 세로 길이를 입력하세요";
    std::cin >> nRectangleHeight;
    
    nRectangleArea = nRectangleWidth * nRectangleHeight;

    std::cout << "직사각형 넓이는" << nRectangleArea << "입니다" << std::endl;


}

