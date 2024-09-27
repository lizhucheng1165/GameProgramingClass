// LJS05-07.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

template<class T>
T Add(T t1, T t2);

template<>
//char Add(char c1, char c2);
char Add<char>(char c1, char c2);

int main()
{
	Add(1, 2);
	Add('a', 'b');
}

template<class T>
T Add<T>(T t1, T t2)
{
	return t1 + t2;
}

template<>
char Add(char c1, char c2)
{
	printf("템플릿 특수화\n");
	return 0;
}
