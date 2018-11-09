// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ukRoadSignsFunc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ukRoadSignsFunc.ukRoadSignsFunc_C.killUnused
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UukRoadSignsFunc_C::killUnused(class UStaticMeshComponent* Item, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function ukRoadSignsFunc.ukRoadSignsFunc_C.killUnused");

	struct
	{
		class UStaticMeshComponent*    Item;
		class UObject*                 __WorldContext;
	} params;

	params.Item = Item;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ukRoadSignsFunc.ukRoadSignsFunc_C.setBracketWidth
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    Sign                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           isTopBracket                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UStaticMesh*             bracketMesh                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           lookupfailed                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UukRoadSignsFunc_C::setBracketWidth(class UStaticMeshComponent* Sign, bool isTopBracket, class UObject* __WorldContext, class UStaticMesh** bracketMesh, bool* lookupfailed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ukRoadSignsFunc.ukRoadSignsFunc_C.setBracketWidth");

	struct
	{
		class UStaticMeshComponent*    Sign;
		bool                           isTopBracket;
		class UObject*                 __WorldContext;
		class UStaticMesh*             bracketMesh;
		bool                           lookupfailed;
	} params;

	params.Sign = Sign;
	params.isTopBracket = isTopBracket;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (bracketMesh != nullptr)
		*bracketMesh = params.bracketMesh;
	if (lookupfailed != nullptr)
		*lookupfailed = params.lookupfailed;
}


// Function ukRoadSignsFunc.ukRoadSignsFunc_C.SetSize
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    StaticMesh                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TEnumAsByte<EukRoadSignSize>   SignSizeEmumerator             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UStaticMeshComponent*    StaticMeshWithSize             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UukRoadSignsFunc_C::SetSize(class UStaticMeshComponent* StaticMesh, TEnumAsByte<EukRoadSignSize> SignSizeEmumerator, class UObject* __WorldContext, class UStaticMeshComponent** StaticMeshWithSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ukRoadSignsFunc.ukRoadSignsFunc_C.SetSize");

	struct
	{
		class UStaticMeshComponent*    StaticMesh;
		TEnumAsByte<EukRoadSignSize>   SignSizeEmumerator;
		class UObject*                 __WorldContext;
		class UStaticMeshComponent*    StaticMeshWithSize;
	} params;

	params.StaticMesh = StaticMesh;
	params.SignSizeEmumerator = SignSizeEmumerator;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (StaticMeshWithSize != nullptr)
		*StaticMeshWithSize = params.StaticMeshWithSize;
}


// Function ukRoadSignsFunc.ukRoadSignsFunc_C.setSignFace
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Material                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FName                   signFaceSet                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UStaticMeshComponent*    StaticMesh                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_ReferenceParm, CPF_IsPlainOldData)
// TArray<struct FLinearColor>    colorData                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FName>           colorNames                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UStaticMeshComponent*    StaticMeshWithMesh             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UMaterialInstanceDynamic* materialWithFace               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           setSignFaceFailed              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UukRoadSignsFunc_C::setSignFace(class UObject* __WorldContext, class UMaterialInstanceDynamic** Material, struct FName* signFaceSet, class UStaticMeshComponent** StaticMesh, TArray<struct FLinearColor>* colorData, TArray<struct FName>* colorNames, class UStaticMeshComponent** StaticMeshWithMesh, class UMaterialInstanceDynamic** materialWithFace, bool* setSignFaceFailed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ukRoadSignsFunc.ukRoadSignsFunc_C.setSignFace");

	struct
	{
		class UMaterialInstanceDynamic* Material;
		struct FName                   signFaceSet;
		class UStaticMeshComponent*    StaticMesh;
		TArray<struct FLinearColor>    colorData;
		TArray<struct FName>           colorNames;
		class UObject*                 __WorldContext;
		class UStaticMeshComponent*    StaticMeshWithMesh;
		class UMaterialInstanceDynamic* materialWithFace;
		bool                           setSignFaceFailed;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Material != nullptr)
		*Material = params.Material;
	if (signFaceSet != nullptr)
		*signFaceSet = params.signFaceSet;
	if (StaticMesh != nullptr)
		*StaticMesh = params.StaticMesh;
	if (colorData != nullptr)
		*colorData = params.colorData;
	if (colorNames != nullptr)
		*colorNames = params.colorNames;
	if (StaticMeshWithMesh != nullptr)
		*StaticMeshWithMesh = params.StaticMeshWithMesh;
	if (materialWithFace != nullptr)
		*materialWithFace = params.materialWithFace;
	if (setSignFaceFailed != nullptr)
		*setSignFaceFailed = params.setSignFaceFailed;
}


// Function ukRoadSignsFunc.ukRoadSignsFunc_C.selectSignFace
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           defaultSign                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   primary                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   secondary                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// unsigned char                  primaryIndex                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// unsigned char                  secondaryIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Previous                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   signFaceSelection              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// unsigned char                  primaryReturn                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// unsigned char                  secondaryReturn                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UukRoadSignsFunc_C::selectSignFace(bool defaultSign, const struct FName& primary, const struct FName& secondary, unsigned char primaryIndex, unsigned char secondaryIndex, const struct FName& Previous, class UObject* __WorldContext, struct FName* signFaceSelection, unsigned char* primaryReturn, unsigned char* secondaryReturn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ukRoadSignsFunc.ukRoadSignsFunc_C.selectSignFace");

	struct
	{
		bool                           defaultSign;
		struct FName                   primary;
		struct FName                   secondary;
		unsigned char                  primaryIndex;
		unsigned char                  secondaryIndex;
		struct FName                   Previous;
		class UObject*                 __WorldContext;
		struct FName                   signFaceSelection;
		unsigned char                  primaryReturn;
		unsigned char                  secondaryReturn;
	} params;

	params.defaultSign = defaultSign;
	params.primary = primary;
	params.secondary = secondary;
	params.primaryIndex = primaryIndex;
	params.secondaryIndex = secondaryIndex;
	params.Previous = Previous;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (signFaceSelection != nullptr)
		*signFaceSelection = params.signFaceSelection;
	if (primaryReturn != nullptr)
		*primaryReturn = params.primaryReturn;
	if (secondaryReturn != nullptr)
		*secondaryReturn = params.secondaryReturn;
}


// Function ukRoadSignsFunc.ukRoadSignsFunc_C.setCondition
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Material                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   conditionSet                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMaterialInstanceDynamic* MaterialWithCondition          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           setConditionFailed             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UukRoadSignsFunc_C::setCondition(class UMaterialInstanceDynamic* Material, const struct FName& conditionSet, class UObject* __WorldContext, class UMaterialInstanceDynamic** MaterialWithCondition, bool* setConditionFailed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ukRoadSignsFunc.ukRoadSignsFunc_C.setCondition");

	struct
	{
		class UMaterialInstanceDynamic* Material;
		struct FName                   conditionSet;
		class UObject*                 __WorldContext;
		class UMaterialInstanceDynamic* MaterialWithCondition;
		bool                           setConditionFailed;
	} params;

	params.Material = Material;
	params.conditionSet = conditionSet;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (MaterialWithCondition != nullptr)
		*MaterialWithCondition = params.MaterialWithCondition;
	if (setConditionFailed != nullptr)
		*setConditionFailed = params.setConditionFailed;
}


// Function ukRoadSignsFunc.ukRoadSignsFunc_C.getMasterMaterialSign
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMaterial*               masterMaterial                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UukRoadSignsFunc_C::getMasterMaterialSign(class UObject* __WorldContext, class UMaterial** masterMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function ukRoadSignsFunc.ukRoadSignsFunc_C.getMasterMaterialSign");

	struct
	{
		class UObject*                 __WorldContext;
		class UMaterial*               masterMaterial;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (masterMaterial != nullptr)
		*masterMaterial = params.masterMaterial;
}


// Function ukRoadSignsFunc.ukRoadSignsFunc_C.setShine
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Material                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FName                   shineSet                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMaterialInstanceDynamic* materialWithShine              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           setShineFailed                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UukRoadSignsFunc_C::setShine(class UObject* __WorldContext, class UMaterialInstanceDynamic** Material, struct FName* shineSet, class UMaterialInstanceDynamic** materialWithShine, bool* setShineFailed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ukRoadSignsFunc.ukRoadSignsFunc_C.setShine");

	struct
	{
		class UMaterialInstanceDynamic* Material;
		struct FName                   shineSet;
		class UObject*                 __WorldContext;
		class UMaterialInstanceDynamic* materialWithShine;
		bool                           setShineFailed;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Material != nullptr)
		*Material = params.Material;
	if (shineSet != nullptr)
		*shineSet = params.shineSet;
	if (materialWithShine != nullptr)
		*materialWithShine = params.materialWithShine;
	if (setShineFailed != nullptr)
		*setShineFailed = params.setShineFailed;
}


// Function ukRoadSignsFunc.ukRoadSignsFunc_C.setColors
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   colourSet                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FLinearColor>    colorValues                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<struct FName>           colorNames                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           setColorFailed                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UukRoadSignsFunc_C::setColors(class UObject* __WorldContext, struct FName* colourSet, TArray<struct FLinearColor>* colorValues, TArray<struct FName>* colorNames, bool* setColorFailed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ukRoadSignsFunc.ukRoadSignsFunc_C.setColors");

	struct
	{
		struct FName                   colourSet;
		class UObject*                 __WorldContext;
		TArray<struct FLinearColor>    colorValues;
		TArray<struct FName>           colorNames;
		bool                           setColorFailed;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (colourSet != nullptr)
		*colourSet = params.colourSet;
	if (colorValues != nullptr)
		*colorValues = params.colorValues;
	if (colorNames != nullptr)
		*colorNames = params.colorNames;
	if (setColorFailed != nullptr)
		*setColorFailed = params.setColorFailed;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
