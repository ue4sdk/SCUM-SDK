// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_KillNotification_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_KillNotification.UI_KillNotification_C.SetMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   prefix                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   characterName                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   suffix                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_KillNotification_C::SetMessage(const struct FText& prefix, const struct FText& characterName, const struct FText& suffix)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KillNotification.UI_KillNotification_C.SetMessage");

	struct
	{
		struct FText                   prefix;
		struct FText                   characterName;
		struct FText                   suffix;
	} params;

	params.prefix = prefix;
	params.characterName = characterName;
	params.suffix = suffix;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_KillNotification.UI_KillNotification_C.GetMessageVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_KillNotification_C::GetMessageVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KillNotification.UI_KillNotification_C.GetMessageVisibility");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_KillNotification.UI_KillNotification_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_KillNotification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KillNotification.UI_KillNotification_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_KillNotification.UI_KillNotification_C.ExecuteUbergraph_UI_KillNotification
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_KillNotification_C::ExecuteUbergraph_UI_KillNotification(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KillNotification.UI_KillNotification_C.ExecuteUbergraph_UI_KillNotification");

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
