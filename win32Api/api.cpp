#include "api.h"

C_API* C_API::m_pApi = nullptr;

LRESULT C_API::WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	return m_pApi->m_cMsg.OnMsg(hWnd , message , wParam, lParam);
}



void C_API::createApi()
{
    if (!m_pApi)
        m_pApi = new C_API{};
}

C_API* C_API::getApi()
{
	return m_pApi;
}

void C_API::releaseApi()
{
    if (m_pApi)
    {
        delete m_pApi;
        m_pApi = nullptr;
    }
}

bool C_API::init(HINSTANCE hInstance)
{
    m_hInstance = hInstance;
    m_cMsg.Init(m_hInstance);

    WNDCLASSEXW wcex = { sizeof(WNDCLASSEX) ,  CS_HREDRAW | CS_VREDRAW , WndProc , 0, 0, m_hInstance ,
                     LoadIcon(m_hInstance, MAKEINTRESOURCE(IDI_WIN32API))  , LoadCursor(nullptr, IDC_ARROW) ,(HBRUSH)(COLOR_WINDOW + 1) , 0  ,
                      L"winapi" , LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL)) };
    RegisterClassExW(&wcex);

    //윈도우 시작시부터 메세지처리가 들어가니 이 이전에 정리해야한다

    m_hWnd = CreateWindowW(L"winapi", nullptr, WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, m_hInstance, nullptr);

    if (!m_hWnd)
        return false;

    ShowWindow(m_hWnd, SW_SHOWDEFAULT);
    UpdateWindow(m_hWnd);

    return true;

}

void C_API::updateMsg()
{
    MSG msg{};
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
}
