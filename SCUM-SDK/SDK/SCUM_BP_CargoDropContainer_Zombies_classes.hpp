#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_CargoDropContainer_Zombies_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CargoDropContainer_Zombies.BP_CargoDropContainer_Zombies_C
// 0x0084 (0x049C - 0x0418)
class ABP_CargoDropContainer_Zombies_C : public ABP_CargoDropContainer_Empty_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0418(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemComponent*                    DoorSparks;                                               // 0x0420(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UArrowComponent*                             Arrow8;                                                   // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UArrowComponent*                             Arrow7;                                                   // 0x0430(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UArrowComponent*                             Arrow6;                                                   // 0x0438(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UArrowComponent*                             Arrow5;                                                   // 0x0440(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UArrowComponent*                             Arrow4;                                                   // 0x0448(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UArrowComponent*                             Arrow3;                                                   // 0x0450(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UArrowComponent*                             Arrow2;                                                   // 0x0458(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UArrowComponent*                             Arrow1;                                                   // 0x0460(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UChildActorComponent*                        ChildActor4;                                              // 0x0468(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UChildActorComponent*                        ChildActor3;                                              // 0x0470(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UChildActorComponent*                        ChildActor2;                                              // 0x0478(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UChildActorComponent*                        ChildActor_1;                                             // 0x0480(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        TV;                                                       // 0x0488(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Frame;                                                    // 0x0490(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                NumberOfZombies;                                          // 0x0498(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_CargoDropContainer_Zombies.BP_CargoDropContainer_Zombies_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDoorOpened();
	void ExecuteUbergraph_BP_CargoDropContainer_Zombies(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
