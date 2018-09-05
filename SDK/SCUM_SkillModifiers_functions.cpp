// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_SkillModifiers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SkillModifiers.SkillModifiers_C.SetParentsForChildren
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillModifiers_C::SetParentsForChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SetParentsForChildren");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillModifiers.SkillModifiers_C.shouldAlarmBeOn
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           shouldAlarmBeOn                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillModifiers_C::shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.shouldAlarmBeOn");

	struct
	{
		bool                           shouldAlarmBeOn;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function SkillModifiers.SkillModifiers_C.UpdateParameterLines
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillModifiers_C::UpdateParameterLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.UpdateParameterLines");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillModifiers.SkillModifiers_C.SetPrisonerToMonitor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillModifiers_C::SetPrisonerToMonitor(class APrisoner* Prisoner, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SetPrisonerToMonitor");

	struct
	{
		class APrisoner*               Prisoner;
		bool                           Success;
	} params;

	params.Prisoner = Prisoner;

	UObject::ProcessEvent(fn, &params);

	if (Success != nullptr)
		*Success = params.Success;
}


// Function SkillModifiers.SkillModifiers_C.SetDefaultTitle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void USkillModifiers_C::SetDefaultTitle(const struct FText& defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SetDefaultTitle");

	struct
	{
		struct FText                   defaultTitle;
	} params;

	params.defaultTitle = defaultTitle;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillModifiers.SkillModifiers_C.SetContentVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               Visibility                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillModifiers_C::SetContentVisibility(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SetContentVisibility");

	struct
	{
		ESlateVisibility               Visibility;
	} params;

	params.Visibility = Visibility;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillModifiers.SkillModifiers_C.SetTextColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            TextColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void USkillModifiers_C::SetTextColor(const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SetTextColor");

	struct
	{
		struct FLinearColor            TextColor;
	} params;

	params.TextColor = TextColor;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillModifiers.SkillModifiers_C.SetTextColorOfVerticalBox
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPanelWidget*            verticalBoxRef                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FLinearColor            TextColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void USkillModifiers_C::SetTextColorOfVerticalBox(class UPanelWidget* verticalBoxRef, const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SetTextColorOfVerticalBox");

	struct
	{
		class UPanelWidget*            verticalBoxRef;
		struct FLinearColor            TextColor;
	} params;

	params.verticalBoxRef = verticalBoxRef;
	params.TextColor = TextColor;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillModifiers.SkillModifiers_C.GetTitleText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText USkillModifiers_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.GetTitleText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SkillModifiers.SkillModifiers_C.SetVerticalBoxContentVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UVerticalBox*            verticalBoxRef                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// ESlateVisibility               Visibility                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillModifiers_C::SetVerticalBoxContentVisibility(class UVerticalBox* verticalBoxRef, ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SetVerticalBoxContentVisibility");

	struct
	{
		class UVerticalBox*            verticalBoxRef;
		ESlateVisibility               Visibility;
	} params;

	params.verticalBoxRef = verticalBoxRef;
	params.Visibility = Visibility;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillModifiers.SkillModifiers_C.SetContentMinimized
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           minimized                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillModifiers_C::SetContentMinimized(bool minimized)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SetContentMinimized");

	struct
	{
		bool                           minimized;
	} params;

	params.minimized = minimized;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillModifiers.SkillModifiers_C.MinimizeContent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillModifiers_C::MinimizeContent(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.MinimizeContent");

	struct
	{
		bool                           shouldMinimize;
	} params;

	params.shouldMinimize = shouldMinimize;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillModifiers.SkillModifiers_C.GetDefaultTitle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (CPF_Parm, CPF_OutParm)

void USkillModifiers_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.GetDefaultTitle");

	struct
	{
		struct FText                   defaultTitle;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function SkillModifiers.SkillModifiers_C.SelectCustomColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void USkillModifiers_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SelectCustomColor");

	struct
	{
		struct FLinearColor            Color;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Color != nullptr)
		*Color = params.Color;
}


// Function SkillModifiers.SkillModifiers_C.OnMinimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillModifiers_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.OnMinimize");

	struct
	{
		bool                           shouldMinimize;
	} params;

	params.shouldMinimize = shouldMinimize;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillModifiers.SkillModifiers_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USkillModifiers_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillModifiers.SkillModifiers_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillModifiers_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillModifiers.SkillModifiers_C.OnPrisonerSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillModifiers_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.OnPrisonerSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillModifiers.SkillModifiers_C.AlarmOnWindowContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillModifiers_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.AlarmOnWindowContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillModifiers.SkillModifiers_C.AlarmOffWindowContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillModifiers_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.AlarmOffWindowContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillModifiers.SkillModifiers_C.ExecuteUbergraph_SkillModifiers
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillModifiers_C::ExecuteUbergraph_SkillModifiers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.ExecuteUbergraph_SkillModifiers");

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
