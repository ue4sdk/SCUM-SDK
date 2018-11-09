// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ClothingSystemRuntimeInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UClothingSimulationInteractor::PhysicsAssetUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UClothingSimulationInteractor::ClothConfigUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
