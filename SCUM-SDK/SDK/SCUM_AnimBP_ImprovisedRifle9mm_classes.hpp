#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_AnimBP_ImprovisedRifle9mm_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AnimBP_ImprovisedRifle9mm.AnimBP_ImprovisedRifle9mm_C
// 0x0570 (0x08E0 - 0x0370)
class UAnimBP_ImprovisedRifle9mm_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F8E584CE44927992138151A5451D48BD;      // 0x0378(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_111DA3514A2593A65EB5FBB7F85F8465;      // 0x03C0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6574A6174B4708D7F7AF6297FCD63386;      // 0x0430(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F48D0D834A419F66425DF5966B620DE6;      // 0x04A0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_15253F734E1881938402D886A1176FE9;      // 0x0510(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_522474C6449B9486694881837ACAB472;// 0x0580(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3F855B624BA43143FDB269A804F58B1D;// 0x0660(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_168E0A0B41C8DFDE377DDFBA49F5D331;// 0x06B0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FBAE707A4D639D7908F17E9F696B418D;// 0x0700(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_830AE180478A9551BC39ABA61DF06745;// 0x0750(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4D1316204460D2A12D12FFB9741C927C;// 0x0830(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass AnimBP_ImprovisedRifle9mm.AnimBP_ImprovisedRifle9mm_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ImprovisedRifle9mm_AnimGraphNode_BlendListByEnum_522474C6449B9486694881837ACAB472();
	void ExecuteUbergraph_AnimBP_ImprovisedRifle9mm(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
