#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_AkAudio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AkAudio.AkLateReverbComponent
// 0x0040 (0x02D0 - 0x0290)
class UAkLateReverbComponent : public USceneComponent
{
public:
	unsigned char                                      bEnable : 1;                                              // 0x0290(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	class UAkAuxBus*                                   AuxBus;                                                   // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     AuxBusName;                                               // 0x02A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              SendLevel;                                                // 0x02B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FadeRate;                                                 // 0x02B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Priority;                                                 // 0x02B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET
	class UAkLateReverbComponent*                      NextLowerPriorityComponent;                               // 0x02C0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkLateReverbComponent");
		return ptr;
	}

};


// Class AkAudio.AkReverbVolume
// 0x0038 (0x0388 - 0x0350)
class AAkReverbVolume : public AVolume
{
public:
	unsigned char                                      bEnabled : 1;                                             // 0x0350(0x0001) (CPF_Deprecated)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	class UAkAuxBus*                                   AuxBus;                                                   // 0x0358(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FString                                     AuxBusName;                                               // 0x0360(0x0010) (CPF_ZeroConstructor, CPF_Deprecated)
	float                                              SendLevel;                                                // 0x0370(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              FadeRate;                                                 // 0x0374(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              Priority;                                                 // 0x0378(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	class UAkLateReverbComponent*                      LateReverbComponent;                                      // 0x0380(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkReverbVolume");
		return ptr;
	}

};


// Class AkAudio.AkAcousticPortal
// 0x00C0 (0x0410 - 0x0350)
class AAkAcousticPortal : public AVolume
{
public:
	EAkAcousticPortalState                             InitialState;                                             // 0x0350(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0351(0x0003) MISSED OFFSET
	float                                              ObstructionRefreshInterval;                               // 0x0354(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     ObstructionCollisionChannel;                              // 0x0358(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xB7];                                      // 0x0359(0x00B7) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkAcousticPortal");
		return ptr;
	}


	void OpenPortal();
	EAkAcousticPortalState GetCurrentState();
	void ClosePortal();
};


// Class AkAudio.AkPortalComponent
// 0x0000 (0x0290 - 0x0290)
class UAkPortalComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkPortalComponent");
		return ptr;
	}

};


// Class AkAudio.AkAcousticTexture
// 0x0000 (0x0028 - 0x0028)
class UAkAcousticTexture : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkAcousticTexture");
		return ptr;
	}

};


// Class AkAudio.AkAmbientSound
// 0x0040 (0x0358 - 0x0318)
class AAkAmbientSound : public AActor
{
public:
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x0318(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	class UAkComponent*                                AkComponent;                                              // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               StopWhenOwnerIsDestroyed;                                 // 0x0328(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               AutoPost;                                                 // 0x0329(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2E];                                      // 0x032A(0x002E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkAmbientSound");
		return ptr;
	}


	void StopAmbientSound();
	void StartAmbientSound();
};


// Class AkAudio.AkAudioBank
// 0x0008 (0x0030 - 0x0028)
class UAkAudioBank : public UObject
{
public:
	bool                                               AutoLoad;                                                 // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkAudioBank");
		return ptr;
	}

};


// Class AkAudio.AkAudioEvent
// 0x0018 (0x0040 - 0x0028)
class UAkAudioEvent : public UObject
{
public:
	class UAkAudioBank*                                RequiredBank;                                             // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxAttenuationRadius;                                     // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsInfinite;                                               // 0x0034(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              MinimumDuration;                                          // 0x0038(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaximumDuration;                                          // 0x003C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkAudioEvent");
		return ptr;
	}

};


// Class AkAudio.AkAuxBus
// 0x0010 (0x0038 - 0x0028)
class UAkAuxBus : public UObject
{
public:
	class UAkAudioBank*                                RequiredBank;                                             // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkAuxBus");
		return ptr;
	}

};


// Class AkAudio.AkCheckBox
// 0x0AD8 (0x0BF0 - 0x0118)
class UAkCheckBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x4F8];                                     // 0x0118(0x04F8) MISSED OFFSET
	ECheckBoxState                                     CheckedState;                                             // 0x0610(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0611(0x0007) MISSED OFFSET
	struct FScriptDelegate                             CheckedStateDelegate;                                     // 0x0618(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
	struct FCheckBoxStyle                              WidgetStyle;                                              // 0x0628(0x04F0) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0B18(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x0B19(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0B1A(0x0006) MISSED OFFSET
	struct FAkBoolPropertyToControl                    ThePropertyToControl;                                     // 0x0B20(0x0010) (CPF_Edit)
	struct FAkWwiseItemToControl                       ItemToControl;                                            // 0x0B30(0x0040) (CPF_Edit, CPF_Config, CPF_EditConst)
	struct FScriptMulticastDelegate                    AkOnCheckStateChanged;                                    // 0x0B70(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemDropped;                                            // 0x0B80(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPropertyDropped;                                        // 0x0B90(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0BA0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkCheckBox");
		return ptr;
	}


	void SetIsChecked(bool InIsChecked);
	void SetCheckedState(ECheckBoxState InCheckedState);
	void SetAkItemId(const struct FGuid& ItemId);
	void SetAkBoolProperty(const struct FString& ItemProperty);
	bool IsPressed();
	bool IsChecked();
	ECheckBoxState GetCheckedState();
	struct FString GetAkProperty();
	struct FGuid GetAkItemId();
};


// Class AkAudio.AkComponent
// 0x01C0 (0x0450 - 0x0290)
class UAkComponent : public USceneComponent
{
public:
	class UAkAuxBus*                                   EarlyReflectionAuxBus;                                    // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     EarlyReflectionAuxBusName;                                // 0x0298(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                EarlyReflectionOrder;                                     // 0x02A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EarlyReflectionBusSendGain;                               // 0x02AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EarlyReflectionMaxPathLength;                             // 0x02B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     OcclusionCollisionChannel;                                // 0x02B4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02B5(0x0007) MISSED OFFSET
	unsigned char                                      EnableSpotReflectors : 1;                                 // 0x02BC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      DrawFirstOrderReflections : 1;                            // 0x02BC(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      DrawSecondOrderReflections : 1;                           // 0x02BC(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      DrawHigherOrderReflections : 1;                           // 0x02BC(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      DrawSoundPropagation : 1;                                 // 0x02BC(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02BD(0x0003) MISSED OFFSET
	bool                                               StopWhenOwnerDestroyed;                                   // 0x02C0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02C1(0x0003) MISSED OFFSET
	float                                              AttenuationScalingFactor;                                 // 0x02C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OcclusionRefreshInterval;                                 // 0x02C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x02D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     EventName;                                                // 0x02D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      UnknownData04[0x168];                                     // 0x02E8(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkComponent");
		return ptr;
	}


	void UseReverbVolumes(bool inUseReverbVolumes);
	void UseEarlyReflections(class UAkAuxBus* AuxBus, int Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const struct FString& AuxBusName);
	void Stop();
	void SetSwitch(const struct FString& SwitchGroup, const struct FString& SwitchState);
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
	void SetRTPCValue(const struct FString& RTPC, float Value, int InterpolationTimeMs);
	void SetOutputBusVolume(float BusVolume);
	void SetListeners(TArray<class UAkComponent*> Listeners);
	void SetAttenuationScalingFactor(float Value);
	void PostTrigger(const struct FString& Trigger);
	int PostAssociatedAkEvent();
	int PostAkEventByName(const struct FString& in_EventName);
	int PostAkEvent(class UAkAudioEvent* AkEvent, const struct FString& in_EventName);
	float GetAttenuationRadius();
};


// Class AkAudio.AkGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkGameplayStatics");
		return ptr;
	}


	static void UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);
	static void UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const struct FString& AuxBusName);
	static void UnloadBankByName(const struct FString& BankName);
	static void UnloadBank(class UAkAudioBank* Bank, const struct FString& BankName);
	static void StopProfilerCapture();
	static void StopOutputCapture();
	static void StopAllAmbientSounds(class UObject* WorldContextObject);
	static void StopAll();
	static void StopActor(class AActor* Actor);
	static void StartProfilerCapture(const struct FString& Filename);
	static void StartOutputCapture(const struct FString& Filename);
	static void StartAllAmbientSounds(class UObject* WorldContextObject);
	static class UAkComponent* SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class UAkAuxBus* EarlyReflectionsBus, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const struct FString& EventName, const struct FString& EarlyReflectionsBusName, bool AutoDestroy);
	static void SetSwitch(const struct FName& SwitchGroup, const struct FName& SwitchState, class AActor* Actor);
	static void SetState(const struct FName& StateGroup, const struct FName& State);
	static void SetRTPCValue(const struct FName& RTPC, float Value, int InterpolationTimeMs, class AActor* Actor);
	static void SetPanningRule(EPanningRule PanRule);
	static void SetOutputBusVolume(float BusVolume, class AActor* Actor);
	static void SetOcclusionScalingFactor(float ScalingFactor);
	static void SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);
	static void SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType);
	static void SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<EAkChannelConfiguration> ChannelMasks, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType);
	static void SetBusConfig(const struct FString& BusName, EAkChannelConfiguration ChannelConfiguration);
	static void PostTrigger(const struct FName& Trigger, class AActor* Actor);
	static void PostEventByName(const struct FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
	static int PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, const struct FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const struct FString& EventName);
	static void PostEventAtLocationByName(const struct FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject);
	static int PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const struct FString& EventName, class UObject* WorldContextObject);
	static int PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, const struct FString& EventName);
	static void LoadInitBank();
	static void LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks);
	static void LoadBankByName(const struct FString& BankName);
	static void LoadBank(class UAkAudioBank* Bank, const struct FString& BankName);
	static bool IsGame(class UObject* WorldContextObject);
	static bool IsEditor();
	static float GetOcclusionScalingFactor();
	static class UAkComponent* GetAkComponent(class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType);
	static void ClearBanks();
	static void AddOutputCaptureMarker(const struct FString& MarkerText);
};


// Class AkAudio.AkItemBoolPropertiesConv
// 0x0000 (0x0028 - 0x0028)
class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkItemBoolPropertiesConv");
		return ptr;
	}


	static struct FText Conv_FAkBoolPropertyToControlToText(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
	static struct FString Conv_FAkBoolPropertyToControlToString(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
};


// Class AkAudio.AkItemBoolProperties
// 0x0040 (0x0140 - 0x0100)
class UAkItemBoolProperties : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0100(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPropertyDragged;                                        // 0x0110(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0120(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkItemBoolProperties");
		return ptr;
	}


	void SetSearchText(const struct FString& newText);
	struct FString GetSelectedProperty();
	struct FString GetSearchText();
};


// Class AkAudio.AkItemPropertiesConv
// 0x0000 (0x0028 - 0x0028)
class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkItemPropertiesConv");
		return ptr;
	}


	static struct FText Conv_FAkPropertyToControlToText(const struct FAkPropertyToControl& INAkPropertyToControl);
	static struct FString Conv_FAkPropertyToControlToString(const struct FAkPropertyToControl& INAkPropertyToControl);
};


// Class AkAudio.AkItemProperties
// 0x0040 (0x0140 - 0x0100)
class UAkItemProperties : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0100(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPropertyDragged;                                        // 0x0110(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0120(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkItemProperties");
		return ptr;
	}


	void SetSearchText(const struct FString& newText);
	struct FString GetSelectedProperty();
	struct FString GetSearchText();
};


// Class AkAudio.AkRoomComponent
// 0x0030 (0x02C0 - 0x0290)
class UAkRoomComponent : public USceneComponent
{
public:
	unsigned char                                      bEnable : 1;                                              // 0x0290(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	class UAkRoomComponent*                            NextLowerPriorityComponent;                               // 0x0298(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Priority;                                                 // 0x02A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WallOcclusion;                                            // 0x02A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkRoomComponent");
		return ptr;
	}

};


// Class AkAudio.AkSettings
// 0x00E8 (0x0110 - 0x0028)
class UAkSettings : public UObject
{
public:
	unsigned char                                      MaxSimultaneousReverbVolumes;                             // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FFilePath                                   WwiseProjectPath;                                         // 0x0030(0x0010) (CPF_Edit, CPF_Config)
	struct FDirectoryPath                              WwiseWindowsInstallationPath;                             // 0x0040(0x0010) (CPF_Edit, CPF_Config)
	struct FFilePath                                   WwiseMacInstallationPath;                                 // 0x0050(0x0010) (CPF_Edit, CPF_Config)
	bool                                               bAutoConnectToWAAPI;                                      // 0x0060(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               SuppressWwiseProjectPathWarnings;                         // 0x0061(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xAE];                                      // 0x0062(0x00AE) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkSettings");
		return ptr;
	}

};


// Class AkAudio.AkSlider
// 0x02D8 (0x03D8 - 0x0100)
class UAkSlider : public UWidget
{
public:
	float                                              Value;                                                    // 0x0100(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FScriptDelegate                             ValueDelegate;                                            // 0x0108(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
	struct FSliderStyle                                WidgetStyle;                                              // 0x0118(0x01F0) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0308(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0309(0x0003) MISSED OFFSET
	struct FLinearColor                                SliderBarColor;                                           // 0x030C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                SliderHandleColor;                                        // 0x031C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	bool                                               IndentHandle;                                             // 0x032C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Locked;                                                   // 0x032D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x032E(0x0002) MISSED OFFSET
	float                                              StepSize;                                                 // 0x0330(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x0334(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0335(0x0003) MISSED OFFSET
	struct FAkPropertyToControl                        ThePropertyToControl;                                     // 0x0338(0x0010) (CPF_Edit, CPF_EditConst)
	struct FAkWwiseItemToControl                       ItemToControl;                                            // 0x0348(0x0040) (CPF_Edit, CPF_Config, CPF_EditConst)
	struct FScriptMulticastDelegate                    OnValueChanged;                                           // 0x0388(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemDropped;                                            // 0x0398(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPropertyDropped;                                        // 0x03A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData04[0x20];                                      // 0x03B8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkSlider");
		return ptr;
	}


	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	void SetAkSliderItemProperty(const struct FString& ItemProperty);
	void SetAkSliderItemId(const struct FGuid& ItemId);
	float GetValue();
	struct FString GetAkSliderItemProperty();
	struct FGuid GetAkSliderItemId();
};


// Class AkAudio.AkSpatialAudioVolume
// 0x0018 (0x0368 - 0x0350)
class AAkSpatialAudioVolume : public AVolume
{
public:
	class UAkSurfaceReflectorSetComponent*             SurfaceReflectorSet;                                      // 0x0350(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkLateReverbComponent*                      LateReverb;                                               // 0x0358(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkRoomComponent*                            Room;                                                     // 0x0360(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkSpatialAudioVolume");
		return ptr;
	}

};


// Class AkAudio.AkSpotReflector
// 0x0030 (0x0348 - 0x0318)
class AAkSpotReflector : public AActor
{
public:
	class UAkAuxBus*                                   AuxBus;                                                   // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     AuxBusName;                                               // 0x0320(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	class UAkAcousticTexture*                          AcousticTexture;                                          // 0x0330(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DistanceScalingFactor;                                    // 0x0338(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Level;                                                    // 0x033C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0340(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkSpotReflector");
		return ptr;
	}

};


// Class AkAudio.AkSurfaceReflectorSetComponent
// 0x0030 (0x02C0 - 0x0290)
class UAkSurfaceReflectorSetComponent : public USceneComponent
{
public:
	unsigned char                                      bEnableSurfaceReflectors : 1;                             // 0x0290(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	TArray<struct FAkPoly>                             AcousticPolys;                                            // 0x0298(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkSurfaceReflectorSetComponent");
		return ptr;
	}


	void UpdateSurfaceReflectorSet();
	void SendSurfaceReflectorSet();
	void RemoveSurfaceReflectorSet();
};


// Class AkAudio.AkWaapiCalls
// 0x0000 (0x0028 - 0x0028)
class UAkWaapiCalls : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkWaapiCalls");
		return ptr;
	}


	static struct FAKWaapiJsonObject Unsubscribe(const struct FAkWaapiSubscriptionId& SubscriptionId, bool* UnsubscriptionDone);
	static struct FAKWaapiJsonObject SubscribeToWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiOptions, const struct FScriptDelegate& Callback, struct FAkWaapiSubscriptionId* SubscriptionId, bool* SubscriptionDone);
	static void SetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription, int ID);
	static bool RegisterWaapiProjectLoadedCallback(const struct FScriptDelegate& Callback);
	static bool RegisterWaapiConnectionLostCallback(const struct FScriptDelegate& Callback);
	static int GetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription);
	static struct FText Conv_FAkWaapiSubscriptionIdToText(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
	static struct FString Conv_FAkWaapiSubscriptionIdToString(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
	static struct FAKWaapiJsonObject CallWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiArgs, const struct FAKWaapiJsonObject& WaapiOptions);
};


// Class AkAudio.SAkWaapiFieldNamesConv
// 0x0000 (0x0028 - 0x0028)
class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.SAkWaapiFieldNamesConv");
		return ptr;
	}


	static struct FText Conv_FAkWaapiFieldNamesToText(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);
	static struct FString Conv_FAkWaapiFieldNamesToString(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);
};


// Class AkAudio.AkWaapiJsonManager
// 0x0000 (0x0028 - 0x0028)
class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkWaapiJsonManager");
		return ptr;
	}


	static struct FAKWaapiJsonObject SetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FString& FieldValue, const struct FAKWaapiJsonObject& Target);
	static struct FAKWaapiJsonObject SetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& FieldValue, const struct FAKWaapiJsonObject& Target);
	static struct FAKWaapiJsonObject SetNumberField(const struct FAkWaapiFieldNames& FieldName, float FieldValue, const struct FAKWaapiJsonObject& Target);
	static struct FAKWaapiJsonObject SetBoolField(const struct FAkWaapiFieldNames& FieldName, bool FieldValue, const struct FAKWaapiJsonObject& Target);
	static struct FAKWaapiJsonObject SetArrayStringFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FString> FieldStringValues, const struct FAKWaapiJsonObject& Target);
	static struct FAKWaapiJsonObject SetArrayObjectFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FAKWaapiJsonObject> FieldObjectValues, const struct FAKWaapiJsonObject& Target);
	static struct FString GetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	static struct FAKWaapiJsonObject GetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	static float GetNumberField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	static int GetIntegerField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	static bool GetBoolField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	static TArray<struct FAKWaapiJsonObject> GetArrayField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	static struct FText Conv_FAKWaapiJsonObjectToText(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
	static struct FString Conv_FAKWaapiJsonObjectToString(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
};


// Class AkAudio.AkWaapiUriConv
// 0x0000 (0x0028 - 0x0028)
class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkWaapiUriConv");
		return ptr;
	}


	static struct FText Conv_FAkWaapiUriToText(const struct FAkWaapiUri& INAkWaapiUri);
	static struct FString Conv_FAkWaapiUriToString(const struct FAkWaapiUri& INAkWaapiUri);
};


// Class AkAudio.AkWwiseTree
// 0x0040 (0x0140 - 0x0100)
class UAkWwiseTree : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0100(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemDragged;                                            // 0x0110(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0120(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkWwiseTree");
		return ptr;
	}


	void SetSearchText(const struct FString& newText);
	struct FAkWwiseObjectDetails GetSelectedItem();
	struct FString GetSearchText();
};


// Class AkAudio.AkWwiseTreeSelector
// 0x0060 (0x0160 - 0x0100)
class UAkWwiseTreeSelector : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0100(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemDragged;                                            // 0x0110(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0120(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.AkWwiseTreeSelector");
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkAudioEvent
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
{
public:
	TArray<struct FAkAudioEventTrackKey>               Events;                                                   // 0x0090(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bContinueEventOnMatineeEnd : 1;                           // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.InterpTrackAkAudioEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkAudioRTPC
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     Param;                                                    // 0x0090(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      bPlayOnReverse : 1;                                       // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bContinueRTPCOnMatineeEnd : 1;                            // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.InterpTrackAkAudioRTPC");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkAudioEvent
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.InterpTrackInstAkAudioEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkAudioRTPC
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.InterpTrackInstAkAudioRTPC");
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioEventSection
// 0x00F0 (0x0200 - 0x0110)
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0110(0x0040) MISSED OFFSET
	class UAkAudioEvent*                               Event;                                                    // 0x0150(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               RetriggerEvent;                                           // 0x0158(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0159(0x0003) MISSED OFFSET
	int                                                ScrubTailLengthMs;                                        // 0x015C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               StopAtSectionEnd;                                         // 0x0160(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0161(0x0007) MISSED OFFSET
	struct FString                                     EventName;                                                // 0x0168(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0178(0x0020) MISSED OFFSET
	float                                              MaxSourceDuration;                                        // 0x0198(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x019C(0x0004) MISSED OFFSET
	struct FString                                     MaxDurationSourceID;                                      // 0x01A0(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData05[0x50];                                      // 0x01B0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.MovieSceneAkAudioEventSection");
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneAkTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
	unsigned char                                      bIsAMasterTrack : 1;                                      // 0x00C8(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.MovieSceneAkTrack");
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioEventTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.MovieSceneAkAudioEventTrack");
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioRTPCSection
// 0x0090 (0x01A0 - 0x0110)
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0118(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FRichCurve                                  FloatCurve;                                               // 0x0128(0x0070)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0198(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.MovieSceneAkAudioRTPCSection");
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioRTPCTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AkAudio.MovieSceneAkAudioRTPCTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
