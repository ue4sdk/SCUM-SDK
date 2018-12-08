#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Prisoner_Head_No_Teeth_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Prisoner_Head_No_Teeth.Prisoner_Head_No_Teeth_C
// 0x0000 (0x0720 - 0x0720)
class APrisoner_Head_No_Teeth_C : public AEquipmentItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Prisoner_Head_No_Teeth.Prisoner_Head_No_Teeth_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
