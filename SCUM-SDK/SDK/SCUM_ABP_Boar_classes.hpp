#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ABP_Boar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Boar.ABP_Boar_C
// 0x1198 (0x1548 - 0x03B0)
class UABP_Boar_C : public UComplexAnimal2AnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A15CAD8E4FEC718877B46FA0CD24B6A1;      // 0x03B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7F5702F749913732231CB694FEB4BAE4;// 0x0400(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E2746E7845F33CAA75BF9FBF7DA12703;// 0x0448(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9F8DD68F4FDA8497550B388DE1C4E626;// 0x0490(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C915EEA34638A0703F325CB8283BB5E4;// 0x04D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ADC209F54F0CC4CE5FD077AE04B233E0;// 0x0520(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FD36E27B4EF1E2C41FE154B43FEF6385;// 0x0568(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8ADB51FE472BD45C8CC0F7B757D83FA7;// 0x05B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_943E1A2A4F1B634750D6ACB31CE2B949;// 0x05F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DDAE86FD4E65CC107D1153A4EE9D78B3;// 0x0640(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_797C1B7E40CD86C06E1DD0A5BFE4B82B;// 0x06F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8F38291E40C228AAA573F7B783227BF9;// 0x0738(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1317FC394C9831DCD9D4B890A9092C4B;// 0x07E8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6FDFBF5B4644594B26D363A2DDC56358;// 0x0830(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B8795EF34B6D599808D5E682E8BB5445;// 0x08E0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_417D12DD4B2568233013F7A4797B8CE4;// 0x0928(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0351DD0B4FFD79AC9A448F8FD6819518;// 0x09D8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C3691E474BB6DFA0FF7D74BA2E72AD8C;// 0x0A20(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F51B678E4F35E8C51445C1893ADCEB6A;// 0x0B48(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6DF7617C4C1F499235EA6D9BCF8CD6A7;// 0x0B90(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E157385D4F35A5ABCCF52CBCCD4FF2E9;// 0x0C40(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_D0CC91CF4F6AE569781D7A87B6FD68C6;// 0x0CF0(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_83B5A83040AD143AE85E699E4C13DBA0;// 0x0DD0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_57C3D567401D4A8E3FA233AFDFC8108E;// 0x0E80(0x00B0)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_5AEDA63340BD0C305CCD498D6C87CBAE;// 0x0F30(0x0090)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A2159B174826B1AB6A7A7AA12491F12F;// 0x0FC0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C629095C4C55B8B33C70DA8DABF946F0;// 0x1008(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_35379E2247D0B49756FE55A4357F5DC4;      // 0x10E8(0x0070)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_25A62E8040D0491DF256599E11B46B7A;// 0x1158(0x0200)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C46E846F4B4C267284555AA60F1ED0AA;// 0x1358(0x0160)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_54171A864E25C54E0AB64984B32A09A6;// 0x14B8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7E2C80DE4BAB973EDDFC819B1D924D1D;// 0x1500(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_Boar.ABP_Boar_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Boar_AnimGraphNode_TransitionResult_FD36E27B4EF1E2C41FE154B43FEF6385();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Boar_AnimGraphNode_TransitionResult_C915EEA34638A0703F325CB8283BB5E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Boar_AnimGraphNode_TransitionResult_943E1A2A4F1B634750D6ACB31CE2B949();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Boar_AnimGraphNode_TransitionResult_9F8DD68F4FDA8497550B388DE1C4E626();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Boar_AnimGraphNode_BlendSpacePlayer_C3691E474BB6DFA0FF7D74BA2E72AD8C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Boar_AnimGraphNode_BlendListByEnum_D0CC91CF4F6AE569781D7A87B6FD68C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Boar_AnimGraphNode_TransitionResult_E2746E7845F33CAA75BF9FBF7DA12703();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Boar_AnimGraphNode_RotationOffsetBlendSpace_25A62E8040D0491DF256599E11B46B7A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Boar_AnimGraphNode_ModifyBone_C46E846F4B4C267284555AA60F1ED0AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Boar_AnimGraphNode_TransitionResult_7F5702F749913732231CB694FEB4BAE4();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Boar_AnimGraphNode_TransitionResult_ADC209F54F0CC4CE5FD077AE04B233E0();
	void ExecuteUbergraph_ABP_Boar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
