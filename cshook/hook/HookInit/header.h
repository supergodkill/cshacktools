#ifndef PCH_H
#define PCH_H

// ���Ҫ�ڴ˴�Ԥ����ı�ͷ

#include <Windows.h>
#include "ImGui/imconfig.h"
#include "ImGui/imgui.h"
#include "ImGui/imgui_impl_dx9.h"
#include "ImGui/imgui_impl_win32.h"
#include "ImGui/imgui_internal.h"
#include "ImGui/imstb_rectpack.h"
#include "ImGui/imstb_textedit.h"
#include "ImGui/imstb_truetype.h"

//x86 detourslib
#include "detours/x86/detours.h"
#include "detours/x86/detver.h"
#pragma comment(lib,"detours/x86/detours.lib")

#include "d3d9.h"

#endif //PCH_H