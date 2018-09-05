#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_M9_AnimBlueprintPAX_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass M9_AnimBlueprintPAX.M9_AnimBlueprintPAX_C
// 0x0618 (0x09E8 - 0x03D0)
class UM9_AnimBlueprintPAX_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3445042C4747C6F049787BB237571C74;      // 0x03D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4D3922594F934D084C0C8B8F8BA09B00;// 0x0420(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1A85ACCE4982ABD6E6A567A4E574358D;      // 0x0490(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4764225541DDD77FA0A6649D546515E6;      // 0x04F8(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E139F2544DE777F43832D0BDF5241B72;      // 0x0560(0x0068)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_B142F9ED416C807DCC849CA45F66BB38;// 0x05C8(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E44C42804E3553D99FB719A2BDE78298;      // 0x06A8(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_97E0916C46FF23A3ED40B0B993E69A27;// 0x0710(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_21D4D51D42D2488A93BE469EC4A5CFB9;// 0x07E0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C065766A41F125D187FE098A6099F002;// 0x0888(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2D0F35A74DB99040B5F7D08C3E9C2D18;// 0x08D8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_345D60CD4850ABF4A97019AC0AEB7580;// 0x0928(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CFD89582469C326B2122F996CFFC07DA;// 0x0978(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass M9_AnimBlueprintPAX.M9_AnimBlueprintPAX_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_M9_AnimBlueprintPAX_AnimGraphNode_BlendListByBool_97E0916C46FF23A3ED40B0B993E69A27();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M9_AnimBlueprintPAX_AnimGraphNode_BlendListByEnum_B142F9ED416C807DCC849CA45F66BB38();
	void ExecuteUbergraph_M9_AnimBlueprintPAX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
