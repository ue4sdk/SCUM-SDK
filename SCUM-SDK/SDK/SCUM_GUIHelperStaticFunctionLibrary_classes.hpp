#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_GUIHelperStaticFunctionLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UGUIHelperStaticFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C");
		return ptr;
	}


	static void ShowErrorDialog(const struct FText& Message, class UCanvasPanel* Canvas, class UWidget* widgetToDisable, class UObject* __WorldContext, class UUI_ErrorMessage_C** messageWidget);
	static void LinearCoordinatesToString(const struct FVector& Coordinates, class UObject* __WorldContext, struct FString* coordinatesString);
	static void HealthToString(float Health, class UObject* __WorldContext, struct FString* healthString);
	static void ValueToDescriptionString(const struct FString& preLabel, float Value, const struct FString& postLabel, class UObject* __WorldContext, struct FString* descriptionString);
	static void ValueToString(float Value, class UObject* __WorldContext, struct FString* ValueString);
	static void LinearVectorDistanceToString(const struct FVector& Acceleration, class UObject* __WorldContext, struct FString* accelerationString);
	static void VelocityToString(const struct FVector& Velocity, class UObject* __WorldContext, struct FString* velocityString);
	static void AccelerationToString(float Acceleration, class UObject* __WorldContext, struct FString* accelerationString);
	static void StringToDescriptionString(const struct FString& preLabel, const struct FString& ValueString, const struct FString& postLabel, class UObject* __WorldContext, struct FString* descriptionString);
	static void LinearValueToString(float Value, class UObject* __WorldContext, struct FString* ValueString);
	static void CoordinatesToString(const struct FVector& Coordinates, class UObject* __WorldContext, struct FString* coordinatesString);
	static void VectorToString(const struct FVector& Vector, class UObject* __WorldContext, struct FString* vectorString);
	static void RotationToString(const struct FRotator& Rotation, class UObject* __WorldContext, struct FString* rotationString);
	static void LinearValueToDescriptionString(const struct FString& preLabel, float Value, const struct FString& postLabel, class UObject* __WorldContext, struct FString* descriptionString);
	static void FloatToStringWithPrecision(float floatNum, int Precision, class UObject* __WorldContext, struct FString* floatAsString);
	static void EmovementPaceToText(EPrisonerMovementPace movementPace, class UObject* __WorldContext, struct FText* movementPaceText);
	static void SortSkills(class UObject* __WorldContext, TArray<class USkill*>* skillArrayRef);
	static void SkilLevelToSkillPercentage(ESkillLevel Selection, class UObject* __WorldContext, float* MaxValue);
	static struct FText FloatToTextFormatted(float floatNum, class UObject* __WorldContext);
	static void SkilLevelToMaxSkillValue(ESkillLevel Selection, class UObject* __WorldContext, float* MaxValue);
	static void SkilLevelToMaxSkillValueText(ESkillLevel Selection, class UObject* __WorldContext, struct FText* MaxValue);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
