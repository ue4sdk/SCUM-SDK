// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_QuickAccessBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_QuickAccessBar.UI_QuickAccessBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_QuickAccessBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessBar.UI_QuickAccessBar_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_QuickAccessBar.UI_QuickAccessBar_C.ExecuteUbergraph_UI_QuickAccessBar
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_QuickAccessBar_C::ExecuteUbergraph_UI_QuickAccessBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessBar.UI_QuickAccessBar_C.ExecuteUbergraph_UI_QuickAccessBar");

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
