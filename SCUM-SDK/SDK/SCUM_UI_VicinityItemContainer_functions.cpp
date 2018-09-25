// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_VicinityItemContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.InitVicinityItemContainer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_VicinityItemContainer_C::InitVicinityItemContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.InitVicinityItemContainer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.SetParentHUD
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHUD_C*                  parentHUD                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_VicinityItemContainer_C::SetParentHUD(class UHUD_C* parentHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.SetParentHUD");

	struct
	{
		class UHUD_C*                  parentHUD;
	} params;

	params.parentHUD = parentHUD;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.SetTitle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   titleToSet                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_VicinityItemContainer_C::SetTitle(const struct FText& titleToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.SetTitle");

	struct
	{
		struct FText                   titleToSet;
	} params;

	params.titleToSet = titleToSet;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_VicinityItemContainer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.SaveLayout
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UAttributeMapInterface> attributes                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UUI_VicinityItemContainer_C::SaveLayout(const TScriptInterface<class UAttributeMapInterface>& attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.SaveLayout");

	struct
	{
		TScriptInterface<class UAttributeMapInterface> attributes;
	} params;

	params.attributes = attributes;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.LoadLayout
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UAttributeMapInterface> attributes                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UUI_VicinityItemContainer_C::LoadLayout(const TScriptInterface<class UAttributeMapInterface>& attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.LoadLayout");

	struct
	{
		TScriptInterface<class UAttributeMapInterface> attributes;
	} params;

	params.attributes = attributes;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.DeferredLoadLayout
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_VicinityItemContainer_C::DeferredLoadLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.DeferredLoadLayout");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.ResetLayout
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_VicinityItemContainer_C::ResetLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.ResetLayout");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.ExecuteUbergraph_UI_VicinityItemContainer
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_VicinityItemContainer_C::ExecuteUbergraph_UI_VicinityItemContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.ExecuteUbergraph_UI_VicinityItemContainer");

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
