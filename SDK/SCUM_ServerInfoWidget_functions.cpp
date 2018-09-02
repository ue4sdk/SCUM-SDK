// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ServerInfoWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ServerInfoWidget.ServerInfoWidget_C.SetValid
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Valid                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UServerInfoWidget_C::SetValid(bool Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.SetValid");

	struct
	{
		bool                           Valid;
	} params;

	params.Valid = Valid;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerInfoWidget.ServerInfoWidget_C.Connect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 password                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UServerInfoWidget_C::Connect(const struct FString& password)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.Connect");

	struct
	{
		struct FString                 password;
	} params;

	params.password = password;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerInfoWidget.ServerInfoWidget_C.SetColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UServerInfoWidget_C::SetColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.SetColor");

	struct
	{
		struct FLinearColor            Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerInfoWidget.ServerInfoWidget_C.UpdateFromServerInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FServerInfo             ServerInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UServerInfoWidget_C::UpdateFromServerInfo(const struct FServerInfo& ServerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.UpdateFromServerInfo");

	struct
	{
		struct FServerInfo             ServerInfo;
	} params;

	params.ServerInfo = ServerInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerInfoWidget.ServerInfoWidget_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UServerInfoWidget_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UServerInfoWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UServerInfoWidget_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerInfoWidget.ServerInfoWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UServerInfoWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerInfoWidget.ServerInfoWidget_C.ExecuteUbergraph_ServerInfoWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UServerInfoWidget_C::ExecuteUbergraph_ServerInfoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.ExecuteUbergraph_ServerInfoWidget");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerInfoWidget.ServerInfoWidget_C.OnRemoved__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FServerInfo             Info                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UServerInfoWidget_C::OnRemoved__DelegateSignature(const struct FServerInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.OnRemoved__DelegateSignature");

	struct
	{
		struct FServerInfo             Info;
	} params;

	params.Info = Info;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerInfoWidget.ServerInfoWidget_C.OnDoubleClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UServerInfoWidget_C*     ServerInfoWidget               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UServerInfoWidget_C::OnDoubleClicked__DelegateSignature(class UServerInfoWidget_C* ServerInfoWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.OnDoubleClicked__DelegateSignature");

	struct
	{
		class UServerInfoWidget_C*     ServerInfoWidget;
	} params;

	params.ServerInfoWidget = ServerInfoWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerInfoWidget.ServerInfoWidget_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UServerInfoWidget_C*     ServerInfoWidget               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UServerInfoWidget_C::OnClicked__DelegateSignature(class UServerInfoWidget_C* ServerInfoWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.OnClicked__DelegateSignature");

	struct
	{
		class UServerInfoWidget_C*     ServerInfoWidget;
	} params;

	params.ServerInfoWidget = ServerInfoWidget;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
