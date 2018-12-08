#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Bird2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Bird2.BP_Bird2_C
// 0x0010 (0x0B00 - 0x0AF0)
class ABP_Bird2_C : public ABird2
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UNavigationInvokerComponent*                 NavigationInvoker;                                        // 0x0AF8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Bird2.BP_Bird2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_Bird2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
