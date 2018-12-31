// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_Tooltip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Tooltip.UI_Tooltip_C.GetItemDurability
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UUI_Tooltip_C::GetItemDurability()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Tooltip.UI_Tooltip_C.GetItemDurability");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_Tooltip.UI_Tooltip_C.InitFromCaptionAndDescription
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Caption                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Description                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_Tooltip_C::InitFromCaptionAndDescription(const struct FText& Caption, const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Tooltip.UI_Tooltip_C.InitFromCaptionAndDescription");

	struct
	{
		struct FText                   Caption;
		struct FText                   Description;
	} params;

	params.Caption = Caption;
	params.Description = Description;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Tooltip.UI_Tooltip_C.InitFromItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Tooltip_C::InitFromItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Tooltip.UI_Tooltip_C.InitFromItem");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
