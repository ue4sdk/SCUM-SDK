#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ProgressBarData.ProgressBarData
// 0x0048
struct FProgressBarData
{
	class UTexture2D*                                  Left_7_EBDCC924425CD604261579A8B49BAFDA;                  // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  Middle_4_7C11E2444E2BF51D787C69B20080240E;                // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  Right_6_07DE49094816A0BE3B96B194629D5F67;                 // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  FillLeft_9_75AE27D049570FBAB767F7B8A26978CB;              // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  FillMiddle_11_58DCCB7C4D42784355581A92BE11F707;           // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  FillRight_13_B60C048846158DEC400300B9EB0703DF;            // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  SliderIcon_25_F22412084F5C97779543B08DB24A45D9;           // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FillEdgePadding_17_39B81D0341960C87132AFE926E4C29DD;      // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MarkersPaddingX_22_CA3736834F22667152F1C5AE9A266958;      // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MarkersPaddingY_21_F048930842E382A8A2841EA1DA044FF4;      // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MarkerSizeY_28_B41DA5E64A48FE6DE03069AD9E58658A;          // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
