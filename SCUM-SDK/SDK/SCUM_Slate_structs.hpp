#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_Slate_enums.hpp"
#include "SCUM_SlateCore_classes.hpp"
#include "SCUM_CoreUObject_classes.hpp"
#include "SCUM_InputCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Slate.VirtualKeyboardOptions
// 0x0001
struct FVirtualKeyboardOptions
{
	bool                                               bEnableAutocorrect;                                       // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Slate.InputChord
// 0x0020
struct FInputChord
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bShift : 1;                                               // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bCtrl : 1;                                                // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bAlt : 1;                                                 // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bCmd : 1;                                                 // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Slate.Anchors
// 0x0010
struct FAnchors
{
	struct FVector2D                                   Minimum;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector2D                                   Maximum;                                                  // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
