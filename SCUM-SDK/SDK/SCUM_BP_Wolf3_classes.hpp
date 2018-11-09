#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Wolf3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Wolf3.BP_Wolf3_C
// 0x0008 (0x0C48 - 0x0C40)
class ABP_Wolf3_C : public ABP_Donkey2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C40(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Wolf3.BP_Wolf3_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Wolf3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
