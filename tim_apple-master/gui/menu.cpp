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
		ImGui::Text(u8"ѡ��");
		ImGui::PopFont();
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"͸��", &espConf.state);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"���﷽��", &espConf.boundBox);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"��������", &espConf.isPawnName);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"��������", &espConf.isPawnGun);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"Ѫ����ʾ", &espConf.isHealthBar);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"���ƹ���", &espConf.skeleton);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"���ƹؽ�", &espConf.joint);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"������ʾ", &espConf.distance);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"����", &espConf.snapLines);
		ImGui::EndChild();

		verticalSplitter(imGuiMenu::widthSeparatorInt, imGuiMenu::heightSeparatorInt);

		ImGui::BeginChild("Feature options", ImVec2(0, imGuiMenu::heightSeparatorInt), true);
		ImGui::PushFont(imGuiMenu::titleText);
		ImGui::Text(u8"����ѡ��");
		ImGui::PopFont();
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::PushFont(imGuiMenu::subTitleText);
		ImGui::Text(u8"��Ҫѡ��");
		ImGui::PopFont();
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"�ܼ���", &espConf.checkSpotted);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::PushFont(imGuiMenu::subTitleText);
		ImGui::Text(u8"����ѡ��");
		ImGui::PopFont();
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"���Ѫ��", &espConf.hpCounter);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::PushFont(imGuiMenu::subTitleText);
		ImGui::Text(u8"����ѡ��");
		ImGui::PopFont();
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"��ɫ���", &espConf.filledBox);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::SliderFloat("Fill alpha", &espConf.filledBoxAlpha, 0.f, 1.f);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::SliderFloat(u8"���", &espConf.width, 1.f, 5.f);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::SliderFloat(u8"���", &espConf.boundBoxThickness, 1.f, 3.f);
		ImGui::EndChild();

		horizontalSplitter(HEIGHT);

		ImGui::BeginChild("Colours", ImVec2(0, 0), true);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::PushFont(imGuiMenu::titleText);
		ImGui::Text(u8"��ɫ");
		ImGui::PopFont();
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::ColorEdit3(u8"���򱻷���", (float*)&espConf.spottedColours);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::ColorEdit3(u8"����δ������", (float*)&espConf.notSpottedColours);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::ColorEdit3(u8"��ɫ", (float*)&espConf.attributeColours);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::ColorEdit3(u8"��ɫ��ɫ", (float*)&espConf.cornerColours);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::ColorEdit3(u8"�Ǽ���ɫ", (float*)&espConf.skeletonColours);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::ColorEdit3(u8"�ؽ���ɫ", (float*)&espConf.jointColours);
		ImGui::EndChild();
	}
}

void imGuiMenu::aimRender() {
	if (tabCount == 2) {

		ImGui::BeginChild(u8"����", ImVec2(imGuiMenu::widthSeparatorInt, imGuiMenu::heightSeparatorInt), true);
		ImGui::PushFont(imGuiMenu::titleText);
		ImGui::Text(u8"����");
		ImGui::PopFont();
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"����", &aimConf.state);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"ԲȦ��Χ����", &aimConf.fovCircle);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"�ܼ��ȼ��", &aimConf.checkSpotted);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::SliderFloat(u8"ԲȦ��Χ", &aimConf.fov, 1.f, 25.f);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::SliderFloat(u8"ƽ����", &aimConf.smoothing, 1.f, 5.f);
		ImGui::EndChild();

		verticalSplitter(imGuiMenu::widthSeparatorInt, imGuiMenu::heightSeparatorInt);

		ImGui::BeginChild("Misc", ImVec2(0, imGuiMenu::heightSeparatorInt), true);
		ImGui::PushFont(imGuiMenu::titleText);
		ImGui::Text(u8"������׼����");
		ImGui::PopFont();
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"����������", &aimConf.rcs);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"�������", &aimConf.playerLock);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"�����˴�����", &aimConf.trigger);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"�����ȼ�", &aimConf.isHotTrigger);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		if (aimConf.isHotTrigger) {
			if (ImGui::BeginCombo(u8"�ȼ�", aimConf.hotKey[aimConf.hotSelectTrigger].c_str())) {
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

		ImGui::BeginChild(u8"�������", ImVec2(0, 0), true);
		ImGui::PushFont(imGuiMenu::titleText);
		ImGui::Text(u8"�������");
		ImGui::PopFont();
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		if (ImGui::BeginCombo(u8"������λ", aimConf.bones[aimConf.boneSelect].c_str())) {
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
		ImGui::Checkbox(u8"�����ȼ�", &aimConf.isHotAim);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		if (aimConf.isHotAim) {
			if (ImGui::BeginCombo(u8"�ȼ�", aimConf.hotKey[aimConf.hotSelectAim].c_str())) {
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
		ImGui::BeginChild(u8"�˶�", ImVec2(0, imGuiMenu::heightSeparatorInt), true);
		ImGui::PushFont(imGuiMenu::titleText);
		ImGui::Text(u8"��Ծ");
		ImGui::PopFont();
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"������", &miscConf.bunnyHop);
		ImGui::EndChild();

		horizontalSplitter(HEIGHT);

		ImGui::BeginChild(u8"�Ӿ�", ImVec2(0, 0), true);
		ImGui::PushFont(imGuiMenu::titleText);
		ImGui::Text(u8"�Ӿ�");
		ImGui::PopFont();
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"�������ⵯ", &miscConf.flash);
		ImGui::Dummy(ImVec2(0.0f, textSeparatorSpace));
		ImGui::Checkbox(u8"������Ʒ��ʾ", &miscConf.itemESP);
		ImGui::EndChild();
	}
}

void imGuiMenu::aboutMeRender() {
	if (tabCount == 4) {
		ImGui::BeginChild(u8"���ڱ���Ŀ", ImVec2(0, 0), true);
		if (ImGui::Button(u8"��������"))
		{
			// ʹ��ϵͳĬ���������ָ����URL
			ShellExecute(NULL, L"open", L"https://m.tb.cn/h.gUwFMvV?tk=T2EpWBt8fIF", NULL, NULL, SW_SHOWNORMAL);
		}
		//if (ImGui::Button(u8"��������"))
		//{
		//	// ʹ��ϵͳĬ���������ָ����URL
		//	ShellExecute(NULL, L"open", L"https://example.com/download", NULL, NULL, SW_SHOWNORMAL);
		//}
		ImGui::Text(u8"ֻά��һ���汾����汾1�������ٴθ������ά��");
		ImGui::Text(u8"Ҳ���Թ��������汾��ai�汾");
		ImGui::Text(u8"�����汾���¿죬win11������");
		ImGui::Text(u8"ai�汾ȫϵͳ���ã�����Ҫ�����ø���");

		ImGui::EndChild();
	}
}
void imGuiMenu::program_exit() {
	if (tabCount == 5) {
		ImGui::BeginChild(u8"ʹ�÷���",ImVec2(0, imGuiMenu::heightSeparatorInt), true);
		ImGui::Text(u8"������Ϸ");
		ImGui::Text(u8"�򿪱�����");
		ImGui::Text(u8"��INS��ʾ�����س���");
		ImGui::Text(u8"��end���رճ���");
		ImGui::EndChild();
	}
}
void imGuiMenu::menuBar() {
	ImGui::BeginMenuBar();

	if (ImGui::MenuItem(u8"͸��")) tabCount = 1;
	if (ImGui::MenuItem(u8"��׼")) tabCount = 2;
	if (ImGui::MenuItem(u8"����")) tabCount = 3;
	if (ImGui::MenuItem(u8"����")) tabCount = 4;
	if (ImGui::MenuItem(u8"ʹ�÷���")) tabCount = 5;
	
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

