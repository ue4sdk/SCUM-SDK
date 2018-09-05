// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ItemWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemWidget.ItemWidget_C.GetItemDurability
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UItemWidget_C::GetItemDurability()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.GetItemDurability");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ItemWidget.ItemWidget_C.GetContainerItemFillPercentage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UItemWidget_C::GetContainerItemFillPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.GetContainerItemFillPercentage");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ItemWidget.ItemWidget_C.GetWeaponZeroText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UItemWidget_C::GetWeaponZeroText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.GetWeaponZeroText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ItemWidget.ItemWidget_C.GetMassText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UItemWidget_C::GetMassText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.GetMassText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ItemWidget.ItemWidget_C.InitFromItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemWidget_C::InitFromItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.InitFromItem");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemWidget.ItemWidget_C.GetStacksCount
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UItemWidget_C::GetStacksCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.GetStacksCount");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ItemWidget.ItemWidget_C.GetItemHealthText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UItemWidget_C::GetItemHealthText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.GetItemHealthText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ItemWidget.ItemWidget_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UItemWidget_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.OnMouseButtonUp");

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


// Function ItemWidget.ItemWidget_C.GetItemTotalUsesText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UItemWidget_C::GetItemTotalUsesText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.GetItemTotalUsesText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ItemWidget.ItemWidget_C.GetItemUsesText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UItemWidget_C::GetItemUsesText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.GetItemUsesText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ItemWidget.ItemWidget_C.OnKeyChar
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FCharacterEvent         InCharacterEvent               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UItemWidget_C::OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.OnKeyChar");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FCharacterEvent         InCharacterEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InCharacterEvent = InCharacterEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ItemWidget.ItemWidget_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UItemWidget_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.OnMouseButtonDown");

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


// Function ItemWidget.ItemWidget_C.OnDragDetected
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UDragDropOperation*      Operation                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemWidget_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.OnDragDetected");

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


// Function ItemWidget.ItemWidget_C.OnDragCancelled
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemWidget_C::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.OnDragCancelled");

	struct
	{
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
	} params;

	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemWidget.ItemWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ItemWidget.ItemWidget_C.UpdateHighlightStatus
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemWidget_C::UpdateHighlightStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.UpdateHighlightStatus");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ItemWidget.ItemWidget_C.SetStacksCount
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            count                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemWidget_C::SetStacksCount(int count)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.SetStacksCount");

	struct
	{
		int                            count;
	} params;

	params.count = count;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemWidget.ItemWidget_C.BlinkItemContainer
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemWidget_C::BlinkItemContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.BlinkItemContainer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ItemWidget.ItemWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemWidget.ItemWidget_C.MarkAsWeaponWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemWidget_C::MarkAsWeaponWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.MarkAsWeaponWidget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ItemWidget.ItemWidget_C.ExecuteUbergraph_ItemWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemWidget_C::ExecuteUbergraph_ItemWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.ExecuteUbergraph_ItemWidget");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemWidget.ItemWidget_C.OnDragCancelledDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemWidget_C*           Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UItemWidget_C::OnDragCancelledDispatcher__DelegateSignature(class UItemWidget_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.OnDragCancelledDispatcher__DelegateSignature");

	struct
	{
		class UItemWidget_C*           Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemWidget.ItemWidget_C.OnDragStartDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemWidget_C*           Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UItemWidget_C::OnDragStartDispatcher__DelegateSignature(class UItemWidget_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.OnDragStartDispatcher__DelegateSignature");

	struct
	{
		class UItemWidget_C*           Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
