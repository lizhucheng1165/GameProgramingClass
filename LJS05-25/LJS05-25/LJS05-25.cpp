// LJS05-25.cpp : 애플리케이션에 대한 진입점을 정의합니다.
//

#include "winApi.h"

// 이 코드 모듈에 포함된 함수의 선언을 전달합니다:
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);
    UNREFERENCED_PARAMETER(nCmdShow);

    //C_WINAPI cApi{};

    //cApi.Init(hInstance);
    //cApi.UpdateMsg();

    C_WINAPI::CreateApi();
    C_WINAPI::getApi()->Init(hInstance);
    C_WINAPI::getApi()->UpdateMsg();
    C_WINAPI::Release();

}




