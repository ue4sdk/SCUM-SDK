#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ABP_SUV_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_SUV_01.ABP_SUV_01_C
// 0x01F8 (0x0B58 - 0x0960)
class UABP_SUV_01_C : public UDcxVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0960(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1C84F98249E7AD88E371BFA66455D613;      // 0x0968(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_0BD7C2A64C62AE2DF9D5719C427437B7;// 0x09B0(0x0030)
	struct FDcxAnimNodeWheelSimulator                  DcxAnimGraphNodeWheelSimulator_EA43361340A853F432C05A93ABEB9DCF;// 0x09E0(0x0130)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_49AFF47C4E65321FCF2854B65C38FEC0;// 0x0B10(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_SUV_01.ABP_SUV_01_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_SUV_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
