#include "C_DATA.h"

//C_ITEM* C_DATA::CreateItem(int nData)
//{
//    C_ITEM* pNewItem = new C_ITEM;
//    pNewItem->SetData(nData);
//
//    return pNewItem;
//}
//
//C_ITEM* C_DATA::AddFirst(int nData)
//{
//    C_ITEM* pNew = CreateItem(nData);
//    m_listItem.push_front(pNew);
//
//    return pNew;
//}
//
//C_ITEM* C_DATA::AddLast(int nData)
//{
//    C_ITEM* pNew = CreateItem(nData);
//    m_listItem.push_back(pNew);
//
//    return pNew;
//}
//
//void C_DATA::Remove(int nData)
//{
//    std::list<C_ITEM*>::iterator iter = m_listItem.begin();
//
//    while (iter != m_listItem.end())
//    {
//        if ((*iter)->GetData() == nData)
//        {
//            iter = m_listItem.erase(iter);
//        }
//        else
//        {
//            iter++;
//        }
//    }
//}
//
//void C_DATA::Erase(C_ITEM* pItem)
//{
//    std::list<C_ITEM*>::iterator iter = m_listItem.begin();
//
//    while (iter != m_listItem.end())
//    {
//        if (*iter == pItem)
//        {
//            iter = m_listItem.erase(iter);
//        }
//        else
//        {
//            iter++;
//        }
//    }
//}
//
//void C_DATA::Print()
//{
//    std::list<C_ITEM*>::iterator iter = m_listItem.begin();
//    while (iter != m_listItem.end())
//    {
//        printf("%d ", (*iter)->GetData());
//        iter++;
//    }
//    printf("\n");
//}

C_ITEM* C_DATA::CreateItem(int nData)
{
	C_ITEM* pItem = new C_ITEM{};
	pItem->SetData(nData);
	return pItem;
}

C_ITEM* C_DATA::AddFirst(int nData)
{
	C_ITEM* pNewItem = CreateItem(nData);
	m_listItem.push_front(pNewItem);
	return pNewItem;
}

C_ITEM* C_DATA::AddLast(int nData)
{
	C_ITEM* pNewItem = CreateItem(nData);
	m_listItem.push_back(pNewItem);
	return pNewItem;
}

void C_DATA::Remove(int nData)
{
}

void C_DATA::Erase(C_ITEM* pItem)
{
}

void C_DATA::Print()
{
	for (std::list<C_ITEM*>::iterator iter = m_listItem.begin(); iter != m_listItem.end(); iter++)
	{
		printf("%d ", (*iter)->GetData());
	}
	printf("\n");
}
