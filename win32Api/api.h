#pragma once

#include "targetver.h"
#define WIN32_LEAN_AND_MEAN             // ���� ������ �ʴ� ������ Windows ������� �����մϴ�.
#include <windows.h>
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

#include "Resource.h"
#include "msg.h"

class C_API
{
private:

	static C_API*	m_pApi;
	HWND			m_hWnd;
	HINSTANCE		m_hInstance;
	C_MSG			m_cMsg;

private:
	C_API() = default;
	static LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
	//LRESULT CALLBACK apiProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

public:
	static void createApi();
	static C_API* getApi();
	static void releaseApi();

	bool init(HINSTANCE hInstance);
	void updateMsg();
};
