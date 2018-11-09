// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Deer2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Deer2.BP_Deer2_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Deer2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deer2.BP_Deer2_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Deer2.BP_Deer2_C.ExecuteUbergraph_BP_Deer2
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Deer2_C::ExecuteUbergraph_BP_Deer2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Deer2.BP_Deer2_C.ExecuteUbergraph_BP_Deer2");

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
