#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// UserDefinedEnum MessageType.MessageType
enum class EMessageType : uint8_t
{
	MessageType__NewEnumerator0    = 0,
	MessageType__NewEnumerator1    = 1,
	MessageType__MessageType_MAX   = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
