// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_TimeManagement_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          TimeInSeconds                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFrameRate              FrameRate                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FFrameTime              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FFrameTime UTimeManagementBlueprintLibrary::Multiply_SecondsFrameRate(float TimeInSeconds, const struct FFrameRate& FrameRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate");

	struct
	{
		float                          TimeInSeconds;
		struct FFrameRate              FrameRate;
		struct FFrameTime              ReturnValue;
	} params;

	params.TimeInSeconds = TimeInSeconds;
	params.FrameRate = FrameRate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FTimecode               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FTimecode UTimeManagementBlueprintLibrary::GetTimecode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode");

	struct
	{
		struct FTimecode               ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FTimecode               InTimecode                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bForceSignDisplay              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UTimeManagementBlueprintLibrary::Conv_TimecodeToString(const struct FTimecode& InTimecode, bool bForceSignDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString");

	struct
	{
		struct FTimecode               InTimecode;
		bool                           bForceSignDisplay;
		struct FString                 ReturnValue;
	} params;

	params.InTimecode = InTimecode;
	params.bForceSignDisplay = bForceSignDisplay;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FQualifiedFrameTime     InFrameTime                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTimeManagementBlueprintLibrary::Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds");

	struct
	{
		struct FQualifiedFrameTime     InFrameTime;
		float                          ReturnValue;
	} params;

	params.InFrameTime = InFrameTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FFrameRate              InFrameRate                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTimeManagementBlueprintLibrary::Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds");

	struct
	{
		struct FFrameRate              InFrameRate;
		float                          ReturnValue;
	} params;

	params.InFrameRate = InFrameRate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
