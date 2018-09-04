#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Small_Heavy_Sliding_Doors_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Small_Heavy_Sliding_Doors_01.BP_Small_Heavy_Sliding_Doors_01_C
// 0x0008 (0x03C8 - 0x03C0)
class ABP_Small_Heavy_Sliding_Doors_01_C : public ASlidingDoorStatic
{
public:
	class UStaticMeshComponent*                        SM_Tunnel_Small_Door_Frame_01;                            // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Small_Heavy_Sliding_Doors_01.BP_Small_Heavy_Sliding_Doors_01_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
