#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Service_Scaffolding_02_A_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Service_Scaffolding_02_A.BP_Service_Scaffolding_02_A_C
// 0x0018 (0x0340 - 0x0328)
class ABP_Service_Scaffolding_02_A_C : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent0;                                     // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<struct FLadderMarker>                       LadderMarkers;                                            // 0x0330(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Service_Scaffolding_02_A.BP_Service_Scaffolding_02_A_C");
		return ptr;
	}


	void GetLadderMarkers(TArray<struct FLadderMarker>* Result);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
