// LJS2-30.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int addInt(int n1, int n2);
float addFloat(float f1, float f2);

int main()
{
	printf("%d\n", addInt(10, 20));
	printf("%f\n", addFloat(0.5f, 0.1f));


}

//두개의 int를 더합니다
int addInt(int n1, int n2)
{
	return n1 + n2;
}

float addFloat(float f1, float f2)
{
	return f1 + f2;
}
