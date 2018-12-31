#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CombinedInventory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_CombinedInventory.UI_CombinedInventory_C
// 0x0008 (0x0270 - 0x0268)
class UUI_CombinedInventory_C : public UCombinedInventoryWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0268(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass UI_CombinedInventory.UI_CombinedInventory_C");
		return ptr;
	}


	void Construct();
	void SaveLayout(const TScriptInterface<class UAttributeMapInterface>& Attributes);
	void LoadLayout(const TScriptInterface<class UAttributeMapInterface>& Attributes);
	void ResetLayout();
	void DeferredLoadLayout();
	void ExecuteUbergraph_UI_CombinedInventory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
