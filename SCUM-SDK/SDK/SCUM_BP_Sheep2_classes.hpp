#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Sheep2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Sheep2.BP_Sheep2_C
// 0x0008 (0x0D20 - 0x0D18)
class ABP_Sheep2_C : public ABP_Goat2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D18(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Sheep2.BP_Sheep2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Sheep2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
