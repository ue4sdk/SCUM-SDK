// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_ConZGameInstance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ConZGameInstance.BP_ConZGameInstance_C.ReceiveInit
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_ConZGameInstance_C::ReceiveInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConZGameInstance.BP_ConZGameInstance_C.ReceiveInit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ConZGameInstance.BP_ConZGameInstance_C.ExecuteUbergraph_BP_ConZGameInstance
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_ConZGameInstance_C::ExecuteUbergraph_BP_ConZGameInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConZGameInstance.BP_ConZGameInstance_C.ExecuteUbergraph_BP_ConZGameInstance");

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
