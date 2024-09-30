// LJS05-09.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <list>
void PrintList(std::list<int>& list);
//void PrintList(const std::list<int>& list);
void PrintIter(std::list<int>::iterator iterBegin, std::list<int>::iterator iterEnd);

int main()
{
	std::list <int> listData{};

	listData.push_back(1);
	listData.push_back(2);
	listData.push_back(3);
	listData.push_back(4);
	listData.push_front(9);

	//std::list <int>::iterator iter{};
	//std::list <int>::iterator iter = nullptr;
	//iter = listData.begin();

	//while (iter != listData.end())
	//{
	//	printf("%d\n", *iter);
	//	iter++;
	//}

	PrintList(listData);
	
	std::list<int>::iterator iter = listData.begin();
	while (iter != listData.end())
	{
		if (*iter > 5)
		{
			iter = listData.erase(iter);
		}
		else
		{
			iter++;
		}
	}
	

	PrintList(listData);

}
//void PrintList(const std::list<int>& list)
void PrintList(std::list<int>& list)
{
	std::list<int>::iterator iter = list.begin();
	//std::list<int>::const_iterator iter = list.begin();

	while (iter != list.end())
	{
		printf("%d ", *iter);
		iter++;
	}
	printf("\n");

}

void PrintIter(std::list<int>::iterator iterBegin, std::list<int>::iterator iterEnd)
{
	std::list<int>::iterator iter = iterBegin;
	while (iter != iterEnd)
	{
		printf("%d ", *iter);
		iter++;
	}
	printf("\n");

}
