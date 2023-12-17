#include <windows.h>

int CALLBACK WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{
    MessageBoxW(NULL, L"Hello", L"My First GUI", MB_OK);

    return 0;
}
