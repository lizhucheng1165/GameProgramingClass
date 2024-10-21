// win32Api.cpp : 애플리케이션에 대한 진입점을 정의합니다.
//

#include "api.h"


LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);
    UNREFERENCED_PARAMETER(nCmdShow);

    C_API::CreateApi();
    C_API::GetApi()->Init(hInstance);
    C_API::GetApi()->UpdateMsg();
    C_API::ReleaseApi();
 

 
}



