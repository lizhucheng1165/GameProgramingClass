#include <stdio.h>
#include "bst.h"

C_BST::S_NODE** C_BST::FindNode(S_NODE** ppNode, int nData)
{
    if (!*ppNode)
    {
        return ppNode;
    }

    //if ((*ppNode)->nData == nData)
    //{
    //    return ppNode;
    //}

    if ((*ppNode)->nData > nData)
    {
        return FindNode(&(*ppNode)->pL, nData);
    }
    else if ((*ppNode)->nData < nData)
    {
        return FindNode(&(*ppNode)->pR, nData);
    }

    return ppNode;
}

C_BST::S_NODE** C_BST::FindMax(S_NODE** ppNode)
{
    if (!(*ppNode)->pR)
    {
        return ppNode;
    }

    return FindMax(&(*ppNode)->pR);
}

C_BST::S_NODE* C_BST::CreateNode(int nData)
{
    S_NODE* pNew = new S_NODE{};
    pNew->nData = nData;

    return pNew;
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
    S_NODE** ppfind = FindNode(&m_pRoot, nData);
    if (*ppfind) //이미 데이터가 존재함
    {
        return false;
    }

    *ppfind = CreateNode(nData);
    return true;
}

bool C_BST::Erase(int nData)
{
    S_NODE** ppFind = FindNode(&m_pRoot, nData);
    if (!*ppFind) //지울놈이 없으면 실패
    {
        return false;
    }

    if ((*ppFind)->pL && (*ppFind)->pR) //자식이 둘인경우
    {
        S_NODE** ppMax = FindMax(&(*ppFind)->pL);
        printf("max : %d\n", (*ppMax)->nData);
        (*ppFind)->nData = (*ppMax)->nData;
        ppFind = ppMax;
    }



    S_NODE* pDel = *ppFind;
    S_NODE* pChild = (*ppFind)->pL;

    if ((*ppFind)->pR)
    {
        pChild = (*ppFind)->pR;
    }
    
    
    *ppFind = pChild;
    delete pDel;


    //delete* ppFind;
    //*ppFind = pChild;

    //-----------
    //S_NODE* pDel = *ppFind;
    //if ((*ppFind)->pL)
    //{
    //    *ppFind = (*ppFind)->pL;
    //}
    //else if ((*ppFind)->pR)
    //{
    //    *ppFind = (*ppFind)->pR;
    //}
    //else
    //{
    //    *ppFind = nullptr;
    //}
    //
    //delete pDel;

    return true;
}

void C_BST::Print()
{
    PrintNode(m_pRoot);
    printf("\n");
}
