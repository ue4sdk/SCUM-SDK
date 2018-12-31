// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_KeyBinding_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_KeyBinding.UI_KeyBinding_C.BindKey
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_KeyBinding_C::BindKey(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.BindKey");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_KeyBinding.UI_KeyBinding_C.OnMouseButtonDown_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_KeyBinding_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.OnMouseButtonDown_1");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_KeyBinding.UI_KeyBinding_C.Init
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_KeyBinding_C::Init(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.Init");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_KeyBinding.UI_KeyBinding_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_KeyBinding_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_KeyBinding.UI_KeyBinding_C.OnDeselected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_KeyBinding_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.OnDeselected");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_KeyBinding.UI_KeyBinding_C.ExecuteUbergraph_UI_KeyBinding
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_KeyBinding_C::ExecuteUbergraph_UI_KeyBinding(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.ExecuteUbergraph_UI_KeyBinding");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_KeyBinding.UI_KeyBinding_C.OnRebindInitiated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_KeyBinding_C*        keyBindingWidget               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_KeyBinding_C::OnRebindInitiated__DelegateSignature(class UUI_KeyBinding_C* keyBindingWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.OnRebindInitiated__DelegateSignature");

	struct
	{
		class UUI_KeyBinding_C*        keyBindingWidget;
	} params;

	params.keyBindingWidget = keyBindingWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_KeyBinding.UI_KeyBinding_C.KeyPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FKey                    actionKey                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// float                          Scale                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_KeyBinding_C::KeyPressed__DelegateSignature(const struct FName& ActionName, const struct FKey& actionKey, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.KeyPressed__DelegateSignature");

	struct
	{
		struct FName                   ActionName;
		struct FKey                    actionKey;
		float                          Scale;
	} params;

	params.ActionName = ActionName;
	params.actionKey = actionKey;
	params.Scale = Scale;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
