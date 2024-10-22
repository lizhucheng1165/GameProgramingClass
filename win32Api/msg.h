#pragma once

#include <Windows.h>

class C_MSG
{
private:
	HINSTANCE m_hInstance;
	//WM_USER������ŭ�� ����� �޼��� ����
	LRESULT(C_MSG::*m_arMsg[WM_USER])(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
	//LRESULT(*m_arMsg)(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam); -> �����Լ�������
private:
	LRESULT		OnPaint(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
	LRESULT		OnDestroy(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

public:
	C_MSG() = default;
	LRESULT OnMsg(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
	void Init(HINSTANCE hInstance);
};