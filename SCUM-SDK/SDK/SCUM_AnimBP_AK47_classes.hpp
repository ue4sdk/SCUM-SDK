#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_AnimBP_AK47_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AnimBP_AK47.AnimBP_AK47_C
// 0x0618 (0x09E8 - 0x03D0)
class UAnimBP_AK47_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_ABA2F4904E6915592D73F69D1C6BA609;      // 0x03D8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BC02B2E7481F05BCE31319A0561D2FB5;      // 0x0420(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_03DADBA644D7BE01E31A04B96E58141A;      // 0x0488(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FEC0E1A64848347C5978BFA0AC04E2A2;      // 0x04F0(0x0068)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_85C7DA4643C31D53F8BB308F413ED377;// 0x0558(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_58264BD24DEBAF9CF2AE739A596DE9FA;      // 0x0638(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_BDE911E84A559D88A4F2C0BEEAB7FBE7;// 0x06A0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D59B6C704E103DDB2518D08D3F9EB5EF;// 0x0748(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_109A1CDB429E6AFAF1F319B5EE169E21;// 0x0798(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B993520B41E32B32232EE28B23B40FD6;// 0x07E8(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_88FEB5494F68D6D97616A4A4C1132F4A;// 0x0838(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4CF9E3C544E097D461B18793B5CE2E4A;// 0x08A8(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A31191BD4473F42522D22EAEBA965893;// 0x0978(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass AnimBP_AK47.AnimBP_AK47_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_AK47_AnimGraphNode_BlendListByBool_4CF9E3C544E097D461B18793B5CE2E4A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_AK47_AnimGraphNode_BlendListByEnum_85C7DA4643C31D53F8BB308F413ED377();
	void ExecuteUbergraph_AnimBP_AK47(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
