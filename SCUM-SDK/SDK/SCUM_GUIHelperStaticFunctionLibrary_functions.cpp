// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_GUIHelperStaticFunctionLibrary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.ShowErrorDialog
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Message                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UCanvasPanel*            Canvas                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UWidget*                 widgetToDisable                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UUI_ErrorMessage_C*      messageWidget                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UGUIHelperStaticFunctionLibrary_C::ShowErrorDialog(const struct FText& Message, class UCanvasPanel* Canvas, class UWidget* widgetToDisable, class UObject* __WorldContext, class UUI_ErrorMessage_C** messageWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.ShowErrorDialog");

	struct
	{
		struct FText                   Message;
		class UCanvasPanel*            Canvas;
		class UWidget*                 widgetToDisable;
		class UObject*                 __WorldContext;
		class UUI_ErrorMessage_C*      messageWidget;
	} params;

	params.Message = Message;
	params.Canvas = Canvas;
	params.widgetToDisable = widgetToDisable;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (messageWidget != nullptr)
		*messageWidget = params.messageWidget;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearCoordinatesToString
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 Coordinates                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 coordinatesString              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::LinearCoordinatesToString(const struct FVector& Coordinates, class UObject* __WorldContext, struct FString* coordinatesString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearCoordinatesToString");

	struct
	{
		struct FVector                 Coordinates;
		class UObject*                 __WorldContext;
		struct FString                 coordinatesString;
	} params;

	params.Coordinates = Coordinates;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (coordinatesString != nullptr)
		*coordinatesString = params.coordinatesString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.HealthToString
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          Health                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 healthString                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::HealthToString(float Health, class UObject* __WorldContext, struct FString* healthString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.HealthToString");

	struct
	{
		float                          Health;
		class UObject*                 __WorldContext;
		struct FString                 healthString;
	} params;

	params.Health = Health;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (healthString != nullptr)
		*healthString = params.healthString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.ValueToDescriptionString
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 preLabel                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 postLabel                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 descriptionString              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::ValueToDescriptionString(const struct FString& preLabel, float Value, const struct FString& postLabel, class UObject* __WorldContext, struct FString* descriptionString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.ValueToDescriptionString");

	struct
	{
		struct FString                 preLabel;
		float                          Value;
		struct FString                 postLabel;
		class UObject*                 __WorldContext;
		struct FString                 descriptionString;
	} params;

	params.preLabel = preLabel;
	params.Value = Value;
	params.postLabel = postLabel;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (descriptionString != nullptr)
		*descriptionString = params.descriptionString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.ValueToString
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ValueString                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::ValueToString(float Value, class UObject* __WorldContext, struct FString* ValueString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.ValueToString");

	struct
	{
		float                          Value;
		class UObject*                 __WorldContext;
		struct FString                 ValueString;
	} params;

	params.Value = Value;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ValueString != nullptr)
		*ValueString = params.ValueString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearVectorDistanceToString
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 Acceleration                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 accelerationString             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::LinearVectorDistanceToString(const struct FVector& Acceleration, class UObject* __WorldContext, struct FString* accelerationString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearVectorDistanceToString");

	struct
	{
		struct FVector                 Acceleration;
		class UObject*                 __WorldContext;
		struct FString                 accelerationString;
	} params;

	params.Acceleration = Acceleration;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (accelerationString != nullptr)
		*accelerationString = params.accelerationString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.VelocityToString
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 Velocity                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 velocityString                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::VelocityToString(const struct FVector& Velocity, class UObject* __WorldContext, struct FString* velocityString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.VelocityToString");

	struct
	{
		struct FVector                 Velocity;
		class UObject*                 __WorldContext;
		struct FString                 velocityString;
	} params;

	params.Velocity = Velocity;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (velocityString != nullptr)
		*velocityString = params.velocityString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.AccelerationToString
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          Acceleration                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 accelerationString             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::AccelerationToString(float Acceleration, class UObject* __WorldContext, struct FString* accelerationString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.AccelerationToString");

	struct
	{
		float                          Acceleration;
		class UObject*                 __WorldContext;
		struct FString                 accelerationString;
	} params;

	params.Acceleration = Acceleration;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (accelerationString != nullptr)
		*accelerationString = params.accelerationString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.StringToDescriptionString
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 preLabel                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// struct FString                 ValueString                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// struct FString                 postLabel                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 descriptionString              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::StringToDescriptionString(const struct FString& preLabel, const struct FString& ValueString, const struct FString& postLabel, class UObject* __WorldContext, struct FString* descriptionString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.StringToDescriptionString");

	struct
	{
		struct FString                 preLabel;
		struct FString                 ValueString;
		struct FString                 postLabel;
		class UObject*                 __WorldContext;
		struct FString                 descriptionString;
	} params;

	params.preLabel = preLabel;
	params.ValueString = ValueString;
	params.postLabel = postLabel;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (descriptionString != nullptr)
		*descriptionString = params.descriptionString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearValueToString
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ValueString                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::LinearValueToString(float Value, class UObject* __WorldContext, struct FString* ValueString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearValueToString");

	struct
	{
		float                          Value;
		class UObject*                 __WorldContext;
		struct FString                 ValueString;
	} params;

	params.Value = Value;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ValueString != nullptr)
		*ValueString = params.ValueString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.CoordinatesToString
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 Coordinates                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 coordinatesString              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::CoordinatesToString(const struct FVector& Coordinates, class UObject* __WorldContext, struct FString* coordinatesString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.CoordinatesToString");

	struct
	{
		struct FVector                 Coordinates;
		class UObject*                 __WorldContext;
		struct FString                 coordinatesString;
	} params;

	params.Coordinates = Coordinates;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (coordinatesString != nullptr)
		*coordinatesString = params.coordinatesString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.VectorToString
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 Vector                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 vectorString                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::VectorToString(const struct FVector& Vector, class UObject* __WorldContext, struct FString* vectorString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.VectorToString");

	struct
	{
		struct FVector                 Vector;
		class UObject*                 __WorldContext;
		struct FString                 vectorString;
	} params;

	params.Vector = Vector;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (vectorString != nullptr)
		*vectorString = params.vectorString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.RotationToString
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FRotator                Rotation                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 rotationString                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::RotationToString(const struct FRotator& Rotation, class UObject* __WorldContext, struct FString* rotationString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.RotationToString");

	struct
	{
		struct FRotator                Rotation;
		class UObject*                 __WorldContext;
		struct FString                 rotationString;
	} params;

	params.Rotation = Rotation;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (rotationString != nullptr)
		*rotationString = params.rotationString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearValueToDescriptionString
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 preLabel                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 postLabel                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 descriptionString              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::LinearValueToDescriptionString(const struct FString& preLabel, float Value, const struct FString& postLabel, class UObject* __WorldContext, struct FString* descriptionString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearValueToDescriptionString");

	struct
	{
		struct FString                 preLabel;
		float                          Value;
		struct FString                 postLabel;
		class UObject*                 __WorldContext;
		struct FString                 descriptionString;
	} params;

	params.preLabel = preLabel;
	params.Value = Value;
	params.postLabel = postLabel;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (descriptionString != nullptr)
		*descriptionString = params.descriptionString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.FloatToStringWithPrecision
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          floatNum                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Precision                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 floatAsString                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::FloatToStringWithPrecision(float floatNum, int Precision, class UObject* __WorldContext, struct FString* floatAsString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.FloatToStringWithPrecision");

	struct
	{
		float                          floatNum;
		int                            Precision;
		class UObject*                 __WorldContext;
		struct FString                 floatAsString;
	} params;

	params.floatNum = floatNum;
	params.Precision = Precision;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (floatAsString != nullptr)
		*floatAsString = params.floatAsString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.EmovementPaceToText
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EPrisonerMovementPace          movementPace                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   movementPaceText               (CPF_Parm, CPF_OutParm)

void UGUIHelperStaticFunctionLibrary_C::EmovementPaceToText(EPrisonerMovementPace movementPace, class UObject* __WorldContext, struct FText* movementPaceText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.EmovementPaceToText");

	struct
	{
		EPrisonerMovementPace          movementPace;
		class UObject*                 __WorldContext;
		struct FText                   movementPaceText;
	} params;

	params.movementPace = movementPace;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (movementPaceText != nullptr)
		*movementPaceText = params.movementPaceText;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SortSkills
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class USkill*>          skillArrayRef                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGUIHelperStaticFunctionLibrary_C::SortSkills(class UObject* __WorldContext, TArray<class USkill*>* skillArrayRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SortSkills");

	struct
	{
		TArray<class USkill*>          skillArrayRef;
		class UObject*                 __WorldContext;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (skillArrayRef != nullptr)
		*skillArrayRef = params.skillArrayRef;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SkilLevelToSkillPercentage
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESkillLevel                    Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MaxValue                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGUIHelperStaticFunctionLibrary_C::SkilLevelToSkillPercentage(ESkillLevel Selection, class UObject* __WorldContext, float* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SkilLevelToSkillPercentage");

	struct
	{
		ESkillLevel                    Selection;
		class UObject*                 __WorldContext;
		float                          MaxValue;
	} params;

	params.Selection = Selection;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (MaxValue != nullptr)
		*MaxValue = params.MaxValue;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.FloatToTextFormatted
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          floatNum                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UGUIHelperStaticFunctionLibrary_C::FloatToTextFormatted(float floatNum, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.FloatToTextFormatted");

	struct
	{
		float                          floatNum;
		class UObject*                 __WorldContext;
		struct FText                   ReturnValue;
	} params;

	params.floatNum = floatNum;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SkilLevelToMaxSkillValue
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESkillLevel                    Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MaxValue                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGUIHelperStaticFunctionLibrary_C::SkilLevelToMaxSkillValue(ESkillLevel Selection, class UObject* __WorldContext, float* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SkilLevelToMaxSkillValue");

	struct
	{
		ESkillLevel                    Selection;
		class UObject*                 __WorldContext;
		float                          MaxValue;
	} params;

	params.Selection = Selection;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (MaxValue != nullptr)
		*MaxValue = params.MaxValue;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SkilLevelToMaxSkillValueText
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESkillLevel                    Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   MaxValue                       (CPF_Parm, CPF_OutParm)

void UGUIHelperStaticFunctionLibrary_C::SkilLevelToMaxSkillValueText(ESkillLevel Selection, class UObject* __WorldContext, struct FText* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SkilLevelToMaxSkillValueText");

	struct
	{
		ESkillLevel                    Selection;
		class UObject*                 __WorldContext;
		struct FText                   MaxValue;
	} params;

	params.Selection = Selection;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (MaxValue != nullptr)
		*MaxValue = params.MaxValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
