#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ABP_Deer2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Deer2.ABP_Deer2_C
// 0x1448 (0x17F8 - 0x03B0)
class UABP_Deer2_C : public UComplexAnimal2AnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0604A99E43F0777F5E502F8D56FB9081;      // 0x03B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F35F98BA46B3C389E249109CBDE2633B;// 0x0400(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_71C92EB04CF7B878B2163B9DCCAB62F7;// 0x0448(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D8C6A12B4C36538DD6242C969D365C0A;// 0x0490(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A234E2794190D24DBE7071B312692FCE;// 0x04D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FF6BA010473CCA02CE4AC286BABED386;// 0x0520(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BD5B6567401BD162857F8DBC0A40BAE5;// 0x0568(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ADC209F54F0CC4CE5FD077AE04B233E0;// 0x05B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FD36E27B4EF1E2C41FE154B43FEF6385;// 0x05F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3D70003342D2715FA140A9B710D2038C;// 0x0640(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6FEAE2654575D281782070AAD38286CF;// 0x0688(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_27C816814E5D13AEB1D617AC2C0BE49B;// 0x06D0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_99C7D75F41D9366C43C9C2A4142DCD51;// 0x0780(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7F59AC8B49BD598B1A7D0583F8D0BB12;// 0x07C8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6F6352F648160E2C62197398EA014A06;// 0x0878(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B0C4C037434CE0555F71819DA883D8D7;// 0x08C0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_12087B994ED6E989718DA5873ABD548C;// 0x0970(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5BEB15FA471E3F89039C24998E22110C;// 0x09B8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3FC0D5694ED71FB84B60C0B48883965F;// 0x0A68(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9BF801564B2086AE458A2E9F02755FB1;// 0x0AB0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0A112F0846160D0B049E368DB44ABB71;// 0x0B60(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EB3D97F7430934D255DC4FB9D08356DA;// 0x0BA8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1896F6EC46A0CDB05764BAAED5B5D182;// 0x0C58(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_349133DE448E6551CF924FA88BD5FE2D;// 0x0CA0(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F51B678E4F35E8C51445C1893ADCEB6A;// 0x0DC8(0x0048)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_31E865FC44B08AFD56C97C939D73C0B8;// 0x0E10(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5881D0EA461BD442D1692F9D823AA4A7;// 0x0EF0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1F314051446FACF1477F2B8038C41814;// 0x0FA0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9131E80B4B94C7D42C62ACA2BADC6245;// 0x1050(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5640436640742D0991C5BF89AFC15FEC;// 0x1100(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5F3FF7D049303DF88A642188B2626BB1;// 0x11B0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A2159B174826B1AB6A7A7AA12491F12F;// 0x1260(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0EB562EB47247DBC0938FA82149C6300;// 0x12A8(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D82F06F549C2D6223B1F04ADDFE69505;      // 0x1388(0x0070)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_C83C7DEA4E7B0B65EB219E8A587329A9;// 0x13F8(0x0200)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A1D75EC34E4D535E70520285952582B6;// 0x15F8(0x0160)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3DE7485048D22C57F0BB47B47360BC23;// 0x1758(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_CAC234164FD55BC3D2AEDEB15CDDB40E;// 0x17A0(0x0048)
	class UCurveFloat*                                 SpeedCurve;                                               // 0x17E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ScaleZ;                                                   // 0x17F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TempRot;                                                  // 0x17F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_Deer2.ABP_Deer2_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deer2_AnimGraphNode_TransitionResult_FD36E27B4EF1E2C41FE154B43FEF6385();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deer2_AnimGraphNode_TransitionResult_A234E2794190D24DBE7071B312692FCE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deer2_AnimGraphNode_TransitionResult_ADC209F54F0CC4CE5FD077AE04B233E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deer2_AnimGraphNode_TransitionResult_BD5B6567401BD162857F8DBC0A40BAE5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deer2_AnimGraphNode_TransitionResult_D8C6A12B4C36538DD6242C969D365C0A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deer2_AnimGraphNode_TransitionResult_71C92EB04CF7B878B2163B9DCCAB62F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deer2_AnimGraphNode_BlendSpacePlayer_349133DE448E6551CF924FA88BD5FE2D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deer2_AnimGraphNode_BlendListByEnum_31E865FC44B08AFD56C97C939D73C0B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deer2_AnimGraphNode_TransitionResult_F35F98BA46B3C389E249109CBDE2633B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deer2_AnimGraphNode_RotationOffsetBlendSpace_C83C7DEA4E7B0B65EB219E8A587329A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deer2_AnimGraphNode_ModifyBone_A1D75EC34E4D535E70520285952582B6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Deer2_AnimGraphNode_TransitionResult_FF6BA010473CCA02CE4AC286BABED386();
	void ExecuteUbergraph_ABP_Deer2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
