#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_PrisonSecurityLock_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PrisonSecurityLock_01.BP_PrisonSecurityLock_01_C
// 0x0008 (0x0330 - 0x0328)
class ABP_PrisonSecurityLock_01_C : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent0;                                     // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_PrisonSecurityLock_01.BP_PrisonSecurityLock_01_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
