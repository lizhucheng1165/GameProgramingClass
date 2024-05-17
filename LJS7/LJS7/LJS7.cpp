// LJS7.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    ////국어 영어 수학 점수가 있다
    ////총점과 평균을 구하는 프로그램 작성
    //int nLanguageScore{};
    //int nEnglishScore{};
    //int nMathScore{};
    //
    //int nTotalScore{};
    //float fAverageScore{};

    //

    //std::cout << "국어 점수를 입력해주세요.";
    //std::cin >> nLanguageScore;

    //std::cout << "영어 점수를 입력해주세요.";
    //std::cin >> nEnglishScore;

    //std::cout << "수학 점수를 입력해주세요.";
    //std::cin >> nMathScore;


    //nTotalScore = nLanguageScore + nEnglishScore + nMathScore;
    //fAverageScore = (float)nTotalScore / 3.0f; //(float)3??

    //std::cout << "총점:" << nTotalScore << std::endl;
    //std::cout << "평균:" << fAverageScore << std::endl;
   
 
    int nScoreKorean{};
    int nScoreEnglish{};
    int nScoreMathematics{};
    int nTotal{};
    float fAverage{};

    nScoreKorean = 20;
    nScoreEnglish = 30;
    nScoreMathematics = 40;

    nTotal = nScoreKorean + nScoreEnglish + nScoreMathematics;
    fAverage = float(nTotal) / (float)3;

    std::cout << "총점:" << nTotal << std::endl;
    std::cout << "평균:" << fAverage << std::endl;
}

