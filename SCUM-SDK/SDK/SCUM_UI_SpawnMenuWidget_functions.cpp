// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_SpawnMenuWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSpawnTag
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   spawnTag                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_SpawnMenuWidget_C::GetSpawnTag(struct FName* spawnTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSpawnTag");

	struct
	{
		struct FName                   spawnTag;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (spawnTag != nullptr)
		*spawnTag = params.spawnTag;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSectorSelectorVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_SpawnMenuWidget_C::GetSectorSelectorVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSectorSelectorVisibility");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateOptions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_SpawnMenuWidget_C::UpdateOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateOptions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_RemainingFPText_ColorAndOpacity
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateColor UUI_SpawnMenuWidget_C::Get_RemainingFPText_ColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_RemainingFPText_ColorAndOpacity");

	struct
	{
		struct FSlateColor             ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_CurrentFPText_ColorAndOpacity
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateColor UUI_SpawnMenuWidget_C::Get_CurrentFPText_ColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_CurrentFPText_ColorAndOpacity");

	struct
	{
		struct FSlateColor             ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_RemainingFPText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_SpawnMenuWidget_C::Get_RemainingFPText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_RemainingFPText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_CurrentFPText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_SpawnMenuWidget_C::Get_CurrentFPText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_CurrentFPText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_TotalPriceText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_SpawnMenuWidget_C::Get_TotalPriceText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_TotalPriceText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateCurrentFP
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_SpawnMenuWidget_C::UpdateCurrentFP()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateCurrentFP");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateTotalPrice
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_SpawnMenuWidget_C::UpdateTotalPrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateTotalPrice");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.SelectionValid
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Valid                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_SpawnMenuWidget_C::SelectionValid(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.SelectionValid");

	struct
	{
		bool                           Valid;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSelectedLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_SpawnMenuWidget_C::GetSelectedLocation(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSelectedLocation");

	struct
	{
		int                            Index;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Index != nullptr)
		*Index = params.Index;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.SelectLocation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_SpawnChoiceWidget_C* Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_SpawnMenuWidget_C::SelectLocation(class UUI_SpawnChoiceWidget_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.SelectLocation");

	struct
	{
		class UUI_SpawnChoiceWidget_C* Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__RandomLocation_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UUI_SpawnChoiceWidget_C* _this                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_SpawnMenuWidget_C::BndEvt__RandomLocation_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature(class UUI_SpawnChoiceWidget_C* _this)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__RandomLocation_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature");

	struct
	{
		class UUI_SpawnChoiceWidget_C* _this;
	} params;

	params._this = _this;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__ShelterLocation_K2Node_ComponentBoundEvent_41_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UUI_SpawnChoiceWidget_C* _this                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_SpawnMenuWidget_C::BndEvt__ShelterLocation_K2Node_ComponentBoundEvent_41_OnClicked__DelegateSignature(class UUI_SpawnChoiceWidget_C* _this)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__ShelterLocation_K2Node_ComponentBoundEvent_41_OnClicked__DelegateSignature");

	struct
	{
		class UUI_SpawnChoiceWidget_C* _this;
	} params;

	params._this = _this;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__SquadLocation_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UUI_SpawnChoiceWidget_C* _this                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_SpawnMenuWidget_C::BndEvt__SquadLocation_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature(class UUI_SpawnChoiceWidget_C* _this)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__SquadLocation_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature");

	struct
	{
		class UUI_SpawnChoiceWidget_C* _this;
	} params;

	params._this = _this;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_SpawnMenuWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__SectorLocation_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UUI_SpawnChoiceWidget_C* _this                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_SpawnMenuWidget_C::BndEvt__SectorLocation_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature(class UUI_SpawnChoiceWidget_C* _this)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__SectorLocation_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature");

	struct
	{
		class UUI_SpawnChoiceWidget_C* _this;
	} params;

	params._this = _this;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.ExecuteUbergraph_UI_SpawnMenuWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_SpawnMenuWidget_C::ExecuteUbergraph_UI_SpawnMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.ExecuteUbergraph_UI_SpawnMenuWidget");

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
