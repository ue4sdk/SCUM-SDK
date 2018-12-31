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

// Enum DonAINavigation.EDonNavigationQueryStatus
enum class EDonNavigationQueryStatus : uint8_t
{
	EDonNavigationQueryStatus__Unscheduled = 0,
	EDonNavigationQueryStatus__InProgress = 1,
	EDonNavigationQueryStatus__Success = 2,
	EDonNavigationQueryStatus__Failure = 3,
	EDonNavigationQueryStatus__QueryHasNoSolution = 4,
	EDonNavigationQueryStatus__TimedOut = 5,
	EDonNavigationQueryStatus__EDonNavigationQueryStatus_MAX = 6
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
