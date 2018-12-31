// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_GenericItemInventory_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.ExpandToMaximizedHeight
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GenericItemInventory_C::ExpandToMaximizedHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.ExpandToMaximizedHeight");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.CollapseToMinimizedHeight
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GenericItemInventory_C::CollapseToMinimizedHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.CollapseToMinimizedHeight");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.GetMinimizedHeight
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Height                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GenericItemInventory_C::GetMinimizedHeight(float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.GetMinimizedHeight");

	struct
	{
		float                          Height;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Height != nullptr)
		*Height = params.Height;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.GetMinimizedPartial
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUI_GenericItemInventory_C::GetMinimizedPartial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.GetMinimizedPartial");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.GetMinimizedFull
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUI_GenericItemInventory_C::GetMinimizedFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.GetMinimizedFull");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.adjustPosition
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GenericItemInventory_C::adjustPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.adjustPosition");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.ToggleMinimizeFull
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GenericItemInventory_C::ToggleMinimizeFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.ToggleMinimizeFull");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.ToggleMinimizePartial
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GenericItemInventory_C::ToggleMinimizePartial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.ToggleMinimizePartial");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.OnMinimizeFullClicked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GenericItemInventory_C::OnMinimizeFullClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.OnMinimizeFullClicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.OnMinimizePartialClicked
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GenericItemInventory_C::OnMinimizePartialClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.OnMinimizePartialClicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.OnCloseClicked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GenericItemInventory_C::OnCloseClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.OnCloseClicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_GenericItemInventory_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.OnHeaderDoubleClickEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               Geometry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_GenericItemInventory_C::OnHeaderDoubleClickEvent(const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.OnHeaderDoubleClickEvent");

	struct
	{
		struct FGeometry               Geometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.Geometry = Geometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_GenericItemInventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GenericItemInventory_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.UpdateVisualsFromItem
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GenericItemInventory_C::UpdateVisualsFromItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.UpdateVisualsFromItem");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.RefreshOccupiedSlotsAndMassVisuals
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_GenericItemInventory_C::RefreshOccupiedSlotsAndMassVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.RefreshOccupiedSlotsAndMassVisuals");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.RefreshSize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GenericItemInventory_C::RefreshSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.RefreshSize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.SetResizableWindowParentSlot
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UCanvasPanelSlot*        PanelSlot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_GenericItemInventory_C::SetResizableWindowParentSlot(class UCanvasPanelSlot* PanelSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.SetResizableWindowParentSlot");

	struct
	{
		class UCanvasPanelSlot*        PanelSlot;
	} params;

	params.PanelSlot = PanelSlot;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.ChangeTitle
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_GenericItemInventory_C::ChangeTitle(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.ChangeTitle");

	struct
	{
		struct FText                   Title;
	} params;

	params.Title = Title;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.BndEvt__MinimizeFullButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_GenericItemInventory_C::BndEvt__MinimizeFullButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.BndEvt__MinimizeFullButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.BndEvt__MinimizePartialButton_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_GenericItemInventory_C::BndEvt__MinimizePartialButton_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.BndEvt__MinimizePartialButton_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_GenericItemInventory_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.UpdateImageFromBodySlot
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EBodySlot                      bodySlot                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GenericItemInventory_C::UpdateImageFromBodySlot(EBodySlot bodySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.UpdateImageFromBodySlot");

	struct
	{
		EBodySlot                      bodySlot;
	} params;

	params.bodySlot = bodySlot;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.SetMinimizationState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           minimizePartial                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           minimizeFull                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GenericItemInventory_C::SetMinimizationState(bool minimizePartial, bool minimizeFull)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.SetMinimizationState");

	struct
	{
		bool                           minimizePartial;
		bool                           minimizeFull;
	} params;

	params.minimizePartial = minimizePartial;
	params.minimizeFull = minimizeFull;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.BlinkItemContainer
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GenericItemInventory_C::BlinkItemContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.BlinkItemContainer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.SaveLayout
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UAttributeMapInterface> Attributes                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UUI_GenericItemInventory_C::SaveLayout(const TScriptInterface<class UAttributeMapInterface>& Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.SaveLayout");

	struct
	{
		TScriptInterface<class UAttributeMapInterface> Attributes;
	} params;

	params.Attributes = Attributes;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.DeferredLoadLayout
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           minimizedPartial               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           minimizedFully                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GenericItemInventory_C::DeferredLoadLayout(bool minimizedPartial, bool minimizedFully)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.DeferredLoadLayout");

	struct
	{
		bool                           minimizedPartial;
		bool                           minimizedFully;
	} params;

	params.minimizedPartial = minimizedPartial;
	params.minimizedFully = minimizedFully;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericItemInventory.UI_GenericItemInventory_C.ExecuteUbergraph_UI_GenericItemInventory
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GenericItemInventory_C::ExecuteUbergraph_UI_GenericItemInventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericItemInventory.UI_GenericItemInventory_C.ExecuteUbergraph_UI_GenericItemInventory");

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
