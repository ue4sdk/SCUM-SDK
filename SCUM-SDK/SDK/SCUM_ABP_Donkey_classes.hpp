#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ABP_Donkey_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Donkey.ABP_Donkey_C
// 0x11E0 (0x15F0 - 0x0410)
class UABP_Donkey_C : public UComplexAnimal2AnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D347A2B74AB53F563CA461889490676D;      // 0x0418(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5A2F4A054FA907440F99ED9DC60F3503;// 0x0460(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_105A79C84CEA573096144C8067011DD7;// 0x04E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_160F9E914BDABBFD8CDE32A8F0753672;// 0x0560(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_527BABCC42EB3FEDBA42D0AB44A9685F;// 0x05E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8FB5D2794B56C4AC48ADCD96192D56C7;// 0x0660(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_68A5AE804C712D0E784145AB76672938;// 0x06E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_73CE16584AA7A294A5423A8DF00C6057;// 0x0760(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BC4E0C274027E6391CAC71921F306BD6;// 0x07E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4E31EC114692AB3B89969BBD943202A2;// 0x0860(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3376D7164E2649A4F36424814C95F4A8;// 0x08E0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2C3D64EA477A621DC1C92181C1ACAFEF;// 0x0960(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F83E949045D40B75AAA5CF82B72DA7CB;// 0x09D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A68A786241C926038122A6B041868A02;// 0x0A18(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3EA851104EEF8F47FBDC0DB41778E7A8;// 0x0A88(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3E2117A84EE87D548EBC89AFC6391237;// 0x0AD0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8EA7DA1C4A4205EC7869A48B283B6298;// 0x0B40(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_65E44F314354C1648D534A90A4B9540F;// 0x0B88(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1171BF644F21C75E5AA21490E250D105;// 0x0BF8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_52CF3ACA4829F96283ED6181D298AB1A;// 0x0C40(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1D01EE404B3036180B8A038A67CF087A;// 0x0CB0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_34A69BC64C535A345191438A32D7B664;// 0x0CF8(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_638F546949B3D74A70124BA132BD85F9;// 0x0E20(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_33A2359240D45A9CF6331B9DCECC07AA;// 0x0E68(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2564BBC3492C008BBD5BC6A601E9A6ED;// 0x0ED8(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_91C85E6F4D33D0DE31EB67BC10BA6D72;// 0x0F48(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CFE9C8F146A6D2EAD126DD8CC6871ABF;// 0x1028(0x0070)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_CA018C6242F52A2FED6CA09C29743AFA;// 0x1098(0x0090)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DED8AAD5440C97CD81C8A4A24513EAAD;// 0x1128(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2466E5A446BDEA8A59112BAD4F301405;// 0x1198(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C9D582294CE5DAA69DE72CAB23123E69;// 0x11E0(0x00D8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_887C44A8472EBA056387A1AC3DB99A77;      // 0x12B8(0x0068)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_45B08DD04812D456397721819EA65A1A;// 0x1320(0x0158)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E8E1A1654BBEE2F0620FCDBBC947DFAA;// 0x1478(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A708782A44ED87447F92FC9CA9957901;// 0x1530(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_70D3AECC4C923B11FF4F30B3EEF7A8A9;// 0x1578(0x0048)
	struct FTransform                                  PelvisTransform;                                          // 0x15C0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_Donkey.ABP_Donkey_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Donkey_AnimGraphNode_TransitionResult_68A5AE804C712D0E784145AB76672938();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Donkey_AnimGraphNode_TransitionResult_73CE16584AA7A294A5423A8DF00C6057();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Donkey_AnimGraphNode_TransitionResult_BC4E0C274027E6391CAC71921F306BD6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Donkey_AnimGraphNode_TransitionResult_527BABCC42EB3FEDBA42D0AB44A9685F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Donkey_AnimGraphNode_TransitionResult_3376D7164E2649A4F36424814C95F4A8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Donkey_AnimGraphNode_TransitionResult_160F9E914BDABBFD8CDE32A8F0753672();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Donkey_AnimGraphNode_BlendSpacePlayer_34A69BC64C535A345191438A32D7B664();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Donkey_AnimGraphNode_TransitionResult_105A79C84CEA573096144C8067011DD7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Donkey_AnimGraphNode_BlendListByEnum_91C85E6F4D33D0DE31EB67BC10BA6D72();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Donkey_AnimGraphNode_RotationOffsetBlendSpace_45B08DD04812D456397721819EA65A1A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Donkey_AnimGraphNode_ModifyBone_E8E1A1654BBEE2F0620FCDBBC947DFAA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Donkey_AnimGraphNode_TransitionResult_5A2F4A054FA907440F99ED9DC60F3503();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Donkey_AnimGraphNode_TransitionResult_8FB5D2794B56C4AC48ADCD96192D56C7();
	void ExecuteUbergraph_ABP_Donkey(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
