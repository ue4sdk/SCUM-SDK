#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ABP_Horse_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Horse.ABP_Horse_C
// 0x0F18 (0x12C8 - 0x03B0)
class UABP_Horse_C : public UComplexAnimal2AnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D922EF9A4AF6EA72BF19908D83E112D5;      // 0x03B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E700F2ED43AAC932BB455B82B2B7F423;// 0x0400(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_46A0E2414CA21E3250B4C79AADA8A957;// 0x0448(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5AF1A6624FA5ADFBBD0631AAE588CC81;// 0x0490(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D76BA39048013BFAB2FD08AB82755082;// 0x04D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F2CF161A473AA4D272B614BF223615A5;// 0x0520(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6DDACB234479940BEA60D2A7E53562D7;// 0x0568(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1C6DB7C44F1694B6C05822BC00F5D0C6;// 0x05B0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_952944E64364D482607F4F9BFD792190;// 0x0660(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7D657E20489434484F1C2CA7EB0220A9;// 0x06A8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_522249B249E7603F42AE228A97A58AE4;// 0x0758(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F51A350B421085DE0DA01F993BAA4250;// 0x07A0(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2C163F4645B906AD700C1D8FB130C3C7;// 0x08C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10EF82ED4098B28A2074AD83FDD13407;// 0x0910(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BDD71B6B43C49D62B1CFE09A789008F4;// 0x09C0(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_C1D3BAB6464AAA082CCECAA7C24598C2;// 0x0A70(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_605A6F94441E557B7065E3AE72AC14AA;// 0x0B50(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3834E870461885C1115DBB9CD08EF78F;// 0x0C00(0x00B0)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_B9B683D74F0DF7AC37243C9099EA845A;// 0x0CB0(0x0090)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5F1CDD664E66D2C78AC93587F35C1826;// 0x0D40(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0FC9E0F14683B3266B13FF96A909948E;// 0x0D88(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5D23DBFB4584FE5E9FEF22B9738B844A;      // 0x0E68(0x0070)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_B454F8B5440D7D5806E86C8076212676;// 0x0ED8(0x0200)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_CD17059F425741F77DBE75B223821661;// 0x10D8(0x0160)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E67A7DAB4EE12D07B8314DBA073D73CA;// 0x1238(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F3C3E5BF4B0CE08D2BE25EADAFBCDBC1;// 0x1280(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_Horse.ABP_Horse_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horse_AnimGraphNode_TransitionResult_D76BA39048013BFAB2FD08AB82755082();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horse_AnimGraphNode_TransitionResult_F2CF161A473AA4D272B614BF223615A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horse_AnimGraphNode_TransitionResult_6DDACB234479940BEA60D2A7E53562D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horse_AnimGraphNode_TransitionResult_5AF1A6624FA5ADFBBD0631AAE588CC81();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horse_AnimGraphNode_BlendSpacePlayer_F51A350B421085DE0DA01F993BAA4250();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horse_AnimGraphNode_BlendListByEnum_C1D3BAB6464AAA082CCECAA7C24598C2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horse_AnimGraphNode_TransitionResult_46A0E2414CA21E3250B4C79AADA8A957();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horse_AnimGraphNode_RotationOffsetBlendSpace_B454F8B5440D7D5806E86C8076212676();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horse_AnimGraphNode_ModifyBone_CD17059F425741F77DBE75B223821661();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horse_AnimGraphNode_TransitionResult_E700F2ED43AAC932BB455B82B2B7F423();
	void ExecuteUbergraph_ABP_Horse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
