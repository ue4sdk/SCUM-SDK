// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_WindowsContent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WindowsContent.WindowsContent_C.GetChildrenWindows
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UCustomGUIWindow_C*> childrenWidgets                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UWindowsContent_C::GetChildrenWindows(TArray<class UCustomGUIWindow_C*>* childrenWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.GetChildrenWindows");

	struct
	{
		TArray<class UCustomGUIWindow_C*> childrenWidgets;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (childrenWidgets != nullptr)
		*childrenWidgets = params.childrenWidgets;
}


// Function WindowsContent.WindowsContent_C.AddChildWindow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCustomGUIWindow_C*      childWindowRef                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UWindowsContent_C::AddChildWindow(class UCustomGUIWindow_C* childWindowRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.AddChildWindow");

	struct
	{
		class UCustomGUIWindow_C*      childWindowRef;
	} params;

	params.childWindowRef = childWindowRef;

	UObject::ProcessEvent(fn, &params);
}


// Function WindowsContent.WindowsContent_C.NotifyParentOnAlarmSwitchedOffOnContent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWindowsContent_C::NotifyParentOnAlarmSwitchedOffOnContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.NotifyParentOnAlarmSwitchedOffOnContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WindowsContent.WindowsContent_C.NotifyParentOnAlarmRaisedOnContent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWindowsContent_C::NotifyParentOnAlarmRaisedOnContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.NotifyParentOnAlarmRaisedOnContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WindowsContent.WindowsContent_C.NotifyParentOnWindowsContentSizeChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWindowsContent_C::NotifyParentOnWindowsContentSizeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.NotifyParentOnWindowsContentSizeChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WindowsContent.WindowsContent_C.SetParentWindow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCustomGUIWindow_C*      parentWindowToSet              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UWindowsContent_C::SetParentWindow(class UCustomGUIWindow_C* parentWindowToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.SetParentWindow");

	struct
	{
		class UCustomGUIWindow_C*      parentWindowToSet;
	} params;

	params.parentWindowToSet = parentWindowToSet;

	UObject::ProcessEvent(fn, &params);
}


// Function WindowsContent.WindowsContent_C.GetParentWindow
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCustomGUIWindow_C*      parentWindow                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UWindowsContent_C::GetParentWindow(class UCustomGUIWindow_C** parentWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.GetParentWindow");

	struct
	{
		class UCustomGUIWindow_C*      parentWindow;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (parentWindow != nullptr)
		*parentWindow = params.parentWindow;
}


// Function WindowsContent.WindowsContent_C.WindowContentSizeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWindowsContent_C::WindowContentSizeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.WindowContentSizeChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WindowsContent.WindowsContent_C.ExecuteUbergraph_WindowsContent
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWindowsContent_C::ExecuteUbergraph_WindowsContent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.ExecuteUbergraph_WindowsContent");

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
