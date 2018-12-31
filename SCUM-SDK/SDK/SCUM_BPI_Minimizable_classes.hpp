#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BPI_Minimizable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_Minimizable.BPI_Minimizable_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_Minimizable_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BPI_Minimizable.BPI_Minimizable_C");
		return ptr;
	}


	void OnMinimize(bool shouldMinimize);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
