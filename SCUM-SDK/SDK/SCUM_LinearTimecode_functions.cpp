// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_LinearTimecode_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LinearTimecode.LinearTimecodeComponent.SetDropTimecodeFrameNumber
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FDropTimecode           Timecode                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            FrameNumber                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FDropTimecode           OutTimecode                    (CPF_Parm, CPF_OutParm)

void ULinearTimecodeComponent::SetDropTimecodeFrameNumber(const struct FDropTimecode& Timecode, int FrameNumber, struct FDropTimecode* OutTimecode)
{
	static auto fn = UObject::FindObject<UFunction>("Function LinearTimecode.LinearTimecodeComponent.SetDropTimecodeFrameNumber");

	struct
	{
		struct FDropTimecode           Timecode;
		int                            FrameNumber;
		struct FDropTimecode           OutTimecode;
	} params;

	params.Timecode = Timecode;
	params.FrameNumber = FrameNumber;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutTimecode != nullptr)
		*OutTimecode = params.OutTimecode;
}


// Function LinearTimecode.LinearTimecodeComponent.GetDropTimeCodeFrameNumber
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FDropTimecode           Timecode                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            FrameNumber                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULinearTimecodeComponent::GetDropTimeCodeFrameNumber(const struct FDropTimecode& Timecode, int* FrameNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function LinearTimecode.LinearTimecodeComponent.GetDropTimeCodeFrameNumber");

	struct
	{
		struct FDropTimecode           Timecode;
		int                            FrameNumber;
	} params;

	params.Timecode = Timecode;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (FrameNumber != nullptr)
		*FrameNumber = params.FrameNumber;
}


// Function LinearTimecode.LinearTimecodeComponent.GetDropFrameNumber
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ULinearTimecodeComponent::GetDropFrameNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function LinearTimecode.LinearTimecodeComponent.GetDropFrameNumber");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LinearTimecode.DropTimecodeToStringConversion.Conv_DropTimecodeToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FDropTimecode           InTimecode                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UDropTimecodeToStringConversion::Conv_DropTimecodeToString(const struct FDropTimecode& InTimecode)
{
	static auto fn = UObject::FindObject<UFunction>("Function LinearTimecode.DropTimecodeToStringConversion.Conv_DropTimecodeToString");

	struct
	{
		struct FDropTimecode           InTimecode;
		struct FString                 ReturnValue;
	} params;

	params.InTimecode = InTimecode;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
