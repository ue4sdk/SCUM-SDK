#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Seagull_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Seagull.BP_Seagull_C
// 0x0008 (0x0B08 - 0x0B00)
class ABP_Seagull_C : public ABP_Bird2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B00(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Seagull.BP_Seagull_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Seagull(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
