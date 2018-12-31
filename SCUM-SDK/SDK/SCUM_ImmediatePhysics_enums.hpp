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

// Enum ImmediatePhysics.ESimulationSpace
enum class ESimulationSpace : uint8_t
{
	ESimulationSpace__ComponentSpace = 0,
	ESimulationSpace__WorldSpace   = 1,
	ESimulationSpace__BaseBoneSpace = 2,
	ESimulationSpace__ESimulationSpace_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
