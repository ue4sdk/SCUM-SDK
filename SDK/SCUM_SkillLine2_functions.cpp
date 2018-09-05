// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_SkillLine2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SkillLine2.SkillLine2_C.UpdateSkill2
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESkillLevel                    skillLevel                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          skillPoints                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 skillCaption                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// struct FText                   maxValueText                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void USkillLine2_C::UpdateSkill2(ESkillLevel skillLevel, float skillPoints, const struct FString& skillCaption, const struct FText& maxValueText)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.UpdateSkill2");

	struct
	{
		ESkillLevel                    skillLevel;
		float                          skillPoints;
		struct FString                 skillCaption;
		struct FText                   maxValueText;
	} params;

	params.skillLevel = skillLevel;
	params.skillPoints = skillPoints;
	params.skillCaption = skillCaption;
	params.maxValueText = maxValueText;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillLine2.SkillLine2_C.SetMaxSkillValueText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   maxValueText                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void USkillLine2_C::SetMaxSkillValueText(const struct FText& maxValueText)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.SetMaxSkillValueText");

	struct
	{
		struct FText                   maxValueText;
	} params;

	params.maxValueText = maxValueText;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillLine2.SkillLine2_C.SkilLevelToMaxSkillValueText
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESkillLevel                    Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   MaxValue                       (CPF_Parm, CPF_OutParm)

void USkillLine2_C::SkilLevelToMaxSkillValueText(ESkillLevel Selection, struct FText* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.SkilLevelToMaxSkillValueText");

	struct
	{
		ESkillLevel                    Selection;
		struct FText                   MaxValue;
	} params;

	params.Selection = Selection;

	UObject::ProcessEvent(fn, &params);

	if (MaxValue != nullptr)
		*MaxValue = params.MaxValue;
}


// Function SkillLine2.SkillLine2_C.SetSkillValueText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ValueText                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void USkillLine2_C::SetSkillValueText(const struct FText& ValueText)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.SetSkillValueText");

	struct
	{
		struct FText                   ValueText;
	} params;

	params.ValueText = ValueText;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillLine2.SkillLine2_C.UpdateSkill
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESkillLevel                    skillLevel                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          skillPoints                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 skillCaption                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void USkillLine2_C::UpdateSkill(ESkillLevel skillLevel, float skillPoints, const struct FString& skillCaption)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.UpdateSkill");

	struct
	{
		ESkillLevel                    skillLevel;
		float                          skillPoints;
		struct FString                 skillCaption;
	} params;

	params.skillLevel = skillLevel;
	params.skillPoints = skillPoints;
	params.skillCaption = skillCaption;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillLine2.SkillLine2_C.SetAlarmColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void USkillLine2_C::SetAlarmColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.SetAlarmColor");

	struct
	{
		struct FLinearColor            Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillLine2.SkillLine2_C.GetValueTextBlock
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void USkillLine2_C::GetValueTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.GetValueTextBlock");

	struct
	{
		class UTextBlock*              textBox;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function SkillLine2.SkillLine2_C.SetColorOfMaxValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void USkillLine2_C::SetColorOfMaxValue(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.SetColorOfMaxValue");

	struct
	{
		struct FSlateColor             Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillLine2.SkillLine2_C.SetColorOfValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void USkillLine2_C::SetColorOfValue(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.SetColorOfValue");

	struct
	{
		struct FSlateColor             Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillLine2.SkillLine2_C.SetColorOfParameterName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void USkillLine2_C::SetColorOfParameterName(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.SetColorOfParameterName");

	struct
	{
		struct FSlateColor             Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillLine2.SkillLine2_C.SetColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void USkillLine2_C::SetColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.SetColor");

	struct
	{
		struct FLinearColor            Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillLine2.SkillLine2_C.GetMaxSkillValueTextBlock
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void USkillLine2_C::GetMaxSkillValueTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.GetMaxSkillValueTextBlock");

	struct
	{
		class UTextBlock*              textBox;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function SkillLine2.SkillLine2_C.GetSkillNameTextBlock
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void USkillLine2_C::GetSkillNameTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.GetSkillNameTextBlock");

	struct
	{
		class UTextBlock*              textBox;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function SkillLine2.SkillLine2_C.GetSkillNameText
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   skillNameText                  (CPF_Parm, CPF_OutParm)

void USkillLine2_C::GetSkillNameText(struct FText* skillNameText)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.GetSkillNameText");

	struct
	{
		struct FText                   skillNameText;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (skillNameText != nullptr)
		*skillNameText = params.skillNameText;
}


// Function SkillLine2.SkillLine2_C.SetSkillName
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   skillName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void USkillLine2_C::SetSkillName(const struct FText& skillName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.SetSkillName");

	struct
	{
		struct FText                   skillName;
	} params;

	params.skillName = skillName;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillLine2.SkillLine2_C.GetTitleText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText USkillLine2_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.GetTitleText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SkillLine2.SkillLine2_C.OnMouseButtonDownOnMinimizeParameterLine
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply USkillLine2_C::OnMouseButtonDownOnMinimizeParameterLine(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.OnMouseButtonDownOnMinimizeParameterLine");

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


// Function SkillLine2.SkillLine2_C.GetDefaultTitle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (CPF_Parm, CPF_OutParm)

void USkillLine2_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.GetDefaultTitle");

	struct
	{
		struct FText                   defaultTitle;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function SkillLine2.SkillLine2_C.SelectCustomColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void USkillLine2_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.SelectCustomColor");

	struct
	{
		struct FLinearColor            Color;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Color != nullptr)
		*Color = params.Color;
}


// Function SkillLine2.SkillLine2_C.OnMinimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillLine2_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.OnMinimize");

	struct
	{
		bool                           shouldMinimize;
	} params;

	params.shouldMinimize = shouldMinimize;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillLine2.SkillLine2_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USkillLine2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillLine2.SkillLine2_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void USkillLine2_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillLine2.SkillLine2_C.OnPercentageChanged
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillLine2_C::OnPercentageChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.OnPercentageChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillLine2.SkillLine2_C.ExecuteUbergraph_SkillLine2
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillLine2_C::ExecuteUbergraph_SkillLine2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillLine2.SkillLine2_C.ExecuteUbergraph_SkillLine2");

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
