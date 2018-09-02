// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CC_SkillSlider_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetPercentage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          percentage                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CC_SkillSlider_C::SetPercentage(float percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetPercentage");

	struct
	{
		float                          percentage;
	} params;

	params.percentage = percentage;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetMaxLevelAndExperienceFromPoints
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Points                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           isSelected                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CC_SkillSlider_C::SetMaxLevelAndExperienceFromPoints(float Points, bool isSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetMaxLevelAndExperienceFromPoints");

	struct
	{
		float                          Points;
		bool                           isSelected;
	} params;

	params.Points = Points;
	params.isSelected = isSelected;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetMaxLevelAndExperience
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESkillLevel                    Level                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          experiencePercentage           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CC_SkillSlider_C::SetMaxLevelAndExperience(ESkillLevel Level, float experiencePercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetMaxLevelAndExperience");

	struct
	{
		ESkillLevel                    Level;
		float                          experiencePercentage;
	} params;

	params.Level = Level;
	params.experiencePercentage = experiencePercentage;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetSkillLevelAndExperience
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESkillLevel                    Level                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Experience                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CC_SkillSlider_C::SetSkillLevelAndExperience(ESkillLevel Level, float Experience)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetSkillLevelAndExperience");

	struct
	{
		ESkillLevel                    Level;
		float                          Experience;
	} params;

	params.Level = Level;
	params.Experience = Experience;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_CC_SkillSlider_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_98_OnIndexChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          LeftoverPercentage             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CC_SkillSlider_C::BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_98_OnIndexChanged__DelegateSignature(int Index, float LeftoverPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_98_OnIndexChanged__DelegateSignature");

	struct
	{
		int                            Index;
		float                          LeftoverPercentage;
	} params;

	params.Index = Index;
	params.LeftoverPercentage = LeftoverPercentage;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_CC_SkillSlider_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_2_MouseUp__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CC_SkillSlider_C::BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_2_MouseUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_2_MouseUp__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_6_MouseDown__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CC_SkillSlider_C::BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_6_MouseDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_6_MouseDown__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.ExecuteUbergraph_UI_CC_SkillSlider
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CC_SkillSlider_C::ExecuteUbergraph_UI_CC_SkillSlider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.ExecuteUbergraph_UI_CC_SkillSlider");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SliderDeselected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_CC_SkillSlider_C*    Slider                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_CC_SkillSlider_C::SliderDeselected__DelegateSignature(class UUI_CC_SkillSlider_C* Slider)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SliderDeselected__DelegateSignature");

	struct
	{
		class UUI_CC_SkillSlider_C*    Slider;
	} params;

	params.Slider = Slider;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SliderSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_CC_SkillSlider_C*    Slider                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_CC_SkillSlider_C::SliderSelected__DelegateSignature(class UUI_CC_SkillSlider_C* Slider)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SliderSelected__DelegateSignature");

	struct
	{
		class UUI_CC_SkillSlider_C*    Slider;
	} params;

	params.Slider = Slider;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SliderChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESkillAttribute                Attribute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UUI_CC_SkillSlider_C*    Slider                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_CC_SkillSlider_C::SliderChanged__DelegateSignature(ESkillAttribute Attribute, class UUI_CC_SkillSlider_C* Slider)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SliderChanged__DelegateSignature");

	struct
	{
		ESkillAttribute                Attribute;
		class UUI_CC_SkillSlider_C*    Slider;
	} params;

	params.Attribute = Attribute;
	params.Slider = Slider;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
