// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_LevelSequence_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FSoftClassPath          InBurnInClass                  (CPF_Parm)

void ULevelSequenceBurnInOptions::SetBurnIn(const struct FSoftClassPath& InBurnInClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn");

	struct
	{
		struct FSoftClassPath          InBurnInClass;
	} params;

	params.InBurnInClass = InBurnInClass;

	UObject::ProcessEvent(fn, &params);
}


// Function LevelSequence.LevelSequenceActor.SetSequence
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ULevelSequence*          InSequence                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALevelSequenceActor::SetSequence(class ULevelSequence* InSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetSequence");

	struct
	{
		class ULevelSequence*          InSequence;
	} params;

	params.InSequence = InSequence;

	UObject::ProcessEvent(fn, &params);
}


// Function LevelSequence.LevelSequenceActor.SetEventReceivers
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<class AActor*>          AdditionalReceivers            (CPF_Parm, CPF_ZeroConstructor)

void ALevelSequenceActor::SetEventReceivers(TArray<class AActor*> AdditionalReceivers)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetEventReceivers");

	struct
	{
		TArray<class AActor*>          AdditionalReceivers;
	} params;

	params.AdditionalReceivers = AdditionalReceivers;

	UObject::ProcessEvent(fn, &params);
}


// Function LevelSequence.LevelSequenceActor.SetBinding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID Binding                        (CPF_Parm)
// TArray<class AActor*>          Actors                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           bAllowBindingsFromAsset        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALevelSequenceActor::SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetBinding");

	struct
	{
		struct FMovieSceneObjectBindingID Binding;
		TArray<class AActor*>          Actors;
		bool                           bAllowBindingsFromAsset;
	} params;

	params.Binding = Binding;
	params.Actors = Actors;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	UObject::ProcessEvent(fn, &params);
}


// Function LevelSequence.LevelSequenceActor.ResetBindings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ALevelSequenceActor::ResetBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBindings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LevelSequence.LevelSequenceActor.ResetBinding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID Binding                        (CPF_Parm)

void ALevelSequenceActor::ResetBinding(const struct FMovieSceneObjectBindingID& Binding)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBinding");

	struct
	{
		struct FMovieSceneObjectBindingID Binding;
	} params;

	params.Binding = Binding;

	UObject::ProcessEvent(fn, &params);
}


// Function LevelSequence.LevelSequenceActor.RemoveBinding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID Binding                        (CPF_Parm)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALevelSequenceActor::RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.RemoveBinding");

	struct
	{
		struct FMovieSceneObjectBindingID Binding;
		class AActor*                  Actor;
	} params;

	params.Binding = Binding;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function LevelSequence.LevelSequenceActor.GetSequence
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bLoad                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bInitializePlayer              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ULevelSequence*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ULevelSequence* ALevelSequenceActor::GetSequence(bool bLoad, bool bInitializePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.GetSequence");

	struct
	{
		bool                           bLoad;
		bool                           bInitializePlayer;
		class ULevelSequence*          ReturnValue;
	} params;

	params.bLoad = bLoad;
	params.bInitializePlayer = bInitializePlayer;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.AddBinding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID Binding                        (CPF_Parm)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAllowBindingsFromAsset        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALevelSequenceActor::AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.AddBinding");

	struct
	{
		struct FMovieSceneObjectBindingID Binding;
		class AActor*                  Actor;
		bool                           bAllowBindingsFromAsset;
	} params;

	params.Binding = Binding;
	params.Actor = Actor;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	UObject::ProcessEvent(fn, &params);
}


// Function LevelSequence.LevelSequenceBurnIn.SetSettings
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 InSettings                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULevelSequenceBurnIn::SetSettings(class UObject* InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.SetSettings");

	struct
	{
		class UObject*                 InSettings;
	} params;

	params.InSettings = InSettings;

	UObject::ProcessEvent(fn, &params);
}


// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UClass*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UClass* ULevelSequenceBurnIn::GetSettingsClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass");

	struct
	{
		class UClass*                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ULevelSequence*          LevelSequence                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FMovieSceneSequencePlaybackSettings Settings                       (CPF_Parm)
// class ALevelSequenceActor*     OutActor                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ULevelSequencePlayer*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ULevelSequencePlayer* ULevelSequencePlayer::CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer");

	struct
	{
		class UObject*                 WorldContextObject;
		class ULevelSequence*          LevelSequence;
		struct FMovieSceneSequencePlaybackSettings Settings;
		class ALevelSequenceActor*     OutActor;
		class ULevelSequencePlayer*    ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.LevelSequence = LevelSequence;
	params.Settings = Settings;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutActor != nullptr)
		*OutActor = params.OutActor;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
