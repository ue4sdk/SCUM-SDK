// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_Skills_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Skills.UI_Skills_C.UpdateAttributeChange
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Skills_C::UpdateAttributeChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.UpdateAttributeChange");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Skills.UI_Skills_C.InitTimePeriodsBarForHorizontalBox
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHorizontalBox*          HorizontalBox                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Skills_C::InitTimePeriodsBarForHorizontalBox(class UHorizontalBox* HorizontalBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.InitTimePeriodsBarForHorizontalBox");

	struct
	{
		class UHorizontalBox*          HorizontalBox;
	} params;

	params.HorizontalBox = HorizontalBox;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Skills.UI_Skills_C.RefreshGraph
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Skills_C::RefreshGraph()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.RefreshGraph");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Skills.UI_Skills_C.Maximize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Skills_C::Maximize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.Maximize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Skills.UI_Skills_C.Minimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Skills_C::Minimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.Minimize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Skills.UI_Skills_C.UpdateSkills
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Skills_C::UpdateSkills()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.UpdateSkills");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Skills.UI_Skills_C.SetPrisoner
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Skills_C::SetPrisoner(class APrisoner* Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.SetPrisoner");

	struct
	{
		class APrisoner*               Prisoner;
	} params;

	params.Prisoner = Prisoner;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Skills.UI_Skills_C.UpdateAttributeValues
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Skills_C::UpdateAttributeValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.UpdateAttributeValues");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Skills.UI_Skills_C.Update
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Skills_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.Update");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Skills.UI_Skills_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Skills_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_2_K2Node_ComponentBoundEvent_13_OnClickedDispatcher__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_Skills_C::BndEvt__UI_SkillsTabButton_2_K2Node_ComponentBoundEvent_13_OnClickedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_2_K2Node_ComponentBoundEvent_13_OnClickedDispatcher__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_K2Node_ComponentBoundEvent_7_OnClickedDispatcher__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_Skills_C::BndEvt__UI_SkillsTabButton_K2Node_ComponentBoundEvent_7_OnClickedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_K2Node_ComponentBoundEvent_7_OnClickedDispatcher__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_0_K2Node_ComponentBoundEvent_8_OnClickedDispatcher__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_Skills_C::BndEvt__UI_SkillsTabButton_0_K2Node_ComponentBoundEvent_8_OnClickedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_0_K2Node_ComponentBoundEvent_8_OnClickedDispatcher__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Skills.UI_Skills_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_Skills_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_1_K2Node_ComponentBoundEvent_10_OnClickedDispatcher__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_Skills_C::BndEvt__UI_SkillsTabButton_1_K2Node_ComponentBoundEvent_10_OnClickedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_1_K2Node_ComponentBoundEvent_10_OnClickedDispatcher__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Skills.UI_Skills_C.BndEvt__ExpandButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_Skills_C::BndEvt__ExpandButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.BndEvt__ExpandButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_C_0_K2Node_ComponentBoundEvent_111_OnClickedDispatcher__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_Skills_C::BndEvt__UI_SkillsTabButton_C_0_K2Node_ComponentBoundEvent_111_OnClickedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_C_0_K2Node_ComponentBoundEvent_111_OnClickedDispatcher__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Skills.UI_Skills_C.BndEvt__Zoom30dButton_K2Node_ComponentBoundEvent_146_OnClickedDispatcher__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_Skills_C::BndEvt__Zoom30dButton_K2Node_ComponentBoundEvent_146_OnClickedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.BndEvt__Zoom30dButton_K2Node_ComponentBoundEvent_146_OnClickedDispatcher__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Skills.UI_Skills_C.DisplayAttribute
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESkillAttribute                Attribute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Skills_C::DisplayAttribute(ESkillAttribute Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.DisplayAttribute");

	struct
	{
		ESkillAttribute                Attribute;
	} params;

	params.Attribute = Attribute;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Skills.UI_Skills_C.ExecuteUbergraph_UI_Skills
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Skills_C::ExecuteUbergraph_UI_Skills(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills.UI_Skills_C.ExecuteUbergraph_UI_Skills");

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
