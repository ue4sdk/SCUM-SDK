// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CraftingComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CraftingComponent.UI_CraftingComponent_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_CraftingComponent_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.OnMouseButtonDown");

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


// Function UI_CraftingComponent.UI_CraftingComponent_C.SetRequiredCount
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            count                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CraftingComponent_C::SetRequiredCount(int count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.SetRequiredCount");

	struct
	{
		int                            count;
	} params;

	params.count = count;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingComponent.UI_CraftingComponent_C.SetOrderNumber
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            orderNumber                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CraftingComponent_C::SetOrderNumber(int orderNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.SetOrderNumber");

	struct
	{
		int                            orderNumber;
	} params;

	params.orderNumber = orderNumber;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingComponent.UI_CraftingComponent_C.SetIsOptional
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           isOptional                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CraftingComponent_C::SetIsOptional(bool isOptional)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.SetIsOptional");

	struct
	{
		bool                           isOptional;
	} params;

	params.isOptional = isOptional;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingComponent.UI_CraftingComponent_C.CreateTooltip
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_CraftingComponent_C::CreateTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.CreateTooltip");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingComponent.UI_CraftingComponent_C.SetIsAvailable
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsAvailable                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CraftingComponent_C::SetIsAvailable(bool IsAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.SetIsAvailable");

	struct
	{
		bool                           IsAvailable;
	} params;

	params.IsAvailable = IsAvailable;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingComponent.UI_CraftingComponent_C.SetIsTool
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsTool                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CraftingComponent_C::SetIsTool(bool IsTool)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.SetIsTool");

	struct
	{
		bool                           IsTool;
	} params;

	params.IsTool = IsTool;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingComponent.UI_CraftingComponent_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_CraftingComponent_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.OnMouseEnter");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingComponent.UI_CraftingComponent_C.ExecuteUbergraph_UI_CraftingComponent
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CraftingComponent_C::ExecuteUbergraph_UI_CraftingComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.ExecuteUbergraph_UI_CraftingComponent");

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
