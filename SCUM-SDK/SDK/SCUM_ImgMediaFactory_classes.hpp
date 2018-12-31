#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ImgMediaFactory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ImgMediaFactory.ImgMediaSettings
// 0x0038 (0x0060 - 0x0028)
class UImgMediaSettings : public UObject
{
public:
	struct FFrameRate                                  DefaultFrameRate;                                         // 0x0028(0x0008) (CPF_Edit, CPF_Config)
	float                                              CacheBehindPercentage;                                    // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CacheSizeGB;                                              // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                CacheThreads;                                             // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                CacheThreadStackSizeKB;                                   // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	uint32_t                                           ExrDecoderThreads;                                        // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     DefaultProxy;                                             // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	bool                                               UseDefaultProxy;                                          // 0x0058(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ImgMediaFactory.ImgMediaSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
