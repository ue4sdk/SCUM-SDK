#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_AnimBP_MP5_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AnimBP_MP5.AnimBP_MP5_C
// 0x0618 (0x09E8 - 0x03D0)
class UAnimBP_MP5_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_14D0526B4330C5B420E0899D55673CEE;      // 0x03D8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C71440D041A1A3CA5E1EA5935326905D;      // 0x0420(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C77A62B84399B5C4E0CCFE957C198051;      // 0x0488(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CEDCDC874B2798D3EC433EBAB2940451;      // 0x04F0(0x0068)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_9988D62C49C9382968F37EA9797C20AB;// 0x0558(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7D58550644F9BCC0AAD16FAE46A3986C;      // 0x0638(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A6D12CA742F470267277ACA0985FC5D4;// 0x06A0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CA64D5A94B0A317E851990877BCC925C;// 0x0748(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FABA7B384E748C31C1A7A189B7D10980;// 0x0798(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_37A06538484225DD89B05CAE1221990F;// 0x07E8(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F288C8354A3154CCC554CCB17F184557;// 0x0838(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_997D269E44BB49E9F7943492A3BD76B6;// 0x0908(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9F8846044F48E7321BC1F0BE4387EF4D;// 0x0978(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass AnimBP_MP5.AnimBP_MP5_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MP5_AnimGraphNode_BlendListByBool_F288C8354A3154CCC554CCB17F184557();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MP5_AnimGraphNode_BlendListByEnum_9988D62C49C9382968F37EA9797C20AB();
	void ExecuteUbergraph_AnimBP_MP5(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
