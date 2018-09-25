// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_InspectedItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_InspectedItem.UI_InspectedItem_C.SetIsToolForSomething
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsTool                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InspectedItem_C::SetIsToolForSomething(bool IsTool)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InspectedItem.UI_InspectedItem_C.SetIsToolForSomething");

	struct
	{
		bool                           IsTool;
	} params;

	params.IsTool = IsTool;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InspectedItem.UI_InspectedItem_C.ExecuteUbergraph_UI_InspectedItem
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InspectedItem_C::ExecuteUbergraph_UI_InspectedItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InspectedItem.UI_InspectedItem_C.ExecuteUbergraph_UI_InspectedItem");

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
