#pragma once

#include <list>
#include "item.h"

class C_DATA
{
private:
	std::list<C_ITEM*> m_listItem;

private:
	C_ITEM* CreateItem(int nData);
	
public:
	C_DATA() = default;
	C_ITEM* AddFirst(int nData);
	C_ITEM* AddLast(int nData);
	void Remove(int nData);
	void Erase(C_ITEM* pItem);
	void Print();
};