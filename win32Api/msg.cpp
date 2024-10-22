#include "msg.h"

void C_MSG::Init(HINSTANCE hInstance)
{
    m_hInstance = hInstance;

    m_arMsg[WM_PAINT] = &C_MSG::OnPaint;
    m_arMsg[WM_DESTROY] = &C_MSG::OnDestroy;
}

LRESULT C_MSG::OnPaint(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    PAINTSTRUCT ps;
    HDC hdc = BeginPaint(hWnd, &ps);
    EndPaint(hWnd, &ps);
    return 0;
}

LRESULT C_MSG::OnDestroy(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    PostQuitMessage(0);
    return 0;
}

LRESULT C_MSG::OnMsg(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    if (message >= WM_USER || !m_arMsg[message])
    {
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    
    return (this->*m_arMsg[message])(hWnd,message,wParam, lParam);
}

