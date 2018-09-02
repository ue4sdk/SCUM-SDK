#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_LiveLink_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LiveLink.LiveLinkDrivenComponent
// 0x0020 (0x0110 - 0x00F0)
class ULiveLinkDrivenComponent : public UActorComponent
{
public:
	struct FLiveLinkSubjectName                        SubjectName;                                              // 0x00F0(0x0008) (CPF_Edit)
	struct FName                                       ActorTransformBone;                                       // 0x00F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bModifyActorTransform;                                    // 0x0100(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSetRelativeLocation;                                     // 0x0101(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0102(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class LiveLink.LiveLinkDrivenComponent");
		return ptr;
	}

};


// Class LiveLink.LiveLinkInstance
// 0x0000 (0x03C0 - 0x03C0)
class ULiveLinkInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class LiveLink.LiveLinkInstance");
		return ptr;
	}

};


// Class LiveLink.LiveLinkRetargetAsset
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkRetargetAsset : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class LiveLink.LiveLinkRetargetAsset");
		return ptr;
	}

};


// Class LiveLink.LiveLinkRemapAsset
// 0x00A8 (0x00D0 - 0x0028)
class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0028(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class LiveLink.LiveLinkRemapAsset");
		return ptr;
	}


	void RemapCurveElements(TMap<struct FName, float>* CurveItems);
	struct FName GetRemappedCurveName(const struct FName& CurveName);
	struct FName GetRemappedBoneName(const struct FName& BoneName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
