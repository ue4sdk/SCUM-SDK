#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Pig_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Pig.BP_Pig_C
// 0x0008 (0x0C28 - 0x0C20)
class ABP_Pig_C : public ABP_Boar_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C20(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Pig.BP_Pig_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Pig(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
