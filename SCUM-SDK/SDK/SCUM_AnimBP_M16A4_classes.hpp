#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_AnimBP_M16A4_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AnimBP_M16A4.AnimBP_M16A4_C
// 0x0958 (0x0CC8 - 0x0370)
class UAnimBP_M16A4_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_585E128042CC54D2B59B8EBB8CAB2954;      // 0x0378(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4FD368634D32D989A4B1BAA3FFCB1652;      // 0x03C0(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AB13C33E43CBE7B8483DAFBB59E3198C;// 0x0430(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9518CF554093DFC3BFC36D989CC2FEE3;// 0x0500(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CBA3E76E4F0877B4FB74008BA735419B;// 0x05B0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5247C7244C5E7FE1B26FDEBDD0040EAA;      // 0x0660(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C661C80543D71D9B6A02EDBB4311AC0F;      // 0x06D0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7BBA389041DF834918727F96DCB475F3;      // 0x0740(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_EDD0686D4313B5AC5BBF528AA5D76CAD;// 0x07B0(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8008D68E49A8634F685574A1AFEA275E;      // 0x0890(0x0070)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FE3883E84C1743DC310BE9900257514F;// 0x0900(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_72F990344504DC86CC0415BAAB41FA80;// 0x09E0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8043613141B96F18ACAB0DA38D35F3EB;// 0x0A30(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4DC4C8404E281F61F5552D818D46EAA0;// 0x0A80(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F83147C74A86F8BC46BD3EA9878F1E3E;// 0x0AD0(0x0160)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_69504C634987EC89F859A4B221B20DED;// 0x0C30(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_17660E1E427CAC6BF6C203B6101E2F1A;// 0x0C78(0x0048)
	bool                                               HasMagazine;                                              // 0x0CC0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0CC1(0x0003) MISSED OFFSET
	float                                              IronSightsHideAlpha;                                      // 0x0CC4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass AnimBP_M16A4.AnimBP_M16A4_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_M16A4_AnimGraphNode_ModifyBone_F83147C74A86F8BC46BD3EA9878F1E3E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_M16A4_AnimGraphNode_BlendListByEnum_EDD0686D4313B5AC5BBF528AA5D76CAD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_M16A4_AnimGraphNode_BlendListByBool_AB13C33E43CBE7B8483DAFBB59E3198C();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AnimBP_M16A4(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
