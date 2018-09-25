#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ABP_AnimalsBear_Bear_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_AnimalsBear_Bear.ABP_AnimalsBear_Bear_C
// 0x0C34 (0x1014 - 0x03E0)
class UABP_AnimalsBear_Bear_C : public UBearAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_86B0F5E740887AE08B375BB575BB0395;      // 0x03E8(0x0048)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_2FEE535441FBB7341EB2B98AD3502629;// 0x0430(0x0158)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0588(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9C65C63146ADDBA2B6D8E0B6598586A3;// 0x0590(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_68261D834E920027326D37876E661C59;// 0x0610(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3E15A6104C0104D1AFF656903FB5917F;// 0x0690(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_759329CF4DED97B8F29DC4BD88F4129D;// 0x0710(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3C5FF2C440667734F575BB92DA7DD4F4;// 0x0790(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ABBBC7944CA7FD4E182B8FAB5A5D616E;// 0x0810(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E6BF66D345E2059AF9A299BD577DDDAE;// 0x0890(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_75E2EBBC40ADAC14B51EA6B7CC3E5EE7;// 0x0900(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B05662914CF572DDFD1AD0AC332BC6F0;// 0x0948(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6EDD9FF84DD26AE1E5D137821815D5D2;// 0x09B8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_ABDF49FC4B8B986D96E28F9215506A95;// 0x0A00(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_14B57406479D946F3D43579A1513367A;// 0x0B28(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BE6EFB9C47F564F1FB03BE9E256A6DAC;// 0x0B70(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_28CA260742B4D72EA7C01B9E416EAB92;// 0x0BE0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A05CC79248E06F7770444784660ABC37;// 0x0C50(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_44B711EE43CCD7336547DA8D51AA8916;// 0x0CC0(0x0070)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_A77BE41C40F840F0F9C06BB4BD893E2A;// 0x0D30(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ADF9B5B84A2A23995D739388757CD95A;// 0x0E00(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_928FAF9A44243A4F0CD16183E3FB40A2;// 0x0E70(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4A73819F41EBEC1FAC4D248E815C131A;// 0x0EB8(0x00D8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_652F355A459BB804003A95A7C69DA17E;      // 0x0F90(0x0068)
	float                                              ABP_Speed;                                                // 0x0FF8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ABP_MoveForward;                                          // 0x0FFC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ABP_MoveRight;                                            // 0x1000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ABP_LookUp;                                               // 0x1004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ABP_Turn;                                                 // 0x1008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeltaTimeVar;                                             // 0x100C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IsFalling;                                                // 0x1010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               Attack;                                                   // 0x1011(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bIsGuarding;                                              // 0x1012(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bIsDead;                                                  // 0x1013(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_AnimalsBear_Bear.ABP_AnimalsBear_Bear_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsBear_Bear_AnimGraphNode_TransitionResult_3E15A6104C0104D1AFF656903FB5917F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsBear_Bear_AnimGraphNode_TransitionResult_759329CF4DED97B8F29DC4BD88F4129D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsBear_Bear_AnimGraphNode_TransitionResult_3C5FF2C440667734F575BB92DA7DD4F4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsBear_Bear_AnimGraphNode_TransitionResult_ABBBC7944CA7FD4E182B8FAB5A5D616E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsBear_Bear_AnimGraphNode_TransitionResult_68261D834E920027326D37876E661C59();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsBear_Bear_AnimGraphNode_BlendSpacePlayer_ABDF49FC4B8B986D96E28F9215506A95();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsBear_Bear_AnimGraphNode_TransitionResult_9C65C63146ADDBA2B6D8E0B6598586A3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsBear_Bear_AnimGraphNode_BlendListByInt_A77BE41C40F840F0F9C06BB4BD893E2A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AnimalsBear_Bear_AnimGraphNode_RotationOffsetBlendSpace_2FEE535441FBB7341EB2B98AD3502629();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_AttackStart();
	void AnimNotify_AttackEnd();
	void ExecuteUbergraph_ABP_AnimalsBear_Bear(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
