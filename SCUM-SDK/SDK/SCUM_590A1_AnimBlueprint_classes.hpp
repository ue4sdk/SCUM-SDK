#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_590A1_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass 590A1_AnimBlueprint.590A1_AnimBlueprint_C
// 0x04D8 (0x08A8 - 0x03D0)
class U590A1_AnimBlueprint_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A0732F514E41CDA70A189DB2A8587585;      // 0x03D8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_20D921744FF7B8D5AE28BBB0697A9B4F;      // 0x0420(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_585B30A942EDA8D801F80393698207FD;      // 0x0488(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_44AF5F3B41C866CB84DAD5A10B4B4418;      // 0x04F0(0x0068)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_89A79703467B580947D221946A82A8AF;// 0x0558(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_38487FC244B36D342092A68E2ED7E88E;      // 0x0638(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_50E692354EBA154388B849A682E906BB;// 0x06A0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_532CC22A404D8A510E58188E48BDEAF3;// 0x0748(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E5DA40B948B50684FFC35296AB743A9F;// 0x0798(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1B20A9D24ACB672001FA4EA6F62D8E67;// 0x07E8(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_00D30FED4EB482B7C3EBE3A2EB48E44C;// 0x0838(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass 590A1_AnimBlueprint.590A1_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_590A1_AnimBlueprint_AnimGraphNode_BlendListByEnum_89A79703467B580947D221946A82A8AF();
	void ExecuteUbergraph_590A1_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
