#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_WindowsContent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WindowsContent.WindowsContent_C
// 0x0020 (0x0260 - 0x0240)
class UWindowsContent_C : public UCustomGUIWindow_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UCustomGUIWindow_C*                          _parentWindow;                                            // 0x0248(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UCustomGUIWindow_C*>                  _childrenWindows;                                         // 0x0250(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WindowsContent.WindowsContent_C");
		return ptr;
	}


	void GetChildrenWindows(TArray<class UCustomGUIWindow_C*>* childrenWidgets);
	void AddChildWindow(class UCustomGUIWindow_C* childWindowRef);
	void NotifyParentOnAlarmSwitchedOffOnContent();
	void NotifyParentOnAlarmRaisedOnContent();
	void NotifyParentOnWindowsContentSizeChanged();
	void SetParentWindow(class UCustomGUIWindow_C* parentWindowToSet);
	void GetParentWindow(class UCustomGUIWindow_C** parentWindow);
	void WindowContentSizeChanged();
	void ExecuteUbergraph_WindowsContent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
