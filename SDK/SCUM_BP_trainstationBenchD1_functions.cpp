// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_trainstationBenchD1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_trainstationBenchD1.BP_trainstationBenchD1_C.ConfigureMaterials
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    InStaticMesh                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ABP_trainstationBenchD1_C::ConfigureMaterials(class UStaticMeshComponent* InStaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_trainstationBenchD1.BP_trainstationBenchD1_C.ConfigureMaterials");

	struct
	{
		class UStaticMeshComponent*    InStaticMesh;
	} params;

	params.InStaticMesh = InStaticMesh;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_trainstationBenchD1.BP_trainstationBenchD1_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_trainstationBenchD1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_trainstationBenchD1.BP_trainstationBenchD1_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
