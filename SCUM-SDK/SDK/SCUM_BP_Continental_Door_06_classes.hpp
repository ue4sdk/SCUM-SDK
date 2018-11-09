#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Continental_Door_06_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Continental_Door_06.BP_Continental_Door_06_C
// 0x0008 (0x03F0 - 0x03E8)
class ABP_Continental_Door_06_C : public ARegularDoorStatic
{
public:
	class UStaticMeshComponent*                        SM_Continental_DoorFrame_01;                              // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Continental_Door_06.BP_Continental_Door_06_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
