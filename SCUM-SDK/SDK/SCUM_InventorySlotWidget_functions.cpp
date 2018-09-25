// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_InventorySlotWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InventorySlotWidget.InventorySlotWidget_C.OnDropDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UInventorySlotWidget_C*  Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UItemWidget_C*           Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UInventorySlotWidget_C::OnDropDispatcher__DelegateSignature(class UInventorySlotWidget_C* Slot, class UItemWidget_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventorySlotWidget.InventorySlotWidget_C.OnDropDispatcher__DelegateSignature");

	struct
	{
		class UInventorySlotWidget_C*  Slot;
		class UItemWidget_C*           Item;
	} params;

	params.Slot = Slot;
	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function InventorySlotWidget.InventorySlotWidget_C.OnDragLeaveDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UInventorySlotWidget_C*  Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UItemWidget_C*           Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UInventorySlotWidget_C::OnDragLeaveDispatcher__DelegateSignature(class UInventorySlotWidget_C* Slot, class UItemWidget_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventorySlotWidget.InventorySlotWidget_C.OnDragLeaveDispatcher__DelegateSignature");

	struct
	{
		class UInventorySlotWidget_C*  Slot;
		class UItemWidget_C*           Item;
	} params;

	params.Slot = Slot;
	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function InventorySlotWidget.InventorySlotWidget_C.OnDragEnterDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UInventorySlotWidget_C*  Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UItemWidget_C*           Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UInventorySlotWidget_C::OnDragEnterDispatcher__DelegateSignature(class UInventorySlotWidget_C* Slot, class UItemWidget_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventorySlotWidget.InventorySlotWidget_C.OnDragEnterDispatcher__DelegateSignature");

	struct
	{
		class UInventorySlotWidget_C*  Slot;
		class UItemWidget_C*           Item;
	} params;

	params.Slot = Slot;
	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
