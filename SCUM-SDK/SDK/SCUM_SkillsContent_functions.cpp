// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_SkillsContent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SkillsContent.SkillsContent_C.FilterSkillsBySkillType
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class USkill*>          allSkills                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<class USkill*>          skillsOfType                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void USkillsContent_C::FilterSkillsBySkillType(TArray<class USkill*>* allSkills, TArray<class USkill*>* skillsOfType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.FilterSkillsBySkillType");

	struct
	{
		TArray<class USkill*>          allSkills;
		TArray<class USkill*>          skillsOfType;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (allSkills != nullptr)
		*allSkills = params.allSkills;
	if (skillsOfType != nullptr)
		*skillsOfType = params.skillsOfType;
}


// Function SkillsContent.SkillsContent_C.SkillToText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class USkill*                  skillRef                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   skillNameText                  (CPF_Parm, CPF_OutParm)
// struct FText                   skillPointsText                (CPF_Parm, CPF_OutParm)
// struct FText                   maxValueText                   (CPF_Parm, CPF_OutParm)
// float                          percentage                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          skillLevelPercentage           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillsContent_C::SkillToText(class USkill* skillRef, struct FText* skillNameText, struct FText* skillPointsText, struct FText* maxValueText, float* percentage, float* skillLevelPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.SkillToText");

	struct
	{
		class USkill*                  skillRef;
		struct FText                   skillNameText;
		struct FText                   skillPointsText;
		struct FText                   maxValueText;
		float                          percentage;
		float                          skillLevelPercentage;
	} params;

	params.skillRef = skillRef;

	UObject::ProcessEvent(fn, &params);

	if (skillNameText != nullptr)
		*skillNameText = params.skillNameText;
	if (skillPointsText != nullptr)
		*skillPointsText = params.skillPointsText;
	if (maxValueText != nullptr)
		*maxValueText = params.maxValueText;
	if (percentage != nullptr)
		*percentage = params.percentage;
	if (skillLevelPercentage != nullptr)
		*skillLevelPercentage = params.skillLevelPercentage;
}


// Function SkillsContent.SkillsContent_C.IsSkillTypeMatching
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USkill*                  Skill                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           matchingSkill                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillsContent_C::IsSkillTypeMatching(class USkill* Skill, bool* matchingSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.IsSkillTypeMatching");

	struct
	{
		class USkill*                  Skill;
		bool                           matchingSkill;
	} params;

	params.Skill = Skill;

	UObject::ProcessEvent(fn, &params);

	if (matchingSkill != nullptr)
		*matchingSkill = params.matchingSkill;
}


// Function SkillsContent.SkillsContent_C.CountSkills
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class USkill*>          skillArray                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            skillCount                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillsContent_C::CountSkills(TArray<class USkill*>* skillArray, int* skillCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.CountSkills");

	struct
	{
		TArray<class USkill*>          skillArray;
		int                            skillCount;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (skillArray != nullptr)
		*skillArray = params.skillArray;
	if (skillCount != nullptr)
		*skillCount = params.skillCount;
}


// Function SkillsContent.SkillsContent_C.ClearSkillLinesContent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillsContent_C::ClearSkillLinesContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.ClearSkillLinesContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillsContent.SkillsContent_C.UpdateSkillsCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class USkill*>          skillArray                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void USkillsContent_C::UpdateSkillsCount(TArray<class USkill*>* skillArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.UpdateSkillsCount");

	struct
	{
		TArray<class USkill*>          skillArray;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (skillArray != nullptr)
		*skillArray = params.skillArray;
}


// Function SkillsContent.SkillsContent_C.HasSkillCountChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class USkill*>          skillArray                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USkillsContent_C::HasSkillCountChanged(TArray<class USkill*>* skillArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.HasSkillCountChanged");

	struct
	{
		TArray<class USkill*>          skillArray;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (skillArray != nullptr)
		*skillArray = params.skillArray;

	return params.ReturnValue;
}


// Function SkillsContent.SkillsContent_C.SkillToSkillText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 skillName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// float                          ExperiencePoints               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// ESkillLevel                    skillLevel                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   skillNameText                  (CPF_Parm, CPF_OutParm)
// struct FText                   skillPointsText                (CPF_Parm, CPF_OutParm)
// struct FText                   maxValueText                   (CPF_Parm, CPF_OutParm)
// float                          percentage                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          skillLevelPercentage           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillsContent_C::SkillToSkillText(const struct FString& skillName, float ExperiencePoints, ESkillLevel skillLevel, struct FText* skillNameText, struct FText* skillPointsText, struct FText* maxValueText, float* percentage, float* skillLevelPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.SkillToSkillText");

	struct
	{
		struct FString                 skillName;
		float                          ExperiencePoints;
		ESkillLevel                    skillLevel;
		struct FText                   skillNameText;
		struct FText                   skillPointsText;
		struct FText                   maxValueText;
		float                          percentage;
		float                          skillLevelPercentage;
	} params;

	params.skillName = skillName;
	params.ExperiencePoints = ExperiencePoints;
	params.skillLevel = skillLevel;

	UObject::ProcessEvent(fn, &params);

	if (skillNameText != nullptr)
		*skillNameText = params.skillNameText;
	if (skillPointsText != nullptr)
		*skillPointsText = params.skillPointsText;
	if (maxValueText != nullptr)
		*maxValueText = params.maxValueText;
	if (percentage != nullptr)
		*percentage = params.percentage;
	if (skillLevelPercentage != nullptr)
		*skillLevelPercentage = params.skillLevelPercentage;
}


// Function SkillsContent.SkillsContent_C.GetSkillsCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            count                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillsContent_C::GetSkillsCount(int* count)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.GetSkillsCount");

	struct
	{
		int                            count;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (count != nullptr)
		*count = params.count;
}


// Function SkillsContent.SkillsContent_C.GetAllSkills
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class USkill*>          ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class USkill*> USkillsContent_C::GetAllSkills()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.GetAllSkills");

	struct
	{
		TArray<class USkill*>          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SkillsContent.SkillsContent_C.FillSkillLine
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USkillLine2_C*           skillLine2Ref                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class USkill*                  Skill                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillsContent_C::FillSkillLine(class USkillLine2_C* skillLine2Ref, class USkill* Skill)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.FillSkillLine");

	struct
	{
		class USkillLine2_C*           skillLine2Ref;
		class USkill*                  Skill;
	} params;

	params.skillLine2Ref = skillLine2Ref;
	params.Skill = Skill;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillsContent.SkillsContent_C.CreateSkillLine
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   skillName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   skillValueText                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   maxSkillValueText              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// float                          percentage                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          skillLevelPercentage           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USkillLine2_C*           skillLineRef                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void USkillsContent_C::CreateSkillLine(const struct FText& skillName, const struct FText& skillValueText, const struct FText& maxSkillValueText, float percentage, float skillLevelPercentage, class USkillLine2_C** skillLineRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.CreateSkillLine");

	struct
	{
		struct FText                   skillName;
		struct FText                   skillValueText;
		struct FText                   maxSkillValueText;
		float                          percentage;
		float                          skillLevelPercentage;
		class USkillLine2_C*           skillLineRef;
	} params;

	params.skillName = skillName;
	params.skillValueText = skillValueText;
	params.maxSkillValueText = maxSkillValueText;
	params.percentage = percentage;
	params.skillLevelPercentage = skillLevelPercentage;

	UObject::ProcessEvent(fn, &params);

	if (skillLineRef != nullptr)
		*skillLineRef = params.skillLineRef;
}


// Function SkillsContent.SkillsContent_C.AddSkillLine
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USkillLine2_C*           skillLineRef                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void USkillsContent_C::AddSkillLine(class USkillLine2_C* skillLineRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.AddSkillLine");

	struct
	{
		class USkillLine2_C*           skillLineRef;
	} params;

	params.skillLineRef = skillLineRef;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillsContent.SkillsContent_C.SetSkillsCount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            count                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillsContent_C::SetSkillsCount(int count)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.SetSkillsCount");

	struct
	{
		int                            count;
	} params;

	params.count = count;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillsContent.SkillsContent_C.InitSkillsContentCountAndType
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESkillAttribute                skillType                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillsContent_C::InitSkillsContentCountAndType(ESkillAttribute skillType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.InitSkillsContentCountAndType");

	struct
	{
		ESkillAttribute                skillType;
	} params;

	params.skillType = skillType;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillsContent.SkillsContent_C.GetSkillType
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESkillAttribute                skillType                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillsContent_C::GetSkillType(ESkillAttribute* skillType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.GetSkillType");

	struct
	{
		ESkillAttribute                skillType;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (skillType != nullptr)
		*skillType = params.skillType;
}


// Function SkillsContent.SkillsContent_C.SetSkillType
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESkillAttribute                skillType                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillsContent_C::SetSkillType(ESkillAttribute skillType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.SetSkillType");

	struct
	{
		ESkillAttribute                skillType;
	} params;

	params.skillType = skillType;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillsContent.SkillsContent_C.UpdateSkills
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillsContent_C::UpdateSkills()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.UpdateSkills");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillsContent.SkillsContent_C.GetTitleText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText USkillsContent_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.GetTitleText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SkillsContent.SkillsContent_C.SetSkillsContentVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               Visibility                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillsContent_C::SetSkillsContentVisibility(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.SetSkillsContentVisibility");

	struct
	{
		ESlateVisibility               Visibility;
	} params;

	params.Visibility = Visibility;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillsContent.SkillsContent_C.GetDefaultTitle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (CPF_Parm, CPF_OutParm)

void USkillsContent_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.GetDefaultTitle");

	struct
	{
		struct FText                   defaultTitle;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function SkillsContent.SkillsContent_C.SelectCustomColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void USkillsContent_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.SelectCustomColor");

	struct
	{
		struct FLinearColor            Color;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Color != nullptr)
		*Color = params.Color;
}


// Function SkillsContent.SkillsContent_C.OnMinimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillsContent_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.OnMinimize");

	struct
	{
		bool                           shouldMinimize;
	} params;

	params.shouldMinimize = shouldMinimize;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillsContent.SkillsContent_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USkillsContent_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillsContent.SkillsContent_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillsContent_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillsContent.SkillsContent_C.UpdateContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillsContent_C::UpdateContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.UpdateContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillsContent.SkillsContent_C.OnPrisonerSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillsContent_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.OnPrisonerSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillsContent.SkillsContent_C.ExecuteUbergraph_SkillsContent
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillsContent_C::ExecuteUbergraph_SkillsContent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillsContent.SkillsContent_C.ExecuteUbergraph_SkillsContent");

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
