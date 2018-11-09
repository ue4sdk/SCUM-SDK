// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_TabModeTab_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_TabModeTab.UI_TabModeTab_C.GetIsActive
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_TabModeTab_C::GetIsActive(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTab.UI_TabModeTab_C.GetIsActive");

	struct
	{
		bool                           IsActive;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsActive != nullptr)
		*IsActive = params.IsActive;
}


// Function UI_TabModeTab.UI_TabModeTab_C.OnClick
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_TabModeTab_C::OnClick(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTab.UI_TabModeTab_C.OnClick");

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


// Function UI_TabModeTab.UI_TabModeTab_C.SetIsActive
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_TabModeTab_C::SetIsActive(bool active)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTab.UI_TabModeTab_C.SetIsActive");

	struct
	{
		bool                           active;
	} params;

	params.active = active;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_TabModeTab.UI_TabModeTab_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_TabModeTab_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTab.UI_TabModeTab_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_TabModeTab.UI_TabModeTab_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_TabModeTab_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTab.UI_TabModeTab_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_TabModeTab.UI_TabModeTab_C.ExecuteUbergraph_UI_TabModeTab
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_TabModeTab_C::ExecuteUbergraph_UI_TabModeTab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTab.UI_TabModeTab_C.ExecuteUbergraph_UI_TabModeTab");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_TabModeTab.UI_TabModeTab_C.Clicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_TabModeTab_C::Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTab.UI_TabModeTab_C.Clicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
