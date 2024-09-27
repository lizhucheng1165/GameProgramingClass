#pragma once
#include "stdio.h"

//template<class T>
//class C_DATA
//{
//private:
//	T* m_arData;
//	int m_nDataSize;
//public:
//	void Init(int nSize);
//	bool SetData(int nIndex, T& tData);
//	const T& GetData(int nIndex);
//};
//
//template<class T>
//void C_DATA<T>::Init(int nSize)
//{
//	m_nDataSize = nSize;
//	m_arData = new T[nSize];
//}
//
//template<class T>
//bool C_DATA<T>::SetData(int nIndex, T& tData)
//{
//	if (nIndex > m_nDataSize - 1 or nIndex < 0)
//	{
//		printf("허용되지 않는 인덱스입니다\n");
//		return false;
//	}
//	m_arData[nIndex] = tData;
//
//	return true;
//}
//
//template<class T>
//const T& C_DATA<T>::GetData(int nIndex)
//{
//	return m_arData[nIndex];
//}

template<class T>
class C_DATA
{
private:
	T* m_pData{};
	int m_nLength{};

public:
	C_DATA() = default;
	void Init(int nLength)
	{
		m_nLength = nLength;
		m_pData = new T[m_nLength];

	}
	bool SetData(int nIndex, T tData)
	{
		if (nIndex < 0 || nIndex >= m_nLength)
		{
			return false;
		}

		m_pData[nIndex] = tData;
		return true;
	}
	bool GetData(int nIndex, T* tData)
	{
		if (nIndex < 0 || nIndex >= m_nLength)
		{
			return false;
		}

		tData = m_pData[nIndex];
		return true;
	}
};


template<>
class C_DATA<char>
{
private:
	char* m_pData{};
	int m_nLength{};

public:
	C_DATA() = default;
	void Init(int nLength)
	{
		m_nLength = nLength;
		m_pData = new char[m_nLength];

	}
	bool SetData(int nIndex, char tData)
	{
		if (nIndex < 0 || nIndex >= m_nLength)
		{
			return false;
		}

		m_pData[nIndex] = tData;
		return true;
	}
	bool GetData(int nIndex, char* tData)
	{
		if (nIndex < 0 || nIndex >= m_nLength)
		{
			return false;
		}

		*tData = m_pData[nIndex];
		return true;
	}
};