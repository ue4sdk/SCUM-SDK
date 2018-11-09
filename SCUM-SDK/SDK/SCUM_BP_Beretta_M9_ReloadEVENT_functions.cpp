// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Beretta_M9_ReloadEVENT_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Beretta_M9_ReloadEVENT.BP_Beretta_M9_ReloadEVENT_C.ExecuteUsingData
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FWeaponReloadData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UBP_Beretta_M9_ReloadEVENT_C::ExecuteUsingData(const struct FWeaponReloadData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Beretta_M9_ReloadEVENT.BP_Beretta_M9_ReloadEVENT_C.ExecuteUsingData");

	struct
	{
		struct FWeaponReloadData       Data;
		float                          ReturnValue;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_Beretta_M9_ReloadEVENT.BP_Beretta_M9_ReloadEVENT_C.CanExecuteUsingData
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FWeaponReloadData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBP_Beretta_M9_ReloadEVENT_C::CanExecuteUsingData(const struct FWeaponReloadData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Beretta_M9_ReloadEVENT.BP_Beretta_M9_ReloadEVENT_C.CanExecuteUsingData");

	struct
	{
		struct FWeaponReloadData       Data;
		bool                           ReturnValue;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
