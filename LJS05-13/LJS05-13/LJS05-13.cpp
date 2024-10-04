// LJS05-13.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

int main()
{
	std::vector<std::vector<int>> vData{};

	vData.reserve(3);
	vData.resize(3);

	for (int i = 0; i < 3; i++)
	{
		vData[i].reserve(5);
		vData[i].resize(5);
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", vData[i][j]);
		}
		printf("\n");
	}

}

