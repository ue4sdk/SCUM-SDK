#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ProceduralMeshComponent.EProcMeshSliceCapOption
enum class EProcMeshSliceCapOption : uint8_t
{
	EProcMeshSliceCapOption__NoCap = 0,
	EProcMeshSliceCapOption__CreateNewSectionForCap = 1,
	EProcMeshSliceCapOption__UseLastSectionForCap = 2,
	EProcMeshSliceCapOption__EProcMeshSliceCapOption_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
