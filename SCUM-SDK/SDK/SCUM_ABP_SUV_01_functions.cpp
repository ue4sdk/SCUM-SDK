// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ABP_SUV_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_SUV_01.ABP_SUV_01_C.ExecuteUbergraph_ABP_SUV_01
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_SUV_01_C::ExecuteUbergraph_ABP_SUV_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_SUV_01.ABP_SUV_01_C.ExecuteUbergraph_ABP_SUV_01");

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
