#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Improvised_Lookout_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Improvised_Lookout_01.BP_Improvised_Lookout_01_C
// 0x0020 (0x0720 - 0x0700)
class ABP_Improvised_Lookout_01_C : public ALookoutItem
{
public:
	TArray<struct FLadderMarker>                       LadderMarkers;                                            // 0x0700(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FWindowMarker>                       WindowMarkers;                                            // 0x0710(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Improvised_Lookout_01.BP_Improvised_Lookout_01_C");
		return ptr;
	}


	void GetWindowMarkers(TArray<struct FWindowMarker>* Result);
	void GetLadderMarkers(TArray<struct FLadderMarker>* Result);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
