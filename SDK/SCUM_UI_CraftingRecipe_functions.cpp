// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CraftingRecipe_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CraftingRecipe.UI_CraftingRecipe_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_CraftingRecipe_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingRecipe.UI_CraftingRecipe_C.OnMouseButtonDown");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetTooltipFromClass
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  itemClass                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CraftingRecipe_C::SetTooltipFromClass(class UClass* itemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetTooltipFromClass");

	struct
	{
		class UClass*                  itemClass;
	} params;

	params.itemClass = itemClass;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingRecipe.UI_CraftingRecipe_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_CraftingRecipe_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingRecipe.UI_CraftingRecipe_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetIsGrayedOut
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           isGrayedOut                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CraftingRecipe_C::SetIsGrayedOut(bool isGrayedOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetIsGrayedOut");

	struct
	{
		bool                           isGrayedOut;
	} params;

	params.isGrayedOut = isGrayedOut;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetAvailabilityState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// ERecipeAvailabilityState       State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CraftingRecipe_C::SetAvailabilityState(ERecipeAvailabilityState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetAvailabilityState");

	struct
	{
		ERecipeAvailabilityState       State;
	} params;

	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetIsSelected
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           isSelected                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CraftingRecipe_C::SetIsSelected(bool isSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetIsSelected");

	struct
	{
		bool                           isSelected;
	} params;

	params.isSelected = isSelected;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingRecipe.UI_CraftingRecipe_C.ExecuteUbergraph_UI_CraftingRecipe
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CraftingRecipe_C::ExecuteUbergraph_UI_CraftingRecipe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingRecipe.UI_CraftingRecipe_C.ExecuteUbergraph_UI_CraftingRecipe");

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
