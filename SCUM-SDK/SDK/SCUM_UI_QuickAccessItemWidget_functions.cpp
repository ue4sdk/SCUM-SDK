// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_QuickAccessItemWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetItemSize
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               itemSize                       (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UUI_QuickAccessItemWidget_C::GetItemSize(struct FVector2D* itemSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetItemSize");

	struct
	{
		struct FVector2D               itemSize;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (itemSize != nullptr)
		*itemSize = params.itemSize;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetImageBrush
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             imageBrush                     (CPF_Parm, CPF_OutParm)

void UUI_QuickAccessItemWidget_C::GetImageBrush(struct FSlateBrush* imageBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetImageBrush");

	struct
	{
		struct FSlateBrush             imageBrush;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (imageBrush != nullptr)
		*imageBrush = params.imageBrush;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.On__imageWidget_MouseButtonDown_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_QuickAccessItemWidget_C::On__imageWidget_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.On__imageWidget_MouseButtonDown_1");

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


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.OnDragDetected
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UDragDropOperation*      Operation                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_QuickAccessItemWidget_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.OnDragDetected");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
	} params;

	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	UObject::ProcessEvent(fn, &params);

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.SetItemSlotNumber
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            itemSlotNumber                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_QuickAccessItemWidget_C::SetItemSlotNumber(int itemSlotNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.SetItemSlotNumber");

	struct
	{
		int                            itemSlotNumber;
	} params;

	params.itemSlotNumber = itemSlotNumber;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ActivateNormalColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_QuickAccessItemWidget_C::ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ActivateNormalColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ActivateAlarmColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_QuickAccessItemWidget_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ActivateAlarmColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetItemSlotNumber
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_QuickAccessItemWidget_C::GetItemSlotNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetItemSlotNumber");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.SetTextColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            TextColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UUI_QuickAccessItemWidget_C::SetTextColor(const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.SetTextColor");

	struct
	{
		struct FLinearColor            TextColor;
	} params;

	params.TextColor = TextColor;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_QuickAccessItemWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.OnDragLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_QuickAccessItemWidget_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.OnDragLeave");

	struct
	{
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
	} params;

	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ExecuteUbergraph_UI_QuickAccessItemWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_QuickAccessItemWidget_C::ExecuteUbergraph_UI_QuickAccessItemWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ExecuteUbergraph_UI_QuickAccessItemWidget");

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
