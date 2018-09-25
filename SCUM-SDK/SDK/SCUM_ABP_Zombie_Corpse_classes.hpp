#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ABP_Zombie_Corpse_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Zombie_Corpse.ABP_Zombie_Corpse_C
// 0x00C0 (0x0480 - 0x03C0)
class UABP_Zombie_Corpse_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F5C4D87640C4B05A167FFCA558322190;      // 0x03C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4E0C831A4051AB072CEFFDA697F275FD;// 0x0410(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_Zombie_Corpse.ABP_Zombie_Corpse_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_Zombie_Corpse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
