// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_CustomGUIWindow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CustomGUIWindow.CustomGUIWindow_C.GetTitle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_Parm, CPF_OutParm)

void UCustomGUIWindow_C::GetTitle(struct FText* Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGUIWindow.CustomGUIWindow_C.GetTitle");

	struct
	{
		struct FText                   Title;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Title != nullptr)
		*Title = params.Title;
}


// Function CustomGUIWindow.CustomGUIWindow_C.SetTitle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   titleToSet                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UCustomGUIWindow_C::SetTitle(const struct FText& titleToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGUIWindow.CustomGUIWindow_C.SetTitle");

	struct
	{
		struct FText                   titleToSet;
	} params;

	params.titleToSet = titleToSet;

	UObject::ProcessEvent(fn, &params);
}


// Function CustomGUIWindow.CustomGUIWindow_C.AlarmOnWindowContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCustomGUIWindow_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGUIWindow.CustomGUIWindow_C.AlarmOnWindowContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CustomGUIWindow.CustomGUIWindow_C.AlarmOffWindowContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCustomGUIWindow_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGUIWindow.CustomGUIWindow_C.AlarmOffWindowContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CustomGUIWindow.CustomGUIWindow_C.ExecuteUbergraph_CustomGUIWindow
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCustomGUIWindow_C::ExecuteUbergraph_CustomGUIWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGUIWindow.CustomGUIWindow_C.ExecuteUbergraph_CustomGUIWindow");

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
