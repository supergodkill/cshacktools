#include "hook.h"
#include "Windows.h"
void InitD3d()
{
    //找hWnd
    g_hWnd = FindWindowA("Direct3DWindowClass", NULL);
    //创建d3d9设备对象
    g_Direct3D9 = Direct3DCreate9(D3D_SDK_VERSION);

    //初始化d3d9结构体参数
    memset(&g_present, 0, sizeof(g_present));
    g_present.Windowed = true;
    g_present.SwapEffect = D3DSWAPEFFECT_DISCARD;
    g_present.BackBufferFormat = D3DFMT_UNKNOWN;
    g_present.EnableAutoDepthStencil = true;
    g_present.AutoDepthStencilFormat = D3DFMT_D16;
    //将g_present传入下面的设备
    HRESULT result = g_Direct3D9->CreateDevice(
        D3DADAPTER_DEFAULT,
        D3DDEVTYPE_HAL,
        g_hWnd,
        D3DCREATE_SOFTWARE_VERTEXPROCESSING,
        &g_present,
        &g_pd3dDevice
    );
    if (FAILED(result))
    {
        // 处理创建 Direct3D9 设备失败的情况
        g_Direct3D9->Release();
        g_Direct3D9 = NULL;
        return;
    }
}
