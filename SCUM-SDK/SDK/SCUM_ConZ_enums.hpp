#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

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
	EInteractionType__GestureShowFinger = 69,
	EInteractionType__GestureStandSurrender = 70,
	EInteractionType__GestureWaveHi = 71,
	EInteractionType__GestureYouAreDead = 72,
	EInteractionType__GestureFY    = 73,
	EInteractionType__GesturePoint = 74,
	EInteractionType__GestureHeart = 75,
	EInteractionType__PlayInstrument = 76,
	EInteractionType__MakeUnconscious = 77,
	EInteractionType__PacifyAnimal = 78,
	EInteractionType__TameAnimal   = 79,
	EInteractionType__LearnAnimal  = 80,
	EInteractionType__CommandAnimal = 81,
	EInteractionType__FeedAnimal   = 82,
	EInteractionType__Buy          = 83,
	EInteractionType__Maintain     = 84,
	EInteractionType__Lockpick     = 85,
	EInteractionType__AddUpgrade   = 86,
	EInteractionType__EInteractionType_MAX = 87
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


// Enum ConZ.EConfigFile
enum class EConfigFile : uint8_t
{
	EConfigFile__None              = 0,
	EConfigFile__Engine            = 1,
	EConfigFile__GameUserSettings  = 2,
	EConfigFile__ServerSettings    = 3,
	EConfigFile__EConfigFile_MAX   = 4
};


// Enum ConZ.EDoorStateFlags
enum class EDoorStateFlags : uint8_t
{
	EDoorStateFlags__None          = 0,
	EDoorStateFlags__Open          = 1,
	EDoorStateFlags__Locked        = 2,
	EDoorStateFlags__HasPower      = 3,
	EDoorStateFlags__ChangeSide    = 4,
	EDoorStateFlags__HasLock       = 5,
	EDoorStateFlags__EDoorStateFlags_MAX = 6
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


// Enum ConZ.EConZPxDominanceGroup
enum class EConZPxDominanceGroup : uint8_t
{
	EConZPxDominanceGroup__Default = 0,
	EConZPxDominanceGroup__MediumPawns = 1,
	EConZPxDominanceGroup__LargePawns = 2,
	EConZPxDominanceGroup__EConZPxDominanceGroup_MAX = 3
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


// Enum ConZ.EPlayableInstrumentTone
enum class EPlayableInstrumentTone : uint8_t
{
	EPlayableInstrumentTone__C     = 0,
	EPlayableInstrumentTone__Db    = 1,
	EPlayableInstrumentTone__D     = 2,
	EPlayableInstrumentTone__Eb    = 3,
	EPlayableInstrumentTone__E     = 4,
	EPlayableInstrumentTone__F     = 5,
	EPlayableInstrumentTone__Gb    = 6,
	EPlayableInstrumentTone__G     = 7,
	EPlayableInstrumentTone__Ab    = 8,
	EPlayableInstrumentTone__A     = 9,
	EPlayableInstrumentTone__Bb    = 10,
	EPlayableInstrumentTone__B     = 11,
	EPlayableInstrumentTone__C2    = 12,
	EPlayableInstrumentTone__Count = 13,
	EPlayableInstrumentTone__EPlayableInstrumentTone_MAX = 14
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
	EWeaponCategory__Bow           = 8,
	EWeaponCategory__Count         = 9,
	EWeaponCategory__EWeaponCategory_MAX = 10
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


// Enum ConZ.EPlayingInstrumentState
enum class EPlayingInstrumentState : uint8_t
{
	EPlayingInstrumentState__None  = 0,
	EPlayingInstrumentState__Exiting = 1,
	EPlayingInstrumentState__Idle  = 2,
	EPlayingInstrumentState__Playing = 3,
	EPlayingInstrumentState__EPlayingInstrumentState_MAX = 4
};


// Enum ConZ.EScopingWithItemInHandsState
enum class EScopingWithItemInHandsState : uint8_t
{
	EScopingWithItemInHandsState__None = 0,
	EScopingWithItemInHandsState__Starting = 1,
	EScopingWithItemInHandsState__Scoping = 2,
	EScopingWithItemInHandsState__StoppingWithEffect = 3,
	EScopingWithItemInHandsState__StoppingNoEffect = 4,
	EScopingWithItemInHandsState__EScopingWithItemInHandsState_MAX = 5
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


// Enum ConZ.EHumanRace
enum class EHumanRace : uint8_t
{
	EHumanRace__Caucasian          = 0,
	EHumanRace__Mongoloid          = 1,
	EHumanRace__Negroid            = 2,
	EHumanRace__EHumanRace_MAX     = 3
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
	EClothesType__PenisWarmer      = 14,
	EClothesType__Back             = 15,
	EClothesType__Waist            = 16,
	EClothesType__Suit             = 17,
	EClothesType__Count            = 18,
	EClothesType__EClothesType_MAX = 19
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
	ECharacterActionNotifyType__CommitSuicide = 6,
	ECharacterActionNotifyType__ECharacterActionNotifyType_MAX = 7
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
	EImpactSeverity__Count         = 3,
	EImpactSeverity__EImpactSeverity_MAX = 4
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


// Enum ConZ.EPlacementState
enum class EPlacementState : uint8_t
{
	EPlacementState__Placing       = 0,
	EPlacementState__PlacedPending = 1,
	EPlacementState__Placed        = 2,
	EPlacementState__EPlacementState_MAX = 3
};


// Enum ConZ.EIngredientUsageRule
enum class EIngredientUsageRule : uint8_t
{
	EIngredientUsageRule__Quantity = 0,
	EIngredientUsageRule__Usage    = 1,
	EIngredientUsageRule__Weight   = 2,
	EIngredientUsageRule__EIngredientUsageRule_MAX = 3
};


// Enum ConZ.EPlayableInstrumentView
enum class EPlayableInstrumentView : uint8_t
{
	EPlayableInstrumentView__FirstPerson = 0,
	EPlayableInstrumentView__ThirdPerson = 1,
	EPlayableInstrumentView__EPlayableInstrumentView_MAX = 2
};


// Enum ConZ.EPlayableInstrumentChord
enum class EPlayableInstrumentChord : uint8_t
{
	EPlayableInstrumentChord__Count = 0,
	EPlayableInstrumentChord__EPlayableInstrumentChord_MAX = 1
};


// Enum ConZ.EInstrumentEventType
enum class EInstrumentEventType : uint8_t
{
	EInstrumentEventType__PlayTone = 0,
	EInstrumentEventType__StopTone = 1,
	EInstrumentEventType__EInstrumentEventType_MAX = 2
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
	EPrisonerMontage__GestureShowFinger = 36,
	EPrisonerMontage__GestureStandSurrender = 37,
	EPrisonerMontage__GestureWaveHi = 38,
	EPrisonerMontage__GestureYouAreDead = 39,
	EPrisonerMontage__GestureFY    = 40,
	EPrisonerMontage__GesturePoint = 41,
	EPrisonerMontage__GestureHeart = 42,
	EPrisonerMontage__CommitSuicide = 43,
	EPrisonerMontage__LockpickRegular = 44,
	EPrisonerMontage__Count        = 45,
	EPrisonerMontage__EPrisonerMontage_MAX = 46
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
	EPrisonerAnimationSet__BowRelaxed = 5,
	EPrisonerAnimationSet__Bow     = 6,
	EPrisonerAnimationSet__Count   = 7,
	EPrisonerAnimationSet__EPrisonerAnimationSet_MAX = 8
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


// Enum ConZ.EScopingView
enum class EScopingView : uint8_t
{
	EScopingView__FirstPerson      = 0,
	EScopingView__ThirdPerson      = 1,
	EScopingView__EScopingView_MAX = 2
};


// Enum ConZ.EScopingStance
enum class EScopingStance : uint8_t
{
	EScopingStance__Standing       = 0,
	EScopingStance__Crouching      = 1,
	EScopingStance__Prone          = 2,
	EScopingStance__EScopingStance_MAX = 3
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
	ESkillReplicationID__ArcherySkill = 20,
	ESkillReplicationID__ThieverySkill = 21,
	ESkillReplicationID__ESkillReplicationID_MAX = 22
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


// Enum ConZ.EVehicleSeatType
enum class EVehicleSeatType : uint8_t
{
	EVehicleSeatType__Driver       = 0,
	EVehicleSeatType__Passenger    = 1,
	EVehicleSeatType__EVehicleSeatType_MAX = 2
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


// Enum ConZ.EWeaponAnimationCurve
enum class EWeaponAnimationCurve : uint8_t
{
	EWeaponAnimationCurve__DrawAmount = 0,
	EWeaponAnimationCurve__StrengthAmount = 1,
	EWeaponAnimationCurve__Count   = 2,
	EWeaponAnimationCurve__EWeaponAnimationCurve_MAX = 3
};


// Enum ConZ.WeaponBowState
enum class EWeaponBowState : uint8_t
{
	WeaponBowState__None           = 0,
	WeaponBowState__InsertArrow    = 1,
	WeaponBowState__RemoveArrow    = 2,
	WeaponBowState__Draw           = 3,
	WeaponBowState__CancelFiring   = 4,
	WeaponBowState__FireDummy      = 5,
	WeaponBowState__Fire           = 6,
	WeaponBowState__FireAndInsertArrow = 7,
	WeaponBowState__Active         = 8,
	WeaponBowState__WeaponBowState_MAX = 9
};


// Enum ConZ.EWeaponActionNotifyType
enum class EWeaponActionNotifyType : uint8_t
{
	EWeaponActionNotifyType__None  = 0,
	EWeaponActionNotifyType__ChamberOpened = 1,
	EWeaponActionNotifyType__ChamberClosed = 2,
	EWeaponActionNotifyType__ChamberOpenedClosed = 3,
	EWeaponActionNotifyType__BowInsertArrow = 4,
	EWeaponActionNotifyType__BowRemoveArrow = 5,
	EWeaponActionNotifyType__EWeaponActionNotifyType_MAX = 6
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
	EWeaponType__Bow               = 2,
	EWeaponType__Count             = 3,
	EWeaponType__EWeaponType_MAX   = 4
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


// Enum ConZ.EWidgetType
enum class EWidgetType : uint8_t
{
	EWidgetType__InteractionWidgetClass = 0,
	EWidgetType__InteractionContainerWidgetClass = 1,
	EWidgetType__ItemWidgetClass   = 2,
	EWidgetType__InventoryWidgetClass = 3,
	EWidgetType__InventorySlotWidgetClass = 4,
	EWidgetType__WarningWidgetClass = 5,
	EWidgetType__HudWidgetClass    = 6,
	EWidgetType__LoadingWidgetClass = 7,
	EWidgetType__LoadingIconWidgetClass = 8,
	EWidgetType__SpawnScreenWidgetClass = 9,
	EWidgetType__WaypointScreenWidgetClass = 10,
	EWidgetType__ActionProgressWidgetClass = 11,
	EWidgetType__ItemSelectionWidgetClass = 12,
	EWidgetType__ExamineWidgetClass = 13,
	EWidgetType__HandsInventoryWidgetClass = 14,
	EWidgetType__GenericItemInventoryWidgetClass = 15,
	EWidgetType__InventoryContainersWidgetClass = 16,
	EWidgetType__CombinedInventoryWidgetClass = 17,
	EWidgetType__TeamInvitationWidgetClass = 18,
	EWidgetType__CraftingInfoWidgetClass = 19,
	EWidgetType__CraftingComponentWidgetClass = 20,
	EWidgetType__CraftingRecipeWidgetClass = 21,
	EWidgetType__EmptySlotWidgetClass = 22,
	EWidgetType__TeamInfoWidgetClass = 23,
	EWidgetType__TeammateNameWidgetClass = 24,
	EWidgetType__PreviousNextSwitchWidgetClass = 25,
	EWidgetType__VicinityItemContainerWidgetClass = 26,
	EWidgetType__QuickAccessItemWidget = 27,
	EWidgetType__GameEventPanelWidgetClass = 28,
	EWidgetType__GameEventCardWidgetClass = 29,
	EWidgetType__GameEventScoreboardWidgetClass = 30,
	EWidgetType__GameEventMiniScoreboardWidgetClass = 31,
	EWidgetType__CircularMenuWidgetClass = 32,
	EWidgetType__CircularMenuSegmentWidgetClass = 33,
	EWidgetType__LockpickingWidgetClass = 34,
	EWidgetType__DoorUpgradeWidgetClass = 35,
	EWidgetType__UpgradeWidgetClass = 36,
	EWidgetType__EWidgetType_MAX   = 37
};


// Enum ConZ.EWolfAttackState
enum class EWolfAttackState : uint8_t
{
	EWolfAttackState__Peace        = 0,
	EWolfAttackState__Chasing      = 1,
	EWolfAttackState__Attacking    = 2,
	EWolfAttackState__EWolfAttackState_MAX = 3
};


// Enum ConZ.ECraftingMarkerMode
enum class ECraftingMarkerMode : uint8_t
{
	ECraftingMarkerMode__Marker    = 0,
	ECraftingMarkerMode__FullInfo  = 1,
	ECraftingMarkerMode__ECraftingMarkerMode_MAX = 2
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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
