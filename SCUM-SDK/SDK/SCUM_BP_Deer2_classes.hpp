#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Deer2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Deer2.BP_Deer2_C
// 0x0018 (0x0CA8 - 0x0C90)
class ABP_Deer2_C : public ADeer2
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C90(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UMeleeDetectHitCollisionCapsule*             MeleeDetectHitCollisionCapsule;                           // 0x0C98(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UNavigationInvokerComponent*                 NavigationInvoker;                                        // 0x0CA0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Deer2.BP_Deer2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_Deer2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
