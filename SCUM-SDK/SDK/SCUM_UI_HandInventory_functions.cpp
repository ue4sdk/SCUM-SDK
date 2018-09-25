// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_HandInventory_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_HandInventory.UI_HandInventory_C.GetMinimizedHeight
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Height                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HandInventory_C::GetMinimizedHeight(float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.GetMinimizedHeight");

	struct
	{
		float                          Height;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Height != nullptr)
		*Height = params.Height;
}


// Function UI_HandInventory.UI_HandInventory_C.RefreshMaxMassAndSlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_HandInventory_C::RefreshMaxMassAndSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.RefreshMaxMassAndSlots");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_HandInventory.UI_HandInventory_C.ToggleMinimizePartial
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           adjustPosition                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HandInventory_C::ToggleMinimizePartial(bool adjustPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.ToggleMinimizePartial");

	struct
	{
		bool                           adjustPosition;
	} params;

	params.adjustPosition = adjustPosition;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_HandInventory.UI_HandInventory_C.GetMinimizedPartial
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUI_HandInventory_C::GetMinimizedPartial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.GetMinimizedPartial");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_HandInventory.UI_HandInventory_C.GetMinimizedFull
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUI_HandInventory_C::GetMinimizedFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.GetMinimizedFull");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_HandInventory.UI_HandInventory_C.ToggleMinimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           adjustPosition                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HandInventory_C::ToggleMinimize(bool adjustPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.ToggleMinimize");

	struct
	{
		bool                           adjustPosition;
	} params;

	params.adjustPosition = adjustPosition;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_HandInventory.UI_HandInventory_C.SetSize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           adjustPosition                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HandInventory_C::SetSize(bool adjustPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.SetSize");

	struct
	{
		bool                           adjustPosition;
	} params;

	params.adjustPosition = adjustPosition;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_HandInventory.UI_HandInventory_C.OnMinimizePartialClicked
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_HandInventory_C::OnMinimizePartialClicked(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.OnMinimizePartialClicked");

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


// Function UI_HandInventory.UI_HandInventory_C.OnMinimizeAllClicked
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_HandInventory_C::OnMinimizeAllClicked(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.OnMinimizeAllClicked");

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


// Function UI_HandInventory.UI_HandInventory_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_HandInventory_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_HandInventory.UI_HandInventory_C.UpdateDisplayValues
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  occupiedSlots                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          occupiedMass                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HandInventory_C::UpdateDisplayValues(unsigned char occupiedSlots, float occupiedMass)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.UpdateDisplayValues");

	struct
	{
		unsigned char                  occupiedSlots;
		float                          occupiedMass;
	} params;

	params.occupiedSlots = occupiedSlots;
	params.occupiedMass = occupiedMass;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_HandInventory.UI_HandInventory_C.UpdateImage
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HandInventory_C::UpdateImage(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.UpdateImage");

	struct
	{
		class UTexture2D*              Texture;
	} params;

	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_HandInventory.UI_HandInventory_C.SetMinimizeAndAdjustSize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           isMinimizedFull                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           isMinimizedPartial             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           adjustPosition                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HandInventory_C::SetMinimizeAndAdjustSize(bool isMinimizedFull, bool isMinimizedPartial, bool adjustPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.SetMinimizeAndAdjustSize");

	struct
	{
		bool                           isMinimizedFull;
		bool                           isMinimizedPartial;
		bool                           adjustPosition;
	} params;

	params.isMinimizedFull = isMinimizedFull;
	params.isMinimizedPartial = isMinimizedPartial;
	params.adjustPosition = adjustPosition;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_HandInventory.UI_HandInventory_C.RequestUpdateSize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_HandInventory_C::RequestUpdateSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.RequestUpdateSize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_HandInventory.UI_HandInventory_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HandInventory_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_HandInventory.UI_HandInventory_C.SetTitle
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_HandInventory_C::SetTitle(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.SetTitle");

	struct
	{
		struct FText                   Title;
	} params;

	params.Title = Title;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_HandInventory.UI_HandInventory_C.OnHeaderDoubleClickEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               Geometry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_HandInventory_C::OnHeaderDoubleClickEvent(const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.OnHeaderDoubleClickEvent");

	struct
	{
		struct FGeometry               Geometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.Geometry = Geometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_HandInventory.UI_HandInventory_C.RefreshSize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_HandInventory_C::RefreshSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.RefreshSize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_HandInventory.UI_HandInventory_C.SetGridVisibility
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               gridVisibility                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HandInventory_C::SetGridVisibility(ESlateVisibility gridVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.SetGridVisibility");

	struct
	{
		ESlateVisibility               gridVisibility;
	} params;

	params.gridVisibility = gridVisibility;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_HandInventory.UI_HandInventory_C.UpdateWithItem
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HandInventory_C::UpdateWithItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.UpdateWithItem");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_HandInventory.UI_HandInventory_C.SaveLayout
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UAttributeMapInterface> attributes                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UUI_HandInventory_C::SaveLayout(const TScriptInterface<class UAttributeMapInterface>& attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.SaveLayout");

	struct
	{
		TScriptInterface<class UAttributeMapInterface> attributes;
	} params;

	params.attributes = attributes;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_HandInventory.UI_HandInventory_C.LoadLayout
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UAttributeMapInterface> attributes                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UUI_HandInventory_C::LoadLayout(const TScriptInterface<class UAttributeMapInterface>& attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.LoadLayout");

	struct
	{
		TScriptInterface<class UAttributeMapInterface> attributes;
	} params;

	params.attributes = attributes;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_HandInventory.UI_HandInventory_C.ResetLayout
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_HandInventory_C::ResetLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.ResetLayout");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_HandInventory.UI_HandInventory_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_HandInventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_HandInventory.UI_HandInventory_C.ExecuteUbergraph_UI_HandInventory
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HandInventory_C::ExecuteUbergraph_UI_HandInventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventory.UI_HandInventory_C.ExecuteUbergraph_UI_HandInventory");

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
