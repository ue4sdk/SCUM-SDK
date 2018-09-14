#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_SM_Jail_Garage_Building_Door_Blueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SM_Jail_Garage_Building_Door_Blueprint.SM_Jail_Garage_Building_Door_Blueprint_C
// 0x0008 (0x0408 - 0x0400)
class ASM_Jail_Garage_Building_Door_Blueprint_C : public ADoubleRegularDoorStatic
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent02;                                    // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SM_Jail_Garage_Building_Door_Blueprint.SM_Jail_Garage_Building_Door_Blueprint_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
