#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_ConZ_enums.hpp"
#include "SCUM_SlateCore_classes.hpp"
#include "SCUM_UMG_classes.hpp"
#include "SCUM_Engine_classes.hpp"
#include "SCUM_CoreUObject_classes.hpp"
#include "SCUM_GameplayTags_classes.hpp"
#include "SCUM_DonAINavigation_classes.hpp"
#include "SCUM_AIModule_classes.hpp"
#include "SCUM_AkAudio_classes.hpp"
#include "SCUM_DcxVehicle_classes.hpp"
#include "SCUM_Foliage_classes.hpp"
#include "SCUM_InputCore_classes.hpp"
#include "SCUM_MIDIDevice_classes.hpp"
#include "SCUM_NavigationSystem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ConZ.AttachmentSocketDataItem
// 0x0018
struct FAttachmentSocketDataItem
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      MountType;                                                // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      MountedItem;                                              // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.AttachmentSocket
// 0x0010
struct FAttachmentSocket
{
	TArray<struct FAttachmentSocketDataItem>           Items;                                                    // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct ConZ.AttachmentSocketOffset
// 0x0020
struct FAttachmentSocketOffset
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0014(0x000C) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.ItemLocation
// 0x000C
struct FItemLocation
{
	bool                                               Coastal;                                                  // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Continantal;                                              // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Mountain;                                                 // 0x0002(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Urban;                                                    // 0x0003(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Rural;                                                    // 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Industrial;                                               // 0x0005(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Police;                                                   // 0x0006(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Military;                                                 // 0x0007(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               TVBase;                                                   // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Sport;                                                    // 0x0009(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Market;                                                   // 0x000A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               GasStation;                                               // 0x000B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.PossibleItemSickness
// 0x0010
struct FPossibleItemSickness
{
	class UClass*                                      Sickness;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Probability;                                              // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageProbability;                                        // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.ItemMotionNoise
// 0x0008
struct FItemMotionNoise
{
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.ItemInventoryHandlingSounds
// 0x0008
struct FItemInventoryHandlingSounds
{
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.VisibilityReplication
// 0x0008
struct FVisibilityReplication
{
	bool                                               Value;                                                    // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                RepHelper;                                                // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.InteractionData
// 0x0010
struct FInteractionData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UObject*                                     PointerData;                                              // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.WidgetDisplayInfo
// 0x000C
struct FWidgetDisplayInfo
{
	EWidgetDisplayInfoType                             DisplayType;                                              // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                First;                                                    // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Second;                                                   // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.InteractionStruct
// 0x0030
struct FInteractionStruct
{
	EInteractionType                                   InteractionType;                                          // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x0001(0x002F) MISSED OFFSET
};

// ScriptStruct ConZ.HitEffects
// 0x0038
struct FHitEffects
{
	float                                              SpeedThreshold;                                           // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UParticleSystem*                             ParticleSystem;                                           // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ParticlesScale;                                           // 0x0010(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      CameraShake;                                              // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CameraShakeScale;                                         // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeWeaponDesc
// 0x0028
struct FMeleeWeaponDesc
{
	float                                              Damage;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Sharpness;                                                // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              KnockoutChance;                                           // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DamageMagnitudeChange;                                    // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	ECharacterImpactSourceSoundCategory                ImpactSoundCategory;                                      // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UProjectileImpactEffects*                    ImpactEffects;                                            // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTag                                HitReact;                                                 // 0x0020(0x0008) (CPF_Edit)
};

// ScriptStruct ConZ.MeleeAttackCapsule
// 0x0070
struct FMeleeAttackCapsule
{
	TWeakObjectPtr<class AActor>                       AttachParent;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTag                                Attachment;                                               // 0x0008(0x0008)
	struct FTransform                                  RelativeTransform;                                        // 0x0010(0x0030) (CPF_IsPlainOldData)
	float                                              UnscaledRadius;                                           // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UnscaledHalfHeight;                                       // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMeleeWeaponDesc                            WeaponDesc;                                               // 0x0048(0x0028)
};

// ScriptStruct ConZ.MeleeAttackCapsuleHitInfo
// 0x0100
struct FMeleeAttackCapsuleHitInfo
{
	struct FMeleeAttackCapsule                         MeleeAttackCapsule;                                       // 0x0000(0x0070)
	struct FHitResult                                  HitResult;                                                // 0x0070(0x0088) (CPF_IsPlainOldData)
	EDamageMagnitudeType                               DamageMagnitudeType;                                      // 0x00F8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.AnimalSpawnInfo
// 0x0008
struct FAnimalSpawnInfo
{
	int                                                MaxSpawnInstances;                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpawnProbability;                                         // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.AnimalManagementData
// 0x0030
struct FAnimalManagementData
{
	class UClass*                                      AnimalClass;                                              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	TArray<class AAnimal2*>                            AliveAnimals;                                             // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	TArray<class ACorpse*>                             DeadAnimals;                                              // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	int                                                VirtualAnimalAmount;                                      // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeHitDetectionMarker
// 0x0080
struct FMeleeHitDetectionMarker
{
	float                                              Time;                                                     // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (CPF_Edit, CPF_IsPlainOldData)
	struct FTransform                                  RootMotion;                                               // 0x0040(0x0030) (CPF_Edit, CPF_IsPlainOldData)
	float                                              DamageMultiplier;                                         // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SelectionWeight;                                          // 0x0074(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ScopeZoomLevelSettings
// 0x0530
struct FScopeZoomLevelSettings
{
	float                                              Magnification;                                            // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x0010(0x0520) (CPF_Edit)
};

// ScriptStruct ConZ.BruisePatch
// 0x0038
struct FBruisePatch
{
	EBruiseLayer                                       Layer;                                                    // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<EBruiseZone>                                AllowedZones;                                             // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                Order;                                                    // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UTexture2D*                                  Texture;                                                  // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   Offset;                                                   // 0x0028(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	bool                                               Mute;                                                     // 0x0030(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.WindowMarker
// 0x0040
struct FWindowMarker
{
	bool                                               IsVaultable;                                              // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsFortifiable;                                            // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class UWindowFortificationsType*                   WindowFortificationsType;                                 // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<int>                                        AdditionalMarkerIndicesToModify;                          // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               DidIFailToCorrectlyPlaceWindowMarkers;                    // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FVector                                     Vertex1;                                                  // 0x0024(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     Vertex2;                                                  // 0x0030(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              FortificationOffset;                                      // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.WindowMarkerModifier
// 0x0008
struct FWindowMarkerModifier
{
	int                                                Index;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsVaultable;                                              // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsFortifiable;                                            // 0x0005(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.DbIntegerId
// 0x0008
struct FDbIntegerId
{
	int64_t                                            Value;                                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.BuildingsArray
// 0x0010
struct FBuildingsArray
{
	TArray<class ABuilding*>                           _buildings;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct ConZ.BodyWeaponAnimation
// 0x0010
struct FBodyWeaponAnimation
{
	class UAnimMontage*                                Body;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                Weapon;                                                   // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.WeaponAttachmentAnimations
// 0x0020
struct FWeaponAttachmentAnimations
{
	struct FBodyWeaponAnimation                        Add;                                                      // 0x0000(0x0010) (CPF_Edit)
	struct FBodyWeaponAnimation                        Remove;                                                   // 0x0010(0x0010) (CPF_Edit)
};

// ScriptStruct ConZ.WeaponSpreadItem
// 0x000C
struct FWeaponSpreadItem
{
	float                                              Idle;                                                     // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Moving;                                                   // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpeedTarget;                                              // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.WeaponSpreadData
// 0x0034
struct FWeaponSpreadData
{
	struct FWeaponSpreadItem                           ByStance[0x3];                                            // 0x0000(0x000C) (CPF_Edit)
	float                                              IncrementPerShot;                                         // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IncrementFromShotsMax;                                    // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IncrementSpeed;                                           // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DecrementSpeed;                                           // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.WeaponViewKickData
// 0x0018
struct FWeaponViewKickData
{
	float                                              PitchMin;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PitchMax;                                                 // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              YawMin;                                                   // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              YawMax;                                                   // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PitchDecrementSpeed;                                      // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              YawDecrementSpeed;                                        // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.WeaponReloadData
// 0x0020
struct FWeaponReloadData
{
	bool                                               IsQuick;                                                  // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AItem*                                       Item;                                                     // 0x0008(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                count;                                                    // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UClass*                                      ReloadSequenceClass;                                      // 0x0018(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.SkillTemplate
// 0x0038
struct FSkillTemplate
{
	ESkillAttribute                                    Attribute;                                                // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FString                                     ClassName;                                                // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	ESkillLevel                                        Level;                                                    // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              Experience;                                               // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.CharacterTemplate
// 0x0088
struct FCharacterTemplate
{
	float                                              Strength;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Constitution;                                             // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Dexterity;                                                // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Intelligence;                                             // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Age;                                                      // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                HeadIndex;                                                // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SkinColorIndex;                                           // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                HeadTattooIndex;                                          // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BodyTattooIndex;                                          // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PenisSize;                                                // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TeamIndex;                                                // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     BirthDate;                                                // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     ArrestDate;                                               // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FSkillTemplate>                      Skills;                                                   // 0x0060(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	class UClass*                                      Item0;                                                    // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      Item1;                                                    // 0x0078(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      Item2;                                                    // 0x0080(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.CharacterImpactSounds
// 0x0008
struct FCharacterImpactSounds
{
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.CharacterHeadImpactSoundData
// 0x0028
struct FCharacterHeadImpactSoundData
{
	TArray<ECharacterImpactSourceSoundCategory>        ImpactSourceCategories;                                   // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<ECharacterHeadImpactSoundCategory>          ImpactTargetCategories;                                   // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FCharacterImpactSounds                      Sounds;                                                   // 0x0020(0x0008) (CPF_Edit)
};

// ScriptStruct ConZ.CharacterHeadImpactSoundsData
// 0x0018
struct FCharacterHeadImpactSoundsData
{
	TArray<struct FCharacterHeadImpactSoundData>       SoundsData;                                               // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FCharacterImpactSounds                      FallbackSounds;                                           // 0x0010(0x0008) (CPF_Edit)
};

// ScriptStruct ConZ.CharacterTorsoImpactSoundData
// 0x0028
struct FCharacterTorsoImpactSoundData
{
	TArray<ECharacterImpactSourceSoundCategory>        ImpactSourceCategories;                                   // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<ECharacterTorsoImpactSoundCategory>         ImpactTargetCategories;                                   // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FCharacterImpactSounds                      Sounds;                                                   // 0x0020(0x0008) (CPF_Edit)
};

// ScriptStruct ConZ.CharacterTorsoImpactSoundsData
// 0x0018
struct FCharacterTorsoImpactSoundsData
{
	TArray<struct FCharacterTorsoImpactSoundData>      SoundsData;                                               // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FCharacterImpactSounds                      FallbackSounds;                                           // 0x0010(0x0008) (CPF_Edit)
};

// ScriptStruct ConZ.CharacterArmsImpactSoundData
// 0x0028
struct FCharacterArmsImpactSoundData
{
	TArray<ECharacterImpactSourceSoundCategory>        ImpactSourceCategories;                                   // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<ECharacterArmsImpactSoundCategory>          ImpactTargetCategories;                                   // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FCharacterImpactSounds                      Sounds;                                                   // 0x0020(0x0008) (CPF_Edit)
};

// ScriptStruct ConZ.CharacterArmsImpactSoundsData
// 0x0018
struct FCharacterArmsImpactSoundsData
{
	TArray<struct FCharacterArmsImpactSoundData>       SoundsData;                                               // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FCharacterImpactSounds                      FallbackSounds;                                           // 0x0010(0x0008) (CPF_Edit)
};

// ScriptStruct ConZ.CharacterLegsImpactSoundData
// 0x0028
struct FCharacterLegsImpactSoundData
{
	TArray<ECharacterImpactSourceSoundCategory>        ImpactSourceCategories;                                   // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<ECharacterLegsImpactSoundCategory>          ImpactTargetCategories;                                   // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FCharacterImpactSounds                      Sounds;                                                   // 0x0020(0x0008) (CPF_Edit)
};

// ScriptStruct ConZ.CharacterLegsImpactSoundsData
// 0x0018
struct FCharacterLegsImpactSoundsData
{
	TArray<struct FCharacterLegsImpactSoundData>       SoundsData;                                               // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FCharacterImpactSounds                      FallbackSounds;                                           // 0x0010(0x0008) (CPF_Edit)
};

// ScriptStruct ConZ.CharacterSpawnerData
// 0x0030
struct FCharacterSpawnerData
{
	class UClass*                                      Character;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<TEnumAsByte<EPhysicalSurface>>              AllowedSurfaces;                                          // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                CharactersPerCell;                                        // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TotalCharacters;                                          // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinElevation;                                             // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxElevation;                                             // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.CharacterStats
// 0x0028
struct FCharacterStats
{
	float                                              FamePoints;                                               // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FameLevel;                                                // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EventScore;                                               // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                EventKills;                                               // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                EventTeamKills;                                           // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                EventDeaths;                                              // 0x0014(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                EventSuicides;                                            // 0x0018(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                EventAssists;                                             // 0x001C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                EventHeadshots;                                           // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsBanned;                                                 // 0x0024(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.CharacterStatsItem
// 0x0038
struct FCharacterStatsItem
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FCharacterStats                             CharacterStats;                                           // 0x0010(0x0028) (CPF_BlueprintVisible)
};

// ScriptStruct ConZ.ChoppingIngredient
// 0x0028
struct FChoppingIngredient
{
	class UClass*                                      Item;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinQuantity;                                              // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxQuantity;                                              // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsQuantityAffectedByTool;                                 // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              InitialDamage;                                            // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RandomizeDamage;                                          // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OverrideAutoDestructTime;                                 // 0x001C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              AutoDestructTime;                                         // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ChoppingTool2
// 0x0030
struct FChoppingTool2
{
	TArray<class UBaseItemTag*>                        ItemTags;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UClass*                                      ItemTagClass;                                             // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      ItemClass;                                                // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OverrideChoppingTime;                                     // 0x0020(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              ChoppingTimeMultiplier;                                   // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OverrideIngredientsQuantity;                              // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                IngredientsQuantityBonus;                                 // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.PossibleChoppingTools
// 0x0010
struct FPossibleChoppingTools
{
	TArray<struct FChoppingTool2>                      PossibleTools;                                            // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct ConZ.ExperienceDependentFloat
// 0x0008
struct FExperienceDependentFloat
{
	float                                              ValueWhenExperienceIsMinimal;                             // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ValueWhenExperienceIsMaximal;                             // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.ChoppingParametersPerSkillLevel
// 0x000C
struct FChoppingParametersPerSkillLevel
{
	struct FExperienceDependentFloat                   ChoppingTime;                                             // 0x0000(0x0008) (CPF_Edit)
	int                                                IngredientsQuantityBonus;                                 // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.ChoppingRecipe
// 0x0090
struct FChoppingRecipe
{
	struct FText                                       InteractionCaption;                                       // 0x0000(0x0018) (CPF_Edit)
	class UAkAudioEvent*                               ChopAudioEvent;                                           // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FChoppingIngredient>                 Ingredients;                                              // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FPossibleChoppingTools                      ToolRequiredToBeInRightHand;                              // 0x0030(0x0010) (CPF_Edit)
	TArray<struct FPossibleChoppingTools>              AdditionalToolsRequired;                                  // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UClass*                                      Skill;                                                    // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExperiencePointsAwarded;                                  // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FChoppingParametersPerSkillLevel            NoSkillLevelData;                                         // 0x005C(0x000C) (CPF_Edit)
	struct FChoppingParametersPerSkillLevel            BasicLevelData;                                           // 0x0068(0x000C) (CPF_Edit)
	struct FChoppingParametersPerSkillLevel            MediumLevelData;                                          // 0x0074(0x000C) (CPF_Edit)
	struct FChoppingParametersPerSkillLevel            AdvancedLevelData;                                        // 0x0080(0x000C) (CPF_Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.CircularLayerData
// 0x0008
struct FCircularLayerData
{
	float                                              CenterCutoffPercentage;                                   // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Size;                                                     // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.CircularSegmentContainer
// 0x0018
struct FCircularSegmentContainer
{
	TArray<class UCircularMenuSegmentWidget*>          SegmentWidgets;                                           // 0x0000(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	int                                                SegmentCountOverride;                                     // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Offset;                                                   // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.CondensedInventorySlot
// 0x0010
struct FCondensedInventorySlot
{
	unsigned char                                      column;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      row;                                                      // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class AItem*                                       Item;                                                     // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.CondensedInventoryContainer
// 0x0018
struct FCondensedInventoryContainer
{
	unsigned char                                      Width;                                                    // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Height;                                                   // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<struct FCondensedInventorySlot>             Slots;                                                    // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct ConZ.AnimalPaceSettings
// 0x0010
struct FAnimalPaceSettings
{
	float                                              RunSpeed;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TrotSpeed;                                                // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WalkSpeed;                                                // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SneakSpeed;                                               // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.AnimalStationaryRotationRateSettings
// 0x003C
struct FAnimalStationaryRotationRateSettings
{
	struct FRotator                                    RunRotationRate;                                          // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FRotator                                    TrotRotationRate;                                         // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FRotator                                    WalkRotationRate;                                         // 0x0018(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FRotator                                    SneakRotationRate;                                        // 0x0024(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FRotator                                    StandRotationRate;                                        // 0x0030(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.ChargeAttackData
// 0x0020
struct FChargeAttackData
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RegainControlDurationModifier;                            // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Range;                                                    // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Speed;                                                    // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Height;                                                   // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              lengthOverride;                                           // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.CloseRangeAttackData
// 0x0018
struct FCloseRangeAttackData
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RegainControlDurationModifier;                            // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Range;                                                    // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Angle;                                                    // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HorizontalHalfAngleRange;                                 // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.TurnMontages
// 0x0010
struct FTurnMontages
{
	class UAnimMontage*                                TurnInPlaceLeft;                                          // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                TurnInPlaceRight;                                         // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.AnimalActionMontageData
// 0x0018
struct FAnimalActionMontageData
{
	class UAnimMontage*                                SleepMontage;                                             // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                EatMontage;                                               // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                IntimidateMontage;                                        // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.RepActionData
// 0x0003
struct FRepActionData
{
	EAnimalAction                                      action;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IndexParameter;                                           // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Version;                                                  // 0x0002(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.ImageAssetToLoad
// 0x0018
struct FImageAssetToLoad
{
	struct FGameplayTag                                Name;                                                     // 0x0000(0x0008) (CPF_Edit)
	struct FString                                     FilePath;                                                 // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct ConZ.CommonMapNames
// 0x0018
struct FCommonMapNames
{
	struct FName                                       MainMenu;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       CharacterCreationMenu;                                    // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Singleplayer;                                             // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.CharacterCreationMenuContext
// 0x0030
struct FCharacterCreationMenuContext
{
	bool                                               IsPreferringMultiplayer;                                  // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     ServerIp;                                                 // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                ServerResponsePort;                                       // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ServerGameplayPort;                                       // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ServerAuthToken;                                          // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct ConZ.ConZTeamMember
// 0x0008
struct FConZTeamMember
{
	struct FDbIntegerId                                UserProfileId;                                            // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct ConZ.VehicleSpawnParameters
// 0x0024
struct FVehicleSpawnParameters
{
	struct FVector                                     MinSpawnLocationOffset;                                   // 0x0000(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector                                     MaxSpawnLocationOffset;                                   // 0x000C(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector                                     AdminSpawnLocationOffset;                                 // 0x0018(0x000C) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.VehicleDamagedEffectsParameters
// 0x0060
struct FVehicleDamagedEffectsParameters
{
	struct FFloatRange                                 HealthRatioRange;                                         // 0x0000(0x0010) (CPF_Edit)
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (CPF_Edit, CPF_IsPlainOldData)
	class UParticleSystem*                             ParticleSystem;                                           // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StartAudioEvent;                                          // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StopAudioEvent;                                           // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DeactivationDelay;                                        // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleImpactEffects
// 0x0038
struct FVehicleImpactEffects
{
	float                                              HitImpulseThreshold;                                      // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UParticleSystem*                             ParticleSystem;                                           // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ParticlesScale;                                           // 0x0010(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      CameraShake;                                              // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CameraShakeScale;                                         // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ItemSpawningSettings
// 0x0078
struct FItemSpawningSettings
{
	struct FBox2D                                      WorldBounds;                                              // 0x0000(0x0014) (CPF_Edit)
	bool                                               UseQuadTreeToDetermineRelevantSpawnerGroups;              // 0x0014(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              RelevantSpawnerGroupsUpdateInterval;                      // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinPlayerLocationDeltaToUpdateRelevantSpawnerGroups;      // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpawnerGroupsCullDistance;                                // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpawnerGroupsExpirationTimeInMinutes;                     // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpawnerTasksProcessingInterval;                           // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpawnerTasksProcessingBudgetInMilliseconds;               // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxNumberOfSpawnerTasksPerUpdate;                         // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShouldDestroySpawnedItemsIfNoPlayersAround;               // 0x0034(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              RarityValues[0x6];                                        // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpawnerProbabilityMultiplier;                             // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExamineSpawnerProbabilityMultiplier;                      // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     SaveFileName;                                             // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	bool                                               DisableSerialization;                                     // 0x0068(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IgnoreSpawnerProbability;                                 // 0x0069(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IgnoreItemLimit;                                          // 0x006A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IgnoreItemZone;                                           // 0x006B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IgnoreItemRarity;                                         // 0x006C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DebugDrawItemSpawnTransforms;                             // 0x006D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x006E(0x0002) MISSED OFFSET
	float                                              DebugDrawItemSpawnTransformsDuration;                     // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.CorpseSkeletalMeshRepData
// 0x0070
struct FCorpseSkeletalMeshRepData
{
	struct FName                                       DisplayName;                                              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	class USkeletalMesh*                               Mesh;                                                     // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	bool                                               Visibility;                                               // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0021(0x000F) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.CorpseStaticMeshRepData
// 0x0070
struct FCorpseStaticMeshRepData
{
	struct FName                                       DisplayName;                                              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	class UStaticMesh*                                 Mesh;                                                     // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	bool                                               Visibility;                                               // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0021(0x000F) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.CorpsePoseData
// 0x0080
struct FCorpsePoseData
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_IsPlainOldData)
	struct FVector                                     LinearVelocity;                                           // 0x0030(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x003C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_IsPlainOldData)
	TArray<struct FTransform>                          Transforms;                                               // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FVector>                             LinearVelocities;                                         // 0x0058(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FVector>                             AngularVelocities;                                        // 0x0068(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.CraftingPair
// 0x0010
struct FCraftingPair
{
	class UClass*                                      CraftedItem;                                              // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      CraftingItem;                                             // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.PossibleItem
// 0x0030
struct FPossibleItem
{
	class UCraftingItemTag*                            CraftingTag;                                              // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      Item;                                                     // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                quantity;                                                 // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                usage;                                                    // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              usageWeight;                                              // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	ECraftingType                                      CraftingType;                                             // 0x001C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	int                                                QuantityVariation;                                        // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WeightVariation;                                          // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               SpawnHere;                                                // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.CraftingItem
// 0x0028
struct FCraftingItem
{
	struct FString                                     Description;                                              // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FPossibleItem>                       PossibleItems;                                            // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UAkAudioEvent*                               FillSound;                                                // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.CraftingSkillLevelData
// 0x0014
struct FCraftingSkillLevelData
{
	float                                              CraftingTime;                                             // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ProcessingTime;                                           // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Points;                                                   // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Probability_Add;                                          // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Probability_Multiply;                                     // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.ItemClassesArray
// 0x0010
struct FItemClassesArray
{
	TArray<class UClass*>                              ItemClasses;                                              // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct ConZ.CraftingRecipeCraftableItem
// 0x0010
struct FCraftingRecipeCraftableItem
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               EnoughSkill;                                              // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.CraftingRecipeCraftingItem
// 0x0010
struct FCraftingRecipeCraftingItem
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                quantity;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               isOptional;                                               // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.CraftingRecipeCraftingIngredient
// 0x0018
struct FCraftingRecipeCraftingIngredient
{
	TArray<struct FCraftingRecipeCraftingItem>         CraftingItems;                                            // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	bool                                               IsTool;                                                   // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               isOptional;                                               // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct ConZ.CraftingRecipe
// 0x0038
struct FCraftingRecipe
{
	TArray<struct FCraftingRecipeCraftableItem>        CraftableItems;                                           // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<struct FCraftingRecipeCraftingIngredient>   CraftingIngredients;                                      // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	class UClass*                                      SkillNeeded;                                              // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	ESkillLevel                                        SkillLevelNeeded;                                         // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class UCraftableItem*                              CraftableItem;                                            // 0x0030(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.GameEventParticipantInfo
// 0x0060
struct FGameEventParticipantInfo
{
	struct FString                                     UniqueId;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	TWeakObjectPtr<class APrisoner>                    Prisoner;                                                 // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	EGameEventParticipantState                         State;                                                    // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                TeamIndex;                                                // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	TArray<class UGameEventParticipantStats*>          RoundStats;                                               // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	class UGameEventParticipantStats*                  EventStats;                                               // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	TArray<class APrisoner*>                           HurtBy;                                                   // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	int                                                RepHelper;                                                // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x004C(0x0014) MISSED OFFSET
};

// ScriptStruct ConZ.GameEventRewardPoints
// 0x000C
struct FGameEventRewardPoints
{
	int                                                Cash;                                                     // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Score;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FamePoints;                                               // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.GameEventParameters
// 0x0188
struct FGameEventParameters
{
	float                                              AnnounceDuration;                                         // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CancelDuration;                                           // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RoundDuration;                                            // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RoundLimit;                                               // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                WinLimit;                                                 // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RespawnDelay;                                             // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeoutDuration;                                          // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinParticipants;                                          // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxParticipants;                                          // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               AllowRespawn;                                             // 0x0024(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               FriendlyFire;                                             // 0x0025(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	TArray<int>                                        TeamLimit;                                                // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                EntryFee;                                                 // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameEventRewardPoints                      PointsPerEnemyKill;                                       // 0x003C(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerTeamKill;                                        // 0x0048(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerDeath;                                           // 0x0054(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerSuicide;                                         // 0x0060(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerAssist;                                          // 0x006C(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerHeadshot;                                        // 0x0078(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerRoundWin;                                        // 0x0084(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FGameEventRewardPoints>              PointsPerRank;                                            // 0x0090(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FGameEventRewardPoints                      PointsForParticipation;                                   // 0x00A0(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	float                                              ScoreToFameConversionFactor;                              // 0x00AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UItemSelection*>                      PossiblePrimaryWeapons;                                   // 0x00B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<class UItemSelection*>                      PossibleSecondaryWeapons;                                 // 0x00C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<class UItemSelection*>                      PossibleTertiaryWeapons;                                  // 0x00D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<class UItemSelection*>                      PossibleOutfits;                                          // 0x00E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<class UItemSelection*>                      PossibleSupportItems;                                     // 0x00F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<class UItemSelection*>                      MandatoryGear;                                            // 0x0100(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FText                                       EventName;                                                // 0x0110(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       EventDescription;                                         // 0x0128(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       PrerequisitesText;                                        // 0x0140(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       WeaponText;                                               // 0x0158(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       RewardsText;                                              // 0x0170(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct ConZ.CTFParameters
// 0x0030
struct FCTFParameters
{
	float                                              FlagResetDuration;                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               AllowReturns;                                             // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                CaptureLimit;                                             // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameEventRewardPoints                      PointsPerPickup;                                          // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerCapture;                                         // 0x0018(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerReturn;                                          // 0x0024(0x000C) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct ConZ.SpawnArea
// 0x0014
struct FSpawnArea
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TeamIndex;                                                // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.ProjectileImpulseMultiplier
// 0x0010
struct FProjectileImpulseMultiplier
{
	class UClass*                                      ActorClass;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Multiplier;                                               // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.DbUserServerHistoryItem
// 0x0028
struct FDbUserServerHistoryItem
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     Host;                                                     // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                Port;                                                     // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.DbUserProfileAuthorityInfo
// 0x0040
struct FDbUserProfileAuthorityInfo
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     Ip;                                                       // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                ResponsePort;                                             // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GameplayPort;                                             // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDbIntegerId                                UserProfileId;                                            // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FString                                     authToken;                                                // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct ConZ.DeathmatchParameters
// 0x0014
struct FDeathmatchParameters
{
	int                                                RoundScoreLimit;                                          // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AreaRestrictionInterval;                                  // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AreaRestrictionDuration;                                  // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AreaRestrictionStep;                                      // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BarrierHeatUpDuration;                                    // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.DistantLevel
// 0x0020
struct FDistantLevel
{
	class AActor*                                      Level;                                                    // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.DropZoneParameters
// 0x002C
struct FDropZoneParameters
{
	float                                              IntroAnnouncementDelay;                                   // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WarmupPhaseDuration;                                      // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CrateDropDuration;                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SearchPhaseTimeLimit;                                     // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CargoDropDuration;                                        // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CapturePhaseTimeLimit;                                    // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CargoOpeningDuration;                                     // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               SkipKeyPhase;                                             // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FGameEventRewardPoints                      PointsPerActivation;                                      // 0x0020(0x000C) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct ConZ.EnduranceSkillParametersPerSkillLevel
// 0x0008
struct FEnduranceSkillParametersPerSkillLevel
{
	struct FExperienceDependentFloat                   StaminaRecoveryMultiplier;                                // 0x0000(0x0008) (CPF_Edit)
};

// ScriptStruct ConZ.ItemSpawnerDataBasedOnPreset
// 0x0088
struct FItemSpawnerDataBasedOnPreset
{
	class UClass*                                      preset;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OverrideItemClasses;                                      // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OverrideItemSpawnTypes;                                   // 0x0009(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OverrideProbability;                                      // 0x000A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OverrideUseItemZone;                                      // 0x000B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OverrideUseItemRarity;                                    // 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OverrideInitialDamage;                                    // 0x000D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OverrideRandomizeDamage;                                  // 0x000E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OverrideInitialUsage;                                     // 0x000F(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OverrideRandomizeUsage;                                   // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OverrideInitialDirtiness;                                 // 0x0011(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OverrideRandomizeDirtiness;                               // 0x0012(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OverrideMinAmmoCount;                                     // 0x0013(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OverrideMaxAmmoCount;                                     // 0x0014(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OverridePossibleSicknesses;                               // 0x0015(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OverrideUseCollisionTraceToAdjustSpawnLocation;           // 0x0016(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OverrideUseCollisionTraceToAdjustSpawnRotation;           // 0x0017(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UClass*>                              ItemClasses;                                              // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FGameplayTagContainer                       ItemSpawnTypes;                                           // 0x0028(0x0020) (CPF_Edit)
	float                                              Probability;                                              // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseItemZone;                                              // 0x004C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseItemRarity;                                            // 0x004D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	float                                              InitialDamage;                                            // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RandomizeDamage;                                          // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InitialUsage;                                             // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RandomizeUsage;                                           // 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InitialDirtiness;                                         // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RandomizeDirtiness;                                       // 0x0064(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinAmmoCount;                                             // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxAmmoCount;                                             // 0x006C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FPossibleItemSickness>               PossibleSicknesses;                                       // 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	bool                                               UseCollisionTraceToAdjustSpawnLocation;                   // 0x0080(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseCollisionTraceToAdjustSpawnRotation;                   // 0x0081(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0082(0x0006) MISSED OFFSET
};

// ScriptStruct ConZ.ExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes
// 0x0028
struct FExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes
{
	struct FGameplayTagContainer                       ItemSpawnTypes;                                           // 0x0000(0x0020) (CPF_Edit)
	int                                                MaxNumberOfOccurrences;                                   // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ExamineItemSpawnerData
// 0x00A8
struct FExamineItemSpawnerData
{
	int                                                MinQuantity;                                              // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxQuantity;                                              // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               AllowDuplicates;                                          // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FItemSpawnerDataBasedOnPreset               Spawner;                                                  // 0x0010(0x0088) (CPF_Edit)
	TArray<struct FExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes> MaxOccurrencesPerSpawnTypes;                              // 0x0098(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct ConZ.ExamineDataPerItemGroup
// 0x0004
struct FExamineDataPerItemGroup
{
	int                                                MaxNumberOfOccurrences;                                   // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.HeatEmitter
// 0x001C
struct FHeatEmitter
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              Temperature;                                              // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DistanceScale;                                            // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OuterRadius;                                              // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.FishSpawnInfo
// 0x0008
struct FFishSpawnInfo
{
	int                                                SpawnInstances;                                           // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentlySpawned;                                         // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.FoliageEffectsData
// 0x0020
struct FFoliageEffectsData
{
	float                                              DetectionBoundsScale;                                     // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               StartMovingThroughFoliageAudioEvent;                      // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StopMovingThroughFoliageAudioEvent;                       // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               OneShotMovingThroughFoliageAudioEvent;                    // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.GameEventTeamColours
// 0x0060
struct FGameEventTeamColours
{
	struct FLinearColor                                TeamName;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                ParticipantStatsDarker;                                   // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                ParticipantStatsLighter;                                  // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                ParticipantStatsHighlighted;                              // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                ParticipantStatsDisabled;                                 // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                ParticipantStatsMini;                                     // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.GlobalAnimalSpawnInfo
// 0x001C
struct FGlobalAnimalSpawnInfo
{
	int                                                MaxSpawnInstances;                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RespawnPeriod;                                            // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumberOfExistingWaypointGroups;                           // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
	int                                                WorldMaxSpawnInstances;                                   // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
	int                                                CurrentlyAssigned;                                        // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
	int                                                CurrentlySpawned;                                         // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
	int                                                CurrentlyDead;                                            // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.LadderMarker
// 0x00A0
struct FLadderMarker
{
	struct FTransform                                  FirstStep;                                                // 0x0000(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     LastStep;                                                 // 0x0030(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FTransform                                  Edge;                                                     // 0x0040(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     CapsuleBias;                                              // 0x0070(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              StepHeight;                                               // 0x007C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StepWidth;                                                // 0x0080(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HitDetectionExtraAboveLastStep;                           // 0x0084(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HitDetectionExtraBelowFirstStep;                          // 0x0088(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HitDetectionExtraOnTheSides;                              // 0x008C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               HasEdge;                                                  // 0x0090(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsNarrow;                                                 // 0x0091(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      PhysicalSurfaceForSounds;                                 // 0x0092(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0093(0x0001) MISSED OFFSET
	float                                              Thickness;                                                // 0x0094(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.PhysicalHitReactData
// 0x0018
struct FPhysicalHitReactData
{
	struct FName                                       ProfileName;                                              // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       PelvisBoneName;                                           // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InitialStrengthMultiplier;                                // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlendDuration;                                            // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.PhysicalAnimationDesc
// 0x0038
struct FPhysicalAnimationDesc
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct ConZ.HitReactBodyPartDataItem
// 0x0040
struct FHitReactBodyPartDataItem
{
	class UAnimMontage*                                MontageToPlay;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                MontageToRespondTo;                                       // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       WeaponsToRespondTo;                                       // 0x0010(0x0020) (CPF_Edit)
	class UAnimMontage*                                FollowupMontage;                                          // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RegainControlDurationMultiplier;                          // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.HitReactDirectionData
// 0x0048
struct FHitReactDirectionData
{
	TArray<struct FHitReactBodyPartDataItem>           FrontHit;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FHitReactBodyPartDataItem>           LeftHit;                                                  // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FHitReactBodyPartDataItem>           BackHit;                                                  // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FHitReactBodyPartDataItem>           RightHit;                                                 // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              RegainControlDurationMultiplier;                          // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.HitReactMagnitudeData
// 0x0120
struct FHitReactMagnitudeData
{
	struct FHitReactDirectionData                      SmallHit;                                                 // 0x0000(0x0048) (CPF_Edit)
	struct FHitReactDirectionData                      MediumHit;                                                // 0x0048(0x0048) (CPF_Edit)
	struct FHitReactDirectionData                      LargeHit;                                                 // 0x0090(0x0048) (CPF_Edit)
	struct FHitReactDirectionData                      KnockoutHit;                                              // 0x00D8(0x0048) (CPF_Edit)
};

// ScriptStruct ConZ.HitReactLandingData
// 0x0028
struct FHitReactLandingData
{
	float                                              MinImpactSpeedToReact;                                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAnimMontage*                                MontageToPlay;                                            // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RegainControlDurationMultiplier;                          // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanEverGoToRagdoll;                                       // 0x0014(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              MinImpactSpeedForRagdoll;                                 // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinRagdollDuration;                                       // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxRagdollDuration;                                       // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RagdollDurationPerSpeedUnit;                              // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.SpawnedItems
// 0x0018
struct FSpawnedItems
{
	int                                                ID;                                                       // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EPickupItemOperation                               Operation;                                                // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TArray<class AItem*>                               Items;                                                    // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct ConZ.ServerUsedItem
// 0x0018
struct FServerUsedItem
{
	class AItem*                                       Item;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                usage;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              usageWeight;                                              // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	ECraftingType                                      CraftingType;                                             // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               SpawnHere;                                                // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct ConZ.ServerCraftableItem
// 0x0070
struct FServerCraftableItem
{
	uint32_t                                           ID;                                                       // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      ItemClass;                                                // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FServerUsedItem>                     MandatoryItems;                                           // 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<struct FServerUsedItem>                     MandatoryParts;                                           // 0x0020(0x0010) (CPF_ZeroConstructor)
	TArray<struct FServerUsedItem>                     OptionalItems;                                            // 0x0030(0x0010) (CPF_ZeroConstructor)
	TArray<struct FServerUsedItem>                     OptionalParts;                                            // 0x0040(0x0010) (CPF_ZeroConstructor)
	TArray<struct FServerUsedItem>                     ToolsNeeded;                                              // 0x0050(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0060(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.ItemSpawnerMarker
// 0x00C0
struct FItemSpawnerMarker
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (CPF_Edit, CPF_IsPlainOldData)
	struct FItemSpawnerDataBasedOnPreset               Spawner;                                                  // 0x0030(0x0088) (CPF_Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ItemSpawnerData
// 0x0070
struct FItemSpawnerData
{
	TArray<class UClass*>                              ItemClasses;                                              // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FGameplayTagContainer                       ItemSpawnTypes;                                           // 0x0010(0x0020) (CPF_Edit)
	float                                              Probability;                                              // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseItemZone;                                              // 0x0034(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseItemRarity;                                            // 0x0035(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
	float                                              InitialDamage;                                            // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RandomizeDamage;                                          // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InitialUsage;                                             // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RandomizeUsage;                                           // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InitialDirtiness;                                         // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RandomizeDirtiness;                                       // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinAmmoCount;                                             // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxAmmoCount;                                             // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FPossibleItemSickness>               PossibleSicknesses;                                       // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	bool                                               UseCollisionTraceToAdjustSpawnLocation;                   // 0x0068(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseCollisionTraceToAdjustSpawnRotation;                   // 0x0069(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x006A(0x0006) MISSED OFFSET
};

// ScriptStruct ConZ.LandingEffectDataPerSeverity
// 0x0010
struct FLandingEffectDataPerSeverity
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               SpawnParticlesInDirectionOfVelocity;                      // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.LandingEffectDataPerPhysicalSurface
// 0x0030
struct FLandingEffectDataPerPhysicalSurface
{
	struct FLandingEffectDataPerSeverity               Light;                                                    // 0x0000(0x0010) (CPF_Edit)
	struct FLandingEffectDataPerSeverity               Medium;                                                   // 0x0010(0x0010) (CPF_Edit)
	struct FLandingEffectDataPerSeverity               Heavy;                                                    // 0x0020(0x0010) (CPF_Edit)
};

// ScriptStruct ConZ.MeleeAction
// 0x0024
struct FMeleeAction
{
	EMeleeActionType                                   ActionType;                                               // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UAnimMontage>                 Montage;                                                  // 0x0004(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartDelay;                                               // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlockDuration;                                            // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OrientToTargetSpeedFactor;                                // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RegainControlDurationModifier;                            // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ID;                                                       // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.AttackedByMeleeData
// 0x0018
struct FAttackedByMeleeData
{
	TWeakObjectPtr<class AActor>                       attacker;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UAnimMontage>                 Montage;                                                  // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.CheckMeleeAttackCapsuleCollisionData
// 0x00D0
struct FCheckMeleeAttackCapsuleCollisionData
{
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0000(0x00D0) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeSkillAttack
// 0x0050
struct FMeleeSkillAttack
{
	struct FGameplayTagContainer                       AttackTypes;                                              // 0x0000(0x0020) (CPF_Edit)
	class UAnimMontage*                                Montage;                                                  // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFloatInterval                              PitchRange;                                               // 0x0028(0x0008) (CPF_Edit)
	float                                              MaxDistance;                                              // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinDistance;                                              // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinStamina;                                               // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OrientToTargetSpeedFactor;                                // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RegainControlDurationMultiplier;                          // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StaminaDrainMultiplier;                                   // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanBeUsedAsInitialAttack;                                 // 0x0048(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanBeUsedToCloseLargeDistanceToTarget;                    // 0x0049(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Solo;                                                     // 0x004A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Mute;                                                     // 0x004B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsAlwaysCandidate;                                        // 0x004C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeSkillDodge
// 0x0018
struct FMeleeSkillDodge
{
	EDodgeDirectionType                                DodgeDirectionType;                                       // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UAnimMontage*                                Montage;                                                  // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RegainControlDurationMultiplier;                          // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeSkillAnimations
// 0x0098
struct FMeleeSkillAnimations
{
	class UAnimSequenceBase*                           PrimaryIdleAnimationTP;                                   // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           PrimaryIdleAnimationFP;                                   // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           TiredIdleAnimationTP;                                     // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           TiredIdleAnimationFP;                                     // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           WalkingIdleAnimationTP;                                   // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           WalkingIdleAnimationFP;                                   // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           BlockIdleAnimationTP;                                     // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           BlockIdleAnimationFP;                                     // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpace*                                 AimOffsetBlendSpaceTP;                                    // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpace*                                 AimOffsetBlendSpaceFP;                                    // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                EnterCombatModeMontage;                                   // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                LeaveCombatModeMontage;                                   // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UAnimSequenceBase*>                   InactivityIdleAnimations;                                 // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              IdleToBlockBlendDuration;                                 // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlockToIdleBlendDuration;                                 // 0x0074(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FMeleeSkillAttack>                   Attacks;                                                  // 0x0078(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FMeleeSkillDodge>                    Dodges;                                                   // 0x0088(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct ConZ.MeleeSkillParametersPerSkillLevel
// 0x0098
struct FMeleeSkillParametersPerSkillLevel
{
	struct FExperienceDependentFloat                   StartDelay;                                               // 0x0000(0x0008) (CPF_Edit)
	struct FExperienceDependentFloat                   StartDelayPenaltyPerStrengthShortage;                     // 0x0008(0x0008) (CPF_Edit)
	struct FExperienceDependentFloat                   AnimationPlayRateModifier;                                // 0x0010(0x0008) (CPF_Edit)
	struct FExperienceDependentFloat                   AnimationPlayRatePenaltyPerStrengthShortage;              // 0x0018(0x0008) (CPF_Edit)
	struct FExperienceDependentFloat                   RegainControlDurationModifier;                            // 0x0020(0x0008) (CPF_Edit)
	struct FExperienceDependentFloat                   DamageModifier;                                           // 0x0028(0x0008) (CPF_Edit)
	struct FExperienceDependentFloat                   staminaDrain;                                             // 0x0030(0x0008) (CPF_Edit)
	struct FExperienceDependentFloat                   StaminaDrainPenaltyPerStrengthShortage;                   // 0x0038(0x0008) (CPF_Edit)
	struct FExperienceDependentFloat                   staminaRecoveryDelay;                                     // 0x0040(0x0008) (CPF_Edit)
	struct FExperienceDependentFloat                   StaminaRecoveryDuration;                                  // 0x0048(0x0008) (CPF_Edit)
	struct FExperienceDependentFloat                   StaminaInfluenceWindowMin;                                // 0x0050(0x0008) (CPF_Edit)
	struct FExperienceDependentFloat                   StaminaInfluenceWindowMax;                                // 0x0058(0x0008) (CPF_Edit)
	struct FExperienceDependentFloat                   StaminaInfluenceWindowLinearity;                          // 0x0060(0x0008) (CPF_Edit)
	struct FExperienceDependentFloat                   StartDelayWhenExhausted;                                  // 0x0068(0x0008) (CPF_Edit)
	struct FExperienceDependentFloat                   AnimationPlayRateModifierWhenExhausted;                   // 0x0070(0x0008) (CPF_Edit)
	struct FExperienceDependentFloat                   RegainControlDurationModifierWhenExhausted;               // 0x0078(0x0008) (CPF_Edit)
	struct FExperienceDependentFloat                   DamageModifierWhenExhausted;                              // 0x0080(0x0008) (CPF_Edit)
	struct FExperienceDependentFloat                   StaminaMultiplierPerExcessGearWeight;                     // 0x0088(0x0008) (CPF_Edit)
	struct FExperienceDependentFloat                   ComboCooldownDuration;                                    // 0x0090(0x0008) (CPF_Edit)
};

// ScriptStruct ConZ.PhysicalSurfaceData
// 0x000C
struct FPhysicalSurfaceData
{
	float                                              DirtinessFactor;                                          // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LandingImpactVelocityModifier;                            // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NoiseLoudnessModifier;                                    // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.PlaceableIngredient
// 0x0030
struct FPlaceableIngredient
{
	TArray<class UCraftingItemTag*>                    Tags;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class UClass*>                              SpecificItems;                                            // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	EIngredientUsageRule                               UsageRule;                                                // 0x0020(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	ECraftingType                                      CraftingType;                                             // 0x0021(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	float                                              Required;                                                 // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Satisfied;                                                // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerMeleeAttackTypes
// 0x0080
struct FPrisonerMeleeAttackTypes
{
	struct FGameplayTag                                PrimaryMeleeAttackTypeWhenNotMoving;                      // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTag                                PrimaryMeleeAttackTypeWhenWalking;                        // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTag                                PrimaryMeleeAttackTypeWhenJogging;                        // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTag                                PrimaryMeleeAttackTypeWhenRunning;                        // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTag                                PrimaryMeleeAttackTypeWhenFalling;                        // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTag                                SecondaryMeleeAttackTypeWhenNotMoving;                    // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTag                                SecondaryMeleeAttackTypeWhenWalking;                      // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTag                                SecondaryMeleeAttackTypeWhenJogging;                      // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTag                                SecondaryMeleeAttackTypeWhenRunning;                      // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTag                                SecondaryMeleeAttackTypeWhenFalling;                      // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTag                                ComboMeleeAttackTypeWhenNotMoving;                        // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTag                                ComboMeleeAttackTypeWhenWalking;                          // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTag                                ComboMeleeAttackTypeWhenJogging;                          // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTag                                ComboMeleeAttackTypeWhenRunning;                          // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTag                                ComboMeleeAttackTypeWhenFalling;                          // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTag                                BashMeleeAttackType;                                      // 0x0078(0x0008) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct ConZ.PrisonerAppearanceData
// 0x0030
struct FPrisonerAppearanceData
{
	EHumanRace                                         Race;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class USkeletalMesh*                               HeadMesh;                                                 // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstance*                           SkinMaterial;                                             // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstance*                           TorsoMaterial;                                            // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstance*                           HeadMaterial;                                             // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstance*                           PenisMaterial;                                            // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerNearbyFoliageInstanceInfo
// 0x0050
struct FPrisonerNearbyFoliageInstanceInfo
{
	class UInstancedStaticMeshComponent*               InstancedMeshComponent;                                   // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                InstanceIndex;                                            // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FTransform                                  TransformZeroOrigin;                                      // 0x0010(0x0030) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class UFoliageEffectsAssetData*                    FoliageEffectsAssetData;                                  // 0x0040(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerNearbyFoliageInfo
// 0x0010
struct FPrisonerNearbyFoliageInfo
{
	TArray<struct FPrisonerNearbyFoliageInstanceInfo>  InstancesInfo;                                            // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct ConZ.PrisonerMountReplication
// 0x0010
struct FPrisonerMountReplication
{
	bool                                               HasMountedSlot;                                           // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UObject*                                     MountedSlot;                                              // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerTeleportRequest
// 0x001C
struct FPrisonerTeleportRequest
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (CPF_IsPlainOldData)
	bool                                               AlwaysShowSpawnScreen;                                    // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShowPostTeleportScreen;                                   // 0x0019(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.CharacterActionReplicationHelper
// 0x0018
struct FCharacterActionReplicationHelper
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ConZ.ProjectileArrowData
// 0x0010
struct FProjectileArrowData
{
	class UClass*                                      AmmunitionArrowClass;                                     // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ItemsDamage;                                              // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.CharacterActionAck
// 0x000C
struct FCharacterActionAck
{
	int                                                ActionId;                                                 // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SubactionIndex;                                           // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	ECharacterActionAckType                            Type;                                                     // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	ECharacterActionEndState                           EndState;                                                 // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.ProjectilePointDamageEvent
// 0x0038 (0x00E0 - 0x00A8)
struct FProjectilePointDamageEvent : public FPointDamageEvent
{
	bool                                               IsHeadUpperShot;                                          // 0x00A8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	float                                              EnergyLossPerClothesLayer[0x7];                           // 0x00AC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector_NetQuantize100                      KillerLocation;                                           // 0x00C8(0x000C)
	struct FVector_NetQuantize100                      VictimLocation;                                           // 0x00D4(0x000C)
};

// ScriptStruct ConZ.SkillEventWeapon
// 0x0001
struct FSkillEventWeapon
{
	EWeaponCategory                                    WeaponCategory;                                           // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.SkillEventWeaponProjectileHitTarget
// 0x001F (0x0020 - 0x0001)
struct FSkillEventWeaponProjectileHitTarget : public FSkillEventWeapon
{
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AActor*                                      Target;                                                   // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Distance;                                                 // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsHeadShot;                                               // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsKill;                                                   // 0x0015(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               WasSniping;                                               // 0x0016(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EPrisonerStance                                    Stance;                                                   // 0x0017(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWindSpeedCategory                                 WindSpeedCategory;                                        // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerWaterMovementParameters
// 0x000C
struct FPrisonerWaterMovementParameters
{
	float                                              MaxSpeed;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Acceleration;                                             // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Deceleration;                                             // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerGroundMovementParameters
// 0x000C
struct FPrisonerGroundMovementParameters
{
	float                                              MaxSpeed;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Acceleration;                                             // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Deceleration;                                             // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerResponseIdleCompatibleAnimationSets
// 0x0005
struct FPrisonerResponseIdleCompatibleAnimationSets
{
	bool                                               Base;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Rifle;                                                    // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               RifleRelaxed;                                             // 0x0002(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UnarmedCombat;                                            // 0x0003(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Handgun;                                                  // 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerResponseIdleDescription
// 0x0028
struct FPrisonerResponseIdleDescription
{
	TArray<class UAnimMontage*>                        Montages;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              PreMontageDelay;                                          // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PostMontageDelay;                                         // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CooldownDuration;                                         // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanBeUsedWhenItemIsInHands;                               // 0x001C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FPrisonerResponseIdleCompatibleAnimationSets CombatibleAnimationsSets;                                 // 0x001D(0x0005) (CPF_Edit)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
};

// ScriptStruct ConZ.ItemArray
// 0x0010
struct FItemArray
{
	TArray<class AItem*>                               Value;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct ConZ.ClothesPartSet
// 0x0050
struct FClothesPartSet
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty ConZ.ClothesPartSet.ClothesParts
};

// ScriptStruct ConZ.SicknessRecord
// 0x0004
struct FSicknessRecord
{
	EDiagnosedResult                                   Diagnose;                                                 // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
	uint16_t                                           Phase;                                                    // 0x0002(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.DigestionItemRecord
// 0x0038
struct FDigestionItemRecord
{
	int                                                ID;                                                       // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Caption;                                                  // 0x0008(0x0010) (CPF_ZeroConstructor)
	class UClass*                                      ItemClass;                                                // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           RemainingWeight;                                          // 0x0020(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	float                                              Weight;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Volume;                                                   // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RemainingVolume;                                          // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Water;                                                    // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsWaterFromWorld;                                         // 0x0034(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.HealingItemRecord
// 0x0020
struct FHealingItemRecord
{
	int                                                ID;                                                       // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Caption;                                                  // 0x0008(0x0010) (CPF_ZeroConstructor)
	uint16_t                                           quantity;                                                 // 0x0018(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerBCUMonitorData
// 0x0128
struct FPrisonerBCUMonitorData
{
	unsigned char                                      Age;                                                      // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EPrisonerSex                                       Sex;                                                      // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              LifeTime;                                                 // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      TeethNumber;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Strength;                                                 // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Constitution;                                             // 0x000A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Dexterity;                                                // 0x000B(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Intelligence;                                             // 0x000C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      StrengthGain;                                             // 0x000D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ConstitutionGain;                                         // 0x000E(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      DexterityGain;                                            // 0x000F(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      StrengthRate;                                             // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ConstitutionRate;                                         // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      DexterityRate;                                            // 0x0012(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0013(0x0001) MISSED OFFSET
	uint16_t                                           Weight;                                                   // 0x0014(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           InitialWeight;                                            // 0x0016(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           StorageFat;                                               // 0x0018(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      BFP;                                                      // 0x001A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	uint16_t                                           MuscleMass;                                               // 0x001C(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      WeightLoad;                                               // 0x001E(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x001F(0x0001) MISSED OFFSET
	uint16_t                                           FoodWeight;                                               // 0x0020(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           MaxFoodWeight;                                            // 0x0022(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StomachVolumeOccupied;                                    // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StomachVolumeMax;                                         // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StomachWater;                                             // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IntestineVolumeOccupied;                                  // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IntestineVolumeMax;                                       // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IntestineWater;                                           // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ColonVolumeOccupied;                                      // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ColonVolumeMax;                                           // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BladderVolumeOccupied;                                    // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BladderVolumeMax;                                         // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           gearWeight;                                               // 0x004C(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           WLT;                                                      // 0x004E(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           WLTEasy;                                                  // 0x0050(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           WLTDemanding;                                             // 0x0052(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           WLTVeryDemanding;                                         // 0x0054(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int8_t                                             BodyTempCategory;                                         // 0x0056(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int8_t                                             BodyTempIncrease;                                         // 0x0057(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           Blood;                                                    // 0x0058(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           MinBlood;                                                 // 0x005A(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Calories;                                                 // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           DailyCaloriesIntake;                                      // 0x0060(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CaloriesUsageSpeed;                                       // 0x0062(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0063(0x0001) MISSED OFFSET
	uint16_t                                           CaloriesIdle;                                             // 0x0064(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           CaloriesWalking;                                          // 0x0066(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           CaloriesJogging;                                          // 0x0068(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           CaloriesRunning;                                          // 0x006A(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EnergyIntake;                                             // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EnergyUsage;                                              // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MetabolicCalories;                                        // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           Water;                                                    // 0x0078(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	float                                              WaterIntake;                                              // 0x007C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WaterUsage;                                               // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           DailyWaterIntake;                                         // 0x0084(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            IntakeFat;                                                // 0x0086(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            IntakeSaturatedFat;                                       // 0x0088(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            IntakeSugar;                                              // 0x008A(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            IntakeSodium;                                             // 0x008C(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            IntakeCarbs;                                              // 0x008E(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            IntakeFiber;                                              // 0x0090(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            IntakeProteins;                                           // 0x0092(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            IntakeAlcohol;                                            // 0x0094(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0096(0x0002) MISSED OFFSET
	float                                              DailyFatCalories;                                         // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DailySugarCalories;                                       // 0x009C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DailyCarbsCalories;                                       // 0x00A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DailyProteinsCalories;                                    // 0x00A4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DailyAlcoholCalories;                                     // 0x00A8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TArray<int16_t>                                    IntakeVitamins;                                           // 0x00B0(0x0010) (CPF_ZeroConstructor)
	TArray<int16_t>                                    IntakeMinerals;                                           // 0x00C0(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      MSR;                                                      // 0x00D0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x00D1(0x0001) MISSED OFFSET
	int16_t                                            CurrentStaminaChange;                                     // 0x00D2(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            SCRIdle;                                                  // 0x00D4(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            SCRWalking;                                               // 0x00D6(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           CurrentWaterConsumption;                                  // 0x00D8(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           WCRIdle;                                                  // 0x00DA(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           WCRWalking;                                               // 0x00DC(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           WCRJogging;                                               // 0x00DE(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           WCRRunning;                                               // 0x00E0(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           CurrentCaloriesConsumption;                               // 0x00E2(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      HealingSpeed;                                             // 0x00E4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ViewRange;                                                // 0x00E5(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      PerformanceFailure;                                       // 0x00E6(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      SpeedModifier;                                            // 0x00E7(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      StaminaRecoveryModifier;                                  // 0x00E8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      StaminaConsumptionModifier;                               // 0x00E9(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      WCRModifier;                                              // 0x00EA(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CaloriesBurntModifier;                                    // 0x00EB(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      HoldingBreathModifier;                                    // 0x00EC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      HealingSpeedModifier;                                     // 0x00ED(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      HealthPointsModifier;                                     // 0x00EE(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ResistPoisonsModifier;                                    // 0x00EF(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FSicknessRecord>                     Sicknesses;                                               // 0x00F0(0x0010) (CPF_ZeroConstructor)
	TArray<struct FDigestionItemRecord>                DigestionItems;                                           // 0x0100(0x0010) (CPF_ZeroConstructor)
	TArray<struct FHealingItemRecord>                  HealingItems;                                             // 0x0110(0x0010) (CPF_ZeroConstructor)
	uint16_t                                           AirTemp;                                                  // 0x0120(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           WindSpeed;                                                // 0x0122(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               BCUDataInitializedOnServer;                               // 0x0124(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0125(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerClimbAnimationInfo
// 0x0040
struct FPrisonerClimbAnimationInfo
{
	float                                              MinEdgeHeight;                                            // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxEdgeHeight;                                            // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VaultDistance;                                            // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxVaultLandHeightError;                                  // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     AnchorOffset;                                             // 0x0010(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           AnchoringAnimation;                                       // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnchoringAnimationTime;                                   // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnchoringDuration;                                        // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                ClimbingMontage;                                          // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              staminaDrain;                                             // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               RequiresEmptyLHand;                                       // 0x003C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               RequiresEmptyRHand;                                       // 0x003D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.WindowClimbingAnimationInfo
// 0x0048
struct FWindowClimbingAnimationInfo
{
	struct FVector                                     AnchorOffset;                                             // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           AnchoringAnimation;                                       // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnchoringAnimationTime;                                   // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnchoringDuration;                                        // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                ClimbingMontage;                                          // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinWindowWidth;                                           // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinWindowHeight;                                          // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinSpacingToLeftWindowEdge;                               // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinSpacingToRightWindowEdge;                              // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinWindowDistanceToFloor;                                 // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxWindowDistanceToFloor;                                 // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              staminaDrain;                                             // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerClimbingStateForSimulatedProxies
// 0x0038
struct FPrisonerClimbingStateForSimulatedProxies
{
	class UAnimSequenceBase*                           AnchoringAnimation;                                       // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnchoringAnimationTime;                                   // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UAnimMontage*                                ClimbingMontage;                                          // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     AnchoringTargetLocation;                                  // 0x0018(0x000C) (CPF_IsPlainOldData)
	struct FRotator                                    AnchoringTargetRotation;                                  // 0x0024(0x000C) (CPF_IsPlainOldData)
	float                                              AnchoringDuration;                                        // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Version;                                                  // 0x0034(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.LadderInfoRepData
// 0x0050
struct FLadderInfoRepData
{
	struct FTransform                                  LadderTransform;                                          // 0x0000(0x0030) (CPF_IsPlainOldData)
	struct FVector                                     CapsuleBias;                                              // 0x0030(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     RootBoneOffset;                                           // 0x003C(0x000C) (CPF_IsPlainOldData)
	float                                              StepHeight;                                               // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      PhysicalSurfaceForSounds;                                 // 0x004C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      NumberOfSteps;                                            // 0x004D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.WindowInfo
// 0x00D0
struct FWindowInfo
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FTransform                                  TransformInverse;                                         // 0x0030(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     Anchor;                                                   // 0x0060(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              Width;                                                    // 0x006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Height;                                                   // 0x0070(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FWindowClimbingAnimationInfo                AnimationInfo;                                            // 0x0078(0x0048) (CPF_Edit, CPF_BlueprintVisible)
	int                                                AnimationIndex;                                           // 0x00C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00C4(0x000C) MISSED OFFSET
};

// ScriptStruct ConZ.LadderInfo
// 0x00B0
struct FLadderInfo
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FTransform                                  TransformInverse;                                         // 0x0030(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FTransform                                  Edge;                                                     // 0x0060(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     CapsuleBias;                                              // 0x0090(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              StepHeight;                                               // 0x009C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StepWidth;                                                // 0x00A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               HasEdge;                                                  // 0x00A4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsNarrow;                                                 // 0x00A5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      PhysicalSurfaceForSounds;                                 // 0x00A6(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00A7(0x0001) MISSED OFFSET
	int                                                NumberOfSteps;                                            // 0x00A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                HitStepIndex;                                             // 0x00AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.ClimbableObstacleInfo
// 0x0080
struct FClimbableObstacleInfo
{
	struct FVector                                     EdgeLocation;                                             // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              EdgeHeight;                                               // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     HWallNormal;                                              // 0x0010(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     VWallNormal;                                              // 0x001C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     CapsuleLocationAtAnchor;                                  // 0x0028(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FRotator                                    CapsuleRotationAtAnchor;                                  // 0x0034(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FPrisonerClimbAnimationInfo                 AnimationInfo;                                            // 0x0040(0x0040) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing_Walking
// 0x0030
struct FPrisonerMovementSettings_Ground_Standing_Walking
{
	struct FPrisonerGroundMovementParameters           Default;                                                  // 0x0000(0x000C) (CPF_Edit)
	struct FPrisonerGroundMovementParameters           MeleeCombat;                                              // 0x000C(0x000C) (CPF_Edit)
	struct FPrisonerGroundMovementParameters           WeaponAiming;                                             // 0x0018(0x000C) (CPF_Edit)
	struct FPrisonerGroundMovementParameters           WeaponAimingDownTheSights;                                // 0x0024(0x000C) (CPF_Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing_Jogging
// 0x0024
struct FPrisonerMovementSettings_Ground_Standing_Jogging
{
	struct FPrisonerGroundMovementParameters           Default;                                                  // 0x0000(0x000C) (CPF_Edit)
	struct FPrisonerGroundMovementParameters           MeleeCombat;                                              // 0x000C(0x000C) (CPF_Edit)
	struct FPrisonerGroundMovementParameters           WeaponAiming;                                             // 0x0018(0x000C) (CPF_Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing_Running
// 0x000C
struct FPrisonerMovementSettings_Ground_Standing_Running
{
	struct FPrisonerGroundMovementParameters           Default;                                                  // 0x0000(0x000C) (CPF_Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing
// 0x0060
struct FPrisonerMovementSettings_Ground_Standing
{
	struct FPrisonerMovementSettings_Ground_Standing_Walking Walking;                                                  // 0x0000(0x0030) (CPF_Edit)
	struct FPrisonerMovementSettings_Ground_Standing_Jogging Jogging;                                                  // 0x0030(0x0024) (CPF_Edit)
	struct FPrisonerMovementSettings_Ground_Standing_Running Running;                                                  // 0x0054(0x000C) (CPF_Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Crouching_Walking
// 0x0024
struct FPrisonerMovementSettings_Ground_Crouching_Walking
{
	struct FPrisonerGroundMovementParameters           Default;                                                  // 0x0000(0x000C) (CPF_Edit)
	struct FPrisonerGroundMovementParameters           WeaponAiming;                                             // 0x000C(0x000C) (CPF_Edit)
	struct FPrisonerGroundMovementParameters           WeaponAimingDownTheSights;                                // 0x0018(0x000C) (CPF_Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Crouching
// 0x0048
struct FPrisonerMovementSettings_Ground_Crouching
{
	struct FPrisonerMovementSettings_Ground_Crouching_Walking Walking;                                                  // 0x0000(0x0024) (CPF_Edit)
	struct FPrisonerMovementSettings_Ground_Crouching_Walking WalkingFaster;                                            // 0x0024(0x0024) (CPF_Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Prone_Walking
// 0x0024
struct FPrisonerMovementSettings_Ground_Prone_Walking
{
	struct FPrisonerGroundMovementParameters           Default;                                                  // 0x0000(0x000C) (CPF_Edit)
	struct FPrisonerGroundMovementParameters           WeaponAiming;                                             // 0x000C(0x000C) (CPF_Edit)
	struct FPrisonerGroundMovementParameters           WeaponAimingDownTheSights;                                // 0x0018(0x000C) (CPF_Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Prone
// 0x0024
struct FPrisonerMovementSettings_Ground_Prone
{
	struct FPrisonerMovementSettings_Ground_Prone_Walking Walking;                                                  // 0x0000(0x0024) (CPF_Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground
// 0x00F4
struct FPrisonerMovementSettings_Ground
{
	struct FPrisonerMovementSettings_Ground_Standing   Standing;                                                 // 0x0000(0x0060) (CPF_Edit)
	struct FPrisonerMovementSettings_Ground_Crouching  Crouching;                                                // 0x0060(0x0048) (CPF_Edit)
	struct FPrisonerMovementSettings_Ground_Prone      Prone;                                                    // 0x00A8(0x0024) (CPF_Edit)
	float                                              MaxSpeedMultiplierWhenDexterityIsMinimal;                 // 0x00CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSpeedMultiplierWhenDexterityIsMaximal;                 // 0x00D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AccelerationMultiplierWhenDexterityIsMinimal;             // 0x00D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AccelerationMultiplierWhenDexterityIsMaximal;             // 0x00D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DecelerationMultiplierWhenDexterityIsMinimal;             // 0x00DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DecelerationMultiplierWhenDexterityIsMaximal;             // 0x00E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSpeedWhenImmersedInWaterAndDexterityIsMinimal;         // 0x00E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSpeedWhenImmersedInWaterAndDexterityIsMaximal;         // 0x00E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AccelerationMultiplierWhenImmersedInWater;                // 0x00EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DecelerationMultiplierWhenImmersedInWater;                // 0x00F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Air
// 0x000C
struct FPrisonerMovementSettings_Air
{
	float                                              JumpZVelocity;                                            // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              JumpZVelocityMultiplierWhenDexterityIsMinimal;            // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              JumpZVelocityMultiplierWhenDexterityIsMaximal;            // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Water
// 0x0048
struct FPrisonerMovementSettings_Water
{
	struct FPrisonerWaterMovementParameters            Slow;                                                     // 0x0000(0x000C) (CPF_Edit)
	struct FPrisonerWaterMovementParameters            Medium;                                                   // 0x000C(0x000C) (CPF_Edit)
	struct FPrisonerWaterMovementParameters            Fast;                                                     // 0x0018(0x000C) (CPF_Edit)
	struct FPrisonerWaterMovementParameters            Diving;                                                   // 0x0024(0x000C) (CPF_Edit)
	float                                              MaxSpeedMultiplierWhenDexterityIsMinimal;                 // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSpeedMultiplierWhenDexterityIsMaximal;                 // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AccelerationMultiplierWhenDexterityIsMinimal;             // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AccelerationMultiplierWhenDexterityIsMaximal;             // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DecelerationMultiplierWhenDexterityIsMinimal;             // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DecelerationMultiplierWhenDexterityIsMaximal;             // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.PlayerLoginInfo
// 0x0058
struct FPlayerLoginInfo
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FDbIntegerId                                UserProfileId;                                            // 0x0010(0x0008) (CPF_BlueprintVisible)
	struct FString                                     UserProfileName;                                          // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               IsDeluxeUser;                                             // 0x0028(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               PlayAsDrone;                                              // 0x0029(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	struct FString                                     ServerName;                                               // 0x0030(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                ServerResponsePort;                                       // 0x0040(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FDbIntegerId                                ServerUserProfileId;                                      // 0x0048(0x0008) (CPF_BlueprintVisible)
	float                                              TimeToRemainInGameAfterLeaveGameRequest;                  // 0x0050(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerInitialSkillInfo
// 0x0010
struct FPrisonerInitialSkillInfo
{
	class USkill*                                      Skill;                                                    // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	ESkillLevel                                        InitialLevel;                                             // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              InitialExperiencePoints;                                  // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.MedicalRecord
// 0x0028
struct FMedicalRecord
{
	uint32_t                                           ID;                                                       // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class APrisoner*                                   Patient;                                                  // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CheckSuccessful;                                          // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<uint32_t>                                   Diagnoses;                                                // 0x0018(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct ConZ.SkillRecord
// 0x000C
struct FSkillRecord
{
	ESkillReplicationID                                ID;                                                       // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ExperiencePoints;                                         // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	ESkillLevel                                        Level;                                                    // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int8_t                                             counter;                                                  // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.ActiveMovingThroughFoliageSounds
// 0x0020
struct FActiveMovingThroughFoliageSounds
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UAkAudioEvent*                               StartAudioEvent;                                          // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StopAudioEvent;                                           // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.LocalOffsetCurves
// 0x0020
struct FLocalOffsetCurves
{
	class UCurveLinearColor*                           YawIdle;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveLinearColor*                           YawMoving;                                                // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveLinearColor*                           PitchIdle;                                                // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveLinearColor*                           PitchMoving;                                              // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.ProjectileData
// 0x0028
struct FProjectileData
{
	float                                              Caliber;                                                  // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Weight;                                                   // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MuzzleVelocity;                                           // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BallisticCoefficient;                                     // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	EBallisticDragModel                                BallisticDragModel;                                       // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              InitialDamage;                                            // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PenetrationFactor;                                        // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.ImpactEffectData
// 0x0010
struct FImpactEffectData
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterial*                                   Decal;                                                    // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.RunningSkillParametersPerSkillLevel
// 0x0010
struct FRunningSkillParametersPerSkillLevel
{
	struct FExperienceDependentFloat                   MaxSpeedMultiplier;                                       // 0x0000(0x0008) (CPF_Edit)
	struct FExperienceDependentFloat                   StaminaConsumptionMultiplier;                             // 0x0008(0x0008) (CPF_Edit)
};

// ScriptStruct ConZ.SearchPerItemData
// 0x0028
struct FSearchPerItemData
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UPhysicalMaterial*>                   NeededMaterials;                                          // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              Probability;                                              // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinQuantity;                                              // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxQuantity;                                              // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.PatrolPoint
// 0x0020
struct FPatrolPoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              MinWaitDuration;                                          // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxWaitDuration;                                          // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // 0x0014(0x000C) (CPF_IsPlainOldData)
};

// ScriptStruct ConZ.DangerZone
// 0x0028
struct FDangerZone
{
	struct FVector                                     GuardLocation;                                            // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class ASentryGuardVolume*                          Area;                                                     // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     GuardWorldLocation;                                       // 0x0018(0x000C) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ServerInfo
// 0x0050
struct FServerInfo
{
	struct FString                                     Address;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                Port;                                                     // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      PlayerCount;                                              // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MaxPlayerCount;                                           // 0x0029(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               PasswordProtected;                                        // 0x002A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x002B(0x0001) MISSED OFFSET
	float                                              ping;                                                     // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InGameTime;                                               // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     Version;                                                  // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               IsComplete;                                               // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.ParticleCollisionDecalData
// 0x0018
struct FParticleCollisionDecalData
{
	class UMaterialInterface*                          Decal;                                                    // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinSize;                                                  // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSize;                                                  // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinLifetime;                                              // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxLifetime;                                              // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.HandsPoseCorrections
// 0x0040
struct FHandsPoseCorrections
{
	class UAnimSequenceBase*                           RightHand;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           RightFist;                                                // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           RightFistInCombatMode;                                    // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RightHandToIdleBlendAlpha;                                // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           LeftHand;                                                 // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           LeftFist;                                                 // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           LeftFistInCombatMode;                                     // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LeftHandToIdleBlendAlpha;                                 // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.TeamDeathmatchParameters
// 0x0014
struct FTeamDeathmatchParameters
{
	int                                                RoundScoreLimit;                                          // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AreaRestrictionInterval;                                  // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AreaRestrictionDuration;                                  // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AreaRestrictionStep;                                      // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BarrierHeatUpDuration;                                    // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.VehicleCorpseBurningParticles
// 0x0060
struct FVehicleCorpseBurningParticles
{
	class UParticleSystem*                             Particles;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  ParticlesTransform;                                       // 0x0010(0x0030) (CPF_Edit, CPF_IsPlainOldData)
	bool                                               HasHeatEmitter;                                           // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FHeatEmitter                                HeatEmitter;                                              // 0x0044(0x001C) (CPF_Edit)
};

// ScriptStruct ConZ.VehicleSpawnerDataBasedOnPreset
// 0x0028
struct FVehicleSpawnerDataBasedOnPreset
{
	class UClass*                                      preset;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OverrideVehicleClasses;                                   // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OverrideProbability;                                      // 0x0009(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	TArray<TSoftObjectPtr<class UClass>>               VehicleClasses;                                           // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              Probability;                                              // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleSpawnerMarker
// 0x0060
struct FVehicleSpawnerMarker
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (CPF_Edit, CPF_IsPlainOldData)
	struct FVehicleSpawnerDataBasedOnPreset            Spawner;                                                  // 0x0030(0x0028) (CPF_Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleSpawnerData
// 0x0018
struct FVehicleSpawnerData
{
	TArray<TSoftObjectPtr<class UClass>>               VehicleClasses;                                           // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              Probability;                                              // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.Waypoint
// 0x0030
struct FWaypoint
{
	EAnimalWaypointType                                Type;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     Center;                                                   // 0x0004(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ID;                                                       // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                AnimalsSpawnedNum;                                        // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<TWeakObjectPtr<class AAnimal2>>             SpawnedAnimals;                                           // 0x0020(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct ConZ.ZombieTurnMontageDescription
// 0x0040
struct FZombieTurnMontageDescription
{
	class UAnimSequenceBase*                           AnimationL90;                                             // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           AnimationL180;                                            // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           AnimationR90;                                             // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           AnimationR180;                                            // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TurnAngleCurveName;                                       // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SlotName;                                                 // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlendInTime;                                              // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlendOutTriggerTime;                                      // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayRate;                                                 // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.ZombieAttackDescription
// 0x0020
struct FZombieAttackDescription
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFloatInterval                              PitchRange;                                               // 0x0008(0x0008) (CPF_Edit)
	float                                              MinDistance;                                              // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RegainControlMultiplier;                                  // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ZombieRagdollAutoRecovery
// 0x0008
struct FZombieRagdollAutoRecovery
{
	EZombieRagdollAutoRecoveryType                     Type;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Timespan;                                                 // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.ZombieMeshVariation
// 0x0018
struct FZombieMeshVariation
{
	struct FGameplayTag                                Name;                                                     // 0x0000(0x0008) (CPF_Edit)
	class USkeletalMesh*                               DressedMesh;                                              // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USkeletalMesh*                               StrippedMesh;                                             // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.ZombieAttributesVariation
// 0x0040
struct FZombieAttributesVariation
{
	struct FGameplayTagContainer                       CompatibleMeshVariations;                                 // 0x0000(0x0020) (CPF_Edit)
	float                                              HitPoints;                                                // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReceivedMeleeDamageMultiplier;                            // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReceivedMeleeDamageKnockoutChanceMultiplier;              // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InflictedMeleeDamageMultiplier;                           // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinConsecutiveReceivedDamageRatioToBeKnockedOut;          // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxConsecutiveReceivedDamageRatioToBeKnockedOut;          // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinNumConsecutiveReceivedMeleeHitsToBeKnockedOut;         // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxNumConsecutiveReceivedMeleeHitsToBeKnockedOut;         // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.ZombieRelaxedStanceVariation
// 0x0040
struct FZombieRelaxedStanceVariation
{
	struct FGameplayTagContainer                       CompatibleMeshVariations;                                 // 0x0000(0x0020) (CPF_Edit)
	class UAnimSequenceBase*                           WalkLoopAnimation;                                        // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WalkAcceleration;                                         // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WalkDeceleration;                                         // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WalkSpeed;                                                // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WalkSpeedInAnimation;                                     // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WalkTurnRate;                                             // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ZombieCombatStanceVariation
// 0x0050
struct FZombieCombatStanceVariation
{
	struct FGameplayTagContainer                       CompatibleMeshVariations;                                 // 0x0000(0x0020) (CPF_Edit)
	class UAnimSequenceBase*                           RunStartAnimation;                                        // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           RunLoopAnimation;                                         // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           RunStopAnimation;                                         // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RunAcceleration;                                          // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RunDeceleration;                                          // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RunSpeed;                                                 // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RunSpeedInAnimation;                                      // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RunTurnRate;                                              // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ZombiesVariations
// 0x0040
struct FZombiesVariations
{
	TArray<struct FZombieMeshVariation>                MeshVariations;                                           // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FZombieAttributesVariation>          AttributesVariations;                                     // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FZombieRelaxedStanceVariation>       RelaxedStanceVariations;                                  // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FZombieCombatStanceVariation>        CombatStanceVariations;                                   // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct ConZ.AnimalData
// 0x0028
struct FAnimalData
{
	class UClass*                                      AnimalClass;                                              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	TArray<class AAnimal2*>                            AliveAnimals;                                             // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	TArray<class ACorpse*>                             DeadAnimals;                                              // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
};

// ScriptStruct ConZ.FortificationMarkerParams
// 0x0030
struct FFortificationMarkerParams
{
	bool                                               IsValid;                                                  // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                MarkerIndex;                                              // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 Mesh;                                                     // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (CPF_IsPlainOldData)
	float                                              Scale;                                                    // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.HitByMeleeImpactSoundsInfo
// 0x0010
struct FHitByMeleeImpactSoundsInfo
{
	ECharacterImpactSourceSoundCategory                ImpactSourceSoundCategory;                                // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EDamageMagnitudeType                               DamageMagnitudeType;                                      // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EDetectHitCollisionType                            ImpactBodyPart;                                           // 0x0002(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FVector                                     ImpactPoint;                                              // 0x0004(0x000C) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.SelectedChoppingTool
// 0x0040
struct FSelectedChoppingTool
{
	class AItem*                                       Item;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FChoppingTool2                              Tool;                                                     // 0x0008(0x0030)
	bool                                               IsRequiredToBeInHands;                                    // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.RecipeAvailabilityState
// 0x00C8
struct FRecipeAvailabilityState
{
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0000(0x00C8) MISSED OFFSET
};

// ScriptStruct ConZ.RecipeItemState
// 0x001C
struct FRecipeItemState
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct ConZ.CraftingPart
// 0x0028
struct FCraftingPart
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct ConZ.ExplosionRadialDamageEvent
// 0x0010 (0x0050 - 0x0040)
struct FExplosionRadialDamageEvent : public FRadialDamageEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.PlayerPawnBirdInfo
// 0x0010
struct FPlayerPawnBirdInfo
{
	int                                                CoastalBirdsinProximity;                                  // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                ContinetalBirdsinProximity;                               // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                VirtualAssignedCoastalBirds;                              // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                VirtualAssignedContinentalBirds;                          // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.HitReactResult
// 0x0018
struct FHitReactResult
{
	class UAnimMontage*                                MontageToPlay;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                FollowupMontage;                                          // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RegainControlDurationMultiplier;                          // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.InstanceManager
// 0x0058
struct FInstanceManager
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct ConZ.VirtualizedItemDescription
// 0x0008
struct FVirtualizedItemDescription
{
	TWeakObjectPtr<class AItem>                        Item;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.LandingDamageEvent
// 0x0010 (0x00B8 - 0x00A8)
struct FLandingDamageEvent : public FPointDamageEvent
{
	struct FVector                                     ImpactVelocity;                                           // 0x00A8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeDodge
// 0x0010
struct FMeleeDodge
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeAttack
// 0x0018
struct FMeleeAttack
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ConZ.MeleePointDamageEvent
// 0x0058 (0x0100 - 0x00A8)
struct FMeleePointDamageEvent : public FPointDamageEvent
{
	struct FMeleeWeaponDesc                            WeaponDesc;                                               // 0x00A8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTag                                AttackCapsuleAttachment;                                  // 0x00D0(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	EDetectHitCollisionType                            DetectHitCollisionType;                                   // 0x00D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	class UAnimMontage*                                AttackMontage;                                            // 0x00E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EDamageMagnitudeType                               DamageMagnitudeType;                                      // 0x00E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	float                                              KnockoutChance;                                           // 0x00EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EHitDirectionType                                  HitDirectionType;                                         // 0x00F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	class AItem*                                       Weapon;                                                   // 0x00F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.MeshInstancesMap
// 0x0050
struct FMeshInstancesMap
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct ConZ.MeshInstances
// 0x0050
struct FMeshInstances
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct ConZ.MeshInstance
// 0x0038
struct FMeshInstance
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct ConZ.MeshItemData
// 0x0058
struct FMeshItemData
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct ConZ.BodyPartInjury
// 0x0008
struct FBodyPartInjury
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.InstrumentEvent
// 0x0010
struct FInstrumentEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.WindowDetectionParams
// 0x0038
struct FWindowDetectionParams
{
	struct FVector                                     CharacterHeadLocation;                                    // 0x0000(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     CharacterFeetLocation;                                    // 0x000C(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     CharacterForwardVector;                                   // 0x0018(0x000C) (CPF_IsPlainOldData)
	float                                              MaxHorzDistanceToWindow;                                  // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxCharacterToWindowAngle;                                // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HorzHitDetectionBias;                                     // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HitDetectionBiasBelowWindow;                              // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HitDetectionBiasAboveWindow;                              // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.LadderDetectionParams
// 0x002C
struct FLadderDetectionParams
{
	struct FVector                                     RayOrigin;                                                // 0x0000(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     RayDirection;                                             // 0x000C(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     CharacterLocation;                                        // 0x0018(0x000C) (CPF_IsPlainOldData)
	float                                              MaxHorzDistanceToLadder;                                  // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxRayToLadderAngle;                                      // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerViolation
// 0x0010
struct FPrisonerViolation
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerViewInfo
// 0x0010 (0x0580 - 0x0570)
struct FPrisonerViewInfo : public FMinimalViewInfo
{
	float                                              MinViewYaw;                                               // 0x0568(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxViewYaw;                                               // 0x056C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinViewPitch;                                             // 0x0570(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxViewPitch;                                             // 0x0574(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0578(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ProjectileRadialDamageEvent
// 0x0010 (0x0050 - 0x0040)
struct FProjectileRadialDamageEvent : public FRadialDamageEvent
{
	struct FVector_NetQuantizeNormal                   ShotDirection;                                            // 0x0040(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.SkillEventThrownItemHitTarget
// 0x0008
struct FSkillEventThrownItemHitTarget
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.SkillEventItemThrown
// 0x0001
struct FSkillEventItemThrown
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ConZ.SkillEventWeaponReload
// 0x0000 (0x0001 - 0x0001)
struct FSkillEventWeaponReload : public FSkillEventWeapon
{

};

// ScriptStruct ConZ.SkillEventWeaponFireShot
// 0x0000 (0x0001 - 0x0001)
struct FSkillEventWeaponFireShot : public FSkillEventWeapon
{

};

// ScriptStruct ConZ.StaticMeshInstanceId
// 0x0010
struct FStaticMeshInstanceId
{
	class UInstancedStaticMeshComponent*               Component;                                                // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                InstanceIndex;                                            // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ThrowingPointDamageEvent
// 0x0018 (0x00C0 - 0x00A8)
struct FThrowingPointDamageEvent : public FPointDamageEvent
{
	TWeakObjectPtr<class AActor>                       ThrownActor;                                              // 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     HitVelocity;                                              // 0x00B0(0x000C) (CPF_IsPlainOldData)
	bool                                               IsHeadUpperShot;                                          // 0x00BC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DidPierce;                                                // 0x00BD(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00BE(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.Version
// 0x0010
struct FVersion
{
	int                                                Major;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Minor;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Build;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Revision;                                                 // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ConZ.WeaponSyncData
// 0x000C
struct FWeaponSyncData
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct ConZ.WorldEventDrawData
// 0x0040
struct FWorldEventDrawData
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
