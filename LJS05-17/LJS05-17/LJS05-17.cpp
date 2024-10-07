// LJS05-17.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <map>

void PrintData(std::map<int, float>& mapData);

int main()
{

	std::map<int, float> mapData{};

	mapData.insert({ 10,0.5f });
	mapData[9] = 1.1f;

	//std::pair<int, float> pairData{};
	//pairData.first = 5;
	//pairData.second = 0.9f;	

	//std::pair<int, float> pairData(5,0.9f);
	//mapData.insert(pairData);
	
	mapData.insert(std::pair<int, float>(12, 0.42f));

	//mapData.insert(std::make_pair(7, 3.04f));
	mapData.insert(std::make_pair<int,float>(7, 3.04f));

	mapData.insert(std::map<int, float>::value_type(6, 4.4f));

	//std::pair<std::map<int, float>::iterator, bool> pairResult{};
	//pairResult = mapData.insert({ 7,999.999f });
	//if (pairResult.second)
	//{
	//	printf("성공\n");
	//}
	//else
	//{
	//	printf("실패\n");
	//}

	//mapData[7] = 99.99f;

	//std::map<int, float>::iterator iterFind = mapData.find(7);
	//if (iterFind == mapData.end())
	//{
	//	printf("없다\n");
	//}
	//else
	//{
	//	printf("find %d, %f\n", iterFind->first, iterFind->second);
	//}

	printf("%d,%f\n", 99, mapData[99]);


	////방법1
	//mapData[0] = 0.1f;
	//mapData[1] = 0.3f;
	//mapData[2] = 0.6f;
	//mapData[3] = 1.4f;

	////방법2
	//mapData.insert(std::make_pair(0, 0.4f));
	//mapData.insert(std::make_pair(1, 0.1f));
	//mapData.insert(std::make_pair(2, 0.2f));
	//mapData.insert(std::make_pair(3, 0.7f));



	PrintData(mapData);

}

void PrintData(std::map<int, float>& mapData)
{
	std::map<int, float>::iterator iter = mapData.begin();
	while (iter != mapData.end())
	{
		
		printf("ID:%d , Value:%f\n", (*iter).first, iter->second);
		iter++;
	}
}
