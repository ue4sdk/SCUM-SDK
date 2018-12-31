// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ConsoleTextLine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleTextLine.ConsoleTextLine_C.SetText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   textToSet                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FLinearColor            textColorToSet                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UConsoleTextLine_C::SetText(const struct FText& textToSet, const struct FLinearColor& textColorToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleTextLine.ConsoleTextLine_C.SetText");

	struct
	{
		struct FText                   textToSet;
		struct FLinearColor            textColorToSet;
	} params;

	params.textToSet = textToSet;
	params.textColorToSet = textColorToSet;

	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleTextLine.ConsoleTextLine_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UConsoleTextLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleTextLine.ConsoleTextLine_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleTextLine.ConsoleTextLine_C.ExecuteUbergraph_ConsoleTextLine
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConsoleTextLine_C::ExecuteUbergraph_ConsoleTextLine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleTextLine.ConsoleTextLine_C.ExecuteUbergraph_ConsoleTextLine");

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
