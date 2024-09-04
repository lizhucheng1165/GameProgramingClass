#include "bst.h"

C_BST::S_NODE* C_BST::CreateNode(int nData)
{
    S_NODE* pNode = new S_NODE{};
    pNode->nData = nData;

    return pNode;
}

void C_BST::PrintNode(S_NODE* pNode)
{
    if (!pNode)
    {
        return;
    }

    printf("%d ", pNode->nData);
    PrintNode(pNode->pL);
    PrintNode(pNode->pR);
}

bool C_BST::Insert(int nData)
{

    if (!m_pRoot)
    {
        m_pRoot = CreateNode(nData);
        return true;
    }

    //S_NODE* pNode = m_pRoot;
    //S_NODE* pRootNode{};
    //while (pNode)
    //{
    //    if (pNode->nData == nData)
    //    {
    //        return false;
    //    }

    //    if (pNode->nData < nData)
    //    {
    //        pRootNode = pNode;
    //        pNode = pNode->pR;
    //    }
    //    else
    //    {
    //        pRootNode = pNode;
    //        pNode = pNode->pL;
    //    }
    //    
    //}



    return false;
}

void C_BST::Print()
{
    PrintNode(m_pRoot);
}
