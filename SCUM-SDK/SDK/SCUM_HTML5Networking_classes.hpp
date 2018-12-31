#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_HTML5Networking_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class HTML5Networking.WebSocketConnection
// 0x0010 (0x1900 - 0x18F0)
class UWebSocketConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x18F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class HTML5Networking.WebSocketConnection");
		return ptr;
	}

};


// Class HTML5Networking.WebSocketNetDriver
// 0x0010 (0x0548 - 0x0538)
class UWebSocketNetDriver : public UNetDriver
{
public:
	int                                                WebSocketPort;                                            // 0x0538(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x053C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class HTML5Networking.WebSocketNetDriver");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
