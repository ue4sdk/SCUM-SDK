// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_590A1_Reload_Event_NoChamber_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function 590A1_Reload_Event_NoChamber.590A1_Reload_Event_NoChamber_C.ExecuteUsingData
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FWeaponReloadData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float U590A1_Reload_Event_NoChamber_C::ExecuteUsingData(const struct FWeaponReloadData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function 590A1_Reload_Event_NoChamber.590A1_Reload_Event_NoChamber_C.ExecuteUsingData");

	struct
	{
		struct FWeaponReloadData       Data;
		float                          ReturnValue;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function 590A1_Reload_Event_NoChamber.590A1_Reload_Event_NoChamber_C.CanExecuteUsingData
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FWeaponReloadData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool U590A1_Reload_Event_NoChamber_C::CanExecuteUsingData(const struct FWeaponReloadData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function 590A1_Reload_Event_NoChamber.590A1_Reload_Event_NoChamber_C.CanExecuteUsingData");

	struct
	{
		struct FWeaponReloadData       Data;
		bool                           ReturnValue;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function 590A1_Reload_Event_NoChamber.590A1_Reload_Event_NoChamber_C.OnActionAnimNotify
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// ECharacterActionNotifyType     notifyType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U590A1_Reload_Event_NoChamber_C::OnActionAnimNotify(ECharacterActionNotifyType notifyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function 590A1_Reload_Event_NoChamber.590A1_Reload_Event_NoChamber_C.OnActionAnimNotify");

	struct
	{
		ECharacterActionNotifyType     notifyType;
	} params;

	params.notifyType = notifyType;

	UObject::ProcessEvent(fn, &params);
}


// Function 590A1_Reload_Event_NoChamber.590A1_Reload_Event_NoChamber_C.ExecuteUbergraph_590A1_Reload_Event_NoChamber
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U590A1_Reload_Event_NoChamber_C::ExecuteUbergraph_590A1_Reload_Event_NoChamber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function 590A1_Reload_Event_NoChamber.590A1_Reload_Event_NoChamber_C.ExecuteUbergraph_590A1_Reload_Event_NoChamber");

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
