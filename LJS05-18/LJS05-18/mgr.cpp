#include "mgr.h"

bool C_MGR::Insert(const char* str, int nData)
{
    //std::map<std::string, C_DATA*>::iterator iterFind = m_mapData.find(str);

    //if (iterFind != m_mapData.end())
    //{
    //    return false;
    //}

    //C_DATA* pData = new C_DATA{};
    //pData->SetData(nData);
    //m_mapData.insert({ str,pData });
    //return false;

    std::pair<std::map<std::string, C_DATA*>::iterator, bool> pairResult{};
    pairResult = m_mapData.insert({ str, nullptr});
    if (!pairResult.second)
    {
        return false;
    }

    C_DATA* pData = new C_DATA{};
    pData->SetData(nData);

    pairResult.first->second = pData;
}

//void C_MGR::Erase(const char* str)
//{
//    std::map<std::string, C_DATA*>::iterator iterFind{};
//    iterFind = m_mapData.find(str);
//
//    delete iterFind->second;
//    iterFind->second = nullptr;
//    m_mapData.erase(iterFind);
//
//
//}

bool C_MGR::Erase(const char* str)
{
    std::map<std::string, C_DATA*>::iterator iterFind{};
    iterFind = m_mapData.find(str);

    if (iterFind == m_mapData.end())
    {
        return false;
    }

    delete iterFind->second;
    m_mapData.erase(iterFind);

    return true;
}

void C_MGR::Print()
{
    std::map<std::string, C_DATA*>::iterator iter = m_mapData.begin();
    while (iter != m_mapData.end())
    {
        printf("%s , ", iter->first.c_str());
        iter->second->PrintData();
        iter++;
    }
}
