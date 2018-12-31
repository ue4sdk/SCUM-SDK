#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Chili_con_Carne_Preparation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Chili_con_Carne_Preparation.Chili_con_Carne_Preparation_C
// 0x0000 (0x07E0 - 0x07E0)
class AChili_con_Carne_Preparation_C : public AFoodPreparationItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Chili_con_Carne_Preparation.Chili_con_Carne_Preparation_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
