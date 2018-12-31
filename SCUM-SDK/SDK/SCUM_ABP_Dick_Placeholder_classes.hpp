#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ABP_Dick_Placeholder_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Dick_Placeholder.ABP_Dick_Placeholder_C
// 0x0780 (0x0AE0 - 0x0360)
class UABP_Dick_Placeholder_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2A5A301C467D40D5F3121F9E53F5E420;      // 0x0368(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A36B6E3B488916FC041E81814ADF481F;// 0x03B0(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03F8(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_CA6C7A3141BAB14F9742FAB47540D2C0;    // 0x0400(0x0220)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EC306D5441337A76DF8BBDB1062CF42E;// 0x0620(0x00D0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_610F9D044FD76C35B072D3BB7C3D5A76;// 0x06F0(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A3AF193D4E173862242D8EBBC183DB56;// 0x0728(0x00D0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C6D8051749F37D6A38E9588B4D6F632D;// 0x07F8(0x0048)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_97957A264606C62DC406D3975C3CF137;    // 0x0840(0x0220)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_EE8417DF480228976C276EB431423018;// 0x0A60(0x0030)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_CC4B50DF454ABDF0980AB49E03D0D67D;// 0x0A90(0x0030)
	bool                                               EnabledIK;                                                // 0x0AC0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0AC1(0x0003) MISSED OFFSET
	struct FVector                                     _targetIK;                                                // 0x0AC4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IsPenisInHands;                                           // 0x0AD0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0AD1(0x0003) MISSED OFFSET
	struct FVector                                     _handsIK;                                                 // 0x0AD4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_Dick_Placeholder.ABP_Dick_Placeholder_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dick_Placeholder_AnimGraphNode_Fabrik_97957A264606C62DC406D3975C3CF137();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dick_Placeholder_AnimGraphNode_BlendListByBool_A3AF193D4E173862242D8EBBC183DB56();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dick_Placeholder_AnimGraphNode_BlendListByBool_EC306D5441337A76DF8BBDB1062CF42E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dick_Placeholder_AnimGraphNode_Fabrik_CA6C7A3141BAB14F9742FAB47540D2C0();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void ExecuteUbergraph_ABP_Dick_Placeholder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
