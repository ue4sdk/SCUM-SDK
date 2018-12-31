// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_WeaponScopeWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_WeaponScopeWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnShowElements
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_WeaponScopeWidget_C::OnShowElements()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnShowElements");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnHideElements
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_WeaponScopeWidget_C::OnHideElements()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnHideElements");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnConstructFinished
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_WeaponScopeWidget_C::OnConstructFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.OnConstructFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_WeaponScopeWidget_C::BndEvt__FadeOut_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.ExecuteUbergraph_BP_WeaponScopeWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_WeaponScopeWidget_C::ExecuteUbergraph_BP_WeaponScopeWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponScopeWidget.BP_WeaponScopeWidget_C.ExecuteUbergraph_BP_WeaponScopeWidget");

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
