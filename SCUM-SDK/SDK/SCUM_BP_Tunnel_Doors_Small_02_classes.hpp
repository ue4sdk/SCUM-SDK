#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Tunnel_Doors_Small_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Tunnel_Doors_Small_02.BP_Tunnel_Doors_Small_02_C
// 0x0008 (0x03D0 - 0x03C8)
class ABP_Tunnel_Doors_Small_02_C : public ARegularDoorStatic
{
public:
	class UStaticMeshComponent*                        Tunnel_Door_Frame;                                        // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Tunnel_Doors_Small_02.BP_Tunnel_Doors_Small_02_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
