// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CC_ProgressBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.UpdateSliderFromMouseEvent
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_CC_ProgressBar_C::UpdateSliderFromMouseEvent(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.UpdateSliderFromMouseEvent");

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetSliderFromPercentage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Percent                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           onlyWholeNumbers               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CC_ProgressBar_C::SetSliderFromPercentage(float Percent, bool onlyWholeNumbers)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetSliderFromPercentage");

	struct
	{
		float                          Percent;
		bool                           onlyWholeNumbers;
	} params;

	params.Percent = Percent;
	params.onlyWholeNumbers = onlyWholeNumbers;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          leftover                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CC_ProgressBar_C::SetValue(int Index, float leftover)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetValue");

	struct
	{
		int                            Index;
		float                          leftover;
	} params;

	params.Index = Index;
	params.leftover = leftover;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetTitle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_CC_ProgressBar_C::SetTitle(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetTitle");

	struct
	{
		struct FText                   Title;
	} params;

	params.Title = Title;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.ProcessIndexChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CC_ProgressBar_C::ProcessIndexChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.ProcessIndexChange");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_CC_ProgressBar_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnMouseButtonUp");

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


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetEnabledState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CC_ProgressBar_C::SetEnabledState(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.SetEnabledState");

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_CC_ProgressBar_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnMouseButtonDown");

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


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnMouseMove
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_CC_ProgressBar_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnMouseMove");

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


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.UpdateBarFromIndex
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CC_ProgressBar_C::UpdateBarFromIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.UpdateBarFromIndex");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.InitFromData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CC_ProgressBar_C::InitFromData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.InitFromData");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.CreateMarkers
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CC_ProgressBar_C::CreateMarkers()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.CreateMarkers");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_CC_ProgressBar_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_CC_ProgressBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CC_ProgressBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.ExecuteUbergraph_UI_CC_ProgressBar
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CC_ProgressBar_C::ExecuteUbergraph_UI_CC_ProgressBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.ExecuteUbergraph_UI_CC_ProgressBar");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.MouseDown__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CC_ProgressBar_C::MouseDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.MouseDown__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.MouseUp__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CC_ProgressBar_C::MouseUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.MouseUp__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnIndexChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          LeftoverPercentage             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CC_ProgressBar_C::OnIndexChanged__DelegateSignature(int Index, float LeftoverPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBar.UI_CC_ProgressBar_C.OnIndexChanged__DelegateSignature");

	struct
	{
		int                            Index;
		float                          LeftoverPercentage;
	} params;

	params.Index = Index;
	params.LeftoverPercentage = LeftoverPercentage;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
