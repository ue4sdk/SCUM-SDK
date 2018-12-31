#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ABP_RecurveBow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_RecurveBow.ABP_RecurveBow_C
// 0x0A10 (0x0D90 - 0x0380)
class UABP_RecurveBow_C : public UWeaponBowAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_7B6C0BBB43B1B23F7C9229880C0E4AFD;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_772416FC4A493266CFC6DDB68C681BF2;      // 0x03D0(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_DFEE4DA0468E3FC5F1FEA480E40D8941;// 0x0440(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0C41964C428B1CC25ACC778A70CC0DEE;      // 0x0520(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FD4E7C5544E6700AA4118CBAAD7F66DF;// 0x0590(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B309A4E84F9C0E1AB0E418A8F427BFD8;      // 0x0640(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8476389847679FBDBA9E22B94BEC40A7;// 0x06B0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_98BC4A8F431377712B0859A925E349B3;      // 0x0760(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E0B3C6DB4B7FDAD7440FF7B6F03E18E6;// 0x07D0(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_365914264491D9C6BB6F5DB54EE129A4;// 0x0880(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_92A0E4F54761CBBB92FCDCA874E4A4A8;      // 0x0960(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_89F17B484C0E41C9FBABC881FE344F86;// 0x09D0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_65FB8A434F04B8BD834817958C09868B;      // 0x0A80(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5C77F5A847FC405E14CD9EAAF24C8FEB;// 0x0AF0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_207BFB4845866CCB66D412B87B6D2EA2;      // 0x0BA0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_412570A1495126AED2A3C48354535811;// 0x0C10(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DBEF1CCA4F449E5C5FF4BC9F4F219B81;// 0x0CC0(0x00D0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_RecurveBow.ABP_RecurveBow_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RecurveBow_AnimGraphNode_BlendListByBool_DBEF1CCA4F449E5C5FF4BC9F4F219B81();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RecurveBow_AnimGraphNode_BlendListByEnum_365914264491D9C6BB6F5DB54EE129A4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RecurveBow_AnimGraphNode_BlendListByEnum_DFEE4DA0468E3FC5F1FEA480E40D8941();
	void ExecuteUbergraph_ABP_RecurveBow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
