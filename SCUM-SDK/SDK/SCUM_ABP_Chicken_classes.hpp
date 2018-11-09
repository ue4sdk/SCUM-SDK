#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ABP_Chicken_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Chicken.ABP_Chicken_C
// 0x05F8 (0x0988 - 0x0390)
class UABP_Chicken_C : public UAnimal2AnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E64EA17C4F9A82553D5312A311EA0A92;      // 0x0398(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_66D2CD5847EB791EB5C0348A1EA03FD0;// 0x03E0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_256DB42D41EC8829D7EB3183630A8B4F;// 0x0428(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6ABBFE894679D1A6033EBB9B3BC862EE;// 0x0470(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BB57D97F4E106058E510708822972C12;// 0x0598(0x0048)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_103D388E4AD47DCAA4EB56BC7EBD75C6;// 0x05E0(0x0090)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2FBCDEE3471898DFF5D0AD90990988B4;// 0x0670(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_363B66A74A9FB323ED2F8795C19663F3;// 0x06B8(0x00E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1376188447C1A073E44D35B0CAD77022;// 0x0798(0x0160)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_BAE63D9C4ECEDC7D221A18BC79E63EA3;// 0x08F8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B9F7D47C412F670C2B94078C3D1F37F3;// 0x0940(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_Chicken.ABP_Chicken_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Chicken_AnimGraphNode_BlendSpacePlayer_6ABBFE894679D1A6033EBB9B3BC862EE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Chicken_AnimGraphNode_TransitionResult_256DB42D41EC8829D7EB3183630A8B4F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Chicken_AnimGraphNode_ModifyBone_1376188447C1A073E44D35B0CAD77022();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Chicken_AnimGraphNode_TransitionResult_66D2CD5847EB791EB5C0348A1EA03FD0();
	void ExecuteUbergraph_ABP_Chicken(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
