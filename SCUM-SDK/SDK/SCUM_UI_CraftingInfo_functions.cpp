// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CraftingInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CraftingInfo.UI_CraftingInfo_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_CraftingInfo_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingInfo.UI_CraftingInfo_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingInfo.UI_CraftingInfo_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_CraftingInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingInfo.UI_CraftingInfo_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingInfo.UI_CraftingInfo_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CraftingInfo_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingInfo.UI_CraftingInfo_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingInfo.UI_CraftingInfo_C.Init
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   itemCDO                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CraftingInfo_C::Init(class AItem* itemCDO)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingInfo.UI_CraftingInfo_C.Init");

	struct
	{
		class AItem*                   itemCDO;
	} params;

	params.itemCDO = itemCDO;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingInfo.UI_CraftingInfo_C.ExecuteUbergraph_UI_CraftingInfo
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CraftingInfo_C::ExecuteUbergraph_UI_CraftingInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingInfo.UI_CraftingInfo_C.ExecuteUbergraph_UI_CraftingInfo");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
