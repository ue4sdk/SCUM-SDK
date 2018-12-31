// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CraftingInfoSecondIteration_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CraftingInfoSecondIteration.UI_CraftingInfoSecondIteration_C.Init
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   itemCDO                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CraftingInfoSecondIteration_C::Init(class AItem* itemCDO)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingInfoSecondIteration.UI_CraftingInfoSecondIteration_C.Init");

	struct
	{
		class AItem*                   itemCDO;
	} params;

	params.itemCDO = itemCDO;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingInfoSecondIteration.UI_CraftingInfoSecondIteration_C.SetCaptionAndDescription
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Caption                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   Description                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_CraftingInfoSecondIteration_C::SetCaptionAndDescription(const struct FText& Caption, const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingInfoSecondIteration.UI_CraftingInfoSecondIteration_C.SetCaptionAndDescription");

	struct
	{
		struct FText                   Caption;
		struct FText                   Description;
	} params;

	params.Caption = Caption;
	params.Description = Description;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingInfoSecondIteration.UI_CraftingInfoSecondIteration_C.ExecuteUbergraph_UI_CraftingInfoSecondIteration
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CraftingInfoSecondIteration_C::ExecuteUbergraph_UI_CraftingInfoSecondIteration(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingInfoSecondIteration.UI_CraftingInfoSecondIteration_C.ExecuteUbergraph_UI_CraftingInfoSecondIteration");

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
