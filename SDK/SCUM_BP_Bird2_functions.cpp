// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Bird2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Bird2.BP_Bird2_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Bird2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bird2.BP_Bird2_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Bird2.BP_Bird2_C.ExecuteUbergraph_BP_Bird2
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Bird2_C::ExecuteUbergraph_BP_Bird2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bird2.BP_Bird2_C.ExecuteUbergraph_BP_Bird2");

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
