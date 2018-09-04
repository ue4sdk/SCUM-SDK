#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ABP_Rabbit2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Rabbit2.ABP_Rabbit2_C
// 0x05B8 (0x09A8 - 0x03F0)
class UABP_Rabbit2_C : public UAnimal2AnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C864FCF5469215BDD08D4693D1B8D73A;      // 0x03F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0EB9CF11457591751DD7CE98F63E5A3E;// 0x0440(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F3BF342E4EE303167032718252F71632;// 0x04C0(0x0080)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_03ED7D2E48EA241F0F6D0B914F95415A;// 0x0540(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_03693F20477E963B8AE2D2BED7FB9C44;// 0x0668(0x0048)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_D8737130477E2F9CA04498905F2057C1;// 0x06B0(0x0090)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5D318BE6447435500BEAD8878C173B13;// 0x0740(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C1F192474D8611E56171FF872663DE0A;// 0x0788(0x00D8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2AB0CDAA41D7928B016C12858F10D7F3;// 0x0860(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F16DED254A91C17E8B941E9D4C892AFE;// 0x0918(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8D56E75442E24A62B5F1EEA22A4BDC8A;// 0x0960(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_Rabbit2.ABP_Rabbit2_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rabbit2_AnimGraphNode_BlendSpacePlayer_03ED7D2E48EA241F0F6D0B914F95415A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rabbit2_AnimGraphNode_TransitionResult_F3BF342E4EE303167032718252F71632();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rabbit2_AnimGraphNode_ModifyBone_2AB0CDAA41D7928B016C12858F10D7F3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rabbit2_AnimGraphNode_TransitionResult_0EB9CF11457591751DD7CE98F63E5A3E();
	void ExecuteUbergraph_ABP_Rabbit2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
