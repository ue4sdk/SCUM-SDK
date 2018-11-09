// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_AkAudio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AkAudio.AkAcousticPortal.OpenPortal
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AAkAcousticPortal::OpenPortal()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.OpenPortal");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkAcousticPortal.GetCurrentState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EAkAcousticPortalState         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

EAkAcousticPortalState AAkAcousticPortal::GetCurrentState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.GetCurrentState");

	struct
	{
		EAkAcousticPortalState         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkAcousticPortal.ClosePortal
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AAkAcousticPortal::ClosePortal()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.ClosePortal");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkAmbientSound.StopAmbientSound
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AAkAmbientSound::StopAmbientSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAmbientSound.StopAmbientSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkAmbientSound.StartAmbientSound
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AAkAmbientSound::StartAmbientSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAmbientSound.StartAmbientSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkComponent.UseReverbVolumes
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           inUseReverbVolumes             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkComponent::UseReverbVolumes(bool inUseReverbVolumes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.UseReverbVolumes");

	struct
	{
		bool                           inUseReverbVolumes;
	} params;

	params.inUseReverbVolumes = inUseReverbVolumes;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkComponent.UseEarlyReflections
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkAuxBus*               AuxBus                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Order                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          BusSendGain                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MaxPathLength                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           SpotReflectors                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 AuxBusName                     (CPF_Parm, CPF_ZeroConstructor)

void UAkComponent::UseEarlyReflections(class UAkAuxBus* AuxBus, int Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const struct FString& AuxBusName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.UseEarlyReflections");

	struct
	{
		class UAkAuxBus*               AuxBus;
		int                            Order;
		float                          BusSendGain;
		float                          MaxPathLength;
		bool                           SpotReflectors;
		struct FString                 AuxBusName;
	} params;

	params.AuxBus = AuxBus;
	params.Order = Order;
	params.BusSendGain = BusSendGain;
	params.MaxPathLength = MaxPathLength;
	params.SpotReflectors = SpotReflectors;
	params.AuxBusName = AuxBusName;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkComponent.Stop
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAkComponent::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.Stop");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkComponent.SetSwitch
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 SwitchGroup                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 SwitchState                    (CPF_Parm, CPF_ZeroConstructor)

void UAkComponent::SetSwitch(const struct FString& SwitchGroup, const struct FString& SwitchState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetSwitch");

	struct
	{
		struct FString                 SwitchGroup;
		struct FString                 SwitchState;
	} params;

	params.SwitchGroup = SwitchGroup;
	params.SwitchState = SwitchState;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bStopWhenOwnerDestroyed        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkComponent::SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed");

	struct
	{
		bool                           bStopWhenOwnerDestroyed;
	} params;

	params.bStopWhenOwnerDestroyed = bStopWhenOwnerDestroyed;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkComponent.SetRTPCValue
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 RTPC                           (CPF_Parm, CPF_ZeroConstructor)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InterpolationTimeMs            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkComponent::SetRTPCValue(const struct FString& RTPC, float Value, int InterpolationTimeMs)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetRTPCValue");

	struct
	{
		struct FString                 RTPC;
		float                          Value;
		int                            InterpolationTimeMs;
	} params;

	params.RTPC = RTPC;
	params.Value = Value;
	params.InterpolationTimeMs = InterpolationTimeMs;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkComponent.SetOutputBusVolume
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          BusVolume                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkComponent::SetOutputBusVolume(float BusVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetOutputBusVolume");

	struct
	{
		float                          BusVolume;
	} params;

	params.BusVolume = BusVolume;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkComponent.SetListeners
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UAkComponent*>    Listeners                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UAkComponent::SetListeners(TArray<class UAkComponent*> Listeners)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetListeners");

	struct
	{
		TArray<class UAkComponent*>    Listeners;
	} params;

	params.Listeners = Listeners;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkComponent.SetAttenuationScalingFactor
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkComponent::SetAttenuationScalingFactor(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetAttenuationScalingFactor");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkComponent.PostTrigger
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Trigger                        (CPF_Parm, CPF_ZeroConstructor)

void UAkComponent::PostTrigger(const struct FString& Trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostTrigger");

	struct
	{
		struct FString                 Trigger;
	} params;

	params.Trigger = Trigger;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAkComponent::PostAssociatedAkEventAndWaitForEnd(const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd");

	struct
	{
		struct FLatentActionInfo       LatentInfo;
		int                            ReturnValue;
	} params;

	params.LatentInfo = LatentInfo;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAssociatedAkEvent
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            CallbackMask                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FScriptDelegate         PostEventCallback              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAkComponent::PostAssociatedAkEvent(int CallbackMask, const struct FScriptDelegate& PostEventCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAssociatedAkEvent");

	struct
	{
		int                            CallbackMask;
		struct FScriptDelegate         PostEventCallback;
		int                            ReturnValue;
	} params;

	params.CallbackMask = CallbackMask;
	params.PostEventCallback = PostEventCallback;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAkEventByName
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 in_EventName                   (CPF_Parm, CPF_ZeroConstructor)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAkComponent::PostAkEventByName(const struct FString& in_EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAkEventByName");

	struct
	{
		struct FString                 in_EventName;
		int                            ReturnValue;
	} params;

	params.in_EventName = in_EventName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 in_EventName                   (CPF_Parm, CPF_ZeroConstructor)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAkComponent::PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, const struct FString& in_EventName, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAkEventAndWaitForEnd");

	struct
	{
		class UAkAudioEvent*           AkEvent;
		struct FString                 in_EventName;
		struct FLatentActionInfo       LatentInfo;
		int                            ReturnValue;
	} params;

	params.AkEvent = AkEvent;
	params.in_EventName = in_EventName;
	params.LatentInfo = LatentInfo;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAkEvent
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            CallbackMask                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FScriptDelegate         PostEventCallback              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FString                 in_EventName                   (CPF_Parm, CPF_ZeroConstructor)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAkComponent::PostAkEvent(class UAkAudioEvent* AkEvent, int CallbackMask, const struct FScriptDelegate& PostEventCallback, const struct FString& in_EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAkEvent");

	struct
	{
		class UAkAudioEvent*           AkEvent;
		int                            CallbackMask;
		struct FScriptDelegate         PostEventCallback;
		struct FString                 in_EventName;
		int                            ReturnValue;
	} params;

	params.AkEvent = AkEvent;
	params.CallbackMask = CallbackMask;
	params.PostEventCallback = PostEventCallback;
	params.in_EventName = in_EventName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.GetAttenuationRadius
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAkComponent::GetAttenuationRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.GetAttenuationRadius");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAkAudioInputComponent::PostAssociatedAudioInputEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkCheckBox.SetIsChecked
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InIsChecked                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkCheckBox::SetIsChecked(bool InIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetIsChecked");

	struct
	{
		bool                           InIsChecked;
	} params;

	params.InIsChecked = InIsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkCheckBox.SetCheckedState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ECheckBoxState                 InCheckedState                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkCheckBox::SetCheckedState(ECheckBoxState InCheckedState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetCheckedState");

	struct
	{
		ECheckBoxState                 InCheckedState;
	} params;

	params.InCheckedState = InCheckedState;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkCheckBox.SetAkItemId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FGuid                   ItemId                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UAkCheckBox::SetAkItemId(const struct FGuid& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetAkItemId");

	struct
	{
		struct FGuid                   ItemId;
	} params;

	params.ItemId = ItemId;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkCheckBox.SetAkBoolProperty
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ItemProperty                   (CPF_Parm, CPF_ZeroConstructor)

void UAkCheckBox::SetAkBoolProperty(const struct FString& ItemProperty)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetAkBoolProperty");

	struct
	{
		struct FString                 ItemProperty;
	} params;

	params.ItemProperty = ItemProperty;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkCheckBox.IsPressed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAkCheckBox::IsPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.IsPressed");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkCheckBox.IsChecked
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAkCheckBox::IsChecked()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.IsChecked");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkCheckBox.GetCheckedState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// ECheckBoxState                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ECheckBoxState UAkCheckBox::GetCheckedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.GetCheckedState");

	struct
	{
		ECheckBoxState                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkCheckBox.GetAkProperty
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UAkCheckBox::GetAkProperty()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.GetAkProperty");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkCheckBox.GetAkItemId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGuid                   ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FGuid UAkCheckBox::GetAkItemId()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.GetAkItemId");

	struct
	{
		struct FGuid                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.UseReverbVolumes
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           inUseReverbVolumes             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkGameplayStatics::UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UseReverbVolumes");

	struct
	{
		bool                           inUseReverbVolumes;
		class AActor*                  Actor;
	} params;

	params.inUseReverbVolumes = inUseReverbVolumes;
	params.Actor = Actor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.UseEarlyReflections
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAkAuxBus*               AuxBus                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Order                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          BusSendGain                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MaxPathLength                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           SpotReflectors                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 AuxBusName                     (CPF_Parm, CPF_ZeroConstructor)

void UAkGameplayStatics::UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const struct FString& AuxBusName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UseEarlyReflections");

	struct
	{
		class AActor*                  Actor;
		class UAkAuxBus*               AuxBus;
		int                            Order;
		float                          BusSendGain;
		float                          MaxPathLength;
		bool                           SpotReflectors;
		struct FString                 AuxBusName;
	} params;

	params.Actor = Actor;
	params.AuxBus = AuxBus;
	params.Order = Order;
	params.BusSendGain = BusSendGain;
	params.MaxPathLength = MaxPathLength;
	params.SpotReflectors = SpotReflectors;
	params.AuxBusName = AuxBusName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.UnloadBankByName
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 BankName                       (CPF_Parm, CPF_ZeroConstructor)

void UAkGameplayStatics::UnloadBankByName(const struct FString& BankName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UnloadBankByName");

	struct
	{
		struct FString                 BankName;
	} params;

	params.BankName = BankName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.UnloadBankAsync
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioBank*            Bank                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FScriptDelegate         BankUnloadedCallback           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UAkGameplayStatics::UnloadBankAsync(class UAkAudioBank* Bank, const struct FScriptDelegate& BankUnloadedCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UnloadBankAsync");

	struct
	{
		class UAkAudioBank*            Bank;
		struct FScriptDelegate         BankUnloadedCallback;
	} params;

	params.Bank = Bank;
	params.BankUnloadedCallback = BankUnloadedCallback;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.UnloadBank
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioBank*            Bank                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 BankName                       (CPF_Parm, CPF_ZeroConstructor)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm)
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkGameplayStatics::UnloadBank(class UAkAudioBank* Bank, const struct FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UnloadBank");

	struct
	{
		class UAkAudioBank*            Bank;
		struct FString                 BankName;
		struct FLatentActionInfo       LatentInfo;
		class UObject*                 WorldContextObject;
	} params;

	params.Bank = Bank;
	params.BankName = BankName;
	params.LatentInfo = LatentInfo;
	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.StopProfilerCapture
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UAkGameplayStatics::StopProfilerCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopProfilerCapture");

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.StopOutputCapture
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UAkGameplayStatics::StopOutputCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopOutputCapture");

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.StopAllAmbientSounds
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkGameplayStatics::StopAllAmbientSounds(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopAllAmbientSounds");

	struct
	{
		class UObject*                 WorldContextObject;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.StopAll
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UAkGameplayStatics::StopAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopAll");

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.StopActor
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkGameplayStatics::StopActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopActor");

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.StartProfilerCapture
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_ZeroConstructor)

void UAkGameplayStatics::StartProfilerCapture(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StartProfilerCapture");

	struct
	{
		struct FString                 Filename;
	} params;

	params.Filename = Filename;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.StartOutputCapture
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_ZeroConstructor)

void UAkGameplayStatics::StartOutputCapture(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StartOutputCapture");

	struct
	{
		struct FString                 Filename;
	} params;

	params.Filename = Filename;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkGameplayStatics::StartAllAmbientSounds(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StartAllAmbientSounds");

	struct
	{
		class UObject*                 WorldContextObject;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAkAudioEvent*           AkEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAkAuxBus*               EarlyReflectionsBus            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                Orientation                    (CPF_Parm, CPF_IsPlainOldData)
// bool                           AutoPost                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 EventName                      (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 EarlyReflectionsBusName        (CPF_Parm, CPF_ZeroConstructor)
// bool                           AutoDestroy                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAkComponent*            ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UAkComponent* UAkGameplayStatics::SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class UAkAuxBus* EarlyReflectionsBus, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const struct FString& EventName, const struct FString& EarlyReflectionsBusName, bool AutoDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation");

	struct
	{
		class UObject*                 WorldContextObject;
		class UAkAudioEvent*           AkEvent;
		class UAkAuxBus*               EarlyReflectionsBus;
		struct FVector                 Location;
		struct FRotator                Orientation;
		bool                           AutoPost;
		struct FString                 EventName;
		struct FString                 EarlyReflectionsBusName;
		bool                           AutoDestroy;
		class UAkComponent*            ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.AkEvent = AkEvent;
	params.EarlyReflectionsBus = EarlyReflectionsBus;
	params.Location = Location;
	params.Orientation = Orientation;
	params.AutoPost = AutoPost;
	params.EventName = EventName;
	params.EarlyReflectionsBusName = EarlyReflectionsBusName;
	params.AutoDestroy = AutoDestroy;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.SetSwitch
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   SwitchGroup                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SwitchState                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkGameplayStatics::SetSwitch(const struct FName& SwitchGroup, const struct FName& SwitchState, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetSwitch");

	struct
	{
		struct FName                   SwitchGroup;
		struct FName                   SwitchState;
		class AActor*                  Actor;
	} params;

	params.SwitchGroup = SwitchGroup;
	params.SwitchState = SwitchState;
	params.Actor = Actor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.SetState
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   StateGroup                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   State                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkGameplayStatics::SetState(const struct FName& StateGroup, const struct FName& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetState");

	struct
	{
		struct FName                   StateGroup;
		struct FName                   State;
	} params;

	params.StateGroup = StateGroup;
	params.State = State;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.SetRTPCValue
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   RTPC                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InterpolationTimeMs            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkGameplayStatics::SetRTPCValue(const struct FName& RTPC, float Value, int InterpolationTimeMs, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetRTPCValue");

	struct
	{
		struct FName                   RTPC;
		float                          Value;
		int                            InterpolationTimeMs;
		class AActor*                  Actor;
	} params;

	params.RTPC = RTPC;
	params.Value = Value;
	params.InterpolationTimeMs = InterpolationTimeMs;
	params.Actor = Actor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.SetPanningRule
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EPanningRule                   PanRule                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkGameplayStatics::SetPanningRule(EPanningRule PanRule)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetPanningRule");

	struct
	{
		EPanningRule                   PanRule;
	} params;

	params.PanRule = PanRule;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.SetOutputBusVolume
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          BusVolume                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkGameplayStatics::SetOutputBusVolume(float BusVolume, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetOutputBusVolume");

	struct
	{
		float                          BusVolume;
		class AActor*                  Actor;
	} params;

	params.BusVolume = BusVolume;
	params.Actor = Actor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          ScalingFactor                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkGameplayStatics::SetOcclusionScalingFactor(float ScalingFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor");

	struct
	{
		float                          ScalingFactor;
	} params;

	params.ScalingFactor = ScalingFactor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          RefreshInterval                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkGameplayStatics::SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval");

	struct
	{
		float                          RefreshInterval;
		class AActor*                  Actor;
	} params;

	params.RefreshInterval = RefreshInterval;
	params.Actor = Actor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.SetMultiplePositions
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkComponent*            GameObjectAkComponent          (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TArray<struct FTransform>      Positions                      (CPF_Parm, CPF_ZeroConstructor)
// EAkMultiPositionType           MultiPositionType              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkGameplayStatics::SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetMultiplePositions");

	struct
	{
		class UAkComponent*            GameObjectAkComponent;
		TArray<struct FTransform>      Positions;
		EAkMultiPositionType           MultiPositionType;
	} params;

	params.GameObjectAkComponent = GameObjectAkComponent;
	params.Positions = Positions;
	params.MultiPositionType = MultiPositionType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkComponent*            GameObjectAkComponent          (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TArray<EAkChannelConfiguration> ChannelMasks                   (CPF_Parm, CPF_ZeroConstructor)
// TArray<struct FTransform>      Positions                      (CPF_Parm, CPF_ZeroConstructor)
// EAkMultiPositionType           MultiPositionType              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkGameplayStatics::SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<EAkChannelConfiguration> ChannelMasks, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions");

	struct
	{
		class UAkComponent*            GameObjectAkComponent;
		TArray<EAkChannelConfiguration> ChannelMasks;
		TArray<struct FTransform>      Positions;
		EAkMultiPositionType           MultiPositionType;
	} params;

	params.GameObjectAkComponent = GameObjectAkComponent;
	params.ChannelMasks = ChannelMasks;
	params.Positions = Positions;
	params.MultiPositionType = MultiPositionType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.SetBusConfig
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 BusName                        (CPF_Parm, CPF_ZeroConstructor)
// EAkChannelConfiguration        ChannelConfiguration           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkGameplayStatics::SetBusConfig(const struct FString& BusName, EAkChannelConfiguration ChannelConfiguration)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetBusConfig");

	struct
	{
		struct FString                 BusName;
		EAkChannelConfiguration        ChannelConfiguration;
	} params;

	params.BusName = BusName;
	params.ChannelConfiguration = ChannelConfiguration;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.PostTrigger
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   Trigger                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkGameplayStatics::PostTrigger(const struct FName& Trigger, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostTrigger");

	struct
	{
		struct FName                   Trigger;
		class AActor*                  Actor;
	} params;

	params.Trigger = Trigger;
	params.Actor = Actor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.PostEventByName
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (CPF_Parm, CPF_ZeroConstructor)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bStopWhenAttachedToDestroyed   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkGameplayStatics::PostEventByName(const struct FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventByName");

	struct
	{
		struct FString                 EventName;
		class AActor*                  Actor;
		bool                           bStopWhenAttachedToDestroyed;
	} params;

	params.EventName = EventName;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.PostEventAttached
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   AttachPointName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bStopWhenAttachedToDestroyed   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 EventName                      (CPF_Parm, CPF_ZeroConstructor)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAkGameplayStatics::PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, const struct FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventAttached");

	struct
	{
		class UAkAudioEvent*           AkEvent;
		class AActor*                  Actor;
		struct FName                   AttachPointName;
		bool                           bStopWhenAttachedToDestroyed;
		struct FString                 EventName;
		int                            ReturnValue;
	} params;

	params.AkEvent = AkEvent;
	params.Actor = Actor;
	params.AttachPointName = AttachPointName;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.EventName = EventName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.PostEventAtLocationByName
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (CPF_Parm, CPF_ZeroConstructor)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                Orientation                    (CPF_Parm, CPF_IsPlainOldData)
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkGameplayStatics::PostEventAtLocationByName(const struct FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventAtLocationByName");

	struct
	{
		struct FString                 EventName;
		struct FVector                 Location;
		struct FRotator                Orientation;
		class UObject*                 WorldContextObject;
	} params;

	params.EventName = EventName;
	params.Location = Location;
	params.Orientation = Orientation;
	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.PostEventAtLocation
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                Orientation                    (CPF_Parm, CPF_IsPlainOldData)
// struct FString                 EventName                      (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAkGameplayStatics::PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const struct FString& EventName, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventAtLocation");

	struct
	{
		class UAkAudioEvent*           AkEvent;
		struct FVector                 Location;
		struct FRotator                Orientation;
		struct FString                 EventName;
		class UObject*                 WorldContextObject;
		int                            ReturnValue;
	} params;

	params.AkEvent = AkEvent;
	params.Location = Location;
	params.Orientation = Orientation;
	params.EventName = EventName;
	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.PostEvent
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bStopWhenAttachedToDestroyed   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 EventName                      (CPF_Parm, CPF_ZeroConstructor)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAkGameplayStatics::PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEvent");

	struct
	{
		class UAkAudioEvent*           AkEvent;
		class AActor*                  Actor;
		bool                           bStopWhenAttachedToDestroyed;
		struct FString                 EventName;
		int                            ReturnValue;
	} params;

	params.AkEvent = AkEvent;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.EventName = EventName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bStopWhenAttachedToDestroyed   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 EventName                      (CPF_Parm, CPF_ZeroConstructor)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAkGameplayStatics::PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, const struct FString& EventName, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent");

	struct
	{
		class UAkAudioEvent*           AkEvent;
		class AActor*                  Actor;
		bool                           bStopWhenAttachedToDestroyed;
		struct FString                 EventName;
		struct FLatentActionInfo       LatentInfo;
		int                            ReturnValue;
	} params;

	params.AkEvent = AkEvent;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.EventName = EventName;
	params.LatentInfo = LatentInfo;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.LoadInitBank
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UAkGameplayStatics::LoadInitBank()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadInitBank");

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.LoadBanks
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UAkAudioBank*>    SoundBanks                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           SynchronizeSoundBanks          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkGameplayStatics::LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBanks");

	struct
	{
		TArray<class UAkAudioBank*>    SoundBanks;
		bool                           SynchronizeSoundBanks;
	} params;

	params.SoundBanks = SoundBanks;
	params.SynchronizeSoundBanks = SynchronizeSoundBanks;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.LoadBankByName
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 BankName                       (CPF_Parm, CPF_ZeroConstructor)

void UAkGameplayStatics::LoadBankByName(const struct FString& BankName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBankByName");

	struct
	{
		struct FString                 BankName;
	} params;

	params.BankName = BankName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.LoadBankAsync
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioBank*            Bank                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FScriptDelegate         BankLoadedCallback             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UAkGameplayStatics::LoadBankAsync(class UAkAudioBank* Bank, const struct FScriptDelegate& BankLoadedCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBankAsync");

	struct
	{
		class UAkAudioBank*            Bank;
		struct FScriptDelegate         BankLoadedCallback;
	} params;

	params.Bank = Bank;
	params.BankLoadedCallback = BankLoadedCallback;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.LoadBank
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAkAudioBank*            Bank                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 BankName                       (CPF_Parm, CPF_ZeroConstructor)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm)
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkGameplayStatics::LoadBank(class UAkAudioBank* Bank, const struct FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBank");

	struct
	{
		class UAkAudioBank*            Bank;
		struct FString                 BankName;
		struct FLatentActionInfo       LatentInfo;
		class UObject*                 WorldContextObject;
	} params;

	params.Bank = Bank;
	params.BankName = BankName;
	params.LatentInfo = LatentInfo;
	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.IsGame
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAkGameplayStatics::IsGame(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.IsGame");

	struct
	{
		class UObject*                 WorldContextObject;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.IsEditor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAkGameplayStatics::IsEditor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.IsEditor");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAkGameplayStatics::GetOcclusionScalingFactor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor");

	struct
	{
		float                          ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.GetAkComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class USceneComponent*         AttachToComponent              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FName                   AttachPointName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// TEnumAsByte<EAttachLocation>   LocationType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAkComponent*            ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UAkComponent* UAkGameplayStatics::GetAkComponent(class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetAkComponent");

	struct
	{
		class USceneComponent*         AttachToComponent;
		struct FName                   AttachPointName;
		struct FVector                 Location;
		TEnumAsByte<EAttachLocation>   LocationType;
		class UAkComponent*            ReturnValue;
	} params;

	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.LocationType = LocationType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.ClearBanks
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UAkGameplayStatics::ClearBanks()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ClearBanks");

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 MarkerText                     (CPF_Parm, CPF_ZeroConstructor)

void UAkGameplayStatics::AddOutputCaptureMarker(const struct FString& MarkerText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker");

	struct
	{
		struct FString                 MarkerText;
	} params;

	params.MarkerText = MarkerText;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EAkMidiEventType               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

EAkMidiEventType UAkMIDIEventCallbackInfo::GetType()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetType");

	struct
	{
		EAkMidiEventType               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkMidiProgramChange    AsProgramChange                (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAkMIDIEventCallbackInfo::GetProgramChange(struct FAkMidiProgramChange* AsProgramChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange");

	struct
	{
		struct FAkMidiProgramChange    AsProgramChange;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsProgramChange != nullptr)
		*AsProgramChange = params.AsProgramChange;

	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkMidiPitchBend        AsPitchBend                    (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAkMIDIEventCallbackInfo::GetPitchBend(struct FAkMidiPitchBend* AsPitchBend)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend");

	struct
	{
		struct FAkMidiPitchBend        AsPitchBend;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsPitchBend != nullptr)
		*AsPitchBend = params.AsPitchBend;

	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkMidiNoteOnOff        AsNoteOn                       (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAkMIDIEventCallbackInfo::GetNoteOn(struct FAkMidiNoteOnOff* AsNoteOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn");

	struct
	{
		struct FAkMidiNoteOnOff        AsNoteOn;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsNoteOn != nullptr)
		*AsNoteOn = params.AsNoteOn;

	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkMidiNoteOnOff        AsNoteOff                      (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAkMIDIEventCallbackInfo::GetNoteOff(struct FAkMidiNoteOnOff* AsNoteOff)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff");

	struct
	{
		struct FAkMidiNoteOnOff        AsNoteOff;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsNoteOff != nullptr)
		*AsNoteOff = params.AsNoteOff;

	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkMidiNoteAftertouch   AsNoteAftertouch               (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAkMIDIEventCallbackInfo::GetNoteAftertouch(struct FAkMidiNoteAftertouch* AsNoteAftertouch)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch");

	struct
	{
		struct FAkMidiNoteAftertouch   AsNoteAftertouch;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsNoteAftertouch != nullptr)
		*AsNoteAftertouch = params.AsNoteAftertouch;

	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkMidiGeneric          AsGeneric                      (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAkMIDIEventCallbackInfo::GetGeneric(struct FAkMidiGeneric* AsGeneric)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric");

	struct
	{
		struct FAkMidiGeneric          AsGeneric;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsGeneric != nullptr)
		*AsGeneric = params.AsGeneric;

	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkMidiChannelAftertouch AsChannelAftertouch            (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAkMIDIEventCallbackInfo::GetChannelAftertouch(struct FAkMidiChannelAftertouch* AsChannelAftertouch)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch");

	struct
	{
		struct FAkMidiChannelAftertouch AsChannelAftertouch;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsChannelAftertouch != nullptr)
		*AsChannelAftertouch = params.AsChannelAftertouch;

	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetChannel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// unsigned char                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

unsigned char UAkMIDIEventCallbackInfo::GetChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetChannel");

	struct
	{
		unsigned char                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkMIDIEventCallbackInfo.GetCc
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkMidiCc               AsCc                           (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAkMIDIEventCallbackInfo::GetCc(struct FAkMidiCc* AsCc)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetCc");

	struct
	{
		struct FAkMidiCc               AsCc;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsCc != nullptr)
		*AsCc = params.AsCc;

	return params.ReturnValue;
}


// Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAkBoolPropertyToControl INAkBoolPropertyToControl      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UAkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToText(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText");

	struct
	{
		struct FAkBoolPropertyToControl INAkBoolPropertyToControl;
		struct FText                   ReturnValue;
	} params;

	params.INAkBoolPropertyToControl = INAkBoolPropertyToControl;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAkBoolPropertyToControl INAkBoolPropertyToControl      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UAkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToString(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString");

	struct
	{
		struct FAkBoolPropertyToControl INAkBoolPropertyToControl;
		struct FString                 ReturnValue;
	} params;

	params.INAkBoolPropertyToControl = INAkBoolPropertyToControl;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkItemBoolProperties.SetSearchText
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 newText                        (CPF_Parm, CPF_ZeroConstructor)

void UAkItemBoolProperties::SetSearchText(const struct FString& newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolProperties.SetSearchText");

	struct
	{
		struct FString                 newText;
	} params;

	params.newText = newText;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkItemBoolProperties.GetSelectedProperty
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UAkItemBoolProperties::GetSelectedProperty()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolProperties.GetSelectedProperty");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkItemBoolProperties.GetSearchText
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UAkItemBoolProperties::GetSearchText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolProperties.GetSearchText");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAkPropertyToControl    INAkPropertyToControl          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UAkItemPropertiesConv::Conv_FAkPropertyToControlToText(const struct FAkPropertyToControl& INAkPropertyToControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText");

	struct
	{
		struct FAkPropertyToControl    INAkPropertyToControl;
		struct FText                   ReturnValue;
	} params;

	params.INAkPropertyToControl = INAkPropertyToControl;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAkPropertyToControl    INAkPropertyToControl          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UAkItemPropertiesConv::Conv_FAkPropertyToControlToString(const struct FAkPropertyToControl& INAkPropertyToControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString");

	struct
	{
		struct FAkPropertyToControl    INAkPropertyToControl;
		struct FString                 ReturnValue;
	} params;

	params.INAkPropertyToControl = INAkPropertyToControl;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkItemProperties.SetSearchText
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 newText                        (CPF_Parm, CPF_ZeroConstructor)

void UAkItemProperties::SetSearchText(const struct FString& newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemProperties.SetSearchText");

	struct
	{
		struct FString                 newText;
	} params;

	params.newText = newText;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkItemProperties.GetSelectedProperty
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UAkItemProperties::GetSelectedProperty()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemProperties.GetSelectedProperty");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkItemProperties.GetSearchText
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UAkItemProperties::GetSearchText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemProperties.GetSearchText");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkSlider.SetValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkSlider::SetValue(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetValue");

	struct
	{
		float                          InValue;
	} params;

	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkSlider.SetStepSize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkSlider::SetStepSize(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetStepSize");

	struct
	{
		float                          InValue;
	} params;

	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkSlider.SetSliderHandleColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (CPF_Parm, CPF_IsPlainOldData)

void UAkSlider::SetSliderHandleColor(const struct FLinearColor& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetSliderHandleColor");

	struct
	{
		struct FLinearColor            InValue;
	} params;

	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkSlider.SetSliderBarColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (CPF_Parm, CPF_IsPlainOldData)

void UAkSlider::SetSliderBarColor(const struct FLinearColor& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetSliderBarColor");

	struct
	{
		struct FLinearColor            InValue;
	} params;

	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkSlider.SetLocked
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkSlider::SetLocked(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetLocked");

	struct
	{
		bool                           InValue;
	} params;

	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkSlider.SetIndentHandle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkSlider::SetIndentHandle(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetIndentHandle");

	struct
	{
		bool                           InValue;
	} params;

	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkSlider.SetAkSliderItemProperty
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ItemProperty                   (CPF_Parm, CPF_ZeroConstructor)

void UAkSlider::SetAkSliderItemProperty(const struct FString& ItemProperty)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetAkSliderItemProperty");

	struct
	{
		struct FString                 ItemProperty;
	} params;

	params.ItemProperty = ItemProperty;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkSlider.SetAkSliderItemId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FGuid                   ItemId                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UAkSlider::SetAkSliderItemId(const struct FGuid& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetAkSliderItemId");

	struct
	{
		struct FGuid                   ItemId;
	} params;

	params.ItemId = ItemId;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkSlider.GetValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAkSlider::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.GetValue");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkSlider.GetAkSliderItemProperty
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UAkSlider::GetAkSliderItemProperty()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.GetAkSliderItemProperty");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkSlider.GetAkSliderItemId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGuid                   ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FGuid UAkSlider::GetAkSliderItemId()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.GetAkSliderItemId");

	struct
	{
		struct FGuid                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAkSurfaceReflectorSetComponent::UpdateSurfaceReflectorSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAkSurfaceReflectorSetComponent::SendSurfaceReflectorSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAkSurfaceReflectorSetComponent::RemoveSurfaceReflectorSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkWaapiCalls.Unsubscribe
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiSubscriptionId  SubscriptionId                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           UnsubscriptionDone             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FAKWaapiJsonObject      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FAKWaapiJsonObject UAkWaapiCalls::Unsubscribe(const struct FAkWaapiSubscriptionId& SubscriptionId, bool* UnsubscriptionDone)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.Unsubscribe");

	struct
	{
		struct FAkWaapiSubscriptionId  SubscriptionId;
		bool                           UnsubscriptionDone;
		struct FAKWaapiJsonObject      ReturnValue;
	} params;

	params.SubscriptionId = SubscriptionId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (UnsubscriptionDone != nullptr)
		*UnsubscriptionDone = params.UnsubscriptionDone;

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.SubscribeToWaapi
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiUri             WaapiUri                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FAKWaapiJsonObject      WaapiOptions                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FScriptDelegate         Callback                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FAkWaapiSubscriptionId  SubscriptionId                 (CPF_Parm, CPF_OutParm)
// bool                           SubscriptionDone               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FAKWaapiJsonObject      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FAKWaapiJsonObject UAkWaapiCalls::SubscribeToWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiOptions, const struct FScriptDelegate& Callback, struct FAkWaapiSubscriptionId* SubscriptionId, bool* SubscriptionDone)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.SubscribeToWaapi");

	struct
	{
		struct FAkWaapiUri             WaapiUri;
		struct FAKWaapiJsonObject      WaapiOptions;
		struct FScriptDelegate         Callback;
		struct FAkWaapiSubscriptionId  SubscriptionId;
		bool                           SubscriptionDone;
		struct FAKWaapiJsonObject      ReturnValue;
	} params;

	params.WaapiUri = WaapiUri;
	params.WaapiOptions = WaapiOptions;
	params.Callback = Callback;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (SubscriptionId != nullptr)
		*SubscriptionId = params.SubscriptionId;
	if (SubscriptionDone != nullptr)
		*SubscriptionDone = params.SubscriptionDone;

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.SetSubscriptionID
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiSubscriptionId  Subscription                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            ID                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAkWaapiCalls::SetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription, int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.SetSubscriptionID");

	struct
	{
		struct FAkWaapiSubscriptionId  Subscription;
		int                            ID;
	} params;

	params.Subscription = Subscription;
	params.ID = ID;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Callback                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAkWaapiCalls::RegisterWaapiProjectLoadedCallback(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback");

	struct
	{
		struct FScriptDelegate         Callback;
		bool                           ReturnValue;
	} params;

	params.Callback = Callback;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Callback                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAkWaapiCalls::RegisterWaapiConnectionLostCallback(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback");

	struct
	{
		struct FScriptDelegate         Callback;
		bool                           ReturnValue;
	} params;

	params.Callback = Callback;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.GetSubscriptionID
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiSubscriptionId  Subscription                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAkWaapiCalls::GetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.GetSubscriptionID");

	struct
	{
		struct FAkWaapiSubscriptionId  Subscription;
		int                            ReturnValue;
	} params;

	params.Subscription = Subscription;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAkWaapiSubscriptionId  INAkWaapiSubscriptionId        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToText(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText");

	struct
	{
		struct FAkWaapiSubscriptionId  INAkWaapiSubscriptionId;
		struct FText                   ReturnValue;
	} params;

	params.INAkWaapiSubscriptionId = INAkWaapiSubscriptionId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAkWaapiSubscriptionId  INAkWaapiSubscriptionId        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToString(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString");

	struct
	{
		struct FAkWaapiSubscriptionId  INAkWaapiSubscriptionId;
		struct FString                 ReturnValue;
	} params;

	params.INAkWaapiSubscriptionId = INAkWaapiSubscriptionId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiCalls.CallWaapi
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiUri             WaapiUri                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FAKWaapiJsonObject      WaapiArgs                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FAKWaapiJsonObject      WaapiOptions                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FAKWaapiJsonObject      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FAKWaapiJsonObject UAkWaapiCalls::CallWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiArgs, const struct FAKWaapiJsonObject& WaapiOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.CallWaapi");

	struct
	{
		struct FAkWaapiUri             WaapiUri;
		struct FAKWaapiJsonObject      WaapiArgs;
		struct FAKWaapiJsonObject      WaapiOptions;
		struct FAKWaapiJsonObject      ReturnValue;
	} params;

	params.WaapiUri = WaapiUri;
	params.WaapiArgs = WaapiArgs;
	params.WaapiOptions = WaapiOptions;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAkWaapiFieldNames      INAkWaapiFieldNames            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText USAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToText(const struct FAkWaapiFieldNames& INAkWaapiFieldNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText");

	struct
	{
		struct FAkWaapiFieldNames      INAkWaapiFieldNames;
		struct FText                   ReturnValue;
	} params;

	params.INAkWaapiFieldNames = INAkWaapiFieldNames;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAkWaapiFieldNames      INAkWaapiFieldNames            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString USAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToString(const struct FAkWaapiFieldNames& INAkWaapiFieldNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString");

	struct
	{
		struct FAkWaapiFieldNames      INAkWaapiFieldNames;
		struct FString                 ReturnValue;
	} params;

	params.INAkWaapiFieldNames = INAkWaapiFieldNames;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.SetStringField
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 FieldValue                     (CPF_Parm, CPF_ZeroConstructor)
// struct FAKWaapiJsonObject      Target                         (CPF_Parm)
// struct FAKWaapiJsonObject      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FString& FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetStringField");

	struct
	{
		struct FAkWaapiFieldNames      FieldName;
		struct FString                 FieldValue;
		struct FAKWaapiJsonObject      Target;
		struct FAKWaapiJsonObject      ReturnValue;
	} params;

	params.FieldName = FieldName;
	params.FieldValue = FieldValue;
	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.SetObjectField
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FAKWaapiJsonObject      FieldValue                     (CPF_Parm)
// struct FAKWaapiJsonObject      Target                         (CPF_Parm)
// struct FAKWaapiJsonObject      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetObjectField");

	struct
	{
		struct FAkWaapiFieldNames      FieldName;
		struct FAKWaapiJsonObject      FieldValue;
		struct FAKWaapiJsonObject      Target;
		struct FAKWaapiJsonObject      ReturnValue;
	} params;

	params.FieldName = FieldName;
	params.FieldValue = FieldValue;
	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.SetNumberField
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          FieldValue                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FAKWaapiJsonObject      Target                         (CPF_Parm)
// struct FAKWaapiJsonObject      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetNumberField(const struct FAkWaapiFieldNames& FieldName, float FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetNumberField");

	struct
	{
		struct FAkWaapiFieldNames      FieldName;
		float                          FieldValue;
		struct FAKWaapiJsonObject      Target;
		struct FAKWaapiJsonObject      ReturnValue;
	} params;

	params.FieldName = FieldName;
	params.FieldValue = FieldValue;
	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.SetBoolField
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           FieldValue                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FAKWaapiJsonObject      Target                         (CPF_Parm)
// struct FAKWaapiJsonObject      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetBoolField(const struct FAkWaapiFieldNames& FieldName, bool FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetBoolField");

	struct
	{
		struct FAkWaapiFieldNames      FieldName;
		bool                           FieldValue;
		struct FAKWaapiJsonObject      Target;
		struct FAKWaapiJsonObject      ReturnValue;
	} params;

	params.FieldName = FieldName;
	params.FieldValue = FieldValue;
	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.SetArrayStringFields
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<struct FString>         FieldStringValues              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FAKWaapiJsonObject      Target                         (CPF_Parm)
// struct FAKWaapiJsonObject      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetArrayStringFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FString> FieldStringValues, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetArrayStringFields");

	struct
	{
		struct FAkWaapiFieldNames      FieldName;
		TArray<struct FString>         FieldStringValues;
		struct FAKWaapiJsonObject      Target;
		struct FAKWaapiJsonObject      ReturnValue;
	} params;

	params.FieldName = FieldName;
	params.FieldStringValues = FieldStringValues;
	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<struct FAKWaapiJsonObject> FieldObjectValues              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FAKWaapiJsonObject      Target                         (CPF_Parm)
// struct FAKWaapiJsonObject      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetArrayObjectFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FAKWaapiJsonObject> FieldObjectValues, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields");

	struct
	{
		struct FAkWaapiFieldNames      FieldName;
		TArray<struct FAKWaapiJsonObject> FieldObjectValues;
		struct FAKWaapiJsonObject      Target;
		struct FAKWaapiJsonObject      ReturnValue;
	} params;

	params.FieldName = FieldName;
	params.FieldObjectValues = FieldObjectValues;
	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.GetStringField
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FAKWaapiJsonObject      Target                         (CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UAkWaapiJsonManager::GetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetStringField");

	struct
	{
		struct FAkWaapiFieldNames      FieldName;
		struct FAKWaapiJsonObject      Target;
		struct FString                 ReturnValue;
	} params;

	params.FieldName = FieldName;
	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.GetObjectField
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FAKWaapiJsonObject      Target                         (CPF_Parm)
// struct FAKWaapiJsonObject      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FAKWaapiJsonObject UAkWaapiJsonManager::GetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetObjectField");

	struct
	{
		struct FAkWaapiFieldNames      FieldName;
		struct FAKWaapiJsonObject      Target;
		struct FAKWaapiJsonObject      ReturnValue;
	} params;

	params.FieldName = FieldName;
	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.GetNumberField
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FAKWaapiJsonObject      Target                         (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAkWaapiJsonManager::GetNumberField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetNumberField");

	struct
	{
		struct FAkWaapiFieldNames      FieldName;
		struct FAKWaapiJsonObject      Target;
		float                          ReturnValue;
	} params;

	params.FieldName = FieldName;
	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.GetIntegerField
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FAKWaapiJsonObject      Target                         (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAkWaapiJsonManager::GetIntegerField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetIntegerField");

	struct
	{
		struct FAkWaapiFieldNames      FieldName;
		struct FAKWaapiJsonObject      Target;
		int                            ReturnValue;
	} params;

	params.FieldName = FieldName;
	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.GetBoolField
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FAKWaapiJsonObject      Target                         (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAkWaapiJsonManager::GetBoolField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetBoolField");

	struct
	{
		struct FAkWaapiFieldNames      FieldName;
		struct FAKWaapiJsonObject      Target;
		bool                           ReturnValue;
	} params;

	params.FieldName = FieldName;
	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.GetArrayField
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames      FieldName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FAKWaapiJsonObject      Target                         (CPF_Parm)
// TArray<struct FAKWaapiJsonObject> ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FAKWaapiJsonObject> UAkWaapiJsonManager::GetArrayField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetArrayField");

	struct
	{
		struct FAkWaapiFieldNames      FieldName;
		struct FAKWaapiJsonObject      Target;
		TArray<struct FAKWaapiJsonObject> ReturnValue;
	} params;

	params.FieldName = FieldName;
	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAKWaapiJsonObject      INAKWaapiJsonObject            (CPF_Parm)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToText(const struct FAKWaapiJsonObject& INAKWaapiJsonObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText");

	struct
	{
		struct FAKWaapiJsonObject      INAKWaapiJsonObject;
		struct FText                   ReturnValue;
	} params;

	params.INAKWaapiJsonObject = INAKWaapiJsonObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAKWaapiJsonObject      INAKWaapiJsonObject            (CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToString(const struct FAKWaapiJsonObject& INAKWaapiJsonObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString");

	struct
	{
		struct FAKWaapiJsonObject      INAKWaapiJsonObject;
		struct FString                 ReturnValue;
	} params;

	params.INAKWaapiJsonObject = INAKWaapiJsonObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAkWaapiUri             INAkWaapiUri                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UAkWaapiUriConv::Conv_FAkWaapiUriToText(const struct FAkWaapiUri& INAkWaapiUri)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText");

	struct
	{
		struct FAkWaapiUri             INAkWaapiUri;
		struct FText                   ReturnValue;
	} params;

	params.INAkWaapiUri = INAkWaapiUri;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAkWaapiUri             INAkWaapiUri                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UAkWaapiUriConv::Conv_FAkWaapiUriToString(const struct FAkWaapiUri& INAkWaapiUri)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString");

	struct
	{
		struct FAkWaapiUri             INAkWaapiUri;
		struct FString                 ReturnValue;
	} params;

	params.INAkWaapiUri = INAkWaapiUri;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWwiseTree.SetSearchText
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 newText                        (CPF_Parm, CPF_ZeroConstructor)

void UAkWwiseTree::SetSearchText(const struct FString& newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWwiseTree.SetSearchText");

	struct
	{
		struct FString                 newText;
	} params;

	params.newText = newText;

	UObject::ProcessEvent(fn, &params);
}


// Function AkAudio.AkWwiseTree.GetSelectedItem
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FAkWwiseObjectDetails   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FAkWwiseObjectDetails UAkWwiseTree::GetSelectedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWwiseTree.GetSelectedItem");

	struct
	{
		struct FAkWwiseObjectDetails   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AkAudio.AkWwiseTree.GetSearchText
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UAkWwiseTree::GetSearchText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkWwiseTree.GetSearchText");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
