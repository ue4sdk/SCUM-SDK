#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Hatch_Door_Tower_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Hatch_Door_Tower.BP_Hatch_Door_Tower_C
// 0x0008 (0x03F0 - 0x03E8)
class ABP_Hatch_Door_Tower_C : public ARegularDoorStatic
{
public:
	class UStaticMeshComponent*                        SM_MetalDoorFrame_01;                                     // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Hatch_Door_Tower.BP_Hatch_Door_Tower_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
