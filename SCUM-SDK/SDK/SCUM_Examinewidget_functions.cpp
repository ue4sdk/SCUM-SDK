// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Examinewidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Examinewidget.Examinewidget_C.On_IClose_MouseButtonDown_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UExaminewidget_C::On_IClose_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Examinewidget.Examinewidget_C.On_IClose_MouseButtonDown_1");

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


// Function Examinewidget.Examinewidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UExaminewidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Examinewidget.Examinewidget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Examinewidget.Examinewidget_C.OnActivate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UExaminewidget_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Examinewidget.Examinewidget_C.OnActivate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Examinewidget.Examinewidget_C.OnClose
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UExaminewidget_C::OnClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Examinewidget.Examinewidget_C.OnClose");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Examinewidget.Examinewidget_C.SetWidgetTitle
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UExaminewidget_C::SetWidgetTitle(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function Examinewidget.Examinewidget_C.SetWidgetTitle");

	struct
	{
		struct FText                   Title;
	} params;

	params.Title = Title;

	UObject::ProcessEvent(fn, &params);
}


// Function Examinewidget.Examinewidget_C.ExecuteUbergraph_Examinewidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UExaminewidget_C::ExecuteUbergraph_Examinewidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Examinewidget.Examinewidget_C.ExecuteUbergraph_Examinewidget");

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
