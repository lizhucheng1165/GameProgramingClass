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

C_BST::S_NODE* C_BST::AddNode(S_NODE* pNode, int nData)
{
    if (!pNode)
    {
        m_bCreate = true;
        return CreateNode(nData);
    }

    if (pNode->nData > nData)
    {
        pNode->pL = AddNode(pNode->pL, nData);
    }
    else if (pNode->nData < nData)
    {
        pNode->pR = AddNode(pNode->pR, nData);
    }

    return pNode;
}

bool C_BST::Insert(int nData)
{

    if (!m_pRoot)
    {
        m_pRoot = CreateNode(nData);
        return true;
    }

    S_NODE* pNode = m_pRoot;
    bool bCreate{};

    while (pNode && pNode->nData != nData)
    {
        if (pNode->nData > nData)
        {
            if (!pNode->pL)
            {
                pNode->pL = CreateNode(nData);
                bCreate = true;
            }
            pNode = pNode->pL;
        }
        else if (pNode->nData < nData)
        {
            if (!pNode->pR)
            {
                pNode->pR = CreateNode(nData);
                bCreate = true;
            }
            pNode = pNode->pR;
        }
    }

    return bCreate;
}

bool C_BST::Insert2(int nData)
{
    if (!m_pRoot)
    {
        m_pRoot = CreateNode(nData);
        return true;
    }

    m_bCreate = false;
    AddNode(m_pRoot, nData);


    return m_bCreate;
}

void C_BST::Erase(int nData)
{
    S_NODE* pNode = m_pRoot;
    S_NODE* pUp{};

    while (pNode && pNode->nData != nData)
    {
        pUp = pNode;
        if (pNode->nData > nData)
        {
            pNode = pNode->pL;
        }
        else if (pNode->nData < nData)
        {
            pNode = pNode->pR;  
        }
    }

    if (!pNode)
    {
        return;
    }

    if (pNode->pL && pNode->pR)
    {

        return;
    }

    printf("up : %d\n", pUp->nData);
    S_NODE* pDel = pNode;
    S_NODE* pChild = pNode->pL;
    if (pNode->pR)
    {
        pChild = pNode->pR;
    }

    if (pNode->nData < pUp->nData)
    {
        pUp->pL = pChild;
    }
    else if (pNode->nData > pUp->nData)
    {
        pUp->pR = pChild;
    }
    delete pDel;


    //if (pNode->pL && !pNode->pR)
    //{
    //    if (pNode->nData < pUp->nData)
    //    {
    //        pUp->pL = pNode->pL;
    //    }
    //    else if (pNode->nData > pUp->nData)
    //    {
    //        pUp->pR = pNode->pL;
    //    }
    //}
    //else if (!pNode->pL && pNode->pR)
    //{
    //    if (pNode->nData < pUp->nData)
    //    {
    //        pUp->pL = pNode->pR;
    //    }
    //    else if (pNode->nData > pUp->nData)
    //    {
    //        pUp->pR = pNode->pR;
    //    }
    //}
    //else if (!pNode->pL && !pNode->pR)
    //{
    //    if (pNode->nData < pUp->nData)
    //    {
    //        pUp->pL = nullptr;
    //    }
    //    else if (pNode->nData > pUp->nData)
    //    {
    //        pUp->pR = nullptr;
    //    }

    //    delete pDel;
    //}

}

void C_BST::DeleteNode(S_NODE* pDel, S_NODE* pUp)
{
    if (pDel->nData < pUp->nData)
    {
        pUp->pL = pDel->pL;
    }
    else if (pDel->nData > pUp->nData)
    {
        pUp->pR = pDel->pR;
    }

    delete pDel;
}
void C_BST::Print()
{
    PrintNode(m_pRoot);
    printf("\n");
}
