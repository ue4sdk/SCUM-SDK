#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_CoreUObject_classes.hpp"
#include "SCUM_UMG_classes.hpp"
#include "SCUM_Engine_classes.hpp"
#include "SCUM_GameplayTags_classes.hpp"
#include "SCUM_AIModule_classes.hpp"
#include "SCUM_SlateCore_classes.hpp"
#include "SCUM_Foliage_classes.hpp"
#include "SCUM_DonAINavigation_classes.hpp"
#include "SCUM_AkAudio_classes.hpp"
#include "SCUM_InputCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ConZ.EInteractionType
enum class EInteractionType : uint8_t
{
	EInteractionType__None         = 0,
	EInteractionType__Select       = 1,
	EInteractionType__UnSelectAll  = 2,
	EInteractionType__Search       = 3,
	EInteractionType__Examine      = 4,
	EInteractionType__PickUp       = 5,
	EInteractionType__PickUpAllExamined = 6,
	EInteractionType__PickUpAllSelected = 7,
	EInteractionType__Use          = 8,
	EInteractionType__Operate      = 9,
	EInteractionType__Drop         = 10,
	EInteractionType__DropAllSelected = 11,
	EInteractionType__Throw        = 12,
	EInteractionType__Open         = 13,
	EInteractionType__Close        = 14,
	EInteractionType__Lock         = 15,
	EInteractionType__Unlock       = 16,
	EInteractionType__Fill         = 17,
	EInteractionType__Tank         = 18,
	EInteractionType__Craft        = 19,
	EInteractionType__Uncraft      = 20,
	EInteractionType__Create       = 21,
	EInteractionType__Fix          = 22,
	EInteractionType__Eat          = 23,
	EInteractionType__EatAll       = 24,
	EInteractionType__Drink        = 25,
	EInteractionType__DrinkAll     = 26,
	EInteractionType__Equip        = 27,
	EInteractionType__UnEquip      = 28,
	EInteractionType__Cut          = 29,
	EInteractionType__Collect      = 30,
	EInteractionType__LightFire    = 31,
	EInteractionType__Prepare      = 32,
	EInteractionType__Cook         = 33,
	EInteractionType__Chop         = 34,
	EInteractionType__SmokeFood    = 35,
	EInteractionType__Destroy      = 36,
	EInteractionType__Store        = 37,
	EInteractionType__TakeInHands  = 38,
	EInteractionType__RemoveFromHands = 39,
	EInteractionType__AddToQuickAccess = 40,
	EInteractionType__RemoveFromQuickAccess = 41,
	EInteractionType__ChamberBullet = 42,
	EInteractionType__LoadAmmo     = 43,
	EInteractionType__UnloadAmmo   = 44,
	EInteractionType__Swap         = 45,
	EInteractionType__Join         = 46,
	EInteractionType__Split        = 47,
	EInteractionType__Unpack       = 48,
	EInteractionType__CheckPulse   = 49,
	EInteractionType__Diagnose     = 50,
	EInteractionType__MakeConscious = 51,
	EInteractionType__ArtificalPerspiration = 52,
	EInteractionType__PullTooth    = 53,
	EInteractionType__PatchWounds  = 54,
	EInteractionType__ImmobilizeLimbs = 55,
	EInteractionType__MendBones    = 56,
	EInteractionType__TreatSickness = 57,
	EInteractionType__PerformLocalAnesthesia = 58,
	EInteractionType__PerformGeneralAnesthesia = 59,
	EInteractionType__PerformSurgery = 60,
	EInteractionType__RevivePatient = 61,
	EInteractionType__InviteToTeam = 62,
	EInteractionType__RemoveFromTeam = 63,
	EInteractionType__LeaveTeam    = 64,
	EInteractionType__Urinate      = 65,
	EInteractionType__Defecate     = 66,
	EInteractionType__Vomit        = 67,
	EInteractionType__CheckTime    = 68,
	EInteractionType__MakeUnconscious = 69,
	EInteractionType__PacifyAnimal = 70,
	EInteractionType__TameAnimal   = 71,
	EInteractionType__LearnAnimal  = 72,
	EInteractionType__CommandAnimal = 73,
	EInteractionType__FeedAnimal   = 74,
	EInteractionType__EInteractionType_MAX = 75
};


// Enum ConZ.EWidgetDisplayInfoType
enum class EWidgetDisplayInfoType : uint8_t
{
	EWidgetDisplayInfoType__None   = 0,
	EWidgetDisplayInfoType__FirstOverSecond = 1,
	EWidgetDisplayInfoType__Single = 2,
	EWidgetDisplayInfoType__EWidgetDisplayInfoType_MAX = 3
};


// Enum ConZ.EItemNoiseLevel
enum class EItemNoiseLevel : uint8_t
{
	EItemNoiseLevel__Mute          = 0,
	EItemNoiseLevel__VerySilent    = 1,
	EItemNoiseLevel__Silent        = 2,
	EItemNoiseLevel__Moderate      = 3,
	EItemNoiseLevel__Loud          = 4,
	EItemNoiseLevel__VeryLoud      = 5,
	EItemNoiseLevel__EItemNoiseLevel_MAX = 6
};


// Enum ConZ.EItemExhausted
enum class EItemExhausted : uint8_t
{
	EItemExhausted__DoNothing      = 0,
	EItemExhausted__Destroy        = 1,
	EItemExhausted__Uncraft        = 2,
	EItemExhausted__EItemExhausted_MAX = 3
};


// Enum ConZ.EItemRarity
enum class EItemRarity : uint8_t
{
	EItemRarity__ExtremelyRare     = 0,
	EItemRarity__VeryRare          = 1,
	EItemRarity__Rare              = 2,
	EItemRarity__Uncommon          = 3,
	EItemRarity__Common            = 4,
	EItemRarity__Abundant          = 5,
	EItemRarity__Count             = 6,
	EItemRarity__EItemRarity_MAX   = 7
};


// Enum ConZ.EAnimalAction
enum class EAnimalAction : uint8_t
{
	EAnimalAction__None            = 0,
	EAnimalAction__Eat             = 1,
	EAnimalAction__Rest            = 2,
	EAnimalAction__Attack          = 3,
	EAnimalAction__Sit             = 4,
	EAnimalAction__Wait            = 5,
	EAnimalAction__Intimidate      = 6,
	EAnimalAction__Alert           = 7,
	EAnimalAction__Turn            = 8,
	EAnimalAction__EAnimalAction_MAX = 9
};


// Enum ConZ.EBodyPart
enum class EBodyPart : uint8_t
{
	EBodyPart__Unknown             = 0,
	EBodyPart__Head                = 1,
	EBodyPart__Chest               = 2,
	EBodyPart__Abdomen             = 3,
	EBodyPart__ArmLeftLower        = 4,
	EBodyPart__ArmLeftUpper        = 5,
	EBodyPart__ArmRightLower       = 6,
	EBodyPart__ArmRightUpper       = 7,
	EBodyPart__LegLeftLower        = 8,
	EBodyPart__LegLeftUpper        = 9,
	EBodyPart__LegRightLower       = 10,
	EBodyPart__LegRightUpper       = 11,
	EBodyPart__Num                 = 12,
	EBodyPart__EBodyPart_MAX       = 13
};


// Enum ConZ.EEnvironmentClass
enum class EEnvironmentClass : uint8_t
{
	EEnvironmentClass__Indoor_Small = 0,
	EEnvironmentClass__Indoor_Medium = 1,
	EEnvironmentClass__Indoor_Large = 2,
	EEnvironmentClass__Outdoor_Large = 3,
	EEnvironmentClass__Count       = 4,
	EEnvironmentClass__EEnvironmentClass_MAX = 5
};


// Enum ConZ.EGender
enum class EGender : uint8_t
{
	EGender__Unspecified           = 0,
	EGender__Male                  = 1,
	EGender__Female                = 2,
	EGender__EGender_MAX           = 3
};


// Enum ConZ.EDetectHitCollisionType
enum class EDetectHitCollisionType : uint8_t
{
	EDetectHitCollisionType__None  = 0,
	EDetectHitCollisionType__Head  = 1,
	EDetectHitCollisionType__Body  = 2,
	EDetectHitCollisionType__Legs  = 3,
	EDetectHitCollisionType__EDetectHitCollisionType_MAX = 4
};


// Enum ConZ.EDamageMagnitudeType
enum class EDamageMagnitudeType : uint8_t
{
	EDamageMagnitudeType__Small    = 0,
	EDamageMagnitudeType__Medium   = 1,
	EDamageMagnitudeType__Large    = 2,
	EDamageMagnitudeType__Knockout = 3,
	EDamageMagnitudeType__EDamageMagnitudeType_MAX = 4
};


// Enum ConZ.ECharacterImpactSourceSoundCategory
enum class ECharacterImpactSourceSoundCategory : uint8_t
{
	ECharacterImpactSourceSoundCategory__Any = 0,
	ECharacterImpactSourceSoundCategory__Head_Bare = 1,
	ECharacterImpactSourceSoundCategory__Hands_Bare = 2,
	ECharacterImpactSourceSoundCategory__Hands_Gloved = 3,
	ECharacterImpactSourceSoundCategory__Legs_Bare = 4,
	ECharacterImpactSourceSoundCategory__Claws = 5,
	ECharacterImpactSourceSoundCategory__Jaws = 6,
	ECharacterImpactSourceSoundCategory__Blunt_Wood = 7,
	ECharacterImpactSourceSoundCategory__Blunt_Metal = 8,
	ECharacterImpactSourceSoundCategory__Sharp_Metal = 9,
	ECharacterImpactSourceSoundCategory__ECharacterImpactSourceSoundCategory_MAX = 10
};


// Enum ConZ.EPrisonerMovementPace
enum class EPrisonerMovementPace : uint8_t
{
	EPrisonerMovementPace__NotMoving = 0,
	EPrisonerMovementPace__Slow    = 1,
	EPrisonerMovementPace__Medium  = 2,
	EPrisonerMovementPace__Fast    = 3,
	EPrisonerMovementPace__EPrisonerMovementPace_MAX = 4
};


// Enum ConZ.EPrisonerBorderCrossingPenalty
enum class EPrisonerBorderCrossingPenalty : uint8_t
{
	EPrisonerBorderCrossingPenalty__None = 0,
	EPrisonerBorderCrossingPenalty__Penalty1 = 1,
	EPrisonerBorderCrossingPenalty__Penalty2 = 2,
	EPrisonerBorderCrossingPenalty__Penalty3 = 3,
	EPrisonerBorderCrossingPenalty__Penalty4 = 4,
	EPrisonerBorderCrossingPenalty__DeadPenalty = 5,
	EPrisonerBorderCrossingPenalty__EPrisonerBorderCrossingPenalty_MAX = 6
};


// Enum ConZ.EPrisonerCombatMode
enum class EPrisonerCombatMode : uint8_t
{
	EPrisonerCombatMode__None      = 0,
	EPrisonerCombatMode__MeleeUnarmed = 1,
	EPrisonerCombatMode__MeleeWeapon = 2,
	EPrisonerCombatMode__Firearm   = 3,
	EPrisonerCombatMode__EPrisonerCombatMode_MAX = 4
};


// Enum ConZ.EHoldBreathState
enum class EHoldBreathState : uint8_t
{
	EHoldBreathState__None         = 0,
	EHoldBreathState__BreathIn     = 1,
	EHoldBreathState__HoldBreath   = 2,
	EHoldBreathState__BreathOut    = 3,
	EHoldBreathState__Breathless   = 4,
	EHoldBreathState__BreathInRecovery = 5,
	EHoldBreathState__Count        = 6,
	EHoldBreathState__EHoldBreathState_MAX = 7
};


// Enum ConZ.EPrisonerWettablePart
enum class EPrisonerWettablePart : uint8_t
{
	EPrisonerWettablePart__Head    = 0,
	EPrisonerWettablePart__UpperBody = 1,
	EPrisonerWettablePart__LowerBody = 2,
	EPrisonerWettablePart__Feet    = 3,
	EPrisonerWettablePart__Count   = 4,
	EPrisonerWettablePart__EPrisonerWettablePart_MAX = 5
};


// Enum ConZ.EPrisonerMeleeTargetSelectionMode
enum class EPrisonerMeleeTargetSelectionMode : uint8_t
{
	EPrisonerMeleeTargetSelectionMode__Manual = 0,
	EPrisonerMeleeTargetSelectionMode__SemiAutomatic = 1,
	EPrisonerMeleeTargetSelectionMode__Automatic = 2,
	EPrisonerMeleeTargetSelectionMode__EPrisonerMeleeTargetSelectionMode_MAX = 3
};


// Enum ConZ.EMotionIntensity
enum class EMotionIntensity : uint8_t
{
	EMotionIntensity__None         = 0,
	EMotionIntensity__Light        = 1,
	EMotionIntensity__Medium       = 2,
	EMotionIntensity__Heavy        = 3,
	EMotionIntensity__EMotionIntensity_MAX = 4
};


// Enum ConZ.EPrisonerStance
enum class EPrisonerStance : uint8_t
{
	EPrisonerStance__Standing      = 0,
	EPrisonerStance__Crouching     = 1,
	EPrisonerStance__Prone         = 2,
	EPrisonerStance__Count         = 3,
	EPrisonerStance__EPrisonerStance_MAX = 4
};


// Enum ConZ.EPrisonerTeleportState
enum class EPrisonerTeleportState : uint8_t
{
	EPrisonerTeleportState__None   = 0,
	EPrisonerTeleportState__FadeOut = 1,
	EPrisonerTeleportState__WaitUntilReady = 2,
	EPrisonerTeleportState__SpawnScreen = 3,
	EPrisonerTeleportState__FadeIn = 4,
	EPrisonerTeleportState__EPrisonerTeleportState_MAX = 5
};


// Enum ConZ.ESkillLevel
enum class ESkillLevel : uint8_t
{
	ESkillLevel__NoSkill           = 0,
	ESkillLevel__Basic             = 1,
	ESkillLevel__Medium            = 2,
	ESkillLevel__Advanced          = 3,
	ESkillLevel__AboveAdvanced     = 4,
	ESkillLevel__ESkillLevel_MAX   = 5
};


// Enum ConZ.ESkillAttribute
enum class ESkillAttribute : uint8_t
{
	ESkillAttribute__Constitution  = 0,
	ESkillAttribute__Dexterity     = 1,
	ESkillAttribute__Intelligence  = 2,
	ESkillAttribute__Strength      = 3,
	ESkillAttribute__ESkillAttribute_MAX = 4
};


// Enum ConZ.EBodyState
enum class EBodyState : uint8_t
{
	EBodyState__FullyFed           = 0,
	EBodyState__Hungry             = 1,
	EBodyState__Starving           = 2,
	EBodyState__WellHydrated       = 3,
	EBodyState__Hydrated           = 4,
	EBodyState__Thirsty            = 5,
	EBodyState__VeryThirsty        = 6,
	EBodyState__Dehydrated         = 7,
	EBodyState__UrinationNeeded    = 8,
	EBodyState__ForcedUrination    = 9,
	EBodyState__DefecationNeeded   = 10,
	EBodyState__ForcedDefecation   = 11,
	EBodyState__Choking            = 12,
	EBodyState__Unconsciousness    = 13,
	EBodyState__Coma               = 14,
	EBodyState__Death              = 15,
	EBodyState__LowBloodSugar      = 16,
	EBodyState__NoseBleeding       = 17,
	EBodyState__FeelingCold        = 18,
	EBodyState__Fatigue            = 19,
	EBodyState__HeartPalpitations  = 20,
	EBodyState__RespiratoryProblems = 21,
	EBodyState__RespiratoryFailure = 22,
	EBodyState__Confusion          = 23,
	EBodyState__Nausea             = 24,
	EBodyState__BlurredVision      = 25,
	EBodyState__NightBlindness     = 26,
	EBodyState__Pellagra           = 27,
	EBodyState__PainfulJoints      = 28,
	EBodyState__SkinProblems       = 29,
	EBodyState__MuscleWeakness     = 30,
	EBodyState__ItchingFeet        = 31,
	EBodyState__Headache           = 32,
	EBodyState__LightChestPain     = 33,
	EBodyState__SeriousChestPain   = 34,
	EBodyState__CardiacArrest      = 35,
	EBodyState__GrayHair           = 36,
	EBodyState__HairLoss           = 37,
	EBodyState__ColdHands          = 38,
	EBodyState__Fever              = 39,
	EBodyState__ApetiteLoss        = 40,
	EBodyState__MemoryLoss         = 41,
	EBodyState__Anemia             = 42,
	EBodyState__Cramps             = 43,
	EBodyState__Numbness           = 44,
	EBodyState__Farts              = 45,
	EBodyState__Constipation       = 46,
	EBodyState__AbdominalPain      = 47,
	EBodyState__StomachPain        = 48,
	EBodyState__Seizures           = 49,
	EBodyState__Burping            = 50,
	EBodyState__Vomiting           = 51,
	EBodyState__StomachRupture     = 52,
	EBodyState__LiverFailure       = 53,
	EBodyState__Diarrhea           = 54,
	EBodyState__Dizziness          = 55,
	EBodyState__Depression         = 56,
	EBodyState__Lethargy           = 57,
	EBodyState__Hallucinations     = 58,
	EBodyState__Delirium           = 59,
	EBodyState__DecreasedConsciousness = 60,
	EBodyState__DifficultySleeping = 61,
	EBodyState__Overdose           = 62,
	EBodyState__Tiring             = 63,
	EBodyState__Fainting           = 64,
	EBodyState__Count              = 65,
	EBodyState__EBodyState_MAX     = 66
};


// Enum ConZ.ECharacterActionEndState
enum class ECharacterActionEndState : uint8_t
{
	ECharacterActionEndState__None = 0,
	ECharacterActionEndState__Regular = 1,
	ECharacterActionEndState__ConditionNotMet = 2,
	ECharacterActionEndState__Canceled = 3,
	ECharacterActionEndState__Failed = 4,
	ECharacterActionEndState__Terminated = 5,
	ECharacterActionEndState__ECharacterActionEndState_MAX = 6
};


// Enum ConZ.ECharacterActionAckType
enum class ECharacterActionAckType : uint8_t
{
	ECharacterActionAckType__None  = 0,
	ECharacterActionAckType__Begin = 1,
	ECharacterActionAckType__End   = 2,
	ECharacterActionAckType__ECharacterActionAckType_MAX = 3
};


// Enum ConZ.ETabMode
enum class ETabMode : uint8_t
{
	ETabMode__None                 = 0,
	ETabMode__Inventory            = 1,
	ETabMode__EventsAndQuests      = 2,
	ETabMode__BCU                  = 3,
	ETabMode__Crafting             = 4,
	ETabMode__ETabMode_MAX         = 5
};


// Enum ConZ.EWeaponCategory
enum class EWeaponCategory : uint8_t
{
	EWeaponCategory__ThrowingWeapons = 0,
	EWeaponCategory__RangedWeapons = 1,
	EWeaponCategory__Handguns      = 2,
	EWeaponCategory__SubmachineGuns = 3,
	EWeaponCategory__Rifles        = 4,
	EWeaponCategory__Shotguns      = 5,
	EWeaponCategory__AutomaticRifles = 6,
	EWeaponCategory__SniperRifles  = 7,
	EWeaponCategory__Count         = 8,
	EWeaponCategory__EWeaponCategory_MAX = 9
};


// Enum ConZ.EWindSpeedCategory
enum class EWindSpeedCategory : uint8_t
{
	EWindSpeedCategory__Zero       = 0,
	EWindSpeedCategory__Low        = 1,
	EWindSpeedCategory__Medium     = 2,
	EWindSpeedCategory__High       = 3,
	EWindSpeedCategory__EWindSpeedCategory_MAX = 4
};


// Enum ConZ.EPrisonerCommonSpawnLocation
enum class EPrisonerCommonSpawnLocation : uint8_t
{
	EPrisonerCommonSpawnLocation__None = 0,
	EPrisonerCommonSpawnLocation__Random = 1,
	EPrisonerCommonSpawnLocation__Sector = 2,
	EPrisonerCommonSpawnLocation__Home = 3,
	EPrisonerCommonSpawnLocation__Squad = 4,
	EPrisonerCommonSpawnLocation__Event = 5,
	EPrisonerCommonSpawnLocation__EPrisonerCommonSpawnLocation_MAX = 6
};


// Enum ConZ.EThrowingMode
enum class EThrowingMode : uint8_t
{
	EThrowingMode__None            = 0,
	EThrowingMode__Cancelled       = 1,
	EThrowingMode__Aiming          = 2,
	EThrowingMode__Throwing        = 3,
	EThrowingMode__EThrowingMode_MAX = 4
};


// Enum ConZ.EWeaponAimingType
enum class EWeaponAimingType : uint8_t
{
	EWeaponAimingType__None        = 0,
	EWeaponAimingType__Hip         = 1,
	EWeaponAimingType__DownTheSights = 2,
	EWeaponAimingType__EWeaponAimingType_MAX = 3
};


// Enum ConZ.EDodgeDirectionType
enum class EDodgeDirectionType : uint8_t
{
	EDodgeDirectionType__Front     = 0,
	EDodgeDirectionType__Back      = 1,
	EDodgeDirectionType__Left      = 2,
	EDodgeDirectionType__Right     = 3,
	EDodgeDirectionType__EDodgeDirectionType_MAX = 4
};


// Enum ConZ.EChatType
enum class EChatType : uint8_t
{
	EChatType__Default             = 0,
	EChatType__Local               = 1,
	EChatType__Global              = 2,
	EChatType__EChatType_MAX       = 3
};


// Enum ConZ.ECharacterStatsSorting
enum class ECharacterStatsSorting : uint8_t
{
	ECharacterStatsSorting__ByFamePoints = 0,
	ECharacterStatsSorting__ByEventScore = 1,
	ECharacterStatsSorting__ByEventKills = 2,
	ECharacterStatsSorting__ByEventDeaths = 3,
	ECharacterStatsSorting__ECharacterStatsSorting_MAX = 4
};


// Enum ConZ.EClothesType
enum class EClothesType : uint8_t
{
	EClothesType__None             = 0,
	EClothesType__HeadUpper        = 1,
	EClothesType__HeadUpperSkeletal = 2,
	EClothesType__HeadLower        = 3,
	EClothesType__Head             = 4,
	EClothesType__Eyes             = 5,
	EClothesType__Neck             = 6,
	EClothesType__Body_LongSleeves = 7,
	EClothesType__Body_ShortSleeves = 8,
	EClothesType__Body_Armor       = 9,
	EClothesType__Hands            = 10,
	EClothesType__Legs             = 11,
	EClothesType__Feet             = 12,
	EClothesType__Underwear        = 13,
	EClothesType__Back             = 14,
	EClothesType__Waist            = 15,
	EClothesType__Suit             = 16,
	EClothesType__Count            = 17,
	EClothesType__EClothesType_MAX = 18
};


// Enum ConZ.EBodySlot
enum class EBodySlot : uint8_t
{
	EBodySlot__Head                = 0,
	EBodySlot__Chest               = 1,
	EBodySlot__Legs                = 2,
	EBodySlot__Feet                = 3,
	EBodySlot__Count               = 4,
	EBodySlot__EBodySlot_MAX       = 5
};


// Enum ConZ.EItemContainerOperation
enum class EItemContainerOperation : uint8_t
{
	EItemContainerOperation__Initialize = 0,
	EItemContainerOperation__AddItem = 1,
	EItemContainerOperation__MoveItem = 2,
	EItemContainerOperation__RemoveItem = 3,
	EItemContainerOperation__Close = 4,
	EItemContainerOperation__EItemContainerOperation_MAX = 5
};


// Enum ConZ.EClothesPart
enum class EClothesPart : uint8_t
{
	EClothesPart__None             = 0,
	EClothesPart__BodyUpper        = 1,
	EClothesPart__BodyLower        = 2,
	EClothesPart__Head             = 3,
	EClothesPart__Eyes             = 4,
	EClothesPart__Neck             = 5,
	EClothesPart__Hands            = 6,
	EClothesPart__ArmUpper         = 7,
	EClothesPart__ArmLower         = 8,
	EClothesPart__Legs             = 9,
	EClothesPart__Feet             = 10,
	EClothesPart__EClothesPart_MAX = 11
};


// Enum ConZ.EBleedingType
enum class EBleedingType : uint8_t
{
	EBleedingType__None            = 0,
	EBleedingType__Scratch         = 1,
	EBleedingType__Small           = 2,
	EBleedingType__Large           = 3,
	EBleedingType__EBleedingType_MAX = 4
};


// Enum ConZ.EPrisonerActionDifficulty
enum class EPrisonerActionDifficulty : uint8_t
{
	EPrisonerActionDifficulty__None = 0,
	EPrisonerActionDifficulty__Easy = 1,
	EPrisonerActionDifficulty__Demanding = 2,
	EPrisonerActionDifficulty__VeryDemanding = 3,
	EPrisonerActionDifficulty__EPrisonerActionDifficulty_MAX = 4
};


// Enum ConZ.EPrisonerECGRhythm
enum class EPrisonerECGRhythm : uint8_t
{
	EPrisonerECGRhythm__Normal     = 0,
	EPrisonerECGRhythm__A          = 1,
	EPrisonerECGRhythm__G          = 2,
	EPrisonerECGRhythm__H          = 3,
	EPrisonerECGRhythm__I          = 4,
	EPrisonerECGRhythm__EPrisonerECGRhythm_MAX = 5
};


// Enum ConZ.EMineral
enum class EMineral : uint8_t
{
	EMineral__Calcium              = 0,
	EMineral__Iron                 = 1,
	EMineral__Magnesium            = 2,
	EMineral__Phosphorus           = 3,
	EMineral__Potassium            = 4,
	EMineral__Zinc                 = 5,
	EMineral__Copper               = 6,
	EMineral__Manganese            = 7,
	EMineral__Selenium             = 8,
	EMineral__Count                = 9,
	EMineral__EMineral_MAX         = 10
};


// Enum ConZ.EPrisonerSex
enum class EPrisonerSex : uint8_t
{
	EPrisonerSex__Male             = 0,
	EPrisonerSex__Female           = 1,
	EPrisonerSex__EPrisonerSex_MAX = 2
};


// Enum ConZ.EVitamin
enum class EVitamin : uint8_t
{
	EVitamin__A                    = 0,
	EVitamin__B1                   = 1,
	EVitamin__B2                   = 2,
	EVitamin__B3                   = 3,
	EVitamin__B4                   = 4,
	EVitamin__B5                   = 5,
	EVitamin__B6                   = 6,
	EVitamin__B9                   = 7,
	EVitamin__B12                  = 8,
	EVitamin__C                    = 9,
	EVitamin__D                    = 10,
	EVitamin__E                    = 11,
	EVitamin__K                    = 12,
	EVitamin__Count                = 13,
	EVitamin__EVitamin_MAX         = 14
};


// Enum ConZ.EPrisonerTempCategory
enum class EPrisonerTempCategory : uint8_t
{
	EPrisonerTempCategory__Idle    = 0,
	EPrisonerTempCategory__Low     = 1,
	EPrisonerTempCategory__Medium  = 2,
	EPrisonerTempCategory__High    = 3,
	EPrisonerTempCategory__EPrisonerTempCategory_MAX = 4
};


// Enum ConZ.ETestMinMax
enum class ETestMinMax : uint8_t
{
	ETestMinMax__Normal            = 0,
	ETestMinMax__Min               = 1,
	ETestMinMax__Max               = 2
};


// Enum ConZ.EDiagnosedResult
enum class EDiagnosedResult : uint8_t
{
	EDiagnosedResult__None         = 0,
	EDiagnosedResult__DeathDetected = 1,
	EDiagnosedResult__UnconsciousnessDetected = 2,
	EDiagnosedResult__NotBreathingDetected = 3,
	EDiagnosedResult__IncreasedBodyTempDetected = 4,
	EDiagnosedResult__DiarrheaDetected = 5,
	EDiagnosedResult__VomitingDetected = 6,
	EDiagnosedResult__PhysicalInjuryDetected = 7,
	EDiagnosedResult__BrokenLimbsInjuryDetected = 8,
	EDiagnosedResult__ChokingSicknessDetected = 9,
	EDiagnosedResult__OverdoseSicknessDetected = 10,
	EDiagnosedResult__OvereatingSicknessDetected = 11,
	EDiagnosedResult__DehydrationSicknessDetected = 12,
	EDiagnosedResult__StarvationSicknessDetected = 13,
	EDiagnosedResult__CarbonMonoxidePoisoningDetected = 14,
	EDiagnosedResult__DysenteryDiseaseDetected = 15,
	EDiagnosedResult__HypothermiaDiseaseDetected = 16,
	EDiagnosedResult__HyperthermiaDiseaseDetected = 17,
	EDiagnosedResult__HookwormsDiseaseDetected = 18,
	EDiagnosedResult__HepatitisADiseaseDetected = 19,
	EDiagnosedResult__HeatstrokeDiseaseDetected = 20,
	EDiagnosedResult__HeartAttackDetected = 21,
	EDiagnosedResult__LeptospirosisDiseaseDetected = 22,
	EDiagnosedResult__MalariaDiseaseDetected = 23,
	EDiagnosedResult__MeningitisDiseaseDetected = 24,
	EDiagnosedResult__RadiationSicknessDetected = 25,
	EDiagnosedResult__SalmonellaDiseaseDetected = 26,
	EDiagnosedResult__SunburnSicknessDetected = 27,
	EDiagnosedResult__ToothacheSicknessDetected = 28,
	EDiagnosedResult__TrenchFootDiseaseDetected = 29,
	EDiagnosedResult__CystitisDiseaseDetected = 30,
	EDiagnosedResult__CalciumDeficiencyDetected = 31,
	EDiagnosedResult__CopperDeficiencyDetected = 32,
	EDiagnosedResult__EnergyDeficiencyDetected = 33,
	EDiagnosedResult__FatDeficiencyDetected = 34,
	EDiagnosedResult__FiberDeficiencyDetected = 35,
	EDiagnosedResult__IronDeficiencyDetected = 36,
	EDiagnosedResult__MagnesiumDeficiencyDetected = 37,
	EDiagnosedResult__ManganeseDeficiencyDetected = 38,
	EDiagnosedResult__PhosphorusDeficiencyDetected = 39,
	EDiagnosedResult__PotassiumDeficiencyDetected = 40,
	EDiagnosedResult__ProteinDeficiencyDetected = 41,
	EDiagnosedResult__SeleniumDeficiencyDetected = 42,
	EDiagnosedResult__SodiumDeficiencyDetected = 43,
	EDiagnosedResult__ZincDeficiencyDetected = 44,
	EDiagnosedResult__VitaminADeficiencyDetected = 45,
	EDiagnosedResult__VitaminB1DeficiencyDetected = 46,
	EDiagnosedResult__VitaminB2DeficiencyDetected = 47,
	EDiagnosedResult__VitaminB3DeficiencyDetected = 48,
	EDiagnosedResult__VitaminB4DeficiencyDetected = 49,
	EDiagnosedResult__VitaminB5DeficiencyDetected = 50,
	EDiagnosedResult__VitaminB6DeficiencyDetected = 51,
	EDiagnosedResult__VitaminB9DeficiencyDetected = 52,
	EDiagnosedResult__VitaminB12DeficiencyDetected = 53,
	EDiagnosedResult__VitaminCDeficiencyDetected = 54,
	EDiagnosedResult__VitaminDDeficiencyDetected = 55,
	EDiagnosedResult__VitaminEDeficiencyDetected = 56,
	EDiagnosedResult__VitaminKDeficiencyDetected = 57,
	EDiagnosedResult__BacillusCereusPoisoningDetected = 58,
	EDiagnosedResult__BotulismPoisoningDetected = 59,
	EDiagnosedResult__CampylobacteriosisPoisoningDetected = 60,
	EDiagnosedResult__CyclosporiasisPoisoningDetected = 61,
	EDiagnosedResult__IntestinalCryptosporidiosisPoisoningDetected = 62,
	EDiagnosedResult__StaphylococcalPoisoningDetected = 63,
	EDiagnosedResult__VibrioVulnificusInfectionDetected = 64,
	EDiagnosedResult__AmanitaVirosaPoisoningDetected = 65,
	EDiagnosedResult__PsilocybeCyanescensPoisoningDetected = 66,
	EDiagnosedResult__AmanitaPhalloidesPoisoningDetected = 67,
	EDiagnosedResult__AmanitaPantheriaPoisoningDetected = 68,
	EDiagnosedResult__AmanitaMuscariaPoisoningDetected = 69,
	EDiagnosedResult__InocybePatouillardiiPoisoningDetected = 70,
	EDiagnosedResult__FoxglovePoisoningDetected = 71,
	EDiagnosedResult__HemlockPoisoningDetected = 72,
	EDiagnosedResult__BaneberryPoisoningDetected = 73,
	EDiagnosedResult__DeadlyNightshadePoisoningDetected = 74,
	EDiagnosedResult__DrunkennessSicknessDetected = 75,
	EDiagnosedResult__AlcoholismAddictionDetected = 76,
	EDiagnosedResult__Count        = 77,
	EDiagnosedResult__EDiagnosedResult_MAX = 78
};


// Enum ConZ.EOptionalState
enum class EOptionalState : uint8_t
{
	EOptionalState__None           = 0,
	EOptionalState__Add            = 1,
	EOptionalState__Remove         = 2,
	EOptionalState__EOptionalState_MAX = 3
};


// Enum ConZ.ERecipeAvailabilityState
enum class ERecipeAvailabilityState : uint8_t
{
	ERecipeAvailabilityState__None = 0,
	ERecipeAvailabilityState__SkillLow = 1,
	ERecipeAvailabilityState__NoIngredients = 2,
	ERecipeAvailabilityState__SomeIngredients = 3,
	ERecipeAvailabilityState__AllIngredients = 4,
	ERecipeAvailabilityState__ERecipeAvailabilityState_MAX = 5
};


// Enum ConZ.EWeaponFiringMode
enum class EWeaponFiringMode : uint8_t
{
	EWeaponFiringMode__Automatic   = 0,
	EWeaponFiringMode__SingleShot  = 1,
	EWeaponFiringMode__EWeaponFiringMode_MAX = 2
};


// Enum ConZ.EWeaponFiringStateType
enum class EWeaponFiringStateType : uint8_t
{
	EWeaponFiringStateType__Automatic = 0,
	EWeaponFiringStateType__SemiAutomatic = 1,
	EWeaponFiringStateType__Manual = 2,
	EWeaponFiringStateType__EWeaponFiringStateType_MAX = 3
};


// Enum ConZ.EAnimalStance
enum class EAnimalStance : uint8_t
{
	EAnimalStance__Breathing       = 0,
	EAnimalStance__Idle            = 1,
	EAnimalStance__Agressive       = 2,
	EAnimalStance__Alerted         = 3,
	EAnimalStance__EAnimalStance_MAX = 4
};


// Enum ConZ.EAnimalActivityCycle
enum class EAnimalActivityCycle : uint8_t
{
	EAnimalActivityCycle__Diurnal  = 0,
	EAnimalActivityCycle__Nocturnal = 1,
	EAnimalActivityCycle__Both     = 2,
	EAnimalActivityCycle__EAnimalActivityCycle_MAX = 3
};


// Enum ConZ.EAnimal2Sound
enum class EAnimal2Sound : uint8_t
{
	EAnimal2Sound__None            = 0,
	EAnimal2Sound__Idle            = 1,
	EAnimal2Sound__Angry           = 2,
	EAnimal2Sound__Attack          = 3,
	EAnimal2Sound__Kill            = 4,
	EAnimal2Sound__Scared          = 5,
	EAnimal2Sound__Alerted         = 6,
	EAnimal2Sound__EAnimal2Sound_MAX = 7
};


// Enum ConZ.EAnimalSound
enum class EAnimalSound : uint8_t
{
	EAnimalSound__None             = 0,
	EAnimalSound__Idle             = 1,
	EAnimalSound__Angry            = 2,
	EAnimalSound__Attack           = 3,
	EAnimalSound__Kill             = 4,
	EAnimalSound__EAnimalSound_MAX = 5
};


// Enum ConZ.EAnimalLearnLevel
enum class EAnimalLearnLevel : uint8_t
{
	EAnimalLearnLevel__Basic       = 0,
	EAnimalLearnLevel__Medium      = 1,
	EAnimalLearnLevel__Advanced    = 2,
	EAnimalLearnLevel__EAnimalLearnLevel_MAX = 3
};


// Enum ConZ.EAnimalCommand
enum class EAnimalCommand : uint8_t
{
	EAnimalCommand__None           = 0,
	EAnimalCommand__Follow         = 1,
	EAnimalCommand__Unfollow       = 2,
	EAnimalCommand__StayStill      = 3,
	EAnimalCommand__MoveFreely     = 4,
	EAnimalCommand__FetchItem      = 5,
	EAnimalCommand__Attack         = 6,
	EAnimalCommand__Defend         = 7,
	EAnimalCommand__Guard          = 8,
	EAnimalCommand__Seek           = 9,
	EAnimalCommand__EAnimalCommand_MAX = 10
};


// Enum ConZ.EAnimalHandlingStage
enum class EAnimalHandlingStage : uint8_t
{
	EAnimalHandlingStage__NotPacified = 0,
	EAnimalHandlingStage__Pacified = 1,
	EAnimalHandlingStage__Tamed    = 2,
	EAnimalHandlingStage__LearnedBasic = 3,
	EAnimalHandlingStage__LearnedMedium = 4,
	EAnimalHandlingStage__LearnedAdvanced = 5,
	EAnimalHandlingStage__EAnimalHandlingStage_MAX = 6
};


// Enum ConZ.EAnimalHandlingLevel
enum class EAnimalHandlingLevel : uint8_t
{
	EAnimalHandlingLevel__SmallDomestic = 0,
	EAnimalHandlingLevel__BigDomestic = 1,
	EAnimalHandlingLevel__Wild     = 2,
	EAnimalHandlingLevel__Unhandleable = 3,
	EAnimalHandlingLevel__EAnimalHandlingLevel_MAX = 4
};


// Enum ConZ.EAnimalPace
enum class EAnimalPace : uint8_t
{
	EAnimalPace__Idle              = 0,
	EAnimalPace__Walking           = 1,
	EAnimalPace__Running           = 2,
	EAnimalPace__EAnimalPace_MAX   = 3
};


// Enum ConZ.EBrokenLimbsTreatment
enum class EBrokenLimbsTreatment : uint8_t
{
	EBrokenLimbsTreatment__Immobilize = 0,
	EBrokenLimbsTreatment__MendBones = 1,
	EBrokenLimbsTreatment__EBrokenLimbsTreatment_MAX = 2
};


// Enum ConZ.EBruiseZone
enum class EBruiseZone : uint8_t
{
	EBruiseZone__Left              = 0,
	EBruiseZone__Middle            = 1,
	EBruiseZone__Right             = 2,
	EBruiseZone__Count             = 3,
	EBruiseZone__EBruiseZone_MAX   = 4
};


// Enum ConZ.EBruiseLayer
enum class EBruiseLayer : uint8_t
{
	EBruiseLayer__Light            = 0,
	EBruiseLayer__Medium           = 1,
	EBruiseLayer__Hard             = 2,
	EBruiseLayer__Count            = 3,
	EBruiseLayer__EBruiseLayer_MAX = 4
};


// Enum ConZ.ECardinalDirection
enum class ECardinalDirection : uint8_t
{
	ECardinalDirection__None       = 0,
	ECardinalDirection__North      = 1,
	ECardinalDirection__East       = 2,
	ECardinalDirection__South      = 3,
	ECardinalDirection__West       = 4,
	ECardinalDirection__ECardinalDirection_MAX = 5
};


// Enum ConZ.ECharacterActionNotifyType
enum class ECharacterActionNotifyType : uint8_t
{
	ECharacterActionNotifyType__None = 0,
	ECharacterActionNotifyType__AddMagazine = 1,
	ECharacterActionNotifyType__RemoveMagazine = 2,
	ECharacterActionNotifyType__InsertCartridge = 3,
	ECharacterActionNotifyType__SwapWeapons = 4,
	ECharacterActionNotifyType__Chop = 5,
	ECharacterActionNotifyType__ECharacterActionNotifyType_MAX = 6
};


// Enum ConZ.ECharacterActionState
enum class ECharacterActionState : uint8_t
{
	ECharacterActionState__None    = 0,
	ECharacterActionState__WaitingBeginOnServer = 1,
	ECharacterActionState__Executing = 2,
	ECharacterActionState__Ended   = 3,
	ECharacterActionState__ECharacterActionState_MAX = 4
};


// Enum ConZ.ECharacterActionFlags
enum class ECharacterActionFlags : uint8_t
{
	ECharacterActionFlags__ClientWaitBeginOnServer = 0,
	ECharacterActionFlags__AllWaitEndOnOwningClient = 1,
	ECharacterActionFlags__CanBeAborted = 2,
	ECharacterActionFlags__ECharacterActionFlags_MAX = 3
};


// Enum ConZ.ECharacterActionConstraint
enum class ECharacterActionConstraint : uint8_t
{
	ECharacterActionConstraint__Move = 0,
	ECharacterActionConstraint__Turn = 1,
	ECharacterActionConstraint__Stance = 2,
	ECharacterActionConstraint__ProneInOut = 3,
	ECharacterActionConstraint__ECharacterActionConstraint_MAX = 4
};


// Enum ConZ.ECharacterLegsImpactSoundCategory
enum class ECharacterLegsImpactSoundCategory : uint8_t
{
	ECharacterLegsImpactSoundCategory__Any = 0,
	ECharacterLegsImpactSoundCategory__Bare = 1,
	ECharacterLegsImpactSoundCategory__Blocked = 2,
	ECharacterLegsImpactSoundCategory__LightlyClothed = 3,
	ECharacterLegsImpactSoundCategory__ECharacterLegsImpactSoundCategory_MAX = 4
};


// Enum ConZ.ECharacterArmsImpactSoundCategory
enum class ECharacterArmsImpactSoundCategory : uint8_t
{
	ECharacterArmsImpactSoundCategory__Any = 0,
	ECharacterArmsImpactSoundCategory__Bare = 1,
	ECharacterArmsImpactSoundCategory__Blocked = 2,
	ECharacterArmsImpactSoundCategory__LightlyClothed = 3,
	ECharacterArmsImpactSoundCategory__ECharacterArmsImpactSoundCategory_MAX = 4
};


// Enum ConZ.ECharacterTorsoImpactSoundCategory
enum class ECharacterTorsoImpactSoundCategory : uint8_t
{
	ECharacterTorsoImpactSoundCategory__Any = 0,
	ECharacterTorsoImpactSoundCategory__Bare = 1,
	ECharacterTorsoImpactSoundCategory__Blocked = 2,
	ECharacterTorsoImpactSoundCategory__LightlyClothed = 3,
	ECharacterTorsoImpactSoundCategory__ECharacterTorsoImpactSoundCategory_MAX = 4
};


// Enum ConZ.ECharacterHeadImpactSoundCategory
enum class ECharacterHeadImpactSoundCategory : uint8_t
{
	ECharacterHeadImpactSoundCategory__Any = 0,
	ECharacterHeadImpactSoundCategory__Bare = 1,
	ECharacterHeadImpactSoundCategory__Blocked = 2,
	ECharacterHeadImpactSoundCategory__Helmet = 3,
	ECharacterHeadImpactSoundCategory__ECharacterHeadImpactSoundCategory_MAX = 4
};


// Enum ConZ.ECharacterPainSoundSeverity
enum class ECharacterPainSoundSeverity : uint8_t
{
	ECharacterPainSoundSeverity__Light = 0,
	ECharacterPainSoundSeverity__Medium = 1,
	ECharacterPainSoundSeverity__Heavy = 2,
	ECharacterPainSoundSeverity__Stun = 3,
	ECharacterPainSoundSeverity__Knockout = 4,
	ECharacterPainSoundSeverity__Death = 5,
	ECharacterPainSoundSeverity__ECharacterPainSoundSeverity_MAX = 6
};


// Enum ConZ.EInteractionTargetType
enum class EInteractionTargetType : uint8_t
{
	EInteractionTargetType__Self   = 0,
	EInteractionTargetType__HoveredInteractable = 1,
	EInteractionTargetType__Specified = 2,
	EInteractionTargetType__EInteractionTargetType_MAX = 3
};


// Enum ConZ.EAnimalMovementPace
enum class EAnimalMovementPace : uint8_t
{
	EAnimalMovementPace__Sneak     = 0,
	EAnimalMovementPace__Walk      = 1,
	EAnimalMovementPace__Trot      = 2,
	EAnimalMovementPace__Run       = 3,
	EAnimalMovementPace__EAnimalMovementPace_MAX = 4
};


// Enum ConZ.EAnimalAgressivness
enum class EAnimalAgressivness : uint8_t
{
	EAnimalAgressivness__Timid     = 0,
	EAnimalAgressivness__Moderate  = 1,
	EAnimalAgressivness__Agressive = 2,
	EAnimalAgressivness__EAnimalAgressivness_MAX = 3
};


// Enum ConZ.EAnimalMode
enum class EAnimalMode : uint8_t
{
	EAnimalMode__None              = 0,
	EAnimalMode__Roam              = 1,
	EAnimalMode__Alert             = 2,
	EAnimalMode__Observe           = 3,
	EAnimalMode__TrotAway          = 4,
	EAnimalMode__Aggro             = 5,
	EAnimalMode__Flee              = 6,
	EAnimalMode__EAnimalMode_MAX   = 7
};


// Enum ConZ.EConfigFile
enum class EConfigFile : uint8_t
{
	EConfigFile__None              = 0,
	EConfigFile__Engine            = 1,
	EConfigFile__GameUserSettings  = 2,
	EConfigFile__ServerSettings    = 3,
	EConfigFile__EConfigFile_MAX   = 4
};


// Enum ConZ.ECraftingItemCategory
enum class ECraftingItemCategory : uint8_t
{
	ECraftingItemCategory__None    = 0,
	ECraftingItemCategory__ToolsAndWeapons = 1,
	ECraftingItemCategory__Items   = 2,
	ECraftingItemCategory__Food    = 3,
	ECraftingItemCategory__ECraftingItemCategory_MAX = 4
};


// Enum ConZ.ECraftingType
enum class ECraftingType : uint8_t
{
	ECraftingType__Use             = 0,
	ECraftingType__Assemble        = 1,
	ECraftingType__Destroy         = 2,
	ECraftingType__Attach          = 3,
	ECraftingType__ECraftingType_MAX = 4
};


// Enum ConZ.EDbConnectionOpenMode
enum class EDbConnectionOpenMode : uint8_t
{
	EDbConnectionOpenMode__None    = 0,
	EDbConnectionOpenMode__ReadOnly = 1,
	EDbConnectionOpenMode__ReadWrite = 2,
	EDbConnectionOpenMode__EDbConnectionOpenMode_MAX = 3
};


// Enum ConZ.EDbUserProfileType
enum class EDbUserProfileType : uint8_t
{
	EDbUserProfileType__Singleplayer = 0,
	EDbUserProfileType__MultiplayerAuthority = 1,
	EDbUserProfileType__MultiplayerCache = 2,
	EDbUserProfileType__EDbUserProfileType_MAX = 3
};


// Enum ConZ.EDoorStateFlags
enum class EDoorStateFlags : uint8_t
{
	EDoorStateFlags__None          = 0,
	EDoorStateFlags__Open          = 1,
	EDoorStateFlags__Locked        = 2,
	EDoorStateFlags__HasPower      = 3,
	EDoorStateFlags__ChangeSide    = 4,
	EDoorStateFlags__EDoorStateFlags_MAX = 5
};


// Enum ConZ.EDroneSound
enum class EDroneSound : uint8_t
{
	EDroneSound__None              = 0,
	EDroneSound__Idle              = 1,
	EDroneSound__Attack            = 2,
	EDroneSound__Kill              = 3,
	EDroneSound__EDroneSound_MAX   = 4
};


// Enum ConZ.EDroneState
enum class EDroneState : uint8_t
{
	EDroneState__Initial           = 0,
	EDroneState__Patrolling        = 1,
	EDroneState__Following         = 2,
	EDroneState__Fleeing           = 3,
	EDroneState__EDroneState_MAX   = 4
};


// Enum ConZ.EDropZoneGameEventPhase
enum class EDropZoneGameEventPhase : uint8_t
{
	EDropZoneGameEventPhase__Warmup = 0,
	EDropZoneGameEventPhase__Search = 1,
	EDropZoneGameEventPhase__Drop  = 2,
	EDropZoneGameEventPhase__Capture = 3,
	EDropZoneGameEventPhase__EDropZoneGameEventPhase_MAX = 4
};


// Enum ConZ.EDigestionGroup
enum class EDigestionGroup : uint8_t
{
	EDigestionGroup__Water         = 0,
	EDigestionGroup__Juices        = 1,
	EDigestionGroup__SemiLiquid    = 2,
	EDigestionGroup__Fruits1       = 3,
	EDigestionGroup__Fruits3       = 4,
	EDigestionGroup__Fruits4       = 5,
	EDigestionGroup__Fruits5       = 6,
	EDigestionGroup__Vegetables1   = 7,
	EDigestionGroup__Vegetables2   = 8,
	EDigestionGroup__Vegetables3   = 9,
	EDigestionGroup__Vegetables4   = 10,
	EDigestionGroup__SemiConcentratedCarbs = 11,
	EDigestionGroup__ConcentratedCarbs1 = 12,
	EDigestionGroup__ConcentratedCarbs2 = 13,
	EDigestionGroup__ConcentratedCarbs3 = 14,
	EDigestionGroup__SeedsNuts1    = 15,
	EDigestionGroup__SeedsNuts2    = 16,
	EDigestionGroup__Dairy1        = 17,
	EDigestionGroup__Dairy2        = 18,
	EDigestionGroup__Dairy3        = 19,
	EDigestionGroup__Animal1       = 20,
	EDigestionGroup__Animal2       = 21,
	EDigestionGroup__Animal3       = 22,
	EDigestionGroup__Animal4       = 23,
	EDigestionGroup__Animal5       = 24,
	EDigestionGroup__Animal6       = 25,
	EDigestionGroup__Fish1         = 26,
	EDigestionGroup__Fish2         = 27,
	EDigestionGroup__Vitamins      = 28,
	EDigestionGroup__CookedMeals   = 29,
	EDigestionGroup__OilFat        = 30,
	EDigestionGroup__EDigestionGroup_MAX = 31
};


// Enum ConZ.EGameEventNotificationType
enum class EGameEventNotificationType : uint8_t
{
	EGameEventNotificationType__EventStarted = 0,
	EGameEventNotificationType__EventCanceled = 1,
	EGameEventNotificationType__EventEnded = 2,
	EGameEventNotificationType__NotEnoughParticipants = 3,
	EGameEventNotificationType__ParticipantJoined = 4,
	EGameEventNotificationType__ParticipantLeft = 5,
	EGameEventNotificationType__EGameEventNotificationType_MAX = 6
};


// Enum ConZ.EGameEventParticipantState
enum class EGameEventParticipantState : uint8_t
{
	EGameEventParticipantState__Registered = 0,
	EGameEventParticipantState__Spawning = 1,
	EGameEventParticipantState__Alive = 2,
	EGameEventParticipantState__Dead = 3,
	EGameEventParticipantState__Left = 4,
	EGameEventParticipantState__EGameEventParticipantState_MAX = 5
};


// Enum ConZ.EGameEventState
enum class EGameEventState : uint8_t
{
	EGameEventState__Announced     = 0,
	EGameEventState__RoundStarted  = 1,
	EGameEventState__RoundEnded    = 2,
	EGameEventState__Ended         = 3,
	EGameEventState__EGameEventState_MAX = 4
};


// Enum ConZ.EGameEventBorderState
enum class EGameEventBorderState : uint8_t
{
	EGameEventBorderState__Off     = 0,
	EGameEventBorderState__On      = 1,
	EGameEventBorderState__Bright  = 2,
	EGameEventBorderState__EGameEventBorderState_MAX = 3
};


// Enum ConZ.EGameEventTransportState
enum class EGameEventTransportState : uint8_t
{
	EGameEventTransportState__StandBy = 0,
	EGameEventTransportState__Travelling = 1,
	EGameEventTransportState__Leaving = 2,
	EGameEventTransportState__Landing = 3,
	EGameEventTransportState__LiftOff = 4,
	EGameEventTransportState__EGameEventTransportState_MAX = 5
};


// Enum ConZ.ERagdollTransitionState
enum class ERagdollTransitionState : uint8_t
{
	ERagdollTransitionState__None  = 0,
	ERagdollTransitionState__GoTo  = 1,
	ERagdollTransitionState__RecoverFrom = 2,
	ERagdollTransitionState__RecoverFromImmediately = 3,
	ERagdollTransitionState__ERagdollTransitionState_MAX = 4
};


// Enum ConZ.EHitReactState
enum class EHitReactState : uint8_t
{
	EHitReactState__None           = 0,
	EHitReactState__Hit            = 1,
	EHitReactState__Stun           = 2,
	EHitReactState__Knockout       = 3,
	EHitReactState__GettingUp      = 4,
	EHitReactState__Ragdoll        = 5,
	EHitReactState__EHitReactState_MAX = 6
};


// Enum ConZ.EGoToRagdollCaller
enum class EGoToRagdollCaller : uint8_t
{
	EGoToRagdollCaller__Default    = 0,
	EGoToRagdollCaller__Montage    = 1,
	EGoToRagdollCaller__EGoToRagdollCaller_MAX = 2
};


// Enum ConZ.EWarningType
enum class EWarningType : uint8_t
{
	EWarningType__Danger           = 0,
	EWarningType__Explosion        = 1,
	EWarningType__LifeThreat       = 2,
	EWarningType__Watching         = 3,
	EWarningType__EWarningType_MAX = 4
};


// Enum ConZ.EImpactSeverity
enum class EImpactSeverity : uint8_t
{
	EImpactSeverity__Light         = 0,
	EImpactSeverity__Medium        = 1,
	EImpactSeverity__Heavy         = 2,
	EImpactSeverity__EImpactSeverity_MAX = 3
};


// Enum ConZ.EInteractionState
enum class EInteractionState : uint8_t
{
	EInteractionState__Busy        = 0,
	EInteractionState__NoInteractionDefined = 1,
	EInteractionState__CanInteract = 2,
	EInteractionState__UnableToInteract = 3,
	EInteractionState__EInteractionState_MAX = 4
};


// Enum ConZ.EMedicalDiagnosisType
enum class EMedicalDiagnosisType : uint8_t
{
	EMedicalDiagnosisType__CheckPulse = 0,
	EMedicalDiagnosisType__FullDiagnosis = 1,
	EMedicalDiagnosisType__EMedicalDiagnosisType_MAX = 2
};


// Enum ConZ.EDiagnosisLevel
enum class EDiagnosisLevel : uint8_t
{
	EDiagnosisLevel__TempOnly      = 0,
	EDiagnosisLevel__Physical      = 1,
	EDiagnosisLevel__PhysicalSeverity = 2,
	EDiagnosisLevel__Everything    = 3,
	EDiagnosisLevel__EDiagnosisLevel_MAX = 4
};


// Enum ConZ.EMedicationType
enum class EMedicationType : uint8_t
{
	EMedicationType__Painkillers   = 0,
	EMedicationType__Sedatives     = 1,
	EMedicationType__Antibiotics   = 2,
	EMedicationType__Antiparasitics = 3,
	EMedicationType__Stimulants    = 4,
	EMedicationType__EMedicationType_MAX = 5
};


// Enum ConZ.EMedicationUsage
enum class EMedicationUsage : uint8_t
{
	EMedicationUsage__Pills        = 0,
	EMedicationUsage__Injections   = 1,
	EMedicationUsage__Infusions    = 2,
	EMedicationUsage__EMedicationUsage_MAX = 3
};


// Enum ConZ.EMeleeActionType
enum class EMeleeActionType : uint8_t
{
	EMeleeActionType__None         = 0,
	EMeleeActionType__Attack       = 1,
	EMeleeActionType__PrepareForBlockOrDodge = 2,
	EMeleeActionType__Block        = 3,
	EMeleeActionType__Dodge        = 4,
	EMeleeActionType__EMeleeActionType_MAX = 5
};


// Enum ConZ.EMeleeState
enum class EMeleeState : uint8_t
{
	EMeleeState__Idle              = 0,
	EMeleeState__Attacking         = 1,
	EMeleeState__PreparedForBlockOrDodge = 2,
	EMeleeState__Block             = 3,
	EMeleeState__Dodge             = 4,
	EMeleeState__HitReact          = 5,
	EMeleeState__EMeleeState_MAX   = 6
};


// Enum ConZ.EHitDirectionType
enum class EHitDirectionType : uint8_t
{
	EHitDirectionType__Front       = 0,
	EHitDirectionType__Left        = 1,
	EHitDirectionType__Back        = 2,
	EHitDirectionType__Right       = 3,
	EHitDirectionType__EHitDirectionType_MAX = 4
};


// Enum ConZ.EAttackCollisionType
enum class EAttackCollisionType : uint8_t
{
	EAttackCollisionType__None     = 0,
	EAttackCollisionType__WeaponLeftHand = 1,
	EAttackCollisionType__WeaponRightHand = 2,
	EAttackCollisionType__Head     = 3,
	EAttackCollisionType__LeftHand = 4,
	EAttackCollisionType__RightHand = 5,
	EAttackCollisionType__LeftLeg  = 6,
	EAttackCollisionType__RightLeg = 7,
	EAttackCollisionType__EAttackCollisionType_MAX = 8
};


// Enum ConZ.EMouseSensitivityMode
enum class EMouseSensitivityMode : uint8_t
{
	EMouseSensitivityMode__None    = 0,
	EMouseSensitivityMode__ThirdPerson = 1,
	EMouseSensitivityMode__FirstPerson = 2,
	EMouseSensitivityMode__DownTheSight = 3,
	EMouseSensitivityMode__Scope   = 4,
	EMouseSensitivityMode__EMouseSensitivityMode_MAX = 5
};


// Enum ConZ.EAnesthesiaType
enum class EAnesthesiaType : uint8_t
{
	EAnesthesiaType__Local         = 0,
	EAnesthesiaType__General       = 1,
	EAnesthesiaType__EAnesthesiaType_MAX = 2
};


// Enum ConZ.EPickupItemOperation
enum class EPickupItemOperation : uint8_t
{
	EPickupItemOperation__PickupOnly = 0,
	EPickupItemOperation__PickupAndEat = 1,
	EPickupItemOperation__PickupAndEatAll = 2,
	EPickupItemOperation__EPickupItemOperation_MAX = 3
};


// Enum ConZ.EStanceChangeFlag
enum class EStanceChangeFlag : uint8_t
{
	EStanceChangeFlag__Exact       = 0,
	EStanceChangeFlag__Min         = 1,
	EStanceChangeFlag__Max         = 2
};


// Enum ConZ.ESwapItemsType
enum class ESwapItemsType : uint8_t
{
	ESwapItemsType__None           = 0,
	ESwapItemsType__NotWeaponToNotWeapon = 1,
	ESwapItemsType__WeaponToWeapon = 2,
	ESwapItemsType__NotWeaponToWeapon = 3,
	ESwapItemsType__WeaponToNotWeapon = 4,
	ESwapItemsType__ESwapItemsType_MAX = 5
};


// Enum ConZ.EPrisonerAnimationCurve
enum class EPrisonerAnimationCurve : uint8_t
{
	EPrisonerAnimationCurve__LegsPose = 0,
	EPrisonerAnimationCurve__CanStartGoToLoop = 1,
	EPrisonerAnimationCurve__CanStartGoToStopLU = 2,
	EPrisonerAnimationCurve__CanStartGoToStopRU = 3,
	EPrisonerAnimationCurve__DistanceToPivot = 4,
	EPrisonerAnimationCurve__CanLandGoToLoop = 5,
	EPrisonerAnimationCurve__CanFireWeapon = 6,
	EPrisonerAnimationCurve__LeftHandIK = 7,
	EPrisonerAnimationCurve__MoveInputScale = 8,
	EPrisonerAnimationCurve__MoveInputModifierScale = 9,
	EPrisonerAnimationCurve__MoveInputModifierCourseAngle = 10,
	EPrisonerAnimationCurve__IgnoreMoveInput = 11,
	EPrisonerAnimationCurve__IgnoreTurnInput = 12,
	EPrisonerAnimationCurve__IsStanceTransitionActive = 13,
	EPrisonerAnimationCurve__Count = 14,
	EPrisonerAnimationCurve__EPrisonerAnimationCurve_MAX = 15
};


// Enum ConZ.EPrisonerAnimationState
enum class EPrisonerAnimationState : uint8_t
{
	EPrisonerAnimationState__Unknown = 0,
	EPrisonerAnimationState__Entry = 1,
	EPrisonerAnimationState__StandIdle = 2,
	EPrisonerAnimationState__StandIdleToCrouchIdle = 3,
	EPrisonerAnimationState__StandIdleToProneIdle = 4,
	EPrisonerAnimationState__StandWalkStart = 5,
	EPrisonerAnimationState__StandWalkLoop = 6,
	EPrisonerAnimationState__StandWalkStop = 7,
	EPrisonerAnimationState__StandJogStart = 8,
	EPrisonerAnimationState__StandJogLoop = 9,
	EPrisonerAnimationState__StandJogStop = 10,
	EPrisonerAnimationState__StandRunStart = 11,
	EPrisonerAnimationState__StandRunLoop = 12,
	EPrisonerAnimationState__StandRunStop = 13,
	EPrisonerAnimationState__CrouchIdle = 14,
	EPrisonerAnimationState__CrouchIdleToStandIdle = 15,
	EPrisonerAnimationState__CrouchIdleToProneIdle = 16,
	EPrisonerAnimationState__CrouchWalkStart = 17,
	EPrisonerAnimationState__CrouchWalkLoop = 18,
	EPrisonerAnimationState__CrouchWalkStop = 19,
	EPrisonerAnimationState__ProneIdle = 20,
	EPrisonerAnimationState__ProneIdleToStandIdle = 21,
	EPrisonerAnimationState__ProneIdleToCrouchIdle = 22,
	EPrisonerAnimationState__ProneWalkLoop = 23,
	EPrisonerAnimationState__Count = 24,
	EPrisonerAnimationState__EPrisonerAnimationState_MAX = 25
};


// Enum ConZ.EPrisonerConsciousness
enum class EPrisonerConsciousness : uint8_t
{
	EPrisonerConsciousness__Conscious = 0,
	EPrisonerConsciousness__Unconscious = 1,
	EPrisonerConsciousness__Coma   = 2,
	EPrisonerConsciousness__Death  = 3,
	EPrisonerConsciousness__EPrisonerConsciousness_MAX = 4
};


// Enum ConZ.EPrisonerFacialExpression
enum class EPrisonerFacialExpression : uint8_t
{
	EPrisonerFacialExpression__None = 0,
	EPrisonerFacialExpression__Angry1 = 1,
	EPrisonerFacialExpression__Angry2 = 2,
	EPrisonerFacialExpression__Hit = 3,
	EPrisonerFacialExpression__Punching = 4,
	EPrisonerFacialExpression__Fear1 = 5,
	EPrisonerFacialExpression__Fear2 = 6,
	EPrisonerFacialExpression__Fear3 = 7,
	EPrisonerFacialExpression__WhatTheHell1 = 8,
	EPrisonerFacialExpression__WhatTheHell2 = 9,
	EPrisonerFacialExpression__Whistling1 = 10,
	EPrisonerFacialExpression__Whistling2 = 11,
	EPrisonerFacialExpression__Ouch1 = 12,
	EPrisonerFacialExpression__Ouch2 = 13,
	EPrisonerFacialExpression__Count = 14,
	EPrisonerFacialExpression__EPrisonerFacialExpression_MAX = 15
};


// Enum ConZ.EPrisonerFirstPersonSubview
enum class EPrisonerFirstPersonSubview : uint8_t
{
	EPrisonerFirstPersonSubview__Standing = 0,
	EPrisonerFirstPersonSubview__Crouching = 1,
	EPrisonerFirstPersonSubview__Prone = 2,
	EPrisonerFirstPersonSubview__StandingMelee = 3,
	EPrisonerFirstPersonSubview__StandingAiming = 4,
	EPrisonerFirstPersonSubview__CrouchingAiming = 5,
	EPrisonerFirstPersonSubview__ProneAiming = 6,
	EPrisonerFirstPersonSubview__StandingAimingDownTheSights = 7,
	EPrisonerFirstPersonSubview__CrouchingAimingDownTheSights = 8,
	EPrisonerFirstPersonSubview__ProneAimingDownTheSights = 9,
	EPrisonerFirstPersonSubview__ClimbingWindow = 10,
	EPrisonerFirstPersonSubview__Count = 11,
	EPrisonerFirstPersonSubview__EPrisonerFirstPersonSubview_MAX = 12
};


// Enum ConZ.EPrisonerHUDMode
enum class EPrisonerHUDMode : uint8_t
{
	EPrisonerHUDMode__Normal       = 0,
	EPrisonerHUDMode__DebugMain    = 1,
	EPrisonerHUDMode__DebugSkills  = 2,
	EPrisonerHUDMode__DebugMovement = 3,
	EPrisonerHUDMode__DebugMeleeSkill = 4,
	EPrisonerHUDMode__Target       = 5,
	EPrisonerHUDMode__Map          = 6,
	EPrisonerHUDMode__EPrisonerHUDMode_MAX = 7
};


// Enum ConZ.EPrisonerMovementMode
enum class EPrisonerMovementMode : uint8_t
{
	EPrisonerMovementMode__None    = 0,
	EPrisonerMovementMode__Climbing_Anchoring = 1,
	EPrisonerMovementMode__Climbing_PlayingMontage = 2,
	EPrisonerMovementMode__ClimbingLadder = 3,
	EPrisonerMovementMode__ClimbingWindow_Anchoring = 4,
	EPrisonerMovementMode__ClimbingWindow_PlayingMontage = 5,
	EPrisonerMovementMode__EPrisonerMovementMode_MAX = 6
};


// Enum ConZ.EPrisonerResponseIdle
enum class EPrisonerResponseIdle : uint8_t
{
	EPrisonerResponseIdle__None    = 0,
	EPrisonerResponseIdle__Winded  = 1,
	EPrisonerResponseIdle__Exhausted = 2,
	EPrisonerResponseIdle__Cold    = 3,
	EPrisonerResponseIdle__Dirty   = 4,
	EPrisonerResponseIdle__NeedsToUrinate = 5,
	EPrisonerResponseIdle__NeedsToDefecate = 6,
	EPrisonerResponseIdle__Dizzy   = 7,
	EPrisonerResponseIdle__Drunk   = 8,
	EPrisonerResponseIdle__Num     = 9,
	EPrisonerResponseIdle__EPrisonerResponseIdle_MAX = 10
};


// Enum ConZ.EPrisonerMontageBlendType
enum class EPrisonerMontageBlendType : uint8_t
{
	EPrisonerMontageBlendType__All = 0,
	EPrisonerMontageBlendType__LeftHand = 1,
	EPrisonerMontageBlendType__RightHand = 2,
	EPrisonerMontageBlendType__EPrisonerMontageBlendType_MAX = 3
};


// Enum ConZ.EPrisonerMontage
enum class EPrisonerMontage : uint8_t
{
	EPrisonerMontage__None         = 0,
	EPrisonerMontage__WeaponEquipRifle = 1,
	EPrisonerMontage__WeaponUnequipRifle = 2,
	EPrisonerMontage__WeaponEquipHandgun = 3,
	EPrisonerMontage__WeaponUnequipHandgun = 4,
	EPrisonerMontage__Urinate      = 5,
	EPrisonerMontage__UrinateForced = 6,
	EPrisonerMontage__Defecate     = 7,
	EPrisonerMontage__DefecateForced = 8,
	EPrisonerMontage__Vomit        = 9,
	EPrisonerMontage__VomitForced  = 10,
	EPrisonerMontage__SearchObject = 11,
	EPrisonerMontage__SearchObjectWhileItemInHands = 12,
	EPrisonerMontage__SearchObjectWhileWeaponInHands = 13,
	EPrisonerMontage__SearchPrisoner = 14,
	EPrisonerMontage__SearchZombie = 15,
	EPrisonerMontage__PatchWounds  = 16,
	EPrisonerMontage__PatchWoundsEnd = 17,
	EPrisonerMontage__DrinkInteraction = 18,
	EPrisonerMontage__Eat          = 19,
	EPrisonerMontage__Drink        = 20,
	EPrisonerMontage__Throw        = 21,
	EPrisonerMontage__SwapWeapons  = 22,
	EPrisonerMontage__ChopTree     = 23,
	EPrisonerMontage__ChopTreeEnd  = 24,
	EPrisonerMontage__ChopLog      = 25,
	EPrisonerMontage__ChopLogEnd   = 26,
	EPrisonerMontage__SwapItemsNotWeaponToNotWeapon = 27,
	EPrisonerMontage__SwapItemsWeaponToWeapon = 28,
	EPrisonerMontage__SwapItemsNotWeaponToWeapon = 29,
	EPrisonerMontage__SwapItemsWeaponToNotWeapon = 30,
	EPrisonerMontage__Craft        = 31,
	EPrisonerMontage__Uncraft      = 32,
	EPrisonerMontage__CheckTime    = 33,
	EPrisonerMontage__CheckTimeWhileItemInHands = 34,
	EPrisonerMontage__CheckTimeWhileWeaponInHands = 35,
	EPrisonerMontage__Count        = 36,
	EPrisonerMontage__EPrisonerMontage_MAX = 37
};


// Enum ConZ.EWeaponAnimationPose
enum class EWeaponAnimationPose : uint8_t
{
	EWeaponAnimationPose__None     = 0,
	EWeaponAnimationPose__Relaxed  = 1,
	EWeaponAnimationPose__AimingHip = 2,
	EWeaponAnimationPose__AimingDownTheSights = 3,
	EWeaponAnimationPose__Count    = 4,
	EWeaponAnimationPose__EWeaponAnimationPose_MAX = 5
};


// Enum ConZ.EPrisonerAnimationSet
enum class EPrisonerAnimationSet : uint8_t
{
	EPrisonerAnimationSet__Base    = 0,
	EPrisonerAnimationSet__Rifle   = 1,
	EPrisonerAnimationSet__RifleRelaxed = 2,
	EPrisonerAnimationSet__UnarmedCombat = 3,
	EPrisonerAnimationSet__Handgun = 4,
	EPrisonerAnimationSet__Count   = 5,
	EPrisonerAnimationSet__EPrisonerAnimationSet_MAX = 6
};


// Enum ConZ.EPrisonerThirdPersonSubview
enum class EPrisonerThirdPersonSubview : uint8_t
{
	EPrisonerThirdPersonSubview__Standing = 0,
	EPrisonerThirdPersonSubview__Crouching = 1,
	EPrisonerThirdPersonSubview__Prone = 2,
	EPrisonerThirdPersonSubview__StandingMelee = 3,
	EPrisonerThirdPersonSubview__StandingAiming = 4,
	EPrisonerThirdPersonSubview__CrouchingAiming = 5,
	EPrisonerThirdPersonSubview__ProneAiming = 6,
	EPrisonerThirdPersonSubview__Ragdoll = 7,
	EPrisonerThirdPersonSubview__NarrowLadder = 8,
	EPrisonerThirdPersonSubview__Diving = 9,
	EPrisonerThirdPersonSubview__ClimbingWindow = 10,
	EPrisonerThirdPersonSubview__Defecating = 11,
	EPrisonerThirdPersonSubview__Count = 12,
	EPrisonerThirdPersonSubview__EPrisonerThirdPersonSubview_MAX = 13
};


// Enum ConZ.EPlayerSideView
enum class EPlayerSideView : uint8_t
{
	EPlayerSideView__Left          = 0,
	EPlayerSideView__Right         = 1,
	EPlayerSideView__Count         = 2,
	EPlayerSideView__EPlayerSideView_MAX = 3
};


// Enum ConZ.EPenetrationType
enum class EPenetrationType : uint8_t
{
	EPenetrationType__None         = 0,
	EPenetrationType__Entry        = 1,
	EPenetrationType__Exit         = 2,
	EPenetrationType__Both         = 3,
	EPenetrationType__EPenetrationType_MAX = 4
};


// Enum ConZ.EBallisticDragModel
enum class EBallisticDragModel : uint8_t
{
	EBallisticDragModel__G1        = 0,
	EBallisticDragModel__G2        = 1,
	EBallisticDragModel__G5        = 2,
	EBallisticDragModel__G6        = 3,
	EBallisticDragModel__G7        = 4,
	EBallisticDragModel__G8        = 5,
	EBallisticDragModel__EBallisticDragModel_MAX = 6
};


// Enum ConZ.ESentryMovementPace
enum class ESentryMovementPace : uint8_t
{
	ESentryMovementPace__Walking   = 0,
	ESentryMovementPace__Running   = 1,
	ESentryMovementPace__Count     = 2,
	ESentryMovementPace__ESentryMovementPace_MAX = 3
};


// Enum ConZ.ESentryState
enum class ESentryState : uint8_t
{
	ESentryState__Initial          = 0,
	ESentryState__Offline          = 1,
	ESentryState__Patrolling       = 2,
	ESentryState__Guarding         = 3,
	ESentryState__Following        = 4,
	ESentryState__Threaten         = 5,
	ESentryState__SearchAndDestroy = 6,
	ESentryState__ESentryState_MAX = 7
};


// Enum ConZ.ESentryThirdPersonSubview
enum class ESentryThirdPersonSubview : uint8_t
{
	ESentryThirdPersonSubview__Standing = 0,
	ESentryThirdPersonSubview__StandingAiming = 1,
	ESentryThirdPersonSubview__Count = 2,
	ESentryThirdPersonSubview__ESentryThirdPersonSubview_MAX = 3
};


// Enum ConZ.ESortType
enum class ESortType : uint8_t
{
	ESortType__None                = 0,
	ESortType__Host                = 1,
	ESortType__Password            = 2,
	ESortType__Mode                = 3,
	ESortType__Version             = 4,
	ESortType__Time                = 5,
	ESortType__Friends             = 6,
	ESortType__Players             = 7,
	ESortType__Ping                = 8,
	ESortType__ESortType_MAX       = 9
};


// Enum ConZ.EServerBrowserTab
enum class EServerBrowserTab : uint8_t
{
	EServerBrowserTab__Internet    = 0,
	EServerBrowserTab__Favorites   = 1,
	EServerBrowserTab__LastPlayed  = 2,
	EServerBrowserTab__EServerBrowserTab_MAX = 3
};


// Enum ConZ.ESicknessState
enum class ESicknessState : uint8_t
{
	ESicknessState__Sick           = 0,
	ESicknessState__Cured          = 1,
	ESicknessState__Treated        = 2,
	ESicknessState__Untreated      = 3,
	ESicknessState__Done           = 4,
	ESicknessState__ESicknessState_MAX = 5
};


// Enum ConZ.ESimpleAnimalMode
enum class ESimpleAnimalMode : uint8_t
{
	ESimpleAnimalMode__Wander      = 0,
	ESimpleAnimalMode__Flee        = 1,
	ESimpleAnimalMode__ESimpleAnimalMode_MAX = 2
};


// Enum ConZ.ESkillReplicationID
enum class ESkillReplicationID : uint8_t
{
	ESkillReplicationID__None      = 0,
	ESkillReplicationID__EnduranceSkill = 1,
	ESkillReplicationID__ResistanceSkill = 2,
	ESkillReplicationID__RunningSkill = 3,
	ESkillReplicationID__SwimmingSkill = 4,
	ESkillReplicationID__MedicalSkill = 5,
	ESkillReplicationID__AwarenessSkill = 6,
	ESkillReplicationID__StealthSkill = 7,
	ESkillReplicationID__AnimalHandlingSkill = 8,
	ESkillReplicationID__CookingSkill = 9,
	ESkillReplicationID__SurvivalSkill = 10,
	ESkillReplicationID__BioChemSkill = 11,
	ESkillReplicationID__BoxingSkill = 12,
	ESkillReplicationID__MeleeWeaponsSkill = 13,
	ESkillReplicationID__RiflesSkill = 14,
	ESkillReplicationID__HandgunSkill = 15,
	ESkillReplicationID__SnipingSkill = 16,
	ESkillReplicationID__CamouflageSkill = 17,
	ESkillReplicationID__TacticsSkill = 18,
	ESkillReplicationID__ThrowingSkill = 19,
	ESkillReplicationID__ESkillReplicationID_MAX = 20
};


// Enum ConZ.EItemThrowingBehavior
enum class EItemThrowingBehavior : uint8_t
{
	EItemThrowingBehavior__None    = 0,
	EItemThrowingBehavior__Default = 1,
	EItemThrowingBehavior__Piercing = 2,
	EItemThrowingBehavior__Fragile = 3,
	EItemThrowingBehavior__Sticky  = 4,
	EItemThrowingBehavior__EItemThrowingBehavior_MAX = 5
};


// Enum ConZ.EBleedingSeverity
enum class EBleedingSeverity : uint8_t
{
	EBleedingSeverity__NoBleeding  = 0,
	EBleedingSeverity__VeryLight   = 1,
	EBleedingSeverity__Light       = 2,
	EBleedingSeverity__Moderate    = 3,
	EBleedingSeverity__Heavy       = 4,
	EBleedingSeverity__Severe      = 5,
	EBleedingSeverity__EBleedingSeverity_MAX = 6
};


// Enum ConZ.EUnarmedCombatInput
enum class EUnarmedCombatInput : uint8_t
{
	EUnarmedCombatInput__WalkForward = 0,
	EUnarmedCombatInput__WalkBackward = 1,
	EUnarmedCombatInput__WalkRight = 2,
	EUnarmedCombatInput__WalkLeft  = 3,
	EUnarmedCombatInput__Punch     = 4,
	EUnarmedCombatInput__Kick      = 5,
	EUnarmedCombatInput__BlockPressed = 6,
	EUnarmedCombatInput__BlockReleased = 7,
	EUnarmedCombatInput__PreviousTarget = 8,
	EUnarmedCombatInput__NextTarget = 9,
	EUnarmedCombatInput__ReleaseCursor = 10,
	EUnarmedCombatInput__EUnarmedCombatInput_MAX = 11
};


// Enum ConZ.EWaypointTraverseType
enum class EWaypointTraverseType : uint8_t
{
	EWaypointTraverseType__Clockwise = 0,
	EWaypointTraverseType__CounterClockwise = 1,
	EWaypointTraverseType__Random  = 2,
	EWaypointTraverseType__EWaypointTraverseType_MAX = 3
};


// Enum ConZ.EAnimalWaypointType
enum class EAnimalWaypointType : uint8_t
{
	EAnimalWaypointType__PassThrough = 0,
	EAnimalWaypointType__Wait      = 1,
	EAnimalWaypointType__Rest      = 2,
	EAnimalWaypointType__Eat       = 3,
	EAnimalWaypointType__All       = 4,
	EAnimalWaypointType__EAnimalWaypointType_MAX = 5
};


// Enum ConZ.EWeaponActionNotifyType
enum class EWeaponActionNotifyType : uint8_t
{
	EWeaponActionNotifyType__None  = 0,
	EWeaponActionNotifyType__ChamberOpened = 1,
	EWeaponActionNotifyType__ChamberClosed = 2,
	EWeaponActionNotifyType__ChamberOpenedClosed = 3,
	EWeaponActionNotifyType__EWeaponActionNotifyType_MAX = 4
};


// Enum ConZ.EReloadWeaponSequence
enum class EReloadWeaponSequence : uint8_t
{
	EReloadWeaponSequence__None    = 0,
	EReloadWeaponSequence__InsertMagazine = 1,
	EReloadWeaponSequence__RemoveMagazineInstertMagazine = 2,
	EReloadWeaponSequence__InstertCartridge = 3,
	EReloadWeaponSequence__RemoveMagazineInstertCartridge = 4,
	EReloadWeaponSequence__EReloadWeaponSequence_MAX = 5
};


// Enum ConZ.EWeaponAttachmentActionType
enum class EWeaponAttachmentActionType : uint8_t
{
	EWeaponAttachmentActionType__Add = 0,
	EWeaponAttachmentActionType__Remove = 1,
	EWeaponAttachmentActionType__Swap = 2,
	EWeaponAttachmentActionType__Count = 3,
	EWeaponAttachmentActionType__EWeaponAttachmentActionType_MAX = 4
};


// Enum ConZ.EWeaponType
enum class EWeaponType : uint8_t
{
	EWeaponType__Rifle             = 0,
	EWeaponType__Handgun           = 1,
	EWeaponType__Count             = 2,
	EWeaponType__EWeaponType_MAX   = 3
};


// Enum ConZ.EDayPeriod
enum class EDayPeriod : uint8_t
{
	EDayPeriod__Nighttime          = 0,
	EDayPeriod__Dawn               = 1,
	EDayPeriod__Daytime            = 2,
	EDayPeriod__Dusk               = 3,
	EDayPeriod__EDayPeriod_MAX     = 4
};


// Enum ConZ.EWolfAttackState
enum class EWolfAttackState : uint8_t
{
	EWolfAttackState__Peace        = 0,
	EWolfAttackState__Chasing      = 1,
	EWolfAttackState__Attacking    = 2,
	EWolfAttackState__EWolfAttackState_MAX = 3
};


// Enum ConZ.EZombieRagdollAutoRecoveryType
enum class EZombieRagdollAutoRecoveryType : uint8_t
{
	EZombieRagdollAutoRecoveryType__None = 0,
	EZombieRagdollAutoRecoveryType__WhenAtRest = 1,
	EZombieRagdollAutoRecoveryType__AfterTimeSpan = 2,
	EZombieRagdollAutoRecoveryType__WhenAtRestAfterTimeSpan = 3,
	EZombieRagdollAutoRecoveryType__EZombieRagdollAutoRecoveryType_MAX = 4
};


// Enum ConZ.EZombieTurnMontage
enum class EZombieTurnMontage : uint8_t
{
	EZombieTurnMontage__RelaxedIdle = 0,
	EZombieTurnMontage__AlertedIdle = 1,
	EZombieTurnMontage__CombatIdle = 2,
	EZombieTurnMontage__RelaxedIdleToAlertedIdle = 3,
	EZombieTurnMontage__Count      = 4,
	EZombieTurnMontage__EZombieTurnMontage_MAX = 5
};


// Enum ConZ.EZombieStance
enum class EZombieStance : uint8_t
{
	EZombieStance__Relaxed         = 0,
	EZombieStance__Alerted         = 1,
	EZombieStance__Combat          = 2,
	EZombieStance__EZombieStance_MAX = 3
};



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
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
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
	int                                                TeamIndex;                                                // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
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
// 0x0024
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
};

// ScriptStruct ConZ.CharacterStatsItem
// 0x0038
struct FCharacterStatsItem
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FCharacterStats                             CharacterStats;                                           // 0x0010(0x0024) (CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
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
// 0x0020
struct FCraftingItem
{
	struct FString                                     Description;                                              // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FPossibleItem>                       PossibleItems;                                            // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
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
	struct FString                                     UniqueID;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
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
// 0x0180
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
	float                                              ScoreToFameConversionFactor;                              // 0x00A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	TArray<class UItemSelection*>                      PossiblePrimaryWeapons;                                   // 0x00A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<class UItemSelection*>                      PossibleSecondaryWeapons;                                 // 0x00B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<class UItemSelection*>                      PossibleTertiaryWeapons;                                  // 0x00C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<class UItemSelection*>                      PossibleOutfits;                                          // 0x00D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<class UItemSelection*>                      PossibleSupportItems;                                     // 0x00E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<class UItemSelection*>                      MandatoryGear;                                            // 0x00F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FText                                       EventName;                                                // 0x0108(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       EventDescription;                                         // 0x0120(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       PrerequisitesText;                                        // 0x0138(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       WeaponText;                                               // 0x0150(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       RewardsText;                                              // 0x0168(0x0018) (CPF_Edit, CPF_BlueprintVisible)
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

// ScriptStruct ConZ.DbIntegerId
// 0x0008
struct FDbIntegerId
{
	int64_t                                            Value;                                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	class UClass*                                      Preset;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
// 0x00A0
struct FExamineItemSpawnerData
{
	int                                                MinQuantity;                                              // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxQuantity;                                              // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FItemSpawnerDataBasedOnPreset               Spawner;                                                  // 0x0008(0x0088) (CPF_Edit)
	TArray<struct FExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes> MaxOccurrencesPerSpawnTypes;                              // 0x0090(0x0010) (CPF_Edit, CPF_ZeroConstructor)
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
	struct FLinearColor                                teamName;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
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
	unsigned char                                      UnknownData01[0xD];                                       // 0x0093(0x000D) MISSED OFFSET
};

// ScriptStruct ConZ.WindowMarker
// 0x001C
struct FWindowMarker
{
	bool                                               IsVaultable;                                              // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     Vertex1;                                                  // 0x0004(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     Vertex2;                                                  // 0x0010(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
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
// 0x0050
struct FPlayerLoginInfo
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FDbIntegerId                                UserProfileId;                                            // 0x0010(0x0008) (CPF_BlueprintVisible)
	struct FString                                     UserProfileName;                                          // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     ServerName;                                               // 0x0028(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                ServerResponsePort;                                       // 0x0038(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FDbIntegerId                                ServerUserProfileId;                                      // 0x0040(0x0008) (CPF_BlueprintVisible)
	float                                              TimeToRemainInGameAfterLeaveGameRequest;                  // 0x0048(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
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
	int8_t                                             Counter;                                                  // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
// 0x0018
struct FSearchPerItemData
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Probability;                                              // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinQuantity;                                              // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxQuantity;                                              // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
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
// 0x0020
struct FHandsPoseCorrections
{
	class UAnimSequenceBase*                           RightHand;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           RightFist;                                                // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           RightFistInCombatMode;                                    // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RightHandToIdleBlendAlpha;                                // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
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

// ScriptStruct ConZ.ScopeZoomLevelSettings
// 0x0530
struct FScopeZoomLevelSettings
{
	float                                              Magnification;                                            // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x0010(0x0520) (CPF_Edit)
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

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
