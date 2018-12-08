#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Improvised_Bow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Improvised_Bow.Improvised_Bow_C
// 0x0008 (0x1178 - 0x1170)
class AImprovised_Bow_C : public AWeaponBow
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1170(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Improvised_Bow.Improvised_Bow_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Improvised_Bow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
