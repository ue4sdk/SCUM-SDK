#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Crow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Crow.BP_Crow_C
// 0x0008 (0x0A28 - 0x0A20)
class ABP_Crow_C : public ABP_Bird2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A20(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Crow.BP_Crow_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Crow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
