// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_SelectionContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_SelectionContainer.UI_SelectionContainer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_SelectionContainer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SelectionContainer.UI_SelectionContainer_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SelectionContainer.UI_SelectionContainer_C.OnHeaderDoubleClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               Geometry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_SelectionContainer_C::OnHeaderDoubleClicked(const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SelectionContainer.UI_SelectionContainer_C.OnHeaderDoubleClicked");

	struct
	{
		struct FGeometry               Geometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.Geometry = Geometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_SelectionContainer.UI_SelectionContainer_C.BndEvt__MinimizeFullButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_SelectionContainer_C::BndEvt__MinimizeFullButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SelectionContainer.UI_SelectionContainer_C.BndEvt__MinimizeFullButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SelectionContainer.UI_SelectionContainer_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_SelectionContainer_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SelectionContainer.UI_SelectionContainer_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SelectionContainer.UI_SelectionContainer_C.ExecuteUbergraph_UI_SelectionContainer
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_SelectionContainer_C::ExecuteUbergraph_UI_SelectionContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SelectionContainer.UI_SelectionContainer_C.ExecuteUbergraph_UI_SelectionContainer");

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
