// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CriminalRecord_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CriminalRecord.UI_CriminalRecord_C.InitFromCharacterTemplate
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCharacterTemplate      Template                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_CriminalRecord_C::InitFromCharacterTemplate(const struct FCharacterTemplate& Template)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.InitFromCharacterTemplate");

	struct
	{
		struct FCharacterTemplate      Template;
	} params;

	params.Template = Template;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CriminalRecord.UI_CriminalRecord_C.ClearSkills
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CriminalRecord_C::ClearSkills()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.ClearSkills");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CriminalRecord.UI_CriminalRecord_C.ChangeAttribute
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESkillAttribute                Attribute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CriminalRecord_C::ChangeAttribute(ESkillAttribute Attribute, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.ChangeAttribute");

	struct
	{
		ESkillAttribute                Attribute;
		int                            Value;
	} params;

	params.Attribute = Attribute;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CriminalRecord.UI_CriminalRecord_C.AddSkill
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSkillTemplate          SkillTemplate                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_CriminalRecord_C::AddSkill(const struct FSkillTemplate& SkillTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.AddSkill");

	struct
	{
		struct FSkillTemplate          SkillTemplate;
	} params;

	params.SkillTemplate = SkillTemplate;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CriminalRecord.UI_CriminalRecord_C.BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CriminalRecord_C::BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CriminalRecord.UI_CriminalRecord_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CriminalRecord_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CriminalRecord.UI_CriminalRecord_C.ExecuteUbergraph_UI_CriminalRecord
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CriminalRecord_C::ExecuteUbergraph_UI_CriminalRecord(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.ExecuteUbergraph_UI_CriminalRecord");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CriminalRecord.UI_CriminalRecord_C.OnCancelClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CriminalRecord_C::OnCancelClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.OnCancelClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CriminalRecord.UI_CriminalRecord_C.OnOkClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CriminalRecord_C::OnOkClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.OnOkClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
