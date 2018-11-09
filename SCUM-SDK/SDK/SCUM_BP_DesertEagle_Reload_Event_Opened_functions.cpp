// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_DesertEagle_Reload_Event_Opened_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DesertEagle_Reload_Event_Opened.BP_DesertEagle_Reload_Event_Opened_C.OnActionAnimNotify
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// ECharacterActionNotifyType     notifyType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_DesertEagle_Reload_Event_Opened_C::OnActionAnimNotify(ECharacterActionNotifyType notifyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DesertEagle_Reload_Event_Opened.BP_DesertEagle_Reload_Event_Opened_C.OnActionAnimNotify");

	struct
	{
		ECharacterActionNotifyType     notifyType;
	} params;

	params.notifyType = notifyType;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DesertEagle_Reload_Event_Opened.BP_DesertEagle_Reload_Event_Opened_C.ExecuteUbergraph_BP_DesertEagle_Reload_Event_Opened
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_DesertEagle_Reload_Event_Opened_C::ExecuteUbergraph_BP_DesertEagle_Reload_Event_Opened(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DesertEagle_Reload_Event_Opened.BP_DesertEagle_Reload_Event_Opened_C.ExecuteUbergraph_BP_DesertEagle_Reload_Event_Opened");

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
