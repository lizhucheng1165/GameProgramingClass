// LJS2-21.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
//정사각형 한변을 이용해서 넓이를 구하는 함수
void calculateSquareArea(int nSideLength, int* pSquareArea);
//밑변과 높이를 이용해서 삼각형 넓이를 구하는 함수
void calculateTriangleArea(float fWidth, float fHeight, float* pTriangleArea);
//두 수를 입력해서 작은수를 구하는 함수
void getSmallNumber(int nNumber1, int nNumber2, int* pSmallNUmber);


int main()
{
	int nSquareArea{};
	calculateSquareArea(3, &nSquareArea);
	printf("%d\n", nSquareArea);

	float fTriangleArea{};
	calculateTriangleArea(3.0f, 2.0f, &fTriangleArea);
	printf("%.2f\n", fTriangleArea);

	int nSmallnumber{};
	getSmallNumber(1, 3, &nSmallnumber);
	printf("%d\n", nSmallnumber);

}


void calculateSquareArea(int nSideLength, int* pSquareArea)
{
	*pSquareArea = nSideLength * nSideLength;
}

void calculateTriangleArea(float fWidth, float fHeight, float* pTriangleArea)
{
	*pTriangleArea = fWidth * fHeight / 2.0f;
}

void getSmallNumber(int nNumber1, int nNumber2, int* pSmallNUmber)
{
	*pSmallNUmber = nNumber1;
	if (nNumber1 > nNumber2)
	{
		*pSmallNUmber = nNumber2;
	}
}
