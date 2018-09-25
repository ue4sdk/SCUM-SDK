#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_AnimBP_AKS_74U_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AnimBP_AKS_74U.AnimBP_AKS_74U_C
// 0x0618 (0x09E8 - 0x03D0)
class UAnimBP_AKS_74U_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9957B56D4ECF19F6C271D7BBAD9B0764;      // 0x03D8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_275EBD1E4C0607B2FEBE2294B32BFA75;      // 0x0420(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_96BA225E4F3665B1F0D8E99BC579FF69;      // 0x0488(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_ACDC4B4846E8F1C133AAF7A0D9898E65;      // 0x04F0(0x0068)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_A410198E491529D79243C9B392E5AF8A;// 0x0558(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_790D3383498700C73F712A9BA6A84FC7;      // 0x0638(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B96D106845FBC3EE3DAB778E435402C9;// 0x06A0(0x00A8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_84B5B7BC4997B098139BDCB8ADE4045E;// 0x0748(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8573EED64209F9800014BFA511AB4CE6;// 0x07B8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9320009D4301B1B2966241A05D7016E3;// 0x0808(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2944351B429E639F442EB2BCC094822D;// 0x0858(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5776B9914AC5CFC06C3AE6B838EC8E65;// 0x08A8(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F757EF7643FE603957D919A091040AD4;// 0x0978(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass AnimBP_AKS_74U.AnimBP_AKS_74U_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_AKS_74U_AnimGraphNode_BlendListByBool_5776B9914AC5CFC06C3AE6B838EC8E65();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_AKS_74U_AnimGraphNode_BlendListByEnum_A410198E491529D79243C9B392E5AF8A();
	void ExecuteUbergraph_AnimBP_AKS_74U(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
