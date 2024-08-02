// LJS3-31.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

#include "cat.h"
#include "bird.h"
#include "fish.h"

int main()
{
	C_ANIMAL* arAnimal[5]{};

	arAnimal[0] = new C_CAT{};
	arAnimal[1] = new C_BIRD{};
	arAnimal[2] = new C_FISH{};
	arAnimal[3] = new C_FISH{};
	arAnimal[4] = new C_BIRD{};

	for (int i = 0; i < 5; i++)
	{
		arAnimal[i]->Move();
	}
}

