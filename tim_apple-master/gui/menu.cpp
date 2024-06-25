#include "menu.hpp"
#include "Windows.h"
#include "../features/entry.hpp"
#include "../util/config.hpp"


void imGuiMenu::setStyle() {
	// Setting styles
	ImGuiStyle* style = &ImGui::GetStyle();

	// Sizes
	style->FramePadding = ImVec2(5,5);
	style->FrameBorderSize = 1.f;
	style->FrameRounding = 0.f;

	style->WindowPadding = ImVec2(6, 6);
	
	style->GrabRounding = 0.f;
	style->GrabMinSize = 20.f;

	style->ButtonTextAlign = ImVec2(0.5, 0.5);

	style->ItemSpacing = ImVec2(9,4);

	// Colour setup
	ImColor darkGrey = ImColor(29, 31, 31, 255);
	ImColor lightGrey = ImColor(38, 42, 43, 255);
	ImColor lightGreyTrans = ImColor(38, 42, 43, 175);

	ImColor darkBlue = ImColor(52, 98, 237, 255);
	ImColor lightBlue = ImColor(78, 139, 246, 255);

	// Colours
	style->Colors[ImGuiCol_FrameBg] = lightGrey;
	style->Colors[ImGuiCol_FrameBgHovered] = darkGrey;
	style->Colors[ImGuiCol_FrameBgActive] = darkGrey;

	style->Colors[ImGuiCol_TitleBgActive] = darkBlue;
	style->Colors[ImGuiCol_TitleBgCollapsed] = lightGreyTrans;

	style->Colors[ImGuiCol_ChildBg] = darkGrey;

	style->Colors[ImGuiCol_MenuBarBg] = lightGrey;
	style->Colors[ImGuiCol_WindowBg] = lightGrey;
	
	style->Colors[ImGuiCol_CheckMark] = darkBlue;

	style->Colors[ImGuiCol_Button] = darkBlue;
	style->Colors[ImGuiCol_ButtonHovered] = lightBlue;

	style->Colors[ImGuiCol_SliderGrab] = darkBlue;
	style->Colors[ImGuiCol_SliderGrabActive] = lightBlue;

	style->Colors[ImGuiCol_ResizeGrip] = darkBlue;
	style->Colors[ImGuiCol_ResizeGripHovered] = lightBlue;

	style->Colors[ImGuiCol_HeaderHovered] = darkBlue;
	style->Colors[ImGuiCol_HeaderActive] = lightBlue;
}


void imGuiMenu::verticalSplitter(float width,float height) {
	ImGui::SameLine();
	ImGui::InvisibleButton("vsplitter", ImVec2(8.0f, height));
	if (ImGui::IsItemActive())
		width += ImGui::GetIO().MouseDelta.x;
	ImGui::SameLine();
}


void imGuiMenu::horizontalSplitter(float height) {
	ImGui::InvisibleButton("hsplitter", ImVec2(-1, 8.0f));
	if (ImGui::IsItemActive())
		height += ImGui::GetIO().MouseDelta.y;
}


void imGuiMenu::espRender() {
	if (tabCount == 1) {

		ImGui::BeginChild("Features", ImVec2(imGuiMenu::widthSeparatorInt, imGuiMenu::heightSeparatorInt), true);
		ImGui::PushFont(imGuiMenu::titleText);
		ImGui::Text(u8"选项");
		ImGui::PopFont();
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"透视", &espConf.state);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"人物方框", &espConf.boundBox);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"人物姓名", &espConf.isPawnName);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"武器名称", &espConf.isPawnGun);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"血量显示", &espConf.isHealthBar);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"绘制骨骼", &espConf.skeleton);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"绘制关节", &espConf.joint);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"距离显示", &espConf.distance);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"射线", &espConf.snapLines);
		ImGui::EndChild();

		verticalSplitter(imGuiMenu::widthSeparatorInt, imGuiMenu::heightSeparatorInt);

		ImGui::BeginChild("Feature options", ImVec2(0, imGuiMenu::heightSeparatorInt), true);
		ImGui::PushFont(imGuiMenu::titleText);
		ImGui::Text(u8"功能选项");
		ImGui::PopFont();
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::PushFont(imGuiMenu::subTitleText);
		ImGui::Text(u8"主要选项");
		ImGui::PopFont();
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"能见度", &espConf.checkSpotted);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::PushFont(imGuiMenu::subTitleText);
		ImGui::Text(u8"健康选项");
		ImGui::PopFont();
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"打击血量", &espConf.hpCounter);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::PushFont(imGuiMenu::subTitleText);
		ImGui::Text(u8"方框选项");
		ImGui::PopFont();
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"颜色填充", &espConf.filledBox);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::SliderFloat("Fill alpha", &espConf.filledBoxAlpha, 0.f, 1.f);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::SliderFloat(u8"宽度", &espConf.width, 1.f, 5.f);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::SliderFloat(u8"厚度", &espConf.boundBoxThickness, 1.f, 3.f);
		ImGui::EndChild();

		horizontalSplitter(HEIGHT);

		ImGui::BeginChild("Colours", ImVec2(0, 0), true);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::PushFont(imGuiMenu::titleText);
		ImGui::Text(u8"颜色");
		ImGui::PopFont();
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::ColorEdit3(u8"方框被发现", (float*)&espConf.spottedColours);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::ColorEdit3(u8"方框未被发现", (float*)&espConf.notSpottedColours);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::ColorEdit3(u8"颜色", (float*)&espConf.attributeColours);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::ColorEdit3(u8"角色颜色", (float*)&espConf.cornerColours);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::ColorEdit3(u8"骨架颜色", (float*)&espConf.skeletonColours);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::ColorEdit3(u8"关节颜色", (float*)&espConf.jointColours);
		ImGui::EndChild();
	}
}

void imGuiMenu::aimRender() {
	if (tabCount == 2) {

		ImGui::BeginChild(u8"自瞄", ImVec2(imGuiMenu::widthSeparatorInt, imGuiMenu::heightSeparatorInt), true);
		ImGui::PushFont(imGuiMenu::titleText);
		ImGui::Text(u8"自瞄");
		ImGui::PopFont();
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"自瞄", &aimConf.state);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"圆圈范围锁定", &aimConf.fovCircle);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"能见度检查", &aimConf.checkSpotted);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::SliderFloat(u8"圆圈范围", &aimConf.fov, 1.f, 25.f);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::SliderFloat(u8"平滑度", &aimConf.smoothing, 1.f, 5.f);
		ImGui::EndChild();

		verticalSplitter(imGuiMenu::widthSeparatorInt, imGuiMenu::heightSeparatorInt);

		ImGui::BeginChild("Misc", ImVec2(0, imGuiMenu::heightSeparatorInt), true);
		ImGui::PushFont(imGuiMenu::titleText);
		ImGui::Text(u8"其他瞄准函数");
		ImGui::PopFont();
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"后坐力控制", &aimConf.rcs);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"玩家锁定", &aimConf.playerLock);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"机器人触发器", &aimConf.trigger);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"触发热键", &aimConf.isHotTrigger);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		if (aimConf.isHotTrigger) {
			if (ImGui::BeginCombo(u8"热键", aimConf.hotKey[aimConf.hotSelectTrigger].c_str())) {
				for (int i = 0; i < aimConf.hotKey.size(); ++i) {
					const bool isSelected = (aimConf.hotTrigger == i);

					if (ImGui::Selectable(aimConf.hotKey[i].c_str(), isSelected)) {
						aimConf.hotSelectTrigger = i;
					}

					if (isSelected) {
						ImGui::SetItemDefaultFocus();
					}
				}
				ImGui::EndCombo();
			}
		}
		ImGui::EndChild();

		horizontalSplitter(HEIGHT);

		ImGui::BeginChild(u8"打击部分", ImVec2(0, 0), true);
		ImGui::PushFont(imGuiMenu::titleText);
		ImGui::Text(u8"打击部分");
		ImGui::PopFont();
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		if (ImGui::BeginCombo(u8"锁定部位", aimConf.bones[aimConf.boneSelect].c_str())) {
			for (int i = 0; i < aimConf.bones.size(); ++i) {
				const bool isSelected = (aimConf.bone == i);

				if (ImGui::Selectable(aimConf.bones[i].c_str(), isSelected)) {
					aimConf.boneSelect = i;
				}

				if (isSelected) {
					ImGui::SetItemDefaultFocus();
				}
			}
			ImGui::EndCombo();
		}
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"自瞄热键", &aimConf.isHotAim);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		if (aimConf.isHotAim) {
			if (ImGui::BeginCombo(u8"热键", aimConf.hotKey[aimConf.hotSelectAim].c_str())) {
				for (int i = 0; i < aimConf.hotKey.size(); ++i) {
					const bool isSelected = (aimConf.hotAim == i);

					if (ImGui::Selectable(aimConf.hotKey[i].c_str(), isSelected)) {
						aimConf.hotSelectAim = i;
					}

					if (isSelected) {
						ImGui::SetItemDefaultFocus();
					}
				}
				ImGui::EndCombo();
			}
		}
		ImGui::EndChild();
	}
}

void imGuiMenu::miscRender() {
	if (tabCount == 3) {
		ImGui::BeginChild(u8"运动", ImVec2(0, imGuiMenu::heightSeparatorInt), true);
		ImGui::PushFont(imGuiMenu::titleText);
		ImGui::Text(u8"跳跃");
		ImGui::PopFont();
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"兔子跳", &miscConf.bunnyHop);
		ImGui::EndChild();

		horizontalSplitter(HEIGHT);

		ImGui::BeginChild(u8"视觉", ImVec2(0, 0), true);
		ImGui::PushFont(imGuiMenu::titleText);
		ImGui::Text(u8"视觉");
		ImGui::PopFont();
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"屏蔽闪光弹", &miscConf.flash);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"掉落物品显示", &miscConf.itemESP);
		ImGui::EndChild();
	}
}

void imGuiMenu::aboutMeRender() {
	if (tabCount == 4) {
		ImGui::BeginChild(u8"关于本项目", ImVec2(0, 0), true);
		if (ImGui::Button(u8"购买链接"))
		{
			// 使用系统默认浏览器打开指定的URL
			ShellExecute(NULL, L"open", L"https://m.tb.cn/h.gUwFMvV?tk=T2EpWBt8fIF", NULL, NULL, SW_SHOWNORMAL);
		}
		//if (ImGui::Button(u8"下载链接"))
		//{
		//	// 使用系统默认浏览器打开指定的URL
		//	ShellExecute(NULL, L"open", L"https://example.com/download", NULL, NULL, SW_SHOWNORMAL);
		//}
		ImGui::Text(u8"只维护一个版本如果版本1个月内再次更新免费维护");
		ImGui::Text(u8"也可以购买驱动版本和ai版本");
		ImGui::Text(u8"驱动版本更新快，win11不可用");
		ImGui::Text(u8"ai版本全系统可用，但需要的配置更高");

		ImGui::EndChild();
	}
}
void imGuiMenu::program_exit() {
	if (tabCount == 5) {
		ImGui::BeginChild(u8"使用方法",ImVec2(0, imGuiMenu::heightSeparatorInt), true);
		ImGui::Text(u8"进入游戏");
		ImGui::Text(u8"打开本程序");
		ImGui::Text(u8"按INS显示或隐藏程序");
		ImGui::Text(u8"按end键关闭程序");
		ImGui::EndChild();
	}
}
void imGuiMenu::menuBar() {
	ImGui::BeginMenuBar();

	if (ImGui::MenuItem(u8"透视")) tabCount = 1;
	if (ImGui::MenuItem(u8"瞄准")) tabCount = 2;
	if (ImGui::MenuItem(u8"杂项")) tabCount = 3;
	if (ImGui::MenuItem(u8"关于")) tabCount = 4;
	if (ImGui::MenuItem(u8"使用方法")) tabCount = 5;
	
	ImGui::EndMenuBar();
}


void imGuiMenu::renderMenu(bool state) {
	ImGui::PushFont(normalText);
	ImGui::SetNextWindowSize({WIDTH,HEIGHT}, ImGuiCond_FirstUseEver);
	ImGui::Begin("cs2-hack", &state, ImGuiWindowFlags_MenuBar);
	
	// Config
	setStyle();
	menuBar();

	// Menus
	espRender();
	aimRender();
	miscRender();
	aboutMeRender();
	program_exit();
	ImGui::PopFont();
	ImGui::End();
}

