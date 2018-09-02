#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_M9_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass M9_AnimBlueprint.M9_AnimBlueprint_C
// 0x0618 (0x09E8 - 0x03D0)
class UM9_AnimBlueprint_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_54689EA6489D5413E4480FB2D3CE8144;      // 0x03D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E3DE50234B01B9218AE3009B1E68FF78;// 0x0420(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FA52BD564E4930F288437D9657B700FE;      // 0x0490(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0E0FB12546F4D38F6FA791BBFF0DD171;      // 0x04F8(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D3F0659B41D4F97FB684009B6FC82D31;      // 0x0560(0x0068)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_209CF5C74050B1ACEF314D87A460AC84;// 0x05C8(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A1D641CA449A504961F0FE859587DFD1;      // 0x06A8(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_70D906734C5E99EE3208459D5D792AC0;// 0x0710(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_026EFC6D4F1FB074C8B3418D003F772B;// 0x07E0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C904773F40278A77606FE3979C8773C5;// 0x0888(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_ED1A642A448886543AAAA3945D436C5A;// 0x08D8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DD6602A6487A71FE8B9D0095CB4C7585;// 0x0928(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_70EC20E942CB950F802AE98D27EBDDC6;// 0x0978(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass M9_AnimBlueprint.M9_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_M9_AnimBlueprint_AnimGraphNode_BlendListByBool_70D906734C5E99EE3208459D5D792AC0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M9_AnimBlueprint_AnimGraphNode_BlendListByEnum_209CF5C74050B1ACEF314D87A460AC84();
	void ExecuteUbergraph_M9_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
