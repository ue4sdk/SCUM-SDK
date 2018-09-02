#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct MessageStruct.MessageStruct
// 0x002C
struct FMessageStruct
{
	struct FText                                       Text_10_E9E7E3B9492DF52F5FE99099E8ACBD80;                 // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Duration_14_E65E34DB404030BF6D843397482DAF6D;             // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Color_13_BF56F4D140AF7733F748D6AAF4838F3B;                // 0x001C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
