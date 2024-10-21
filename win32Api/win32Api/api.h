#pragma once
#include <Windows.h>
#include "resource.h"

class C_API
{
private:
	C_API() = default;
	HINSTANCE m_hInstance;
	HWND m_hWnd;

	static C_API* m_pApi;

public:
	static void CreateApi();
	static C_API* GetApi();
	static void ReleaseApi();


public:

	BOOL Init(HINSTANCE hInstance);
	void UpdateMsg();

	LRESULT CALLBACK ApiProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
	static LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

};

