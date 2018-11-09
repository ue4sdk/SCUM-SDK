#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_OnlineSubsystemSteam_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
// 0x0000 (0x0028 - 0x0028)
class USteamAuthComponentModuleInterface : public UHandlerComponentFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface");
		return ptr;
	}

};


// Class OnlineSubsystemSteam.SteamNetConnection
// 0x0008 (0x1918 - 0x1910)
class USteamNetConnection : public UIpConnection
{
public:
	bool                                               bIsPassthrough;                                           // 0x1910(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1911(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class OnlineSubsystemSteam.SteamNetConnection");
		return ptr;
	}

};


// Class OnlineSubsystemSteam.SteamNetDriver
// 0x0008 (0x0570 - 0x0568)
class USteamNetDriver : public UIpNetDriver
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0568(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class OnlineSubsystemSteam.SteamNetDriver");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
