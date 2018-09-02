#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Beretta_M9_Reload_Event_Opened_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Beretta_M9_Reload_Event_Opened.BP_Beretta_M9_Reload_Event_Opened_C
// 0x000C (0x008C - 0x0080)
class UBP_Beretta_M9_Reload_Event_Opened_C : public UEventInsertMagazine
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0080(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	int                                                MaxAmmoCount;                                             // 0x0088(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Beretta_M9_Reload_Event_Opened.BP_Beretta_M9_Reload_Event_Opened_C");
		return ptr;
	}


	void OnActionAnimNotify(ECharacterActionNotifyType notifyType);
	void ExecuteUbergraph_BP_Beretta_M9_Reload_Event_Opened(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
