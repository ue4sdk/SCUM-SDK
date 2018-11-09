#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_DropZoneLocationMarker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DropZoneLocationMarker.BP_DropZoneLocationMarker_C
// 0x0000 (0x0620 - 0x0620)
class ABP_DropZoneLocationMarker_C : public ADropZoneLocationMarker
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_DropZoneLocationMarker.BP_DropZoneLocationMarker_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
