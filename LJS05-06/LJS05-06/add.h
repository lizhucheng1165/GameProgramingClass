#pragma once
#include <stdio.h>

//template<typename T>
//T Add(T t1, T t2);
template<typename T>
T Add(T t1, T t2)
{
	printf("템플릿함수\n");
	return t1 + t2;
}
