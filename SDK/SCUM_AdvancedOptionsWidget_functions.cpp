// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_AdvancedOptionsWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.SnapSlider
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USlider*                 Slider                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            Steps                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAdvancedOptionsWidget_C::SnapSlider(class USlider* Slider, int Steps, int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.SnapSlider");

	struct
	{
		class USlider*                 Slider;
		int                            Steps;
		int                            Value;
	} params;

	params.Slider = Slider;
	params.Steps = Steps;

	UObject::ProcessEvent(fn, &params);

	if (Value != nullptr)
		*Value = params.Value;
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAdvancedOptionsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1707_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UAdvancedOptionsWidget_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_1707_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1707_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__LightFunctionQualityCheckBox_K2Node_ComponentBoundEvent_304_OnCheckBoxComponentStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAdvancedOptionsWidget_C::BndEvt__LightFunctionQualityCheckBox_K2Node_ComponentBoundEvent_304_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__LightFunctionQualityCheckBox_K2Node_ComponentBoundEvent_304_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct
	{
		bool                           bIsChecked;
	} params;

	params.bIsChecked = bIsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__DistanceFieldShadowsCheckBox_K2Node_ComponentBoundEvent_316_OnCheckBoxComponentStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAdvancedOptionsWidget_C::BndEvt__DistanceFieldShadowsCheckBox_K2Node_ComponentBoundEvent_316_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__DistanceFieldShadowsCheckBox_K2Node_ComponentBoundEvent_316_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct
	{
		bool                           bIsChecked;
	} params;

	params.bIsChecked = bIsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__DistanceFieldAOCheckBox_K2Node_ComponentBoundEvent_339_OnCheckBoxComponentStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAdvancedOptionsWidget_C::BndEvt__DistanceFieldAOCheckBox_K2Node_ComponentBoundEvent_339_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__DistanceFieldAOCheckBox_K2Node_ComponentBoundEvent_339_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct
	{
		bool                           bIsChecked;
	} params;

	params.bIsChecked = bIsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__ReflectionEnvironmentCheckBox_K2Node_ComponentBoundEvent_89_OnCheckBoxComponentStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAdvancedOptionsWidget_C::BndEvt__ReflectionEnvironmentCheckBox_K2Node_ComponentBoundEvent_89_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__ReflectionEnvironmentCheckBox_K2Node_ComponentBoundEvent_89_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct
	{
		bool                           bIsChecked;
	} params;

	params.bIsChecked = bIsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__TranslucencyVolumeBlurCheckBox_K2Node_ComponentBoundEvent_111_OnCheckBoxComponentStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAdvancedOptionsWidget_C::BndEvt__TranslucencyVolumeBlurCheckBox_K2Node_ComponentBoundEvent_111_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__TranslucencyVolumeBlurCheckBox_K2Node_ComponentBoundEvent_111_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct
	{
		bool                           bIsChecked;
	} params;

	params.bIsChecked = bIsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__MaterialQualityLevelCheckBox_K2Node_ComponentBoundEvent_137_OnCheckBoxComponentStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAdvancedOptionsWidget_C::BndEvt__MaterialQualityLevelCheckBox_K2Node_ComponentBoundEvent_137_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__MaterialQualityLevelCheckBox_K2Node_ComponentBoundEvent_137_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct
	{
		bool                           bIsChecked;
	} params;

	params.bIsChecked = bIsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__SeparateTranslucencyCheckBox_K2Node_ComponentBoundEvent_174_OnCheckBoxComponentStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAdvancedOptionsWidget_C::BndEvt__SeparateTranslucencyCheckBox_K2Node_ComponentBoundEvent_174_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__SeparateTranslucencyCheckBox_K2Node_ComponentBoundEvent_174_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct
	{
		bool                           bIsChecked;
	} params;

	params.bIsChecked = bIsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__TonemapperFilmCheckBox_K2Node_ComponentBoundEvent_224_OnCheckBoxComponentStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAdvancedOptionsWidget_C::BndEvt__TonemapperFilmCheckBox_K2Node_ComponentBoundEvent_224_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__TonemapperFilmCheckBox_K2Node_ComponentBoundEvent_224_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct
	{
		bool                           bIsChecked;
	} params;

	params.bIsChecked = bIsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__ShadowQualityCheckBox_K2Node_ComponentBoundEvent_267_OnMouseCaptureEndEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UAdvancedOptionsWidget_C::BndEvt__ShadowQualityCheckBox_K2Node_ComponentBoundEvent_267_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__ShadowQualityCheckBox_K2Node_ComponentBoundEvent_267_OnMouseCaptureEndEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__ShadowMaxResolutionSlider_K2Node_ComponentBoundEvent_367_OnMouseCaptureEndEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UAdvancedOptionsWidget_C::BndEvt__ShadowMaxResolutionSlider_K2Node_ComponentBoundEvent_367_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__ShadowMaxResolutionSlider_K2Node_ComponentBoundEvent_367_OnMouseCaptureEndEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__RefractionQualitySlider_K2Node_ComponentBoundEvent_539_OnMouseCaptureEndEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UAdvancedOptionsWidget_C::BndEvt__RefractionQualitySlider_K2Node_ComponentBoundEvent_539_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__RefractionQualitySlider_K2Node_ComponentBoundEvent_539_OnMouseCaptureEndEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__DepthOfFieldQualitySlider_K2Node_ComponentBoundEvent_202_OnMouseCaptureEndEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UAdvancedOptionsWidget_C::BndEvt__DepthOfFieldQualitySlider_K2Node_ComponentBoundEvent_202_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__DepthOfFieldQualitySlider_K2Node_ComponentBoundEvent_202_OnMouseCaptureEndEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__LensFlareQualitySlider_K2Node_ComponentBoundEvent_272_OnMouseCaptureEndEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UAdvancedOptionsWidget_C::BndEvt__LensFlareQualitySlider_K2Node_ComponentBoundEvent_272_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__LensFlareQualitySlider_K2Node_ComponentBoundEvent_272_OnMouseCaptureEndEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__SceneColorFringeQualitySlider_K2Node_ComponentBoundEvent_346_OnMouseCaptureEndEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UAdvancedOptionsWidget_C::BndEvt__SceneColorFringeQualitySlider_K2Node_ComponentBoundEvent_346_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__SceneColorFringeQualitySlider_K2Node_ComponentBoundEvent_346_OnMouseCaptureEndEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__BloomQualitySlider_K2Node_ComponentBoundEvent_424_OnMouseCaptureEndEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UAdvancedOptionsWidget_C::BndEvt__BloomQualitySlider_K2Node_ComponentBoundEvent_424_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__BloomQualitySlider_K2Node_ComponentBoundEvent_424_OnMouseCaptureEndEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__FastBlurThresholdSlider_K2Node_ComponentBoundEvent_538_OnMouseCaptureEndEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UAdvancedOptionsWidget_C::BndEvt__FastBlurThresholdSlider_K2Node_ComponentBoundEvent_538_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__FastBlurThresholdSlider_K2Node_ComponentBoundEvent_538_OnMouseCaptureEndEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__TonemapperQualitySlider_K2Node_ComponentBoundEvent_658_OnMouseCaptureEndEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UAdvancedOptionsWidget_C::BndEvt__TonemapperQualitySlider_K2Node_ComponentBoundEvent_658_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__TonemapperQualitySlider_K2Node_ComponentBoundEvent_658_OnMouseCaptureEndEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__LightShaftQualitySlider_K2Node_ComponentBoundEvent_748_OnMouseCaptureEndEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UAdvancedOptionsWidget_C::BndEvt__LightShaftQualitySlider_K2Node_ComponentBoundEvent_748_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__LightShaftQualitySlider_K2Node_ComponentBoundEvent_748_OnMouseCaptureEndEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__ShadowQualitySlider_K2Node_ComponentBoundEvent_303_OnFloatValueChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAdvancedOptionsWidget_C::BndEvt__ShadowQualitySlider_K2Node_ComponentBoundEvent_303_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__ShadowQualitySlider_K2Node_ComponentBoundEvent_303_OnFloatValueChangedEvent__DelegateSignature");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__ShadowMaxResolutionSlider_K2Node_ComponentBoundEvent_333_OnFloatValueChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAdvancedOptionsWidget_C::BndEvt__ShadowMaxResolutionSlider_K2Node_ComponentBoundEvent_333_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__ShadowMaxResolutionSlider_K2Node_ComponentBoundEvent_333_OnFloatValueChangedEvent__DelegateSignature");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__RefractionQualitySlider_K2Node_ComponentBoundEvent_364_OnFloatValueChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAdvancedOptionsWidget_C::BndEvt__RefractionQualitySlider_K2Node_ComponentBoundEvent_364_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__RefractionQualitySlider_K2Node_ComponentBoundEvent_364_OnFloatValueChangedEvent__DelegateSignature");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__DepthOfFieldQualitySlider_K2Node_ComponentBoundEvent_396_OnFloatValueChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAdvancedOptionsWidget_C::BndEvt__DepthOfFieldQualitySlider_K2Node_ComponentBoundEvent_396_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__DepthOfFieldQualitySlider_K2Node_ComponentBoundEvent_396_OnFloatValueChangedEvent__DelegateSignature");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__LensFlareQualitySlider_K2Node_ComponentBoundEvent_429_OnFloatValueChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAdvancedOptionsWidget_C::BndEvt__LensFlareQualitySlider_K2Node_ComponentBoundEvent_429_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__LensFlareQualitySlider_K2Node_ComponentBoundEvent_429_OnFloatValueChangedEvent__DelegateSignature");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__SceneColorFringeQualitySlider_K2Node_ComponentBoundEvent_463_OnFloatValueChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAdvancedOptionsWidget_C::BndEvt__SceneColorFringeQualitySlider_K2Node_ComponentBoundEvent_463_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__SceneColorFringeQualitySlider_K2Node_ComponentBoundEvent_463_OnFloatValueChangedEvent__DelegateSignature");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__BloomQualitySlider_K2Node_ComponentBoundEvent_498_OnFloatValueChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAdvancedOptionsWidget_C::BndEvt__BloomQualitySlider_K2Node_ComponentBoundEvent_498_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__BloomQualitySlider_K2Node_ComponentBoundEvent_498_OnFloatValueChangedEvent__DelegateSignature");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__FastBlurThresholdSlider_K2Node_ComponentBoundEvent_534_OnFloatValueChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAdvancedOptionsWidget_C::BndEvt__FastBlurThresholdSlider_K2Node_ComponentBoundEvent_534_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__FastBlurThresholdSlider_K2Node_ComponentBoundEvent_534_OnFloatValueChangedEvent__DelegateSignature");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__TonemapperQualitySlider_K2Node_ComponentBoundEvent_571_OnFloatValueChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAdvancedOptionsWidget_C::BndEvt__TonemapperQualitySlider_K2Node_ComponentBoundEvent_571_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__TonemapperQualitySlider_K2Node_ComponentBoundEvent_571_OnFloatValueChangedEvent__DelegateSignature");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__LightShaftQualitySlider_K2Node_ComponentBoundEvent_609_OnFloatValueChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAdvancedOptionsWidget_C::BndEvt__LightShaftQualitySlider_K2Node_ComponentBoundEvent_609_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__LightShaftQualitySlider_K2Node_ComponentBoundEvent_609_OnFloatValueChangedEvent__DelegateSignature");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__UI_MenuButton_36_K2Node_ComponentBoundEvent_242_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UAdvancedOptionsWidget_C::BndEvt__UI_MenuButton_36_K2Node_ComponentBoundEvent_242_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.BndEvt__UI_MenuButton_36_K2Node_ComponentBoundEvent_242_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.ExecuteUbergraph_AdvancedOptionsWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAdvancedOptionsWidget_C::ExecuteUbergraph_AdvancedOptionsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedOptionsWidget.AdvancedOptionsWidget_C.ExecuteUbergraph_AdvancedOptionsWidget");

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
