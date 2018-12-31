// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CombinedInventory_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CombinedInventory.UI_CombinedInventory_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_CombinedInventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CombinedInventory.UI_CombinedInventory_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CombinedInventory.UI_CombinedInventory_C.SaveLayout
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UAttributeMapInterface> Attributes                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UUI_CombinedInventory_C::SaveLayout(const TScriptInterface<class UAttributeMapInterface>& Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CombinedInventory.UI_CombinedInventory_C.SaveLayout");

	struct
	{
		TScriptInterface<class UAttributeMapInterface> Attributes;
	} params;

	params.Attributes = Attributes;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CombinedInventory.UI_CombinedInventory_C.LoadLayout
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UAttributeMapInterface> Attributes                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UUI_CombinedInventory_C::LoadLayout(const TScriptInterface<class UAttributeMapInterface>& Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CombinedInventory.UI_CombinedInventory_C.LoadLayout");

	struct
	{
		TScriptInterface<class UAttributeMapInterface> Attributes;
	} params;

	params.Attributes = Attributes;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CombinedInventory.UI_CombinedInventory_C.ResetLayout
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CombinedInventory_C::ResetLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CombinedInventory.UI_CombinedInventory_C.ResetLayout");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CombinedInventory.UI_CombinedInventory_C.DeferredLoadLayout
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CombinedInventory_C::DeferredLoadLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CombinedInventory.UI_CombinedInventory_C.DeferredLoadLayout");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CombinedInventory.UI_CombinedInventory_C.ExecuteUbergraph_UI_CombinedInventory
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CombinedInventory_C::ExecuteUbergraph_UI_CombinedInventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CombinedInventory.UI_CombinedInventory_C.ExecuteUbergraph_UI_CombinedInventory");

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
