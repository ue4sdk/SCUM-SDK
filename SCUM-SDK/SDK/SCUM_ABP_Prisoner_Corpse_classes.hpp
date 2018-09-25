#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ABP_Prisoner_Corpse_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Prisoner_Corpse.ABP_Prisoner_Corpse_C
// 0x00C0 (0x0480 - 0x03C0)
class UABP_Prisoner_Corpse_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CE8B49574B94CF76562F6B83F66C3949;      // 0x03C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_66EA83E9479A6433740E5682F7CE49BE;// 0x0410(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_Prisoner_Corpse.ABP_Prisoner_Corpse_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_Prisoner_Corpse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
