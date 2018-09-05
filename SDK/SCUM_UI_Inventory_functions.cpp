// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_Inventory_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Inventory.UI_Inventory_C.RefreshMaxMassAndSlots
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Inventory_C::RefreshMaxMassAndSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.RefreshMaxMassAndSlots");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Inventory.UI_Inventory_C.ToggleMinimizePartial
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           adjustPosition                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Inventory_C::ToggleMinimizePartial(bool adjustPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.ToggleMinimizePartial");

	struct
	{
		bool                           adjustPosition;
	} params;

	params.adjustPosition = adjustPosition;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Inventory.UI_Inventory_C.GetMinimizedPartial
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUI_Inventory_C::GetMinimizedPartial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.GetMinimizedPartial");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_Inventory.UI_Inventory_C.GetMinimizedFull
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUI_Inventory_C::GetMinimizedFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.GetMinimizedFull");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_Inventory.UI_Inventory_C.ToggleMinimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           adjustPosition                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Inventory_C::ToggleMinimize(bool adjustPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.ToggleMinimize");

	struct
	{
		bool                           adjustPosition;
	} params;

	params.adjustPosition = adjustPosition;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Inventory.UI_Inventory_C.SetSize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           adjustPosition                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Inventory_C::SetSize(bool adjustPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.SetSize");

	struct
	{
		bool                           adjustPosition;
	} params;

	params.adjustPosition = adjustPosition;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Inventory.UI_Inventory_C.OnMinimizePartialClicked
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_Inventory_C::OnMinimizePartialClicked(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.OnMinimizePartialClicked");

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


// Function UI_Inventory.UI_Inventory_C.OnMinimizeAllClicked
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_Inventory_C::OnMinimizeAllClicked(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.OnMinimizeAllClicked");

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


// Function UI_Inventory.UI_Inventory_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_Inventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Inventory.UI_Inventory_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_Inventory_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Inventory.UI_Inventory_C.UpdateDisplayValues
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  occupiedSlots                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          occupiedMass                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Inventory_C::UpdateDisplayValues(unsigned char occupiedSlots, float occupiedMass)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.UpdateDisplayValues");

	struct
	{
		unsigned char                  occupiedSlots;
		float                          occupiedMass;
	} params;

	params.occupiedSlots = occupiedSlots;
	params.occupiedMass = occupiedMass;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Inventory.UI_Inventory_C.UpdateImage
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Inventory_C::UpdateImage(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.UpdateImage");

	struct
	{
		class UTexture2D*              Texture;
	} params;

	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Inventory.UI_Inventory_C.SetMinimizeAndAdjustSize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           isMinimizedFull                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           isMinimizedPartial             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           adjustPosition                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Inventory_C::SetMinimizeAndAdjustSize(bool isMinimizedFull, bool isMinimizedPartial, bool adjustPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.SetMinimizeAndAdjustSize");

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


// Function UI_Inventory.UI_Inventory_C.SetTitle
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_Inventory_C::SetTitle(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.SetTitle");

	struct
	{
		struct FText                   Title;
	} params;

	params.Title = Title;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Inventory.UI_Inventory_C.OnHeaderDoubleClickEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               Geometry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_Inventory_C::OnHeaderDoubleClickEvent(const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.OnHeaderDoubleClickEvent");

	struct
	{
		struct FGeometry               Geometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.Geometry = Geometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Inventory.UI_Inventory_C.RefreshSize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Inventory_C::RefreshSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.RefreshSize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Inventory.UI_Inventory_C.ExecuteUbergraph_UI_Inventory
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Inventory_C::ExecuteUbergraph_UI_Inventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.ExecuteUbergraph_UI_Inventory");

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
