// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_CircularProgressBarSprites_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCurrentPercentageToShowText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UCircularProgressBarSprites_C::GetCurrentPercentageToShowText()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCurrentPercentageToShowText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCurrentPercentageToShow
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          currentPercentageToShow        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCircularProgressBarSprites_C::GetCurrentPercentageToShow(float* currentPercentageToShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCurrentPercentageToShow");

	struct
	{
		float                          currentPercentageToShow;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (currentPercentageToShow != nullptr)
		*currentPercentageToShow = params.currentPercentageToShow;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetCurrentPercentageToShow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          percentageToShow               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCircularProgressBarSprites_C::SetCurrentPercentageToShow(float percentageToShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetCurrentPercentageToShow");

	struct
	{
		float                          percentageToShow;
	} params;

	params.percentageToShow = percentageToShow;

	UObject::ProcessEvent(fn, &params);
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetPercentageText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UCircularProgressBarSprites_C::GetPercentageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetPercentageText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetTextalarmColorC
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTextBlock*              textWidget                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCircularProgressBarSprites_C::SetTextalarmColorC(class UTextBlock* textWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetTextalarmColorC");

	struct
	{
		class UTextBlock*              textWidget;
	} params;

	params.textWidget = textWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetTextColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTextBlock*              textWidget                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UCircularProgressBarSprites_C::SetTextColor(class UTextBlock* textWidget, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetTextColor");

	struct
	{
		class UTextBlock*              textWidget;
		struct FLinearColor            Color;
	} params;

	params.textWidget = textWidget;
	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.ActivateNormalColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCircularProgressBarSprites_C::ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.ActivateNormalColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetCircularBarColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            CircularBarColor               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UCircularProgressBarSprites_C::SetCircularBarColor(const struct FLinearColor& CircularBarColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetCircularBarColor");

	struct
	{
		struct FLinearColor            CircularBarColor;
	} params;

	params.CircularBarColor = CircularBarColor;

	UObject::ProcessEvent(fn, &params);
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCircularBarColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            CircularBarColor               (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UCircularProgressBarSprites_C::GetCircularBarColor(struct FLinearColor* CircularBarColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCircularBarColor");

	struct
	{
		struct FLinearColor            CircularBarColor;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (CircularBarColor != nullptr)
		*CircularBarColor = params.CircularBarColor;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetOuterCircleColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            OuterCircleColor               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UCircularProgressBarSprites_C::SetOuterCircleColor(const struct FLinearColor& OuterCircleColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetOuterCircleColor");

	struct
	{
		struct FLinearColor            OuterCircleColor;
	} params;

	params.OuterCircleColor = OuterCircleColor;

	UObject::ProcessEvent(fn, &params);
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetOuterCircleColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            OuterCircleColor               (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UCircularProgressBarSprites_C::GetOuterCircleColor(struct FLinearColor* OuterCircleColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetOuterCircleColor");

	struct
	{
		struct FLinearColor            OuterCircleColor;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OuterCircleColor != nullptr)
		*OuterCircleColor = params.OuterCircleColor;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetNormalColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            normalColor                    (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UCircularProgressBarSprites_C::GetNormalColor(struct FLinearColor* normalColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetNormalColor");

	struct
	{
		struct FLinearColor            normalColor;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (normalColor != nullptr)
		*normalColor = params.normalColor;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetNormalColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            normalColor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UCircularProgressBarSprites_C::SetNormalColor(const struct FLinearColor& normalColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetNormalColor");

	struct
	{
		struct FLinearColor            normalColor;
	} params;

	params.normalColor = normalColor;

	UObject::ProcessEvent(fn, &params);
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetAlarmColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            alarmColor                     (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UCircularProgressBarSprites_C::GetAlarmColor(struct FLinearColor* alarmColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetAlarmColor");

	struct
	{
		struct FLinearColor            alarmColor;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (alarmColor != nullptr)
		*alarmColor = params.alarmColor;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetAlarmColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            alarmColor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UCircularProgressBarSprites_C::SetAlarmColor(const struct FLinearColor& alarmColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetAlarmColor");

	struct
	{
		struct FLinearColor            alarmColor;
	} params;

	params.alarmColor = alarmColor;

	UObject::ProcessEvent(fn, &params);
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.ActivateAlarmColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCircularProgressBarSprites_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.ActivateAlarmColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.UpdatePercentageArc
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCircularProgressBarSprites_C::UpdatePercentageArc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.UpdatePercentageArc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetImageAlarmColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UImage*                  ImageWidget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UCircularProgressBarSprites_C::SetImageAlarmColor(class UImage* ImageWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetImageAlarmColor");

	struct
	{
		class UImage*                  ImageWidget;
	} params;

	params.ImageWidget = ImageWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.OnPercentageChanged
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCircularProgressBarSprites_C::OnPercentageChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.OnPercentageChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.AlarmSwitchOn
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCircularProgressBarSprites_C::AlarmSwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.AlarmSwitchOn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.AlarmSwitchOff
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCircularProgressBarSprites_C::AlarmSwitchOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.AlarmSwitchOff");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCircularProgressBarSprites_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCircularProgressBarSprites_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UCircularProgressBarSprites_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.ExecuteUbergraph_CircularProgressBarSprites
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCircularProgressBarSprites_C::ExecuteUbergraph_CircularProgressBarSprites(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.ExecuteUbergraph_CircularProgressBarSprites");

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
