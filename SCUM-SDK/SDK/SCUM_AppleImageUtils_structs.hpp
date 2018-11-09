#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AppleImageUtils.EAppleTextureType
enum class EAppleTextureType : uint8_t
{
	EAppleTextureType__Unknown     = 0,
	EAppleTextureType__Image       = 1,
	EAppleTextureType__PixelBuffer = 2,
	EAppleTextureType__Surface     = 3,
	EAppleTextureType__MetalTexture = 4,
	EAppleTextureType__EAppleTextureType_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AppleImageUtils.AppleImageUtilsImageConversionResult
// 0x0020
struct FAppleImageUtilsImageConversionResult
{
	struct FString                                     Error;                                                    // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<unsigned char>                              ImageData;                                                // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
