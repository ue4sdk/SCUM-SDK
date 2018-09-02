#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_CustomGUIWindow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass CustomGUIWindow.CustomGUIWindow_C
// 0x0020 (0x0240 - 0x0220)
class UCustomGUIWindow_C : public UDesignableUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FText                                       _title;                                                   // 0x0228(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass CustomGUIWindow.CustomGUIWindow_C");
		return ptr;
	}


	void GetTitle(struct FText* Title);
	void SetTitle(const struct FText& titleToSet);
	void AlarmOnWindowContent();
	void AlarmOffWindowContent();
	void ExecuteUbergraph_CustomGUIWindow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
