// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ABP_Prisoner_Corpse_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Prisoner_Corpse.ABP_Prisoner_Corpse_C.ExecuteUbergraph_ABP_Prisoner_Corpse
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_Prisoner_Corpse_C::ExecuteUbergraph_ABP_Prisoner_Corpse(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Prisoner_Corpse.ABP_Prisoner_Corpse_C.ExecuteUbergraph_ABP_Prisoner_Corpse");

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
