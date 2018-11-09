#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ABP_Goat2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Goat2.ABP_Goat2_C
// 0x11E8 (0x1598 - 0x03B0)
class UABP_Goat2_C : public UComplexAnimal2AnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E421CAF7413478468C50EA9D33D9F5D2;      // 0x03B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8C83F4C84358EB82CD70349F4D084FDE;// 0x0400(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_48FDE5F3418CC3F2BD08FD9C66009C5B;// 0x0448(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_94581109488021394925C58F7A2D19BC;// 0x0490(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_45BE87D5492D0AB692BD80A3DA0C237B;// 0x04D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_405C280642BD0FD5D364AC80AB61CFBD;// 0x0520(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4BE2622F4016A9117C75F084368092C4;// 0x0568(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FF75F05446FAEA97A0D8AE9DFFDB1A91;// 0x05B0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AF31065C495A861A4A2485A4CBD35CE4;// 0x0660(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_78244A794503C1F0B3E56EB3EC0A425A;// 0x06A8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1D77876A43E75ED8243905B20C24D89F;// 0x0758(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_720467D84611812FDCC72087580A66A6;// 0x07A0(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CAF3AA2447933280DF9ED79825490798;// 0x08C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_26FFAF554B094504ABCD8ABC0B4E8F98;// 0x0910(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_62D48B4B40D37F08308D3499CF2503CD;// 0x09C0(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_C6C1669F4198495106C867BB4798AA44;// 0x0A70(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0B3BB7A04CD8742736099DA9538807D9;// 0x0B50(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0D377417427971D8A7616FB3039E1941;// 0x0C00(0x00B0)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_0AB60D224C3F87C1499723939A2E8ED2;// 0x0CB0(0x0090)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9002CC6B4E221297633366BC5689E3A6;// 0x0D40(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_71E3B03D4FEC60F7D36840AF4DFDED50;// 0x0D88(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1C649E7B4E0BD308DE3E1A961DF348DA;      // 0x0E68(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4E5730914D6B1B7CC4F7D0AA8C79CF9B;      // 0x0ED8(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_130A11BB4CC8C5946B4ABCB7756F886B;// 0x0F48(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F16CEF844BFAF8CAC8D7EA86D2050ADB;// 0x1028(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4FDE48844B26F3A2E28C4CA8D69438B4;// 0x1108(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FD42F7AF4264197236084B8F33D4A8F8;// 0x1158(0x0050)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_D4FEBA3C4F3F2DBD046121A6C404FEFC;// 0x11A8(0x0200)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C8412A9944E0EF70A9EB80B051BFF540;// 0x13A8(0x0160)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A51B64ED4A3F6DEE0230B7AEFC3980A4;// 0x1508(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C8BB9C804A9BD12A6B5123A468EEA75A;// 0x1550(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_Goat2.ABP_Goat2_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Goat2_AnimGraphNode_TransitionResult_405C280642BD0FD5D364AC80AB61CFBD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Goat2_AnimGraphNode_TransitionResult_4BE2622F4016A9117C75F084368092C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Goat2_AnimGraphNode_TransitionResult_45BE87D5492D0AB692BD80A3DA0C237B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Goat2_AnimGraphNode_BlendSpacePlayer_720467D84611812FDCC72087580A66A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Goat2_AnimGraphNode_BlendListByEnum_C6C1669F4198495106C867BB4798AA44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Goat2_AnimGraphNode_TransitionResult_94581109488021394925C58F7A2D19BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Goat2_AnimGraphNode_RotationOffsetBlendSpace_D4FEBA3C4F3F2DBD046121A6C404FEFC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Goat2_AnimGraphNode_ModifyBone_C8412A9944E0EF70A9EB80B051BFF540();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Goat2_AnimGraphNode_TransitionResult_48FDE5F3418CC3F2BD08FD9C66009C5B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Goat2_AnimGraphNode_TransitionResult_8C83F4C84358EB82CD70349F4D084FDE();
	void ExecuteUbergraph_ABP_Goat2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
