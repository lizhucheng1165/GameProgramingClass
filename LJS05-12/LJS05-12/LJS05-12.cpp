// LJS05-12.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

int main()
{
	//std::vector<int> vData(4);

	//vData.push_back(9);

	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d ", vData[i]);
	//}

	//std::vector<int> vData{};

	//vData.reserve(10);
	//for (int i = 0; i < 10; i++)
	//{
	//	vData.push_back(i);
	//	printf("전체크기 : %d, 사용크기 : %d\n ", vData.capacity(), vData.size());
	//}

	//vData.pop_back();
	//printf("전체크기 : %d, 사용크기 : %d\n ", vData.capacity(), vData.size());

	std::vector<int> vData{};

	vData.reserve(10);
	vData.resize(10);

	vData[5] = 99;
	for (int i = 0; i < vData.size(); i++)
	{
		printf("%d\n", vData[i]);
	}


}
