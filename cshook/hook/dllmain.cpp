// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "HookInit/header.h"
#include "HookInit/hook.h"



BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        //创建线程
        ::CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)InitD3d, NULL, NULL, NULL);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

