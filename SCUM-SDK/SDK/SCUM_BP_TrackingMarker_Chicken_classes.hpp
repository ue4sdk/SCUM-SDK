#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_TrackingMarker_Chicken_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TrackingMarker_Chicken.BP_TrackingMarker_Chicken_C
// 0x0008 (0x03A8 - 0x03A0)
class ABP_TrackingMarker_Chicken_C : public ABP_TrackingMarker2_C
{
public:
	class UDecalComponent*                             Decal;                                                    // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_TrackingMarker_Chicken.BP_TrackingMarker_Chicken_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
