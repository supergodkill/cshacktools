#include "header.h"

#ifndef __InitD3d_H__

typedef HRESULT(WINAPI* Reset_t)(LPDIRECT3DDEVICE9, D3DPRESENT_PARAMETERS*);
typedef long(__stdcall* EndScene_t)(LPDIRECT3DDEVICE9);
typedef LRESULT(__stdcall* WndProc_t)(const HWND, UINT, WPARAM, LPARAM);

//≥ı ºªØd3d9
IDirect3D9* g_Direct3D9 = NULL;
IDirect3DDevice9* g_pd3dDevice = NULL;
D3DPRESENT_PARAMETERS g_present;
HWND g_hWnd = NULL;

Reset_t oReset;
EndScene_t oEndScene;

#endif // !__InitD3d_H__


