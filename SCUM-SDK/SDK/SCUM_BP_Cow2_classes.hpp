#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Cow2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Cow2.BP_Cow2_C
// 0x000F (0x0C38 - 0x0C29)
class ABP_Cow2_C : public ABP_Bear2_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0C29(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C30(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Cow2.BP_Cow2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_BP_Cow2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
