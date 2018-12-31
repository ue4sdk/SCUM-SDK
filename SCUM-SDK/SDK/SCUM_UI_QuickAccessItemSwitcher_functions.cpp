// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_QuickAccessItemSwitcher_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_QuickAccessItemSwitcher.UI_QuickAccessItemSwitcher_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_QuickAccessItemSwitcher_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemSwitcher.UI_QuickAccessItemSwitcher_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_QuickAccessItemSwitcher.UI_QuickAccessItemSwitcher_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_QuickAccessItemSwitcher_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemSwitcher.UI_QuickAccessItemSwitcher_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_QuickAccessItemSwitcher.UI_QuickAccessItemSwitcher_C.ExecuteUbergraph_UI_QuickAccessItemSwitcher
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_QuickAccessItemSwitcher_C::ExecuteUbergraph_UI_QuickAccessItemSwitcher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemSwitcher.UI_QuickAccessItemSwitcher_C.ExecuteUbergraph_UI_QuickAccessItemSwitcher");

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
