// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_VicinitySecondIteration_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.OnDrop
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUI_VicinitySecondIteration_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.OnDrop");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
		bool                           ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.UpdateMinimizeIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_VicinitySecondIteration_C::UpdateMinimizeIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.UpdateMinimizeIcon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_VicinitySecondIteration_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_VicinitySecondIteration_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_VicinitySecondIteration_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.Minimize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_VicinitySecondIteration_C::Minimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.Minimize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.Maximize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_VicinitySecondIteration_C::Maximize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.Maximize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.AutoAddItem
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_VicinitySecondIteration_C::AutoAddItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.AutoAddItem");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.RemoveItem
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_VicinitySecondIteration_C::RemoveItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.RemoveItem");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.ItemPickedUpStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           pickedUp                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_VicinitySecondIteration_C::ItemPickedUpStateChanged(class AItem* Item, bool pickedUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.ItemPickedUpStateChanged");

	struct
	{
		class AItem*                   Item;
		bool                           pickedUp;
	} params;

	params.Item = Item;
	params.pickedUp = pickedUp;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.UpdateItemWidgetHighlightings
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_VicinitySecondIteration_C::UpdateItemWidgetHighlightings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.UpdateItemWidgetHighlightings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.OnItemDestroyed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_VicinitySecondIteration_C::OnItemDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.OnItemDestroyed");

	struct
	{
		class AActor*                  DestroyedActor;
	} params;

	params.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.ExecuteUbergraph_UI_VicinitySecondIteration
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_VicinitySecondIteration_C::ExecuteUbergraph_UI_VicinitySecondIteration(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.ExecuteUbergraph_UI_VicinitySecondIteration");

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
