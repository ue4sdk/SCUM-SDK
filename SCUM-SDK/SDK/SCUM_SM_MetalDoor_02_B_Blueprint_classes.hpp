#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_SM_MetalDoor_02_B_Blueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SM_MetalDoor_02_B_Blueprint.SM_MetalDoor_02_B_Blueprint_C
// 0x0010 (0x0430 - 0x0420)
class ASM_MetalDoor_02_B_Blueprint_C : public ADoubleRegularDoorStatic
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent0;                                     // 0x0420(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshComponent02;                                    // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SM_MetalDoor_02_B_Blueprint.SM_MetalDoor_02_B_Blueprint_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
