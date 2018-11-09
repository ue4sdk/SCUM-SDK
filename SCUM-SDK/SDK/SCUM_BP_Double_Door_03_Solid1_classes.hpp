#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Double_Door_03_Solid1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Double_Door_03_Solid1.BP_Double_Door_03_Solid1_C
// 0x0008 (0x0428 - 0x0420)
class ABP_Double_Door_03_Solid1_C : public ADoubleRegularDoorStatic
{
public:
	class UStaticMeshComponent*                        SM_Door_03_Frame;                                         // 0x0420(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Double_Door_03_Solid1.BP_Double_Door_03_Solid1_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
