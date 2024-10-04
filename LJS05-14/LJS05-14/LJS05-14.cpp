// LJS05-14.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <set>

int main()
{
	std::set<int> setData{};

	setData.insert(3);
	setData.insert(1);
	setData.insert(5);
	setData.insert(7);
	setData.insert(2);

	std::set<int>::iterator iter = setData.begin();
	while (iter != setData.end())
	{
		printf("%d ", *iter);
		iter++;
	}
	printf("\n");

	//setData.find(3);

	std::set<int>::iterator iterFind = setData.find(3);
	if (iterFind == setData.end())
	{
		setData.insert(3);
	}


	//if (iterFind != setData.end())
	//{
	//	printf("있다\n");
	//}
	//else
	//{
	//	printf("없다\n");
	//}


}

