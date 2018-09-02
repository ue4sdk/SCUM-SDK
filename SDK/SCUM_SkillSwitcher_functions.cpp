// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_SkillSwitcher_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SkillSwitcher.SkillSwitcher_C.IsDifferenceSignificant
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          referentValue                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          currentValue                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USkillSwitcher_C::IsDifferenceSignificant(float referentValue, float currentValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.IsDifferenceSignificant");

	struct
	{
		float                          referentValue;
		float                          currentValue;
		bool                           ReturnValue;
	} params;

	params.referentValue = referentValue;
	params.currentValue = currentValue;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SkillSwitcher.SkillSwitcher_C.RoundTo1DecPos
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          floatNum                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          floatTo1Dec                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillSwitcher_C::RoundTo1DecPos(float floatNum, float* floatTo1Dec)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.RoundTo1DecPos");

	struct
	{
		float                          floatNum;
		float                          floatTo1Dec;
	} params;

	params.floatNum = floatNum;

	UObject::ProcessEvent(fn, &params);

	if (floatTo1Dec != nullptr)
		*floatTo1Dec = params.floatTo1Dec;
}


// Function SkillSwitcher.SkillSwitcher_C.DeactivateIntelligenceAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillSwitcher_C::DeactivateIntelligenceAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.DeactivateIntelligenceAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.DeactivateDexterityAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillSwitcher_C::DeactivateDexterityAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.DeactivateDexterityAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.DeactivateConstitutionAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillSwitcher_C::DeactivateConstitutionAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.DeactivateConstitutionAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.DeactivateStrengthAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillSwitcher_C::DeactivateStrengthAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.DeactivateStrengthAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.InitReferentAttributeValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillSwitcher_C::InitReferentAttributeValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.InitReferentAttributeValues");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.SetParents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillSwitcher_C::SetParents()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.SetParents");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.shouldAlarmBeOn
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           shouldAlarmBeOn                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillSwitcher_C::shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.shouldAlarmBeOn");

	struct
	{
		bool                           shouldAlarmBeOn;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function SkillSwitcher.SkillSwitcher_C.CheckSkillIntelligenceAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          OldValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          NewValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillSwitcher_C::CheckSkillIntelligenceAlarm(float OldValue, float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.CheckSkillIntelligenceAlarm");

	struct
	{
		float                          OldValue;
		float                          NewValue;
	} params;

	params.OldValue = OldValue;
	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.CheckSkillDexterityAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          OldValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          NewValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillSwitcher_C::CheckSkillDexterityAlarm(float OldValue, float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.CheckSkillDexterityAlarm");

	struct
	{
		float                          OldValue;
		float                          NewValue;
	} params;

	params.OldValue = OldValue;
	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.CheckSkillConstitutionAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          OldValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          NewValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillSwitcher_C::CheckSkillConstitutionAlarm(float OldValue, float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.CheckSkillConstitutionAlarm");

	struct
	{
		float                          OldValue;
		float                          NewValue;
	} params;

	params.OldValue = OldValue;
	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.CheckSkillStrengthAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          OldValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          NewValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillSwitcher_C::CheckSkillStrengthAlarm(float OldValue, float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.CheckSkillStrengthAlarm");

	struct
	{
		float                          OldValue;
		float                          NewValue;
	} params;

	params.OldValue = OldValue;
	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.SetPrisonerToMonitorOnChildren
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillSwitcher_C::SetPrisonerToMonitorOnChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.SetPrisonerToMonitorOnChildren");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.UpdateAttributeLevels
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillSwitcher_C::UpdateAttributeLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.UpdateAttributeLevels");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.UpdateButtonBorderSizes
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillSwitcher_C::UpdateButtonBorderSizes()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.UpdateButtonBorderSizes");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.SaveButtonBorderXSizes
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillSwitcher_C::SaveButtonBorderXSizes()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.SaveButtonBorderXSizes");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.ResetXSizes
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillSwitcher_C::ResetXSizes()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.ResetXSizes");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.AdjustXSizes
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          sizeIncreaseX0                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          sizeIncreaseX1                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          sizeIncreaseX2                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          sizeIncreaseX3                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillSwitcher_C::AdjustXSizes(float sizeIncreaseX0, float sizeIncreaseX1, float sizeIncreaseX2, float sizeIncreaseX3)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.AdjustXSizes");

	struct
	{
		float                          sizeIncreaseX0;
		float                          sizeIncreaseX1;
		float                          sizeIncreaseX2;
		float                          sizeIncreaseX3;
	} params;

	params.sizeIncreaseX0 = sizeIncreaseX0;
	params.sizeIncreaseX1 = sizeIncreaseX1;
	params.sizeIncreaseX2 = sizeIncreaseX2;
	params.sizeIncreaseX3 = sizeIncreaseX3;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.AdjustButtonSizes
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillSwitcher_C::AdjustButtonSizes()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.AdjustButtonSizes");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.AdjustButtonPositions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillSwitcher_C::AdjustButtonPositions()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.AdjustButtonPositions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.HideButtonBorder
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillSwitcher_C::HideButtonBorder(int Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.HideButtonBorder");

	struct
	{
		int                            Selection;
	} params;

	params.Selection = Selection;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.ShowAllButtonBorders
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillSwitcher_C::ShowAllButtonBorders()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.ShowAllButtonBorders");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.SelectActiveSkillContent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillSwitcher_C::SelectActiveSkillContent(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.SelectActiveSkillContent");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.GetActiveSkillContent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class USkillsContent_C*        activeSkillContent             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void USkillSwitcher_C::GetActiveSkillContent(class USkillsContent_C** activeSkillContent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.GetActiveSkillContent");

	struct
	{
		class USkillsContent_C*        activeSkillContent;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (activeSkillContent != nullptr)
		*activeSkillContent = params.activeSkillContent;
}


// Function SkillSwitcher.SkillSwitcher_C.InitSkillContents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillSwitcher_C::InitSkillContents()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.InitSkillContents");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.InitSkillContentTypes
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillSwitcher_C::InitSkillContentTypes()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.InitSkillContentTypes");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.InitSkillContentsArray
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillSwitcher_C::InitSkillContentsArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.InitSkillContentsArray");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.GetSkillsCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            skillsCount                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillSwitcher_C::GetSkillsCount(int* skillsCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.GetSkillsCount");

	struct
	{
		int                            skillsCount;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (skillsCount != nullptr)
		*skillsCount = params.skillsCount;
}


// Function SkillSwitcher.SkillSwitcher_C.OnPrisonerSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillSwitcher_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.OnPrisonerSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillSwitcher_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USkillSwitcher_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.BndEvt__SkillTypeButton_0_K2Node_ComponentBoundEvent_575_OnClickedSkillTypeButton__DelegateSignature
// (FUNC_BlueprintEvent)

void USkillSwitcher_C::BndEvt__SkillTypeButton_0_K2Node_ComponentBoundEvent_575_OnClickedSkillTypeButton__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.BndEvt__SkillTypeButton_0_K2Node_ComponentBoundEvent_575_OnClickedSkillTypeButton__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.BndEvt__SkillTypeButton_1_K2Node_ComponentBoundEvent_581_OnClickedSkillTypeButton__DelegateSignature
// (FUNC_BlueprintEvent)

void USkillSwitcher_C::BndEvt__SkillTypeButton_1_K2Node_ComponentBoundEvent_581_OnClickedSkillTypeButton__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.BndEvt__SkillTypeButton_1_K2Node_ComponentBoundEvent_581_OnClickedSkillTypeButton__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.BndEvt__SkillTypeButton_2_K2Node_ComponentBoundEvent_588_OnClickedSkillTypeButton__DelegateSignature
// (FUNC_BlueprintEvent)

void USkillSwitcher_C::BndEvt__SkillTypeButton_2_K2Node_ComponentBoundEvent_588_OnClickedSkillTypeButton__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.BndEvt__SkillTypeButton_2_K2Node_ComponentBoundEvent_588_OnClickedSkillTypeButton__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.BndEvt__SkillTypeButton_3_K2Node_ComponentBoundEvent_596_OnClickedSkillTypeButton__DelegateSignature
// (FUNC_BlueprintEvent)

void USkillSwitcher_C::BndEvt__SkillTypeButton_3_K2Node_ComponentBoundEvent_596_OnClickedSkillTypeButton__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.BndEvt__SkillTypeButton_3_K2Node_ComponentBoundEvent_596_OnClickedSkillTypeButton__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.UpdateSkillsEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillSwitcher_C::UpdateSkillsEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.UpdateSkillsEvent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.ShouldActivateAlarm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillSwitcher_C::ShouldActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.ShouldActivateAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.ShouldDeactivateAlarm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillSwitcher_C::ShouldDeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.ShouldDeactivateAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.AlarmOnWindowContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillSwitcher_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.AlarmOnWindowContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.AlarmOffWindowContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillSwitcher_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.AlarmOffWindowContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillSwitcher.SkillSwitcher_C.ExecuteUbergraph_SkillSwitcher
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillSwitcher_C::ExecuteUbergraph_SkillSwitcher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSwitcher.SkillSwitcher_C.ExecuteUbergraph_SkillSwitcher");

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
