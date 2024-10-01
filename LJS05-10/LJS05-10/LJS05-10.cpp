// LJS05-10.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <list>

void PrintData(std::list<int>& list);
bool isBig(const int n);

bool Test(int nData);

int main()
{
	std::list<int> listData{};

	listData.push_back(4);
	listData.push_back(2);
	listData.push_back(5);
	listData.push_back(1);
	listData.push_back(7);
	listData.push_back(9);

	PrintData(listData);
	
	//listData.remove(5);

	std::list<int>::iterator iter = listData.begin();
	listData.sort(std::greater<int>());
	//listData.reverse();


	//listData.remove_if(isBig);

	//while (iter != listData.end())
	//{
	//	if (*iter >= 5)
	//	{
	//		iter = listData.erase(iter);
	//		//listData.erase(iter++);
	//	}
	//	else
	//	{
	//		iter++;
	//	}
	//}

	PrintData(listData);
}

void PrintData(std::list<int>& list)
{

	for (std::list<int>::iterator iter = list.begin(); iter != list.end(); iter++)
	{
		printf("%d ", *iter);
	}

	printf("\n");
}

bool isBig(const int n)
{
	if (n >= 5)
	{
		return true;
	}
	return false;
}

bool Test(int nData)
{
	return nData >= 5;
}
