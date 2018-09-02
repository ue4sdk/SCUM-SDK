#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_LiveLinkInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LiveLinkInterface.LiveLinkSourceFactory
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkSourceFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class LiveLinkInterface.LiveLinkSourceFactory");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkSourceSettings
// 0x0008 (0x0030 - 0x0028)
class ULiveLinkSourceSettings : public UObject
{
public:
	struct FLiveLinkInterpolationSettings              InterpolationSettings;                                    // 0x0028(0x0008) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class LiveLinkInterface.LiveLinkSourceSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
