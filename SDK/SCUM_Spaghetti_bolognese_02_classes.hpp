#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Spaghetti_bolognese_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Spaghetti_bolognese_02.Spaghetti_bolognese_02_C
// 0x0000 (0x0880 - 0x0880)
class ASpaghetti_bolognese_02_C : public ACookedFoodItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Spaghetti_bolognese_02.Spaghetti_bolognese_02_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
