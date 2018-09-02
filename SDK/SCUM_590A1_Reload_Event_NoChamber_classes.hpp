#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_590A1_Reload_Event_NoChamber_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 590A1_Reload_Event_NoChamber.590A1_Reload_Event_NoChamber_C
// 0x0010 (0x00A0 - 0x0090)
class U590A1_Reload_Event_NoChamber_C : public UInsertCartridge
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	int                                                loadedAmmoCount;                                          // 0x0098(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                MaxAmmoCount;                                             // 0x009C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass 590A1_Reload_Event_NoChamber.590A1_Reload_Event_NoChamber_C");
		return ptr;
	}


	float ExecuteUsingData(const struct FWeaponReloadData& Data);
	bool CanExecuteUsingData(const struct FWeaponReloadData& Data);
	void OnActionAnimNotify(ECharacterActionNotifyType notifyType);
	void ExecuteUbergraph_590A1_Reload_Event_NoChamber(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
