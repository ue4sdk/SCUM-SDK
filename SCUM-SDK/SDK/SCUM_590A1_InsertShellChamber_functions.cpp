// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_590A1_InsertShellChamber_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function 590A1_InsertShellChamber.590A1_InsertShellChamber_C.CanExecuteUsingData
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FWeaponReloadData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool U590A1_InsertShellChamber_C::CanExecuteUsingData(const struct FWeaponReloadData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function 590A1_InsertShellChamber.590A1_InsertShellChamber_C.CanExecuteUsingData");

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
