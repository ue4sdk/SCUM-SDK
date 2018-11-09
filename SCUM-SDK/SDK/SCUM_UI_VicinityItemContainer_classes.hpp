#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_VicinityItemContainer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_VicinityItemContainer.UI_VicinityItemContainer_C
// 0x0011 (0x02A1 - 0x0290)
class UUI_VicinityItemContainer_C : public UVicinityItemContainerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UResizableWindow_C*                          ResizableWindow;                                          // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	bool                                               _isMinimized;                                             // 0x02A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass UI_VicinityItemContainer.UI_VicinityItemContainer_C");
		return ptr;
	}


	void InitVicinityItemContainer();
	void SetParentHUD(class UHUD_C* parentHUD);
	void SetTitle(const struct FText& titleToSet);
	void Construct();
	void SaveLayout(const TScriptInterface<class UAttributeMapInterface>& Attributes);
	void LoadLayout(const TScriptInterface<class UAttributeMapInterface>& Attributes);
	void DeferredLoadLayout();
	void ResetLayout();
	void ExecuteUbergraph_UI_VicinityItemContainer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
