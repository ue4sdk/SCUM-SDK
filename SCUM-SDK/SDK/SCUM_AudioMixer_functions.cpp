// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_AudioMixer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AudioMixer.SynthComponent.Stop
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USynthComponent::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.Stop");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AudioMixer.SynthComponent.Start
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USynthComponent::Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.Start");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AudioMixer.SynthComponent.SetVolumeMultiplier
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          VolumeMultiplier               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USynthComponent::SetVolumeMultiplier(float VolumeMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetVolumeMultiplier");

	struct
	{
		float                          VolumeMultiplier;
	} params;

	params.VolumeMultiplier = VolumeMultiplier;

	UObject::ProcessEvent(fn, &params);
}


// Function AudioMixer.SynthComponent.SetSubmixSend
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USoundSubmix*            Submix                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          SendLevel                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USynthComponent::SetSubmixSend(class USoundSubmix* Submix, float SendLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetSubmixSend");

	struct
	{
		class USoundSubmix*            Submix;
		float                          SendLevel;
	} params;

	params.Submix = Submix;
	params.SendLevel = SendLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function AudioMixer.SynthComponent.IsPlaying
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USynthComponent::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.IsPlaying");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EAudioRecordingExportType      ExportType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Path                           (CPF_Parm, CPF_ZeroConstructor)
// class USoundSubmix*            SubmixToRecord                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USoundWave*              ExistingSoundWaveToOverwrite   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USoundWave*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class USoundWave* UAudioMixerBlueprintLibrary::StopRecordingOutput(class UObject* WorldContextObject, EAudioRecordingExportType ExportType, const struct FString& Name, const struct FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput");

	struct
	{
		class UObject*                 WorldContextObject;
		EAudioRecordingExportType      ExportType;
		struct FString                 Name;
		struct FString                 Path;
		class USoundSubmix*            SubmixToRecord;
		class USoundWave*              ExistingSoundWaveToOverwrite;
		class USoundWave*              ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.ExportType = ExportType;
	params.Name = Name;
	params.Path = Path;
	params.SubmixToRecord = SubmixToRecord;
	params.ExistingSoundWaveToOverwrite = ExistingSoundWaveToOverwrite;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ExpectedDuration               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USoundSubmix*            SubmixToRecord                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAudioMixerBlueprintLibrary::StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput");

	struct
	{
		class UObject*                 WorldContextObject;
		float                          ExpectedDuration;
		class USoundSubmix*            SubmixToRecord;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.ExpectedDuration = ExpectedDuration;
	params.SubmixToRecord = SubmixToRecord;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USoundEffectSourcePresetChain* PresetChain                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            EntryIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bBypassed                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAudioMixerBlueprintLibrary::SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex, bool bBypassed)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry");

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundEffectSourcePresetChain* PresetChain;
		int                            EntryIndex;
		bool                           bBypassed;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;
	params.EntryIndex = EntryIndex;
	params.bBypassed = bBypassed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USoundEffectSourcePresetChain* PresetChain                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            EntryIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAudioMixerBlueprintLibrary::RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain");

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundEffectSourcePresetChain* PresetChain;
		int                            EntryIndex;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;
	params.EntryIndex = EntryIndex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAudioMixerBlueprintLibrary::RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect");

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundEffectSubmixPreset* SubmixEffectPreset;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.SubmixEffectPreset = SubmixEffectPreset;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USoundEffectSourcePresetChain* PresetChain                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAudioMixerBlueprintLibrary::GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain");

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundEffectSourcePresetChain* PresetChain;
		int                            ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAudioMixerBlueprintLibrary::ClearMasterSubmixEffects(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects");

	struct
	{
		class UObject*                 WorldContextObject;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USoundEffectSourcePresetChain* PresetChain                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSourceEffectChainEntry Entry                          (CPF_Parm, CPF_IsPlainOldData)

void UAudioMixerBlueprintLibrary::AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain");

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundEffectSourcePresetChain* PresetChain;
		struct FSourceEffectChainEntry Entry;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;
	params.Entry = Entry;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAudioMixerBlueprintLibrary::AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect");

	struct
	{
		class UObject*                 WorldContextObject;
		class USoundEffectSubmixPreset* SubmixEffectPreset;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.SubmixEffectPreset = SubmixEffectPreset;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSubmixEffectDynamicsProcessorSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void USubmixEffectDynamicsProcessorPreset::SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings");

	struct
	{
		struct FSubmixEffectDynamicsProcessorSettings InSettings;
	} params;

	params.InSettings = InSettings;

	UObject::ProcessEvent(fn, &params);
}


// Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSubmixEffectSubmixEQSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void USubmixEffectSubmixEQPreset::SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings");

	struct
	{
		struct FSubmixEffectSubmixEQSettings InSettings;
	} params;

	params.InSettings = InSettings;

	UObject::ProcessEvent(fn, &params);
}


// Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UReverbEffect*           InReverbEffect                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          WetLevel                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USubmixEffectReverbPreset::SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect");

	struct
	{
		class UReverbEffect*           InReverbEffect;
		float                          WetLevel;
	} params;

	params.InReverbEffect = InReverbEffect;
	params.WetLevel = WetLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSubmixEffectReverbSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void USubmixEffectReverbPreset::SetSettings(const struct FSubmixEffectReverbSettings& InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbPreset.SetSettings");

	struct
	{
		struct FSubmixEffectReverbSettings InSettings;
	} params;

	params.InSettings = InSettings;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
