#include "hook.h"
#include "Windows.h"
void InitD3d()
{
    //��hWnd
    g_hWnd = FindWindowA("Direct3DWindowClass", NULL);
    //����d3d9�豸����
    g_Direct3D9 = Direct3DCreate9(D3D_SDK_VERSION);

    //��ʼ��d3d9�ṹ�����
    memset(&g_present, 0, sizeof(g_present));
    g_present.Windowed = true;
    g_present.SwapEffect = D3DSWAPEFFECT_DISCARD;
    g_present.BackBufferFormat = D3DFMT_UNKNOWN;
    g_present.EnableAutoDepthStencil = true;
    g_present.AutoDepthStencilFormat = D3DFMT_D16;
    //��g_present����������豸
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
        // ������ Direct3D9 �豸ʧ�ܵ����
        g_Direct3D9->Release();
        g_Direct3D9 = NULL;
        return;
    }
}
