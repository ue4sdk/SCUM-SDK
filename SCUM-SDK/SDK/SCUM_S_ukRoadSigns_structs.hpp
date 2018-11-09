#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_ukRoadSigns.S_ukRoadSigns
// 0x0078
struct FS_ukRoadSigns
{
	float                                              signU_89_050687204DF23F38D6AF8CAA19CD5D37;                // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              signV_90_C14B3B9C4BACE78CE07F7D81F618676C;                // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              signUOffset_91_7E4102C040E93E0F8370F5AF776FF3DF;          // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              signVOffset_92_A5535C41478360777CD77992A16CB0AA;          // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       signRedMaskColor_226_6B4B49194202A4A0E537B78DCC17FE8D;    // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       signRedMaskInvColor_225_C55FF96645FD8EBF19E737BF953DE4DC; // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       signGreenMaskColor_224_A855FED64D778EB40681E7B8D6F4F1C0;  // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       signGreenMaskInvColor_223_F67327734562BFA127768883473C9CA1;// 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       signBlueMaskColor_222_E57F9507424C0645B4284AA1BA89146B;   // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       signBlueMaskInvColor_221_0181AE3C43C32798E8E762BCC34AAE93;// 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       signAlphaMaskColor_217_237C5114485633B8D264D295DB987D21;  // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       signAlphaMaskInvColor_218_7E3088404E3D272E6D259B89C50312FD;// 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       borderColor_219_F933D3B24FD3404AB29A20BCD6E7FFCF;         // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 mesh_208_6D3012174E256DD5CA95B8AA6BCDD892;                // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               secondPost_195_A98BBC4E41422638FA490D84BDAD245A;          // 0x0060(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                angle_214_9193B9B544E094268EF1F6ADDCE1522C;               // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               reverseX_210_0657F9704CE315480C3BCEB1900E1016;            // 0x0068(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FName                                       post_220_C3B383DA4C77F0EC4AD56DB40815BBDC;                // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
