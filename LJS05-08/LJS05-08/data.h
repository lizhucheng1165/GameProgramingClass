#pragma once
#include <stdio.h>

template <class T>
class C_DATA
{
private:
    T m_tData;

public:
    C_DATA() = default;
    void SetData(T tData)
    {
        m_tData = tData;
    }
    T GetData()
    {
        return m_tData;

    }
};

template <>
class C_DATA<char>
{
private:
    char m_tData;

public:
    C_DATA() = default;
    void SetData(char tData)
    {
        printf("특수화 set\n");
        m_tData = tData;
    }
    char GetData()
    {
        printf("특수화 get\n");
        return m_tData;
    }
};
