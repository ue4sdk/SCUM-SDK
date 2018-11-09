#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_InventorySlotWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass InventorySlotWidget.InventorySlotWidget_C
// 0x0038 (0x0278 - 0x0240)
class UInventorySlotWidget_C : public UInventorySlotUserWidget
{
public:
	int                                                Width;                                                    // 0x0240(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Height;                                                   // 0x0244(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    OnDragEnterDispatcher;                                    // 0x0248(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDragLeaveDispatcher;                                    // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDropDispatcher;                                         // 0x0268(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass InventorySlotWidget.InventorySlotWidget_C");
		return ptr;
	}


	void OnDropDispatcher__DelegateSignature(class UInventorySlotWidget_C* Slot, class UItemWidget_C* Item);
	void OnDragLeaveDispatcher__DelegateSignature(class UInventorySlotWidget_C* Slot, class UItemWidget_C* Item);
	void OnDragEnterDispatcher__DelegateSignature(class UInventorySlotWidget_C* Slot, class UItemWidget_C* Item);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
