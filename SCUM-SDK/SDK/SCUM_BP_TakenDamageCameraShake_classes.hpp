#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_TakenDamageCameraShake_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TakenDamageCameraShake.BP_TakenDamageCameraShake_C
// 0x0000 (0x0160 - 0x0160)
class UBP_TakenDamageCameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_TakenDamageCameraShake.BP_TakenDamageCameraShake_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
