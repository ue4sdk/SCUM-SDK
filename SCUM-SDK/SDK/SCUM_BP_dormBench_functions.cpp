// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_dormBench_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_dormBench.BP_dormBench_C.NewFunction_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_dormBench_C::NewFunction_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_dormBench.BP_dormBench_C.NewFunction_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_dormBench.BP_dormBench_C.ConfigureMaterials
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    InStaticMesh                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ABP_dormBench_C::ConfigureMaterials(class UStaticMeshComponent* InStaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_dormBench.BP_dormBench_C.ConfigureMaterials");

	struct
	{
		class UStaticMeshComponent*    InStaticMesh;
	} params;

	params.InStaticMesh = InStaticMesh;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_dormBench.BP_dormBench_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_dormBench_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_dormBench.BP_dormBench_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
