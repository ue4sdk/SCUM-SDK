#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_AnimBP_Desert_Eagle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AnimBP_Desert_Eagle.AnimBP_Desert_Eagle_C
// 0x06F0 (0x0A60 - 0x0370)
class UAnimBP_Desert_Eagle_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F9CB0E3C41537238B11632AC6497DECD;      // 0x0378(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BD15B5C44860D40EBA5B5A9F4C2B60FF;      // 0x03C0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_40B14FAC470E13DF38823E98F607899D;      // 0x0430(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B78F84144ED5A2D62C9BB18D3EC24C56;      // 0x04A0(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_9E6C33FD4E317093B550FE9A629E9E3B;// 0x0510(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_ADFBD91E489E64E4356AF997CA137972;      // 0x05F0(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F967964640DE54FE90171A87D27902E8;// 0x0660(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_471FEECF40914DF042C3D788B0C0A587;// 0x0730(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CFE51D00481A0CE5F4581BA9EAEEB406;// 0x0810(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AF6593E54743ED57E351FCAF0630572D;// 0x0860(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B1F991F94C879012A8E67C9EF771876D;// 0x08B0(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7BA33CB949583F4F9641A19B16E4B337;// 0x0900(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_81E7448D4F19C2DDC3935ABB3CC004D9;// 0x09B0(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass AnimBP_Desert_Eagle.AnimBP_Desert_Eagle_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Desert_Eagle_AnimGraphNode_BlendListByBool_F967964640DE54FE90171A87D27902E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Desert_Eagle_AnimGraphNode_BlendListByEnum_9E6C33FD4E317093B550FE9A629E9E3B();
	void ExecuteUbergraph_AnimBP_Desert_Eagle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
