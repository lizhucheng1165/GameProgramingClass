#include "node.h"

int C_NODE::GetData()
{

    return m_nData;
}

C_NODE* C_NODE::GetNext()
{
    return m_pNext;
}
