
#include "api.h"

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    C_API::createApi();
    C_API::getApi()->init(hInstance);
    C_API::getApi()->updateMsg();
    C_API::releaseApi();
}

