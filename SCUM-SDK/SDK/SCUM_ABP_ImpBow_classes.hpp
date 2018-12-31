#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ABP_ImpBow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_ImpBow.ABP_ImpBow_C
// 0x0A10 (0x0D90 - 0x0380)
class UABP_ImpBow_C : public UWeaponBowAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E7AC62BB43027BFC9DA8B8A80E322BDF;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F66076D348ED8EA6C6E9C0BEBC55AE3E;      // 0x03D0(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_78D1E9494663CA6A2E0C30A3F2143D9B;// 0x0440(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_610418F748E9F7C4B71EAC852D6025CA;      // 0x0520(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_58C0132C42B2707ECA93DF9B11A623D8;// 0x0590(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_18FE19494C12EDF78CA07E8592D4E446;      // 0x0640(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_53BB1AF0403D6092259B0BA4EE0305BB;// 0x06B0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2165669A44107B2F3B4D1DACDD29F12C;      // 0x0760(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_61CCCA61454907A51ADA8CB5776CD363;// 0x07D0(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_86FCABB541201D7500F416A24B773D00;// 0x0880(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_109262E345B5E1C60A79B99545456250;      // 0x0960(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9D30289D4F2DE89FA378C89AC5380883;// 0x09D0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_642794974E39FCB7E1AAC38D0FE860B1;      // 0x0A80(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0826564B4614A09D286EA290B4D3FC79;// 0x0AF0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7421863E45E8E236B9D101B2DBA556A4;      // 0x0BA0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_46D14C0A4A52443D7695258979001F76;// 0x0C10(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_331AC3E6415A02194111D9B10FFC7552;// 0x0CC0(0x00D0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_ImpBow.ABP_ImpBow_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ImpBow_AnimGraphNode_BlendListByBool_331AC3E6415A02194111D9B10FFC7552();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ImpBow_AnimGraphNode_BlendListByEnum_86FCABB541201D7500F416A24B773D00();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ImpBow_AnimGraphNode_BlendListByEnum_78D1E9494663CA6A2E0C30A3F2143D9B();
	void ExecuteUbergraph_ABP_ImpBow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
