// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_MenuItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_MenuItem.UI_MenuItem_C.SetItemClassAndIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTexture2D*              Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_MenuItem_C::SetItemClassAndIcon(class UClass* Item, class UTexture2D* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuItem.UI_MenuItem_C.SetItemClassAndIcon");

	struct
	{
		class UClass*                  Item;
		class UTexture2D*              Icon;
	} params;

	params.Item = Item;
	params.Icon = Icon;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_MenuItem.UI_MenuItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_MenuItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuItem.UI_MenuItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_MenuItem.UI_MenuItem_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_MenuItem_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuItem.UI_MenuItem_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_MenuItem.UI_MenuItem_C.ExecuteUbergraph_UI_MenuItem
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_MenuItem_C::ExecuteUbergraph_UI_MenuItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuItem.UI_MenuItem_C.ExecuteUbergraph_UI_MenuItem");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_MenuItem.UI_MenuItem_C.OnClickedDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_MenuItem_C*          Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_MenuItem_C::OnClickedDispatcher__DelegateSignature(class UUI_MenuItem_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuItem.UI_MenuItem_C.OnClickedDispatcher__DelegateSignature");

	struct
	{
		class UUI_MenuItem_C*          Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
