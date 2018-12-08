#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_SUV_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SUV_01.BP_SUV_01_C
// 0x0038 (0x05D0 - 0x0598)
class ABP_SUV_01_C : public ABP_Vehicle4W_C
{
public:
	class UStaticMeshComponent*                        Collision;                                                // 0x0598(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x05A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UConZVehicleSpringArmComponent*              CameraBoom;                                               // 0x05A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UConZVehicle4WPassengerMountSlot*            PassengerBR;                                              // 0x05B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UConZVehicle4WPassengerMountSlot*            PassengerBL;                                              // 0x05B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UConZVehicle4WPassengerMountSlot*            PassengerFR;                                              // 0x05C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UConZVehicle4WDriverMountSlot*               Driver;                                                   // 0x05C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_SUV_01.BP_SUV_01_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
