#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_AnimBP_SVD_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AnimBP_SVD.AnimBP_SVD_C
// 0x0618 (0x09E8 - 0x03D0)
class UAnimBP_SVD_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2D5D18E1498955AF7E87EEBA5D40D2F1;      // 0x03D8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4C75E5F541492B902A2A82B7A7477C77;      // 0x0420(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3B9772BD4E91E75273ADD9A55E769B38;      // 0x0488(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B5DE82FC48762FC81A2AE8921D798C61;      // 0x04F0(0x0068)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_D231EF5A4F74F40271F9C1B446935158;// 0x0558(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_58D012F240891DC87D42B0A08180CA79;      // 0x0638(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7849D79C4CB0B85C39E34FA7BCBA4631;// 0x06A0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FC11197248D596E6303FF9A7201BF35D;// 0x0748(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E51385754C2150A9B25FB398BB7F5A50;// 0x0798(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D0CC63EB42A66ABCF039B4B1D4C59B35;// 0x07E8(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_547ADADE4D48771564A38492B22B08EC;// 0x0838(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6E88865D418C52B8D6A4EAB65607CCA5;// 0x08A8(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A2E296D24119E912FED3188EB8EAF76D;// 0x0978(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass AnimBP_SVD.AnimBP_SVD_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SVD_AnimGraphNode_BlendListByBool_6E88865D418C52B8D6A4EAB65607CCA5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SVD_AnimGraphNode_BlendListByEnum_D231EF5A4F74F40271F9C1B446935158();
	void ExecuteUbergraph_AnimBP_SVD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
