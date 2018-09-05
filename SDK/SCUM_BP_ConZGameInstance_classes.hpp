#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_ConZGameInstance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ConZGameInstance.BP_ConZGameInstance_C
// 0x0008 (0x01B8 - 0x01B0)
class UBP_ConZGameInstance_C : public UConZGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_ConZGameInstance.BP_ConZGameInstance_C");
		return ptr;
	}


	void ReceiveInit();
	void ExecuteUbergraph_BP_ConZGameInstance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
