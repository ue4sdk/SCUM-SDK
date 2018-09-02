// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CharacterSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CharacterSlot.UI_CharacterSlot_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_CharacterSlot_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSlot.UI_CharacterSlot_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterSlot.UI_CharacterSlot_C.BndEvt__UI_MenuButton_128_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CharacterSlot_C::BndEvt__UI_MenuButton_128_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSlot.UI_CharacterSlot_C.BndEvt__UI_MenuButton_128_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterSlot.UI_CharacterSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CharacterSlot_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSlot.UI_CharacterSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterSlot.UI_CharacterSlot_C.ExecuteUbergraph_UI_CharacterSlot
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CharacterSlot_C::ExecuteUbergraph_UI_CharacterSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSlot.UI_CharacterSlot_C.ExecuteUbergraph_UI_CharacterSlot");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterSlot.UI_CharacterSlot_C.OnDestroyClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_CharacterSlot_C*     Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_CharacterSlot_C::OnDestroyClicked__DelegateSignature(class UUI_CharacterSlot_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSlot.UI_CharacterSlot_C.OnDestroyClicked__DelegateSignature");

	struct
	{
		class UUI_CharacterSlot_C*     Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterSlot.UI_CharacterSlot_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDbUserProfile*          userProfile                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CharacterSlot_C::OnClicked__DelegateSignature(class UDbUserProfile* userProfile)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSlot.UI_CharacterSlot_C.OnClicked__DelegateSignature");

	struct
	{
		class UDbUserProfile*          userProfile;
	} params;

	params.userProfile = userProfile;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
