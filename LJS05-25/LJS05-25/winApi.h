#pragma once

#include <Windows.h>
#include "resource.h"

class C_WINAPI
{
private:
	HINSTANCE	m_hInstance;
	HWND		m_hWnd;

	int m_nData;
	static C_WINAPI* m_pApi;
private:
	C_WINAPI() = default;



public:
	static void CreateApi();
	static C_WINAPI* getApi();
	static void Release();

	BOOL Init(HINSTANCE hInstance);
	void UpdateMsg();

	LRESULT CALLBACK ApiProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
	static LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
};

