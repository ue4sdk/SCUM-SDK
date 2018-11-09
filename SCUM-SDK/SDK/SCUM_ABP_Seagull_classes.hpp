#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ABP_Seagull_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Seagull.ABP_Seagull_C
// 0x0D30 (0x10A0 - 0x0370)
class UABP_Seagull_C : public UBird2AnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A92AA96E461431E1D6DC2A9796B3D196;      // 0x0378(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F3A9D3E3404073220DCB68A677D36781;// 0x03C0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5C3C88DE4816692ECE99BE86C473D2EE;// 0x0408(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ED5D89B146AD342CF120DD83FDD404E3;// 0x0450(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_01812BF24C8ED9E1BC35EB86BE3E427D;// 0x0498(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_553B01254B06B094BE7EC9BE6BE2827E;// 0x04E0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_75612DA441F98063A132099C41077A27;// 0x0528(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DD34E5944DC26C37B9882494D3B01473;// 0x0570(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6FF25BBE4F03379B692E7ABAAC0D6726;// 0x05B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9DD866FB4E6D375F6FB16B9823DE5393;// 0x0600(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4452E49749BF760A0B51CFB42C8B931C;// 0x0648(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_74683801458C7BFAEEA184BD1C37C8B7;// 0x06F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_84B241C647378EB94207B7B98E5C6BD7;// 0x0740(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_12A4B2554698A6344BF2BF832DA1C9B0;// 0x07F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7CA874DA4D64595F0CFACCB6FCA9D4F1;// 0x0838(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_141ACEAA4974BDA94795BC81227BA726;// 0x08E8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3F1D43DC48D436C5B39BDBA3CEEE3E55;// 0x0930(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_455460C042D2DFEBB664748C5A922B71;// 0x09E0(0x0048)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_B6B526E8437766DC4F529594FD17E186;// 0x0A28(0x0090)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D0D6E4AC466CEFF54CB6D296C5DE6115;// 0x0AB8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_ACE857BE44C6014AA12C199974399138;// 0x0B00(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5104252148FF2D918764FFBC307F4C8C;// 0x0B48(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_FFFECC8E4B1CA66A86B08393403A043C;// 0x0B90(0x0160)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5C14A64D4BE8211A7C038E94B3457D31;// 0x0CF0(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BDE63DE94451F26C626612B159BA77E5;// 0x0E18(0x00D0)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_4867B7AB40FDCE28A2A20C842FFBF63C;// 0x0EE8(0x0090)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1328AAEA499ABA5BB3D58D88FB297345;// 0x0F78(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_731434EB480932C8EC1BE2921AAFC1DE;// 0x0FC0(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_Seagull.ABP_Seagull_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Seagull_AnimGraphNode_TransitionResult_553B01254B06B094BE7EC9BE6BE2827E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Seagull_AnimGraphNode_TransitionResult_75612DA441F98063A132099C41077A27();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Seagull_AnimGraphNode_TransitionResult_DD34E5944DC26C37B9882494D3B01473();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Seagull_AnimGraphNode_TransitionResult_6FF25BBE4F03379B692E7ABAAC0D6726();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Seagull_AnimGraphNode_TransitionResult_9DD866FB4E6D375F6FB16B9823DE5393();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Seagull_AnimGraphNode_TransitionResult_ED5D89B146AD342CF120DD83FDD404E3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Seagull_AnimGraphNode_ModifyBone_FFFECC8E4B1CA66A86B08393403A043C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Seagull_AnimGraphNode_BlendSpacePlayer_5C14A64D4BE8211A7C038E94B3457D31();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Seagull_AnimGraphNode_BlendListByBool_BDE63DE94451F26C626612B159BA77E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Seagull_AnimGraphNode_TransitionResult_5C3C88DE4816692ECE99BE86C473D2EE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Seagull_AnimGraphNode_TransitionResult_F3A9D3E3404073220DCB68A677D36781();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Seagull_AnimGraphNode_TransitionResult_01812BF24C8ED9E1BC35EB86BE3E427D();
	void ExecuteUbergraph_ABP_Seagull(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
