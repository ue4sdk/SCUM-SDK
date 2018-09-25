// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Sicknesses_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sicknesses.Sicknesses_C.HasContentSizeChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            oldSicknessCount               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            newSicknessCount               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           contentSizeChanged             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USicknesses_C::HasContentSizeChanged(int oldSicknessCount, int newSicknessCount, bool* contentSizeChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.HasContentSizeChanged");

	struct
	{
		int                            oldSicknessCount;
		int                            newSicknessCount;
		bool                           contentSizeChanged;
	} params;

	params.oldSicknessCount = oldSicknessCount;
	params.newSicknessCount = newSicknessCount;

	UObject::ProcessEvent(fn, &params);

	if (contentSizeChanged != nullptr)
		*contentSizeChanged = params.contentSizeChanged;
}


// Function Sicknesses.Sicknesses_C.CheckForAlarms
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            previousSicknessCount          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            sicknessCount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USicknesses_C::CheckForAlarms(int previousSicknessCount, int sicknessCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.CheckForAlarms");

	struct
	{
		int                            previousSicknessCount;
		int                            sicknessCount;
	} params;

	params.previousSicknessCount = previousSicknessCount;
	params.sicknessCount = sicknessCount;

	UObject::ProcessEvent(fn, &params);
}


// Function Sicknesses.Sicknesses_C.UpdateSicknessCount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USicknesses_C::UpdateSicknessCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.UpdateSicknessCount");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Sicknesses.Sicknesses_C.SicknessToText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class USickness*               sicknessRef                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   SicknessName                   (CPF_Parm, CPF_OutParm)
// struct FText                   sicknessState                  (CPF_Parm, CPF_OutParm)
// struct FText                   sicknessPhase                  (CPF_Parm, CPF_OutParm)

void USicknesses_C::SicknessToText(class USickness* sicknessRef, struct FText* SicknessName, struct FText* sicknessState, struct FText* sicknessPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.SicknessToText");

	struct
	{
		class USickness*               sicknessRef;
		struct FText                   SicknessName;
		struct FText                   sicknessState;
		struct FText                   sicknessPhase;
	} params;

	params.sicknessRef = sicknessRef;

	UObject::ProcessEvent(fn, &params);

	if (SicknessName != nullptr)
		*SicknessName = params.SicknessName;
	if (sicknessState != nullptr)
		*sicknessState = params.sicknessState;
	if (sicknessPhase != nullptr)
		*sicknessPhase = params.sicknessPhase;
}


// Function Sicknesses.Sicknesses_C.FillSicknessLine
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UParameterLine_C*        sicknessLineRef                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class USickness*               Sickness                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USicknesses_C::FillSicknessLine(class UParameterLine_C* sicknessLineRef, class USickness* Sickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.FillSicknessLine");

	struct
	{
		class UParameterLine_C*        sicknessLineRef;
		class USickness*               Sickness;
	} params;

	params.sicknessLineRef = sicknessLineRef;
	params.Sickness = Sickness;

	UObject::ProcessEvent(fn, &params);
}


// Function Sicknesses.Sicknesses_C.UpdateSicknessLine
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USicknesses_C::UpdateSicknessLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.UpdateSicknessLine");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Sicknesses.Sicknesses_C.CreateSicknessLine
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USickness*               sicknessRef                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UParameterLine_C*        sicknessParameterLine          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void USicknesses_C::CreateSicknessLine(class USickness* sicknessRef, class UParameterLine_C** sicknessParameterLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.CreateSicknessLine");

	struct
	{
		class USickness*               sicknessRef;
		class UParameterLine_C*        sicknessParameterLine;
	} params;

	params.sicknessRef = sicknessRef;

	UObject::ProcessEvent(fn, &params);

	if (sicknessParameterLine != nullptr)
		*sicknessParameterLine = params.sicknessParameterLine;
}


// Function Sicknesses.Sicknesses_C.ShowSickness
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               Visibility                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USicknesses_C::ShowSickness(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.ShowSickness");

	struct
	{
		ESlateVisibility               Visibility;
	} params;

	params.Visibility = Visibility;

	UObject::ProcessEvent(fn, &params);
}


// Function Sicknesses.Sicknesses_C.InitSicknesses
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USicknesses_C::InitSicknesses()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.InitSicknesses");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Sicknesses.Sicknesses_C.AddSicknessLine
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UParameterLine_C*        sicknessLineRef                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void USicknesses_C::AddSicknessLine(class UParameterLine_C* sicknessLineRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.AddSicknessLine");

	struct
	{
		class UParameterLine_C*        sicknessLineRef;
	} params;

	params.sicknessLineRef = sicknessLineRef;

	UObject::ProcessEvent(fn, &params);
}


// Function Sicknesses.Sicknesses_C.CreateSicknessLineFromText
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SicknessName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   SicknessTextValue              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   SicknessMaxValue               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UParameterLine_C*        sicknessLine                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void USicknesses_C::CreateSicknessLineFromText(const struct FText& SicknessName, const struct FText& SicknessTextValue, const struct FText& SicknessMaxValue, class UParameterLine_C** sicknessLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.CreateSicknessLineFromText");

	struct
	{
		struct FText                   SicknessName;
		struct FText                   SicknessTextValue;
		struct FText                   SicknessMaxValue;
		class UParameterLine_C*        sicknessLine;
	} params;

	params.SicknessName = SicknessName;
	params.SicknessTextValue = SicknessTextValue;
	params.SicknessMaxValue = SicknessMaxValue;

	UObject::ProcessEvent(fn, &params);

	if (sicknessLine != nullptr)
		*sicknessLine = params.sicknessLine;
}


// Function Sicknesses.Sicknesses_C.GetSicknesses
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class USickness*>       ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class USickness*> USicknesses_C::GetSicknesses()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.GetSicknesses");

	struct
	{
		TArray<class USickness*>       ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Sicknesses.Sicknesses_C.SetSicknessCount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            sicknessCountToSet             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USicknesses_C::SetSicknessCount(int sicknessCountToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.SetSicknessCount");

	struct
	{
		int                            sicknessCountToSet;
	} params;

	params.sicknessCountToSet = sicknessCountToSet;

	UObject::ProcessEvent(fn, &params);
}


// Function Sicknesses.Sicknesses_C.ClearSicknessLines
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USicknesses_C::ClearSicknessLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.ClearSicknessLines");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Sicknesses.Sicknesses_C.CountSicknesses
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            numberOfSicknesses             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USicknesses_C::CountSicknesses(int* numberOfSicknesses)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.CountSicknesses");

	struct
	{
		int                            numberOfSicknesses;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (numberOfSicknesses != nullptr)
		*numberOfSicknesses = params.numberOfSicknesses;
}


// Function Sicknesses.Sicknesses_C.HasSicknessCountChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           sicknessCountChanged           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USicknesses_C::HasSicknessCountChanged(bool* sicknessCountChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.HasSicknessCountChanged");

	struct
	{
		bool                           sicknessCountChanged;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (sicknessCountChanged != nullptr)
		*sicknessCountChanged = params.sicknessCountChanged;
}


// Function Sicknesses.Sicknesses_C.UpdateSicknesses
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USicknesses_C::UpdateSicknesses()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.UpdateSicknesses");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Sicknesses.Sicknesses_C.GetTitleText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText USicknesses_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.GetTitleText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Sicknesses.Sicknesses_C.GetDefaultTitle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (CPF_Parm, CPF_OutParm)

void USicknesses_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.GetDefaultTitle");

	struct
	{
		struct FText                   defaultTitle;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function Sicknesses.Sicknesses_C.SelectCustomColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void USicknesses_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.SelectCustomColor");

	struct
	{
		struct FLinearColor            Color;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Color != nullptr)
		*Color = params.Color;
}


// Function Sicknesses.Sicknesses_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USicknesses_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Sicknesses.Sicknesses_C.OnMinimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USicknesses_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.OnMinimize");

	struct
	{
		bool                           shouldMinimize;
	} params;

	params.shouldMinimize = shouldMinimize;

	UObject::ProcessEvent(fn, &params);
}


// Function Sicknesses.Sicknesses_C.OnPrisonerSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USicknesses_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.OnPrisonerSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Sicknesses.Sicknesses_C.UpdateContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USicknesses_C::UpdateContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.UpdateContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Sicknesses.Sicknesses_C.SicknessEmergedShouldActivateAlarm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USicknesses_C::SicknessEmergedShouldActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.SicknessEmergedShouldActivateAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Sicknesses.Sicknesses_C.SicknessGoneShouldDeactivateAlarm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USicknesses_C::SicknessGoneShouldDeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.SicknessGoneShouldDeactivateAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Sicknesses.Sicknesses_C.ExecuteUbergraph_Sicknesses
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USicknesses_C::ExecuteUbergraph_Sicknesses(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.ExecuteUbergraph_Sicknesses");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function Sicknesses.Sicknesses_C.AlarmOffSicknessesEventDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USicknesses_C::AlarmOffSicknessesEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.AlarmOffSicknessesEventDispatcher__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Sicknesses.Sicknesses_C.AlarmOnSicknessesEventDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USicknesses_C::AlarmOnSicknessesEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.AlarmOnSicknessesEventDispatcher__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
