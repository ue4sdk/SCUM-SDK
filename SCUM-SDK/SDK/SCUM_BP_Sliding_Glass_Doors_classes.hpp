#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Sliding_Glass_Doors_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Sliding_Glass_Doors.BP_Sliding_Glass_Doors_C
// 0x0008 (0x0418 - 0x0410)
class ABP_Sliding_Glass_Doors_C : public ADoubleSlidingDoorStatic
{
public:
	class UStaticMeshComponent*                        Door_Glass_Double_Frame;                                  // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Sliding_Glass_Doors.BP_Sliding_Glass_Doors_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
