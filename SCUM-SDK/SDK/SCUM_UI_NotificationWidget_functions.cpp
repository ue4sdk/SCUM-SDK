// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_NotificationWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_NotificationWidget.UI_NotificationWidget_C.CheckLifespan
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_NotificationWidget_C::CheckLifespan(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.CheckLifespan");

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_NotificationWidget.UI_NotificationWidget_C.SetLifeSpan
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_NotificationWidget_C::SetLifeSpan(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.SetLifeSpan");

	struct
	{
		float                          Duration;
	} params;

	params.Duration = Duration;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_NotificationWidget.UI_NotificationWidget_C.SetText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_NotificationWidget_C::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.SetText");

	struct
	{
		struct FText                   InText;
	} params;

	params.InText = InText;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_NotificationWidget.UI_NotificationWidget_C.UpdateScale
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_NotificationWidget_C::UpdateScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.UpdateScale");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_NotificationWidget.UI_NotificationWidget_C.Show
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Instant                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_NotificationWidget_C::Show(bool Instant)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.Show");

	struct
	{
		bool                           Instant;
	} params;

	params.Instant = Instant;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_NotificationWidget.UI_NotificationWidget_C.Dismiss
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Instant                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_NotificationWidget_C::Dismiss(bool Instant)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.Dismiss");

	struct
	{
		bool                           Instant;
	} params;

	params.Instant = Instant;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_NotificationWidget.UI_NotificationWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_NotificationWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_NotificationWidget.UI_NotificationWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_NotificationWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_NotificationWidget.UI_NotificationWidget_C.ExecuteUbergraph_UI_NotificationWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_NotificationWidget_C::ExecuteUbergraph_UI_NotificationWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.ExecuteUbergraph_UI_NotificationWidget");

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
