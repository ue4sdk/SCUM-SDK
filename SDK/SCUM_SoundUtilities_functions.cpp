// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_SoundUtilities_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_BlueprintCallable)
// Parameters:
// int                            BaseMidiNote                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TargetMidiNote                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float USoundUtilitiesBPFunctionLibrary::GetPitchScaleFromMIDIPitch(int BaseMidiNote, int TargetMidiNote)
{
	static auto fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch");

	struct
	{
		int                            BaseMidiNote;
		int                            TargetMidiNote;
		float                          ReturnValue;
	} params;

	params.BaseMidiNote = BaseMidiNote;
	params.TargetMidiNote = TargetMidiNote;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_BlueprintCallable)
// Parameters:
// float                          Frequency                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int USoundUtilitiesBPFunctionLibrary::GetMIDIPitchFromFrequency(float Frequency)
{
	static auto fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency");

	struct
	{
		float                          Frequency;
		int                            ReturnValue;
	} params;

	params.Frequency = Frequency;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_BlueprintCallable)
// Parameters:
// int                            MidiNote                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float USoundUtilitiesBPFunctionLibrary::GetFrequencyFromMIDIPitch(int MidiNote)
{
	static auto fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch");

	struct
	{
		int                            MidiNote;
		float                          ReturnValue;
	} params;

	params.MidiNote = MidiNote;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_BlueprintCallable)
// Parameters:
// float                          BeatsPerMinute                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            BeatMultiplier                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            DivisionsOfWholeNote           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float USoundUtilitiesBPFunctionLibrary::GetBeatTempo(float BeatsPerMinute, int BeatMultiplier, int DivisionsOfWholeNote)
{
	static auto fn = UObject::FindObject<UFunction>("Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo");

	struct
	{
		float                          BeatsPerMinute;
		int                            BeatMultiplier;
		int                            DivisionsOfWholeNote;
		float                          ReturnValue;
	} params;

	params.BeatsPerMinute = BeatsPerMinute;
	params.BeatMultiplier = BeatMultiplier;
	params.DivisionsOfWholeNote = DivisionsOfWholeNote;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
