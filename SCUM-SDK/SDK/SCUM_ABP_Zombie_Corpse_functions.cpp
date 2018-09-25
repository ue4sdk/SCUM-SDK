// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ABP_Zombie_Corpse_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Zombie_Corpse.ABP_Zombie_Corpse_C.ExecuteUbergraph_ABP_Zombie_Corpse
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_Zombie_Corpse_C::ExecuteUbergraph_ABP_Zombie_Corpse(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Zombie_Corpse.ABP_Zombie_Corpse_C.ExecuteUbergraph_ABP_Zombie_Corpse");

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
