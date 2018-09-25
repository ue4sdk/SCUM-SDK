#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_ukRoadsignCondition.S_ukRoadSignCondition
// 0x00E8
struct FS_ukRoadSignCondition
{
	float                                              diffuseOverlay_30_FFAB64C64AB463137FAAA8BF0965C431;       // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              diffuseBalance_187_D28292794288C39385D046B5AFB83494;      // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              roughFaceStr_55_5DFCB4A543A71B11CB563CA84F862CF7;         // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              roughFaceBoost_56_89AC4A274F2429E5792735B553A0CA5C;       // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              roughBacksideStr_57_45C433B245B07FFFED172F95EBA04678;     // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              roughBacksideBoost_58_83EC415E413341FB71ADE49AD53207AC;   // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              normalFaceDetailStr_59_9C86E425415076F221A1A18C6E4C8420;  // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              backsideColorR_184_9271033342E02BC375635D8665A04FF0;      // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              backsideColorG_185_1C296653471C019F5BF928801C4E95C1;      // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              backsideColorB_186_C715B2F94C3344E828B751A2CE833D02;      // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  diffuse_209_7A0C088447254B45F9E174A87AF9FDFE;             // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  normalFaceDetail_212_CA49D40D4BFE44AAA60D6E85C6CE2E59;    // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  roughness_217_B0C5B83E4A346A09949D14800392B957;           // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  baseMask_214_E35FD8B8488EA08CF322B09A386D5809;            // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  signFace_215_250B1A7144F046BE8C4F0F8E6886BC0F;            // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              red_R_220_57ACB2714BE3EBDDDF652C9C802D803B;               // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              red_G_225_6DFE45C24007956F01F2A093A1F95319;               // 0x0054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              red_B_226_41E4B5B54B6720F96E9F83A1C67FB1F2;               // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              blue_R_233_D05013A846AF0477543EACA7A575B683;              // 0x005C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              blue_G_234_1AD0A52148FF6EA3B6D58FAB759F7F0D;              // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              blue_B_235_E56345394E990F72E42DC48CC7142623;              // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              brown_R_242_7097B6774DA00BC640CC2E9152BAA007;             // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              brown_G_243_627AF49D4540DEF97E6723A3A7878D76;             // 0x006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              brown_B_244_36F0C2124A3470E6E9D4EEB6B66DBB93;             // 0x0070(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              green_R_251_197DB42B42268B52DDDB4BBF11DBFF41;             // 0x0074(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              green_G_253_C47A1FF240D678B88A87EFBAE2A89FC4;             // 0x0078(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              green_B_254_8C6608F94DCCCAFBA379B7A73D2484B3;             // 0x007C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              yellow_R_264_801DF6BB4552198EFDF7099E97EF311F;            // 0x0080(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              yellow_G_265_16E9E1714C054A07F2520FAFBB65E5DF;            // 0x0084(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              yellow_B_266_06928F6542B8281B403E739500390B98;            // 0x0088(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              paleGreen_R_270_7ECA89654C417A3EC11D4C8D4229FAD7;         // 0x008C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              paleGreen_G_271_EF42D10E41E338463A520DAD2265AE9E;         // 0x0090(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              paleGreen_B_272_3AC0D44A4D8CDC661B1EB6AF84CFF1BD;         // 0x0094(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              black_R_279_B888BDA34482E697ECCB098C1C2CDA71;             // 0x0098(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              black_G_280_2ADF41354073C6E5FF05FB9FFA14CB71;             // 0x009C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              black_B_281_1EF5986A46F5348BA10088AFBFE1B137;             // 0x00A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              white_R_288_74BE6D564686A63FBC931883B3970F64;             // 0x00A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              white_G_289_5F71047741355F659F92D3849E19785F;             // 0x00A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              white_B_290_6C6D0C7A4850BF9C0F7E14BADB615CD3;             // 0x00AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              grey_R_303_F0EEBDA6457596F14ABC4DBB20163B08;              // 0x00B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              grey_G_304_178D124E4E448E076CB59DA9960637DF;              // 0x00B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              grey_B_305_76F01B6F4EB63B71DDB0F9B7BF38D6D3;              // 0x00B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	class UStaticMesh*                                 framemesh_319_5C619B06448A4FDE86C9EFB1C810849E;           // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstance*                           framemat_320_625ED8CF41AB89DF7AE9C5942C2EB70F;            // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 postmesh_321_4B4ACD7A4E0F0EBB64A327BCFBB35987;            // 0x00D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstance*                           postmat_322_0D206D1B4006E7A37777F48988EDE782;             // 0x00D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstance*                           bracketmat_323_1A50E1D146696831729C5ABF3EB9AC5E;          // 0x00E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
