#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ukRoadSignsFunc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ukRoadSignsFunc.ukRoadSignsFunc_C
// 0x0000 (0x0028 - 0x0028)
class UukRoadSignsFunc_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ukRoadSignsFunc.ukRoadSignsFunc_C");
		return ptr;
	}


	static void killUnused(class UStaticMeshComponent* Item, class UObject* __WorldContext);
	static void setBracketWidth(class UStaticMeshComponent* Sign, bool isTopBracket, class UObject* __WorldContext, class UStaticMesh** bracketMesh, bool* lookupfailed);
	static void SetSize(class UStaticMeshComponent* StaticMesh, TEnumAsByte<EukRoadSignSize> SignSizeEmumerator, class UObject* __WorldContext, class UStaticMeshComponent** StaticMeshWithSize);
	static void setSignFace(class UObject* __WorldContext, class UMaterialInstanceDynamic** Material, struct FName* signFaceSet, class UStaticMeshComponent** StaticMesh, TArray<struct FLinearColor>* colorData, TArray<struct FName>* colorNames, class UStaticMeshComponent** StaticMeshWithMesh, class UMaterialInstanceDynamic** materialWithFace, bool* setSignFaceFailed);
	static void selectSignFace(bool defaultSign, const struct FName& primary, const struct FName& secondary, unsigned char primaryIndex, unsigned char secondaryIndex, const struct FName& Previous, class UObject* __WorldContext, struct FName* signFaceSelection, unsigned char* primaryReturn, unsigned char* secondaryReturn);
	static void setCondition(class UMaterialInstanceDynamic* Material, const struct FName& conditionSet, class UObject* __WorldContext, class UMaterialInstanceDynamic** MaterialWithCondition, bool* setConditionFailed);
	static void getMasterMaterialSign(class UObject* __WorldContext, class UMaterial** masterMaterial);
	static void setShine(class UObject* __WorldContext, class UMaterialInstanceDynamic** Material, struct FName* shineSet, class UMaterialInstanceDynamic** materialWithShine, bool* setShineFailed);
	static void setColors(class UObject* __WorldContext, struct FName* colourSet, TArray<struct FLinearColor>* colorValues, TArray<struct FName>* colorNames, bool* setColorFailed);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
