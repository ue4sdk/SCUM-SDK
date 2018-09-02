// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CharacterCreationPanel1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.IsProfileNameInUse
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CharacterCreationPanel1_C::IsProfileNameInUse(const struct FString& Name, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.IsProfileNameInUse");

	struct
	{
		struct FString                 Name;
		bool                           Result;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.SetDefaultName
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::SetDefaultName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.SetDefaultName");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetInUseMsgVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_CharacterCreationPanel1_C::GetInUseMsgVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetInUseMsgVisibility");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.IsNameValid
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 characterName                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUI_CharacterCreationPanel1_C::IsNameValid(const struct FString& characterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.IsNameValid");

	struct
	{
		struct FString                 characterName;
		bool                           ReturnValue;
	} params;

	params.characterName = characterName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.Get_ButtonSwitchToCriminalRecord_bIsEnabled_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUI_CharacterCreationPanel1_C::Get_ButtonSwitchToCriminalRecord_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.Get_ButtonSwitchToCriminalRecord_bIsEnabled_1");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.RandomizeSkillsByAttribute
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESkillAttribute                Attribute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CharacterCreationPanel1_C::RandomizeSkillsByAttribute(ESkillAttribute Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.RandomizeSkillsByAttribute");

	struct
	{
		ESkillAttribute                Attribute;
	} params;

	params.Attribute = Attribute;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.PlayPrisonerEnteringSequence
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           backwards                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CharacterCreationPanel1_C::PlayPrisonerEnteringSequence(bool backwards)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.PlayPrisonerEnteringSequence");

	struct
	{
		bool                           backwards;
	} params;

	params.backwards = backwards;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.RandomizeSkillsPanel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::RandomizeSkillsPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.RandomizeSkillsPanel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.RandomizeAttributesPanel
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::RandomizeAttributesPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.RandomizeAttributesPanel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.OnSkillSliderDeselected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_CC_SkillSlider_C*    Slider                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_CharacterCreationPanel1_C::OnSkillSliderDeselected(class UUI_CC_SkillSlider_C* Slider)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.OnSkillSliderDeselected");

	struct
	{
		class UUI_CC_SkillSlider_C*    Slider;
	} params;

	params.Slider = Slider;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.OnSkillSliderSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_CC_SkillSlider_C*    Slider                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_CharacterCreationPanel1_C::OnSkillSliderSelected(class UUI_CC_SkillSlider_C* Slider)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.OnSkillSliderSelected");

	struct
	{
		class UUI_CC_SkillSlider_C*    Slider;
	} params;

	params.Slider = Slider;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetSkillTemplates
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FSkillTemplate>  allSkills                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UUI_CharacterCreationPanel1_C::GetSkillTemplates(TArray<struct FSkillTemplate>* allSkills)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetSkillTemplates");

	struct
	{
		TArray<struct FSkillTemplate>  allSkills;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (allSkills != nullptr)
		*allSkills = params.allSkills;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetSkillTemplatesByAttribute
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESkillAttribute                Attribute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FSkillTemplate>  outSkills                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UUI_CharacterCreationPanel1_C::GetSkillTemplatesByAttribute(ESkillAttribute Attribute, TArray<struct FSkillTemplate>* outSkills)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetSkillTemplatesByAttribute");

	struct
	{
		ESkillAttribute                Attribute;
		TArray<struct FSkillTemplate>  outSkills;
	} params;

	params.Attribute = Attribute;

	UObject::ProcessEvent(fn, &params);

	if (outSkills != nullptr)
		*outSkills = params.outSkills;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.OnSkillValueChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESkillAttribute                Attribute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UUI_CC_SkillSlider_C*    Slider                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_CharacterCreationPanel1_C::OnSkillValueChanged(ESkillAttribute Attribute, class UUI_CC_SkillSlider_C* Slider)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.OnSkillValueChanged");

	struct
	{
		ESkillAttribute                Attribute;
		class UUI_CC_SkillSlider_C*    Slider;
	} params;

	params.Attribute = Attribute;
	params.Slider = Slider;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.UpdateSkillsForAttribute
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESkillAttribute                Attribute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CharacterCreationPanel1_C::UpdateSkillsForAttribute(ESkillAttribute Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.UpdateSkillsForAttribute");

	struct
	{
		ESkillAttribute                Attribute;
	} params;

	params.Attribute = Attribute;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.UpdateSkillsPanel
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::UpdateSkillsPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.UpdateSkillsPanel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.InitSkills
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::InitSkills()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.InitSkills");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.UpdateTriangle
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CharacterCreationPanel1_C::UpdateTriangle(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.UpdateTriangle");

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ModifyAttributeModifier
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_CC_AttributeModifier_C* attributeModifier              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// float                          modifier                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CharacterCreationPanel1_C::ModifyAttributeModifier(class UUI_CC_AttributeModifier_C* attributeModifier, float modifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ModifyAttributeModifier");

	struct
	{
		class UUI_CC_AttributeModifier_C* attributeModifier;
		float                          modifier;
	} params;

	params.attributeModifier = attributeModifier;
	params.modifier = modifier;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ModifySetAttributesByAge
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector4                lastAgeModifiers               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UUI_CharacterCreationPanel1_C::ModifySetAttributesByAge(const struct FVector4& lastAgeModifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ModifySetAttributesByAge");

	struct
	{
		struct FVector4                lastAgeModifiers;
	} params;

	params.lastAgeModifiers = lastAgeModifiers;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetAgeBonusForAttribute
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESkillAttribute                Attribute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          modifier                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CharacterCreationPanel1_C::GetAgeBonusForAttribute(ESkillAttribute Attribute, float* modifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetAgeBonusForAttribute");

	struct
	{
		ESkillAttribute                Attribute;
		float                          modifier;
	} params;

	params.Attribute = Attribute;

	UObject::ProcessEvent(fn, &params);

	if (modifier != nullptr)
		*modifier = params.modifier;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.UpdateAvailablePoints
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::UpdateAvailablePoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.UpdateAvailablePoints");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.DecreaseAttributeModifier
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_CC_AttributeModifier_C* attributeModifier              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// float                          adjustmentStep                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CharacterCreationPanel1_C::DecreaseAttributeModifier(class UUI_CC_AttributeModifier_C* attributeModifier, float adjustmentStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.DecreaseAttributeModifier");

	struct
	{
		class UUI_CC_AttributeModifier_C* attributeModifier;
		float                          adjustmentStep;
	} params;

	params.attributeModifier = attributeModifier;
	params.adjustmentStep = adjustmentStep;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.IncreaseAttributeModifier
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_CC_AttributeModifier_C* attributeModifier              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// float                          adjustmentStep                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CharacterCreationPanel1_C::IncreaseAttributeModifier(class UUI_CC_AttributeModifier_C* attributeModifier, float adjustmentStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.IncreaseAttributeModifier");

	struct
	{
		class UUI_CC_AttributeModifier_C* attributeModifier;
		float                          adjustmentStep;
	} params;

	params.attributeModifier = attributeModifier;
	params.adjustmentStep = adjustmentStep;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ApplyTemplateToPrisoners
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           applySkills                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FCharacterTemplate      CharacterTemplate              (CPF_Parm, CPF_OutParm)

void UUI_CharacterCreationPanel1_C::ApplyTemplateToPrisoners(bool applySkills, struct FCharacterTemplate* CharacterTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ApplyTemplateToPrisoners");

	struct
	{
		bool                           applySkills;
		struct FCharacterTemplate      CharacterTemplate;
	} params;

	params.applySkills = applySkills;

	UObject::ProcessEvent(fn, &params);

	if (CharacterTemplate != nullptr)
		*CharacterTemplate = params.CharacterTemplate;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetNumberTextWithSign
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Number                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   numberWithSignText             (CPF_Parm, CPF_OutParm)

void UUI_CharacterCreationPanel1_C::GetNumberTextWithSign(float Number, struct FText* numberWithSignText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetNumberTextWithSign");

	struct
	{
		float                          Number;
		struct FText                   numberWithSignText;
	} params;

	params.Number = Number;

	UObject::ProcessEvent(fn, &params);

	if (numberWithSignText != nullptr)
		*numberWithSignText = params.numberWithSignText;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.SetAge
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Age                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CharacterCreationPanel1_C::SetAge(int Age)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.SetAge");

	struct
	{
		int                            Age;
	} params;

	params.Age = Age;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.OnMouseButtonDown_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_CharacterCreationPanel1_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.OnMouseButtonDown_1");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;

	UObject::ProcessEvent(fn, &params);

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_50_OnIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          LeftoverPercentage             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CharacterCreationPanel1_C::BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_50_OnIndexChanged__DelegateSignature(int Index, float LeftoverPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_50_OnIndexChanged__DelegateSignature");

	struct
	{
		int                            Index;
		float                          LeftoverPercentage;
	} params;

	params.Index = Index;
	params.LeftoverPercentage = LeftoverPercentage;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_LeanFatMuscleTriangle_K2Node_ComponentBoundEvent_5_AttributesChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FVector4                attributes                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UUI_CharacterCreationPanel1_C::BndEvt__UI_LeanFatMuscleTriangle_K2Node_ComponentBoundEvent_5_AttributesChanged__DelegateSignature(const struct FVector4& attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_LeanFatMuscleTriangle_K2Node_ComponentBoundEvent_5_AttributesChanged__DelegateSignature");

	struct
	{
		struct FVector4                attributes;
	} params;

	params.attributes = attributes;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__TattooSlider_K2Node_ComponentBoundEvent_152_OnIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          LeftoverPercentage             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CharacterCreationPanel1_C::BndEvt__TattooSlider_K2Node_ComponentBoundEvent_152_OnIndexChanged__DelegateSignature(int Index, float LeftoverPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__TattooSlider_K2Node_ComponentBoundEvent_152_OnIndexChanged__DelegateSignature");

	struct
	{
		int                            Index;
		float                          LeftoverPercentage;
	} params;

	params.Index = Index;
	params.LeftoverPercentage = LeftoverPercentage;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__HeadSlider_K2Node_ComponentBoundEvent_153_OnIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          LeftoverPercentage             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CharacterCreationPanel1_C::BndEvt__HeadSlider_K2Node_ComponentBoundEvent_153_OnIndexChanged__DelegateSignature(int Index, float LeftoverPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__HeadSlider_K2Node_ComponentBoundEvent_153_OnIndexChanged__DelegateSignature");

	struct
	{
		int                            Index;
		float                          LeftoverPercentage;
	} params;

	params.Index = Index;
	params.LeftoverPercentage = LeftoverPercentage;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_CC_ProgressBar_C_0_K2Node_ComponentBoundEvent_242_OnIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          LeftoverPercentage             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CharacterCreationPanel1_C::BndEvt__UI_CC_ProgressBar_C_0_K2Node_ComponentBoundEvent_242_OnIndexChanged__DelegateSignature(int Index, float LeftoverPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_CC_ProgressBar_C_0_K2Node_ComponentBoundEvent_242_OnIndexChanged__DelegateSignature");

	struct
	{
		int                            Index;
		float                          LeftoverPercentage;
	} params;

	params.Index = Index;
	params.LeftoverPercentage = LeftoverPercentage;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierStrength_K2Node_ComponentBoundEvent_36_OnIncrease__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::BndEvt__AttributeModifierStrength_K2Node_ComponentBoundEvent_36_OnIncrease__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierStrength_K2Node_ComponentBoundEvent_36_OnIncrease__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierStrength_K2Node_ComponentBoundEvent_40_OnDecrease__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::BndEvt__AttributeModifierStrength_K2Node_ComponentBoundEvent_40_OnDecrease__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierStrength_K2Node_ComponentBoundEvent_40_OnDecrease__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierConstitution_K2Node_ComponentBoundEvent_47_OnIncrease__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::BndEvt__AttributeModifierConstitution_K2Node_ComponentBoundEvent_47_OnIncrease__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierConstitution_K2Node_ComponentBoundEvent_47_OnIncrease__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierConstitution_K2Node_ComponentBoundEvent_59_OnDecrease__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::BndEvt__AttributeModifierConstitution_K2Node_ComponentBoundEvent_59_OnDecrease__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierConstitution_K2Node_ComponentBoundEvent_59_OnDecrease__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierDexterity_K2Node_ComponentBoundEvent_68_OnIncrease__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::BndEvt__AttributeModifierDexterity_K2Node_ComponentBoundEvent_68_OnIncrease__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierDexterity_K2Node_ComponentBoundEvent_68_OnIncrease__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierDexterity_K2Node_ComponentBoundEvent_81_OnDecrease__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::BndEvt__AttributeModifierDexterity_K2Node_ComponentBoundEvent_81_OnDecrease__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierDexterity_K2Node_ComponentBoundEvent_81_OnDecrease__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierIntelligence_K2Node_ComponentBoundEvent_92_OnIncrease__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::BndEvt__AttributeModifierIntelligence_K2Node_ComponentBoundEvent_92_OnIncrease__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierIntelligence_K2Node_ComponentBoundEvent_92_OnIncrease__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierIntelligence_K2Node_ComponentBoundEvent_107_OnDecrease__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::BndEvt__AttributeModifierIntelligence_K2Node_ComponentBoundEvent_107_OnDecrease__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierIntelligence_K2Node_ComponentBoundEvent_107_OnDecrease__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CharacterCreationPanel1_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_MenuButton_1_K2Node_ComponentBoundEvent_170_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::BndEvt__UI_MenuButton_1_K2Node_ComponentBoundEvent_170_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_MenuButton_1_K2Node_ComponentBoundEvent_170_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_MenuButton_C_1_K2Node_ComponentBoundEvent_173_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::BndEvt__UI_MenuButton_C_1_K2Node_ComponentBoundEvent_173_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_MenuButton_C_1_K2Node_ComponentBoundEvent_173_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__ButtonSwitchToCriminalRecord_K2Node_ComponentBoundEvent_209_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::BndEvt__ButtonSwitchToCriminalRecord_K2Node_ComponentBoundEvent_209_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__ButtonSwitchToCriminalRecord_K2Node_ComponentBoundEvent_209_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1199_OnOkClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1199_OnOkClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1199_OnOkClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1260_OnCancelClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1260_OnCancelClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1260_OnCancelClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_1387_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_1387_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_1387_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__ButtonRandomizeAttributes_K2Node_ComponentBoundEvent_132_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::BndEvt__ButtonRandomizeAttributes_K2Node_ComponentBoundEvent_132_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__ButtonRandomizeAttributes_K2Node_ComponentBoundEvent_132_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__ButtonRandomizeSkills_K2Node_ComponentBoundEvent_67_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::BndEvt__ButtonRandomizeSkills_K2Node_ComponentBoundEvent_67_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__ButtonRandomizeSkills_K2Node_ComponentBoundEvent_67_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__NameTextSecondPage_K2Node_ComponentBoundEvent_489_OnEditableTextBoxCommittedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CharacterCreationPanel1_C::BndEvt__NameTextSecondPage_K2Node_ComponentBoundEvent_489_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__NameTextSecondPage_K2Node_ComponentBoundEvent_489_OnEditableTextBoxCommittedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__NameText_K2Node_ComponentBoundEvent_495_OnEditableTextBoxCommittedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CharacterCreationPanel1_C::BndEvt__NameText_K2Node_ComponentBoundEvent_495_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__NameText_K2Node_ComponentBoundEvent_495_OnEditableTextBoxCommittedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__NameText_K2Node_ComponentBoundEvent_52_OnEditableTextBoxChangedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_CharacterCreationPanel1_C::BndEvt__NameText_K2Node_ComponentBoundEvent_52_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__NameText_K2Node_ComponentBoundEvent_52_OnEditableTextBoxChangedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__NameTextSecondPage_K2Node_ComponentBoundEvent_108_OnEditableTextBoxChangedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_CharacterCreationPanel1_C::BndEvt__NameTextSecondPage_K2Node_ComponentBoundEvent_108_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__NameTextSecondPage_K2Node_ComponentBoundEvent_108_OnEditableTextBoxChangedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ShowErrorDialog
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Message                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_CharacterCreationPanel1_C::ShowErrorDialog(const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ShowErrorDialog");

	struct
	{
		struct FText                   Message;
	} params;

	params.Message = Message;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.OnUserProfileCreated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::OnUserProfileCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.OnUserProfileCreated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BeginWaitingOnServerResponse
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::BeginWaitingOnServerResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BeginWaitingOnServerResponse");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.EndWaitingOnServerResponse
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::EndWaitingOnServerResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.EndWaitingOnServerResponse");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.Keep Server Connection Alive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CharacterCreationPanel1_C::Keep_Server_Connection_Alive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.Keep Server Connection Alive");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ExecuteUbergraph_UI_CharacterCreationPanel1
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CharacterCreationPanel1_C::ExecuteUbergraph_UI_CharacterCreationPanel1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ExecuteUbergraph_UI_CharacterCreationPanel1");

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
