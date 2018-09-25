#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ConZ_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ConZ.DesignableUserWidget
// 0x0018 (0x0220 - 0x0208)
class UDesignableUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0208(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DesignableUserWidget");
		return ptr;
	}


	void SetDisplayLabelName(const struct FString& displayLabelName);
	void SetDefaultPosition(const struct FVector2D& Value);
	void OnSynchronizeProperties();
	struct FString GetDisplayLabelName();
	struct FVector2D GetDefaultPosition();
};


// Class ConZ.ActionProgressWidget
// 0x0040 (0x0260 - 0x0220)
class UActionProgressWidget : public UDesignableUserWidget
{
public:
	struct FScriptMulticastDelegate                    ActionProgressFinishedEvent;                              // 0x0220(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ActionProgressCancelledEvent;                             // 0x0230(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	bool                                               CanCancel;                                                // 0x0240(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0241(0x000B) MISSED OFFSET
	float                                              _currentTime;                                             // 0x024C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              _duration;                                                // 0x0250(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	bool                                               _manualMode;                                              // 0x0254(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0255(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ActionProgressWidget");
		return ptr;
	}


	void SetProgress(float progress);
	void OnActionProgressFinishedEvent__DelegateSignature();
	void OnActionProgressCancelledEvent__DelegateSignature();
	void ExecuteAction();
	void CancelAction();
};


// Class ConZ.Sickness
// 0x0188 (0x01B0 - 0x0028)
class USickness : public UObject
{
public:
	unsigned char                                      UnknownData00[0x188];                                     // 0x0028(0x0188) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Sickness");
		return ptr;
	}


	void SetShouldDisplayState(bool Value);
	ESicknessState GetState();
	bool GetShouldDisplayState();
	int GetPhase();
	struct FText GetCaption();
};


// Class ConZ.Addiction
// 0x0000 (0x01B0 - 0x01B0)
class UAddiction : public USickness
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Addiction");
		return ptr;
	}

};


// Class ConZ.AlcoholismAddiction
// 0x0010 (0x01C0 - 0x01B0)
class UAlcoholismAddiction : public UAddiction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AlcoholismAddiction");
		return ptr;
	}

};


// Class ConZ.Disease
// 0x0000 (0x01B0 - 0x01B0)
class UDisease : public USickness
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Disease");
		return ptr;
	}

};


// Class ConZ.Poisoning
// 0x0000 (0x01B0 - 0x01B0)
class UPoisoning : public UDisease
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Poisoning");
		return ptr;
	}

};


// Class ConZ.AmanitaMuscariaPoisoning
// 0x0010 (0x01C0 - 0x01B0)
class UAmanitaMuscariaPoisoning : public UPoisoning
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AmanitaMuscariaPoisoning");
		return ptr;
	}

};


// Class ConZ.AmanitaPantheriaPoisoning
// 0x0008 (0x01B8 - 0x01B0)
class UAmanitaPantheriaPoisoning : public UPoisoning
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AmanitaPantheriaPoisoning");
		return ptr;
	}

};


// Class ConZ.AmanitaPhalloidesPoisoning
// 0x0008 (0x01B8 - 0x01B0)
class UAmanitaPhalloidesPoisoning : public UPoisoning
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AmanitaPhalloidesPoisoning");
		return ptr;
	}

};


// Class ConZ.AmanitaVirosaPoisoning
// 0x0010 (0x01C0 - 0x01B0)
class UAmanitaVirosaPoisoning : public UPoisoning
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AmanitaVirosaPoisoning");
		return ptr;
	}

};


// Class ConZ.Item
// 0x0468 (0x0780 - 0x0318)
class AItem : public AActor
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0318(0x0108) MISSED OFFSET
	struct FScriptMulticastDelegate                    PickedUpState;                                            // 0x0420(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStaticMeshChanged;                                      // 0x0430(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSkeletalMeshChanged;                                    // 0x0440(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemAddedEvent;                                         // 0x0450(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemRemovedEvent;                                       // 0x0460(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemMovedEvent;                                         // 0x0470(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UClass*                                      AttachmentSocketMountType;                                // 0x0480(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FAttachmentSocket>                   AttachmentSockets;                                        // 0x0488(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UClass*                                      HolsterAttachmentSocketMountType;                         // 0x0498(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TMap<class UClass*, struct FAttachmentSocketOffset> AttachmentSocketsOffset;                                  // 0x04A0(0x0050) (CPF_Edit, CPF_ZeroConstructor)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x04F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTexture2D*                                  InventoryIcon;                                            // 0x04F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  InventoryIconInHands;                                     // 0x0500(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Caption;                                                  // 0x0508(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	uint32_t                                           SizeX;                                                    // 0x0520(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           SizeY;                                                    // 0x0524(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IgnoreMaxContainedWeight;                                 // 0x0528(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0529(0x0003) MISSED OFFSET
	float                                              MaxContainedWeight;                                       // 0x052C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxWaterWeightAsRatioOfWeight;                            // 0x0530(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsIgnoredBySpawners;                                      // 0x0534(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FItemLocation                               ItemLocation;                                             // 0x0535(0x000C) (CPF_Edit, CPF_DisableEditOnInstance)
	EItemRarity                                        Rarity;                                                   // 0x0541(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0542(0x0006) MISSED OFFSET
	struct FGameplayTagContainer                       ItemSpawnTypes;                                           // 0x0548(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FVector                                     SpawnLocationOffset;                                      // 0x0568(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    SpawnRotationOffset;                                      // 0x0574(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpawnRotationRandomization;                               // 0x0580(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Uses;                                                     // 0x0584(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Description;                                              // 0x0588(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<struct FPossibleItemSickness>               PossibleSicknesses;                                       // 0x05A0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class UClass*>                              TreatSicknesses;                                          // 0x05B0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              DamageOnUse;                                              // 0x05C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageOverTime;                                           // 0x05C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DropAutoDestructTime;                                     // 0x05C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoDestructRadius;                                       // 0x05CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AutoDestructLimit;                                        // 0x05D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EItemExhausted                                     IfExhausted;                                              // 0x05D4(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EInteractionType                                   CraftingInteraction;                                      // 0x05D5(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x05D6(0x0002) MISSED OFFSET
	class UChoppingRecipeDataAsset*                    ChoppingRecipeDataAsset;                                  // 0x05D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       PickupCaption;                                            // 0x05E0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	bool                                               EnableAwarenessGlow;                                      // 0x05F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               EnableHoverGlow;                                          // 0x05F9(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x05FA(0x0006) MISSED OFFSET
	TArray<class UBaseItemTag*>                        ItemTags;                                                 // 0x0600(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class UBaseItemTag*>                        OwnedItemTags;                                            // 0x0610(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor)
	EItemNoiseLevel                                    NoiseLevel;                                               // 0x0620(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0621(0x0007) MISSED OFFSET
	struct FItemMotionNoise                            MotionNoise;                                              // 0x0628(0x0008) (CPF_Edit)
	struct FItemInventoryHandlingSounds                InventoryHandlingSounds;                                  // 0x0630(0x0008) (CPF_Edit)
	class UDestructibleMesh*                           DestroyedMesh;                                            // 0x0638(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DestroyedImpulseStrength;                                 // 0x0640(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0644(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               DestroyedSound;                                           // 0x0648(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x50];                                      // 0x0650(0x0050) MISSED OFFSET
	class UThrowingComponent*                          ThrowingComponent;                                        // 0x06A0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x4A];                                      // 0x06A8(0x004A) MISSED OFFSET
	EInteractionType                                   _defaultInteractionOnFloor;                               // 0x06F2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EInteractionType                                   _defaultInteractionInInventory;                           // 0x06F3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EInteractionType                                   _defaultInteractionEquipped;                              // 0x06F4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x1B];                                      // 0x06F5(0x001B) MISSED OFFSET
	class AActor*                                      _attachParentObject;                                      // 0x0710(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVisibilityReplication                      _visibilityReplication;                                   // 0x0718(0x0008) (CPF_Net)
	unsigned char                                      UnknownData10[0x14];                                      // 0x0720(0x0014) MISSED OFFSET
	unsigned char                                      _waterWeightReplicated;                                   // 0x0734(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData11[0xB];                                       // 0x0735(0x000B) MISSED OFFSET
	bool                                               _meshIsSimulatingPhysics;                                 // 0x0740(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0741(0x0003) MISSED OFFSET
	float                                              Weight;                                                   // 0x0744(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _damage;                                                  // 0x0748(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      _damageReplicated;                                        // 0x074C(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x074D(0x0003) MISSED OFFSET
	float                                              _weightUsed;                                              // 0x0750(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isCrafted;                                               // 0x0754(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0755(0x0003) MISSED OFFSET
	float                                              _uncraftTime;                                             // 0x0758(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isBusy;                                                  // 0x075C(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _examined;                                                // 0x075D(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData15[0x12];                                      // 0x075E(0x0012) MISSED OFFSET
	class USceneComponent*                             _tempSceneComponent;                                      // 0x0770(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData16[0x8];                                       // 0x0778(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Item");
		return ptr;
	}


	bool Use(class APrisoner* Prisoner, int usage, float usageWeight, bool Eat);
	void StopBlinking();
	void StaticMeshChangedDelegate__DelegateSignature(class AItem* Item);
	void SkeletalMeshChangedDelegate__DelegateSignature(class AItem* Item);
	void SetWeight(float Value);
	void SetDamage(float Damage);
	void Server_Throw(const struct FVector& ZeroBasedStartPosition, const struct FRotator& StartRotation, const struct FVector& StartVelocity);
	void PickedUpStateDelegate__DelegateSignature(class AItem* Item, bool pickedUp);
	void PhysicsSimulationTimerCallback();
	void OnRep_WeightUsed();
	void OnRep_WaterWeight();
	void OnRep_Visibility();
	void OnRep_MeshIsSimulatingPhysics();
	void OnRep_Examined();
	void OnRep_Damage();
	void OnProjectileStop(const struct FHitResult& ImpactResult);
	void OnDestroyedEvent(class AActor* Self);
	void OnContainedItemDestroyed(class AActor* containedItem);
	void NetMulticast_SpawnDestroyedEffects();
	void NetMulticast_SetActorDropLocationAndRotation(const struct FVector& Location, const struct FRotator& Rotation);
	bool NeedServerDataUpdate();
	void Multicast_Throw(const struct FVector& ZeroBasedStartPosition, const struct FRotator& StartRotation, const struct FVector& StartVelocity);
	void ItemRemovedDelegate__DelegateSignature(class AItem* container, class AItem* Item);
	void ItemMovedDelegate__DelegateSignature(class AItem* container, class AItem* Item, int column, int row);
	void ItemAddedDelegate__DelegateSignature(class AItem* container, class AItem* Item, int column, int row);
	void Interact(class APrisoner* user, EInteractionType InteractionType, const struct FInteractionData& InteractionData);
	struct FWidgetDisplayInfo GetWidgetDisplayInfo();
	float GetWetness();
	float GetWeightUsed();
	float GetWeightRemained();
	float GetWeightPerUse();
	float GetWeight();
	float GetWaterWeight();
	int GetUsedSlots();
	float GetUsedMass();
	float GetTotalWeight();
	int GetTotalUses();
	int GetSlotsCount();
	int GetSizeY();
	int GetSizeX();
	int GetRemainingUses();
	int GetRemaining();
	float GetNoiseLoudnessWhenPickedUp();
	float GetNoiseLoudnessWhenDropped();
	float GetNoiseLoudnessOnGroundImpact();
	class UMeshComponent* GetMeshComponent();
	TArray<struct FInteractionStruct> GetInteractions(class UObject* user, class UObject* creator);
	float GetDamage(bool recalculate);
	TArray<class AItem*> GetAllContainedItems();
	void DetachFromAll();
	bool CanBeDroppedBy(class AConZCharacter* Character);
	bool CanAutoAddItem(class AItem* Item, unsigned char* column, unsigned char* row);
	bool CanAddItem(class AItem* Item, unsigned char column, unsigned char row);
	void Blink(float Duration);
};


// Class ConZ.AmmunitionBoxItem
// 0x0010 (0x0790 - 0x0780)
class AAmmunitionBoxItem : public AItem
{
public:
	class UClass*                                      ItemClassToSpawnWhenUnpacked;                             // 0x0780(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxAmmoCount;                                             // 0x0788(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                _ammoCount;                                               // 0x078C(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AmmunitionBoxItem");
		return ptr;
	}


	void OnRep_AmmoCount();
};


// Class ConZ.AmmunitionItem
// 0x0010 (0x0790 - 0x0780)
class AAmmunitionItem : public AItem
{
public:
	int                                                MaxAmmoCount;                                             // 0x0780(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                _ammoCount;                                               // 0x0784(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0788(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AmmunitionItem");
		return ptr;
	}


	void SetAmmoCount(int count);
	void OnRep_AmmoCount();
	int GetAmmoCount();
};


// Class ConZ.ItemSpawner
// 0x0080 (0x0398 - 0x0318)
class AItemSpawner : public AActor
{
public:
	class UClass*                                      ItemClassToSpawn;                                         // 0x0318(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseItemSpawnTypeTags;                                     // 0x0320(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0321(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       ItemSpawnTypes;                                           // 0x0328(0x0020) (CPF_Edit)
	float                                              Probability;                                              // 0x0348(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseItemLimit;                                             // 0x034C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseItemZone;                                              // 0x034D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseItemRarity;                                            // 0x034E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x034F(0x0001) MISSED OFFSET
	float                                              InitialDamage;                                            // 0x0350(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RandomizeDamage;                                          // 0x0354(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InitialUsage;                                             // 0x0358(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RandomizeUsage;                                           // 0x035C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InitialDirtiness;                                         // 0x0360(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RandomizeDirtiness;                                       // 0x0364(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FPossibleItemSickness>               PossibleSicknesses;                                       // 0x0368(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class USceneComponent*                             SceneComponent;                                           // 0x0378(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0380(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ItemSpawner");
		return ptr;
	}

};


// Class ConZ.AmmunitionItemSpawner
// 0x0020 (0x03B8 - 0x0398)
class AAmmunitionItemSpawner : public AItemSpawner
{
public:
	TArray<class UClass*>                              Items;                                                    // 0x0398(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class UItemGroup*>                          ItemGroups;                                               // 0x03A8(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AmmunitionItemSpawner");
		return ptr;
	}

};


// Class ConZ.ConZCharacter
// 0x0100 (0x0830 - 0x0730)
class AConZCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0730(0x0028) MISSED OFFSET
	class UClass*                                      CorpseClass;                                              // 0x0758(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UChoppingRecipeDataAsset*                    ChoppingRecipeDataAsset;                                  // 0x0760(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IterativeChopping;                                        // 0x0768(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0769(0x0007) MISSED OFFSET
	struct FName                                       HeadBoneName;                                             // 0x0770(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TMap<struct FName, EBodyPart>                      BodyPartByBoneName;                                       // 0x0778(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x1];                                       // 0x07C8(0x0001) MISSED OFFSET
	bool                                               ShouldAutoUpdateEnvironmentClass;                         // 0x07C9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x07CA(0x0002) MISSED OFFSET
	float                                              EnvironmentClassAutoUpdateInterval;                       // 0x07CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               EnteredIndoorEnvironmentAudioEvent;                       // 0x07D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               EnteredOutdoorEnvironmentAudioEvent;                      // 0x07D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x07E0(0x0008) MISSED OFFSET
	class UCharacterSoundComponent*                    SoundComponent;                                           // 0x07E8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x40];                                      // 0x07F0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ConZCharacter");
		return ptr;
	}


	void SetGender(EGender Value);
	void SetEnvironmentClass(EEnvironmentClass Value);
	void Server_HandleMeleeAttackCapsuleHit(class AConZCharacter* attacker, const struct FMeleeAttackCapsuleHitInfo& HitInfo);
	void NetMulticast_HandleMeleeAttackCapsuleHit(class AConZCharacter* attacker, const struct FMeleeAttackCapsuleHitInfo& HitInfo);
	class ACorpse* LeaveCorpse();
	bool IsHeadBone(const struct FName& BoneName);
	bool IsConscious();
	bool IsAlive();
	class UCharacterSoundComponent* GetSoundComponent();
	EDetectHitCollisionType GetHitReactBodyPartFromHitResult(const struct FHitResult& HitResult);
	EDetectHitCollisionType GetHitReactBodyPartFromBodyPart(EBodyPart Value);
	EGender GetGender();
	EEnvironmentClass GetEnvironmentClass();
	EBodyPart GetBodyPartFromBoneName(const struct FName& BoneName);
	void ActorHitCallback(class AActor* Actor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};


// Class ConZ.Animal
// 0x01A0 (0x09D0 - 0x0830)
class AAnimal : public AConZCharacter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0830(0x0010) MISSED OFFSET
	float                                              AttackRange;                                              // 0x0840(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SightRange;                                               // 0x0844(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SenseRange;                                               // 0x0848(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HitAngle;                                                 // 0x084C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HitRange;                                                 // 0x0850(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WalkSpeed;                                                // 0x0854(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RunSpeed;                                                 // 0x0858(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AttackSpeed;                                              // 0x085C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationSpeedFree;                                        // 0x0860(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationSpeedFollow;                                      // 0x0864(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StuckTime;                                                // 0x0868(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StuckRadius;                                              // 0x086C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StuckDuration;                                            // 0x0870(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Mass;                                                     // 0x0874(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MeleeDamageMultiplier;                                    // 0x0878(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BodyShotDamageMultiplier;                                 // 0x087C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeadShotDamageMultiplier;                                 // 0x0880(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BleedingSpeed;                                            // 0x0884(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BleedingThreshold;                                        // 0x0888(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EAnimalHandlingLevel                               HandlingLevel;                                            // 0x088C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x088D(0x0003) MISSED OFFSET
	TArray<EAnimalCommand>                             HandlingCommands;                                         // 0x0890(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	class UAnimalHandlingItemTag*                      HandlingTag;                                              // 0x08A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TickFrequency;                                            // 0x08A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IdleStates;                                               // 0x08AC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x08AD(0x0003) MISSED OFFSET
	float                                              EatingProbability;                                        // 0x08B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ObservingProbability;                                     // 0x08B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroundSlopeAngleSmoothingRate;                            // 0x08B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x08BC(0x0004) MISSED OFFSET
	class UClass*                                      TrackingMarker;                                           // 0x08C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      BloodTrailMarker;                                         // 0x08C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TrackingMarkerFrequency;                                  // 0x08D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TrackingMarkerDistance;                                   // 0x08D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TrackingMarkerRadius;                                     // 0x08D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TrackingMarkerDuration;                                   // 0x08DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinDistanceFromHabitatWhenSearchingForFood;               // 0x08E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxDistanceFromHabitatWhenSearchingForFood;               // 0x08E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinRestDuration;                                          // 0x08E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxRestDuration;                                          // 0x08EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinDesiredFleeLocationDistance;                           // 0x08F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxDesiredFleeLocationDistance;                           // 0x08F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GoalRadius;                                               // 0x08F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinFleeingDuration;                                       // 0x08FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxFleeingDuration;                                       // 0x0900(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FleeingDirectionRandomness;                               // 0x0904(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      Habitat;                                                  // 0x0908(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinIdleTime;                                              // 0x0910(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxIdleTime;                                              // 0x0914(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                EatingAnimMontage;                                        // 0x0918(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                ObservingAnimMontage;                                     // 0x0920(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DebugDraw;                                                // 0x0928(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0929(0x0003) MISSED OFFSET
	struct FColor                                      DebugColor;                                               // 0x092C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class UAnimalAnimationComponent*                   AnimationComponent;                                       // 0x0930(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UHitReactComponent*                          HitReactComponent;                                        // 0x0938(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTextRenderComponent*                        NameTextRender;                                           // 0x0940(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0948(0x0008) MISSED OFFSET
	float                                              _health;                                                  // 0x0950(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EAnimalPace                                        _pace;                                                    // 0x0954(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x13];                                      // 0x0955(0x0013) MISSED OFFSET
	class APrisoner*                                   _handler;                                                 // 0x0968(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EAnimalHandlingStage                               _handlingStage;                                           // 0x0970(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EAnimalCommand                                     _handlingCommand;                                         // 0x0971(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x0972(0x0006) MISSED OFFSET
	struct FString                                     _realName;                                                // 0x0978(0x0010) (CPF_Net, CPF_ZeroConstructor)
	int                                                _handlingID;                                              // 0x0988(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x18];                                      // 0x098C(0x0018) MISSED OFFSET
	unsigned char                                      _idleState;                                               // 0x09A4(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x2B];                                      // 0x09A5(0x002B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Animal");
		return ptr;
	}


	void TestTameAnimal(class APrisoner* Prisoner);
	void StopObservingMontageOnClients();
	void StopEatingMontageOnClients();
	void SilentKill();
	void SetRealNameOnClient(const struct FString& realName);
	void SetPace(EAnimalPace pace);
	void PlayObservingMontageOnClients();
	void PlayEatingMontageOnClients();
	void OnShot(const struct FHitResult& HitResult, const struct FVector& impulseDir);
	void OnRep_RealName();
	void OnRagdollShot(const struct FHitResult& HitResult, const struct FVector& impulseDir);
	void Kill();
	void GoToRagdoll();
	float GetSpeed();
	class UAnimalSoundComponent* GetSoundComponent();
	EAnimalPace GetPace();
	EAnimalCommand GetHandlingCommand();
	void ApplyDamage(float Damage);
};


// Class ConZ.Animal2
// 0x01B0 (0x09E0 - 0x0830)
class AAnimal2 : public AConZCharacter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0830(0x0010) MISSED OFFSET
	EAnimalActivityCycle                               ActivityCycle;                                            // 0x0840(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0841(0x0003) MISSED OFFSET
	float                                              MaxHealth;                                                // 0x0844(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UHitReactComponent*                          HitReactComponent;                                        // 0x0848(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FGameplayTag                                HitReactType;                                             // 0x0850(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       EyesViewPointSocketName;                                  // 0x0858(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      TrackingMarker;                                           // 0x0860(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      BloodTrailMarker;                                         // 0x0868(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TrackingMarkerFrequency;                                  // 0x0870(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TrackingMarkerDistance;                                   // 0x0874(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TrackingMarkerRadius;                                     // 0x0878(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TrackingMarkerDuration;                                   // 0x087C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BleedingSpeed;                                            // 0x0880(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LightWoundDamageAmount;                                   // 0x0884(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MeleeBleedingThreshold;                                   // 0x0888(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StuckCheckDuration;                                       // 0x088C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StuckRadius;                                              // 0x0890(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnstuckMode;                                              // 0x0894(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0895(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDamageTaken;                                            // 0x0898(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	float                                              HeadBoneRotationSendToServerInterval;                     // 0x08A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SightRange;                                               // 0x08AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               TiltMeshOnSlopes;                                         // 0x08B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               AdjustMeshHeightOnSlopes;                                 // 0x08B1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x08B2(0x0002) MISSED OFFSET
	float                                              MeshPositionLerpSpeed;                                    // 0x08B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BleedInterval;                                            // 0x08B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShouldGoToRagdolIfTakenDamage;                            // 0x08BC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x08BD(0x0003) MISSED OFFSET
	float                                              RagdollDuration;                                          // 0x08C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _health;                                                  // 0x08C4(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _woundDamage;                                             // 0x08C8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x3C];                                      // 0x08CC(0x003C) MISSED OFFSET
	EAnimalStance                                      _animalStance;                                            // 0x0908(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x5F];                                      // 0x0909(0x005F) MISSED OFFSET
	bool                                               _doNotCrumble;                                            // 0x0968(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0969(0x0003) MISSED OFFSET
	float                                              _throwingDamageMultiplier;                                // 0x096C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _throwingDamageMultiplierPerBodyPart[0xC];                // 0x0970(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _projectileDamageMultiplier;                              // 0x09A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _projectileDamageMultiplierPerBodyPart[0xC];              // 0x09A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0xC];                                       // 0x09D4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Animal2");
		return ptr;
	}


	void UnpackUint8(unsigned char pack, TArray<bool>* B);
	unsigned char PackBoolsIntoUint8(TArray<bool> B);
	void OnRep_WoundDamage();
	void OnRep_Health();
	class UAnimal2SoundComponent* GetSoundComponent();
	void GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation);
	void GenerateBloodMarkerRPC();
	class APrisoner* ClosestPrisoner();
};


// Class ConZ.Animal2MovementComponent
// 0x0020 (0x07E0 - 0x07C0)
class UAnimal2MovementComponent : public UCharacterMovementComponent
{
public:
	float                                              GroundSlopeRotationSpeedDegrees;                          // 0x07C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CorrectServerReceivedZ;                                   // 0x07C4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1B];                                      // 0x07C5(0x001B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Animal2MovementComponent");
		return ptr;
	}

};


// Class ConZ.CharacterSoundComponent
// 0x0028 (0x0118 - 0x00F0)
class UCharacterSoundComponent : public UActorComponent
{
public:
	struct FName                                       AttachedSoundsAttachPointName;                            // 0x00F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCharacterImpactSoundsData*                  ImpactSounds;                                             // 0x00F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCharacterPainSoundsData*                    PainSounds;                                               // 0x0100(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinDurationBetweenPainSounds;                             // 0x0108(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxDurationBetweenPainSounds;                             // 0x010C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CharacterSoundComponent");
		return ptr;
	}

};


// Class ConZ.Animal2SoundComponent
// 0x00C8 (0x01E0 - 0x0118)
class UAnimal2SoundComponent : public UCharacterSoundComponent
{
public:
	class USoundCue*                                   IdleSound;                                                // 0x0118(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundCue*                                   AlternateIdleSound;                                       // 0x0120(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               IdleAudioEvent;                                           // 0x0128(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundCue*                                   AngrySound;                                               // 0x0130(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundCue*                                   AlternateAngrySound;                                      // 0x0138(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               AngryAudioEvent;                                          // 0x0140(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundCue*                                   AttackSound;                                              // 0x0148(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundCue*                                   AlternateAttackSound;                                     // 0x0150(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               AttackAudioEvent;                                         // 0x0158(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               ScaredAudioEvent;                                         // 0x0160(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               AlertedAudioEvent;                                        // 0x0168(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundCue*                                   KillSound;                                                // 0x0170(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundCue*                                   AlternateKillSound;                                       // 0x0178(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               KillAudioEvent;                                           // 0x0180(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundCue*                                   WalkFootstepSound;                                        // 0x0188(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundCue*                                   RunFootstepSound;                                         // 0x0190(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               AnimalFootstep;                                           // 0x0198(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FootstepSoundOverlap;                                     // 0x01A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FixedFootstepVolume;                                      // 0x01A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpeedFootstepVolume;                                      // 0x01A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinSilenceTimeout;                                        // 0x01AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSilenceTimeout;                                        // 0x01B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x01B4(0x0014) MISSED OFFSET
	EAnimal2Sound                                      _animalSound;                                             // 0x01C8(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x01C9(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Animal2SoundComponent");
		return ptr;
	}


	void OnRep_AnimalSound();
};


// Class ConZ.SkillAction
// 0x0188 (0x01B0 - 0x0028)
class USkillAction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x188];                                     // 0x0028(0x0188) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SkillAction");
		return ptr;
	}


	void OnActionFinished();
	void OnActionCanceled();
};


// Class ConZ.AnimalAction
// 0x0010 (0x01C0 - 0x01B0)
class UAnimalAction : public USkillAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AnimalAction");
		return ptr;
	}

};


// Class ConZ.AnimalAIController
// 0x0090 (0x04A0 - 0x0410)
class AAnimalAIController : public AAIController
{
public:
	float                                              TickFrequency;                                            // 0x0410(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	class UPawnSensingComponent*                       SensingComponent;                                         // 0x0418(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0420(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AnimalAIController");
		return ptr;
	}


	void SensingComponent_OnHearNoise(class APawn* instigatorPawn, const struct FVector& Location, float Volume);
};


// Class ConZ.AnimalAnimationComponent
// 0x0008 (0x00F8 - 0x00F0)
class UAnimalAnimationComponent : public UActorComponent
{
public:
	uint16_t                                           AnimationFlags;                                           // 0x00F0(0x0002) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00F2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AnimalAnimationComponent");
		return ptr;
	}

};


// Class ConZ.AnimalAnimInstance
// 0x0020 (0x03E0 - 0x03C0)
class UAnimalAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AnimalAnimInstance");
		return ptr;
	}


	void AnimNotify_RFootDownRear();
	void AnimNotify_RFootDown();
	void AnimNotify_LFootDownRear();
	void AnimNotify_LFootDown();
	void AnimNotify_ArmHit();
};


// Class ConZ.Animal2AnimInstance
// 0x0030 (0x03F0 - 0x03C0)
class UAnimal2AnimInstance : public UAnimInstance
{
public:
	float                                              MaximumLeaningAngle;                                      // 0x03C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                IdleStanceIndex;                                          // 0x03C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EAnimalStance                                      Stance;                                                   // 0x03C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C9(0x0003) MISSED OFFSET
	struct FRotator                                    SlopeRootTiltRotation;                                    // 0x03CC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              ABPSpeed;                                                 // 0x03D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ABPTurn;                                                  // 0x03DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MoveVelocity;                                             // 0x03E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x03E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Animal2AnimInstance");
		return ptr;
	}


	void AnimNotify_RFootDownRear();
	void AnimNotify_RFootDown();
	void AnimNotify_LFootDownRear();
	void AnimNotify_LFootDown();
	void AnimNotify_IntroEnd();
	void AnimNotify_IdleEnd();
};


// Class ConZ.ComplexAnimalAIController
// 0x01A0 (0x05B0 - 0x0410)
class AComplexAnimalAIController : public AAIController
{
public:
	EAnimalAgressivness                                Agressivness;                                             // 0x0410(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0411(0x0003) MISSED OFFSET
	float                                              SightIntimidateRadius;                                    // 0x0414(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SightAttackRadius;                                        // 0x0418(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FoeChargeVelocity;                                        // 0x041C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimalVelocityThatMakesThisAnimalFlee;                    // 0x0420(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FleeDistance;                                             // 0x0424(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FleeTime;                                                 // 0x0428(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TrotTime;                                                 // 0x042C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeToAttackWhenAggro;                                    // 0x0430(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeToQuitObserve;                                        // 0x0434(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinReactionTime;                                          // 0x0438(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxReactionTime;                                          // 0x043C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MovingUpdateInterval;                                     // 0x0440(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AttackingUpdateInetrval;                                  // 0x0444(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PathSegmentLength_OBSOLETE;                               // 0x0448(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinPaceDuration_OBSOLETE;                                 // 0x044C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxNumWalks_OBSOLETE;                                     // 0x0450(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxNumTrots_OBSOLETE;                                     // 0x0454(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PathDirectionCounterResetTime_OBOLETE;                    // 0x0458(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MoveSegmentLength;                                        // 0x045C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BackOffDistance;                                          // 0x0460(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AttackTrackingDistance;                                   // 0x0464(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PredictionFactor;                                         // 0x0468(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               BackAndForthStuckCheck;                                   // 0x046C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AttackAttempts;                                           // 0x046D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x046E(0x0002) MISSED OFFSET
	float                                              ActionChangedDelay;                                       // 0x0470(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CloseAttackRepeatDelay;                                   // 0x0474(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AttackChainDelay;                                         // 0x0478(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BlockedPathRetryAttempts;                                 // 0x047C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DirectionLockTime;                                        // 0x0480(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinWalkTimeDuringRoaming;                                 // 0x0484(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxWalkTimeDuringRoaming;                                 // 0x0488(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinStandTimeDuringRoaming;                                // 0x048C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxStandTimeDuringRoaming;                                // 0x0490(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IntimidateTime;                                           // 0x0494(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IntimidateAnimationEndTime;                               // 0x0498(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AlertActionTime;                                          // 0x049C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AlertStartupTime;                                         // 0x04A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AlertAllowedAgainTime;                                    // 0x04A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DoNotDespawnTime;                                         // 0x04A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	class UAISenseConfig_Sight*                        NormalAISenseSight;                                       // 0x04B0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAISenseConfig_Hearing*                      NormalAISenseHearing;                                     // 0x04B8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAISenseConfig_Hearing*                      RelaxedAISenseHearing;                                    // 0x04C0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAISenseConfig_Hearing*                      AlertedAISenseHearing;                                    // 0x04C8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAISenseConfig_Sight*                        SleepAISenseSight;                                        // 0x04D0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class AComplexAnimal2*                             _animal;                                                  // 0x04D8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0xD0];                                      // 0x04E0(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ComplexAnimalAIController");
		return ptr;
	}


	void UpdatePerception(TArray<class AActor*> actorsPercepted);
	void StartFullAlert();
	void QuitObserve();
	void OnTakeDamageHandler(class AActor* damageActor, float Damage, const struct FVector& HitLocation, class APawn* eventInstigator);
	void OnActionChangedHandler(EAnimalAction CurrentAction, EAnimalAction PrevAction);
	EAnimalMode GetMode();
	void ChangeMode(EAnimalMode NewMode);
};


// Class ConZ.AnimalContinuousChargeAttackAIController
// 0x0018 (0x05C8 - 0x05B0)
class AAnimalContinuousChargeAttackAIController : public AComplexAnimalAIController
{
public:
	float                                              LockAttackDirectionDistance;                              // 0x05B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ContinueAttackDistance;                                   // 0x05B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x05B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AnimalContinuousChargeAttackAIController");
		return ptr;
	}


	void OnActionChangedHandler(EAnimalAction CurrentAction, EAnimalAction PrevAction);
};


// Class ConZ.AnimalCrowdFollowingComponent
// 0x0040 (0x0440 - 0x0400)
class UAnimalCrowdFollowingComponent : public UCrowdFollowingComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0400(0x0008) MISSED OFFSET
	float                                              YawDelta;                                                 // 0x0408(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FRotator                                    TerrainRotation;                                          // 0x040C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_IsPlainOldData)
	float                                              SpeedLimit;                                               // 0x0418(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     DeltaPosition;                                            // 0x041C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_IsPlainOldData)
	float                                              RotationSpeed;                                            // 0x0428(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x042C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AnimalCrowdFollowingComponent");
		return ptr;
	}

};


// Class ConZ.BaseItemTag
// 0x0000 (0x0030 - 0x0030)
class UBaseItemTag : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.BaseItemTag");
		return ptr;
	}

};


// Class ConZ.AnimalHandlingItemTag
// 0x0000 (0x0030 - 0x0030)
class UAnimalHandlingItemTag : public UBaseItemTag
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AnimalHandlingItemTag");
		return ptr;
	}

};


// Class ConZ.Skill
// 0x0068 (0x0098 - 0x0030)
class USkill : public UDataAsset
{
public:
	struct FText                                       Caption;                                                  // 0x0030(0x0018) (CPF_Edit)
	ESkillReplicationID                                ReplicationID;                                            // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              ComboBonus;                                               // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              NoSkillBonus;                                             // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              BasicBonus;                                               // 0x0054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              MediumBonus;                                              // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              AdvancedBonus;                                            // 0x005C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              DisplayActionMessages;                                    // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	bool                                               IsAvailableInCharacterCreation;                           // 0x0064(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x33];                                      // 0x0065(0x0033) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Skill");
		return ptr;
	}


	void SetLevel(ESkillLevel Level);
	void SetExperiencePoints(float Points);
	bool IsWeakenedByAttribute();
	ESkillAttribute GetSkillAttribute();
	ESkillLevel GetLevel();
	float GetExperiencePoints();
	struct FString GetCaption();
};


// Class ConZ.IntelligenceSkill
// 0x0000 (0x0098 - 0x0098)
class UIntelligenceSkill : public USkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.IntelligenceSkill");
		return ptr;
	}

};


// Class ConZ.AnimalHandlingSkill
// 0x0010 (0x00A8 - 0x0098)
class UAnimalHandlingSkill : public UIntelligenceSkill
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AnimalHandlingSkill");
		return ptr;
	}

};


// Class ConZ.AnimalMovementComponent
// 0x0010 (0x07D0 - 0x07C0)
class UAnimalMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x07C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AnimalMovementComponent");
		return ptr;
	}

};


// Class ConZ.AnimalSoundComponent
// 0x00B8 (0x01D0 - 0x0118)
class UAnimalSoundComponent : public UCharacterSoundComponent
{
public:
	class USoundCue*                                   IdleSound;                                                // 0x0118(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundCue*                                   AlternateIdleSound;                                       // 0x0120(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundCue*                                   AngrySound;                                               // 0x0128(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundCue*                                   AlternateAngrySound;                                      // 0x0130(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundCue*                                   AttackSound;                                              // 0x0138(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundCue*                                   AlternateAttackSound;                                     // 0x0140(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundCue*                                   KillSound;                                                // 0x0148(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundCue*                                   AlternateKillSound;                                       // 0x0150(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundCue*                                   WalkFootstepSound;                                        // 0x0158(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundCue*                                   RunFootstepSound;                                         // 0x0160(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FootstepSoundOverlap;                                     // 0x0168(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FixedFootstepVolume;                                      // 0x016C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpeedFootstepVolume;                                      // 0x0170(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinSilenceTimeout;                                        // 0x0174(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSilenceTimeout;                                        // 0x0178(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x017C(0x003C) MISSED OFFSET
	EAnimalSound                                       _animalSound;                                             // 0x01B8(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x01B9(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AnimalSoundComponent");
		return ptr;
	}


	void OnRep_AnimalSound();
};


// Class ConZ.AnimalSpawner2
// 0x0108 (0x0420 - 0x0318)
class AAnimalSpawner2 : public AActor
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0318(0x0078) MISSED OFFSET
	float                                              MinSpawnAwayDistance;                                     // 0x0390(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSpawnAwayDistance;                                     // 0x0394(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TMap<class UClass*, struct FAnimalSpawnInfo>       SpawnInfo;                                                // 0x0398(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	class USphereComponent*                            SphereComponent;                                          // 0x03E8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class AGlobalAnimalSpawner*                        _globalSpawner;                                           // 0x03F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03F8(0x0010) MISSED OFFSET
	TArray<struct FAnimalManagementData>               _animalsData;                                             // 0x0408(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0418(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AnimalSpawner2");
		return ptr;
	}


	void SphereComponent_OnComponentEndOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void SphereComponent_OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnPlayerDespawned(class AActor* despawnedActor);
	bool IsSpawnerActive();
	int GetSpawnedAnimalsAmount(class UClass* AnimalClass);
};


// Class ConZ.AnimHelpers
// 0x0000 (0x0028 - 0x0028)
class UAnimHelpers : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AnimHelpers");
		return ptr;
	}

};


// Class ConZ.AnimNotify_CharacterActionEnd
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_CharacterActionEnd : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AnimNotify_CharacterActionEnd");
		return ptr;
	}

};


// Class ConZ.AnimNotify_CharacterActionNotify
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_CharacterActionNotify : public UAnimNotify
{
public:
	ECharacterActionNotifyType                         CharacterActionNotifyType;                                // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AnimNotify_CharacterActionNotify");
		return ptr;
	}

};


// Class ConZ.AnimNotify_PlaySoundBySurface
// 0x0010 (0x0048 - 0x0038)
class UAnimNotify_PlaySoundBySurface : public UAnimNotify
{
public:
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AnimNotify_PlaySoundBySurface");
		return ptr;
	}

};


// Class ConZ.AnimNotify_WaterPaddle
// 0x0028 (0x0060 - 0x0038)
class UAnimNotify_WaterPaddle : public UAnimNotify
{
public:
	class UParticleSystem*                             ParticleSystem;                                           // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VolumeMultiplier;                                         // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PitchMultiplier;                                          // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       AttachPointName;                                          // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DebugMode;                                                // 0x0058(0x0001) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AnimNotify_WaterPaddle");
		return ptr;
	}

};


// Class ConZ.AnimNotify_WeaponActionNotify
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_WeaponActionNotify : public UAnimNotify
{
public:
	EWeaponActionNotifyType                            WeaponActionNotifyType;                                   // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AnimNotify_WeaponActionNotify");
		return ptr;
	}

};


// Class ConZ.AnimNotify_WeaponChamberBullet
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_WeaponChamberBullet : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AnimNotify_WeaponChamberBullet");
		return ptr;
	}

};


// Class ConZ.AnimNotify_WeaponChamberBulletInternal
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_WeaponChamberBulletInternal : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AnimNotify_WeaponChamberBulletInternal");
		return ptr;
	}

};


// Class ConZ.AnimNotify_WeaponEjectCasing
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_WeaponEjectCasing : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AnimNotify_WeaponEjectCasing");
		return ptr;
	}

};


// Class ConZ.AnimNotifyState_ChamberWeapon
// 0x0000 (0x0030 - 0x0030)
class UAnimNotifyState_ChamberWeapon : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AnimNotifyState_ChamberWeapon");
		return ptr;
	}

};


// Class ConZ.AnimNotifyState_Melee
// 0x0040 (0x0070 - 0x0030)
class UAnimNotifyState_Melee : public UAnimNotifyState
{
public:
	struct FGameplayTag                                _attackCapsuleAttachment;                                 // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintReadOnly)
	float                                              _damageMultiplier;                                        // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EDamageMagnitudeType                               _damageMagnitudeType;                                     // 0x003C(0x0001) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              _knockoutChance;                                          // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _stopOnHit;                                               // 0x0044(0x0001) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	TArray<struct FMeleeHitDetectionMarker>            _hitDetectionMarkers;                                     // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                _hitDetectionSamplingRate;                                // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x005C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AnimNotifyState_Melee");
		return ptr;
	}

};


// Class ConZ.AnimNotifyState_PhysicalAnimation
// 0x0030 (0x0060 - 0x0030)
class UAnimNotifyState_PhysicalAnimation : public UAnimNotifyState
{
public:
	bool                                               GotoRagdollOnEnd;                                         // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FName                                       BodyProfileName;                                          // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ConstraintProfileName;                                    // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       StrengthBlendCurveName;                                   // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       PhysicsBlendCurveName;                                    // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AnimNotifyState_PhysicalAnimation");
		return ptr;
	}

};


// Class ConZ.MedicalAction
// 0x0010 (0x01C0 - 0x01B0)
class UMedicalAction : public USkillAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.MedicalAction");
		return ptr;
	}

};


// Class ConZ.ArtificalPerspirationAction
// 0x0000 (0x01C0 - 0x01C0)
class UArtificalPerspirationAction : public UMedicalAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ArtificalPerspirationAction");
		return ptr;
	}

};


// Class ConZ.AttachmentSocketMountType
// 0x0000 (0x0028 - 0x0028)
class UAttachmentSocketMountType : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AttachmentSocketMountType");
		return ptr;
	}

};


// Class ConZ.AttachmentSocketMountTypePrisonerHand
// 0x0000 (0x0028 - 0x0028)
class UAttachmentSocketMountTypePrisonerHand : public UAttachmentSocketMountType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AttachmentSocketMountTypePrisonerHand");
		return ptr;
	}

};


// Class ConZ.AttributeMapInterface
// 0x0000 (0x0028 - 0x0028)
class UAttributeMapInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AttributeMapInterface");
		return ptr;
	}


	void SetStringAttribute(const struct FString& Name, const struct FString& Value);
	void SetIntAttribute(const struct FString& Name, int Value);
	void SetFloatAttribute(const struct FString& Name, float Value);
	void SetBoolAttribute(const struct FString& Name, bool Value);
	bool HasAttribute(const struct FString& Name);
	struct FString GetStringAttribute(const struct FString& Name);
	int GetIntAttribute(const struct FString& Name);
	float GetFloatAttribute(const struct FString& Name);
	bool GetBoolAttribute(const struct FString& Name);
};


// Class ConZ.AttributesGraph
// 0x0128 (0x0228 - 0x0100)
class UAttributesGraph : public UWidget
{
public:
	ESkillAttribute                                    Attribute;                                                // 0x0100(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0104(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x0118(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
	float                                              Thickness;                                                // 0x0128(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	struct FSlateBrush                                 HoverBrush;                                               // 0x0130(0x0078) (CPF_Edit, CPF_BlueprintVisible)
	struct FScriptDelegate                             HoverBrushDelegate;                                       // 0x01A8(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
	struct FSlateFontInfo                              Font;                                                     // 0x01B8(0x0058) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0210(0x0010) MISSED OFFSET
	class UPrisonerLifeComponent*                      _prisonerLifeComponent;                                   // 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AttributesGraph");
		return ptr;
	}


	void UpdateNumOfPointsToTrack(int Num);
	void UpdateGraph();
	void SetPrisonerLifeComponent(class UPrisonerLifeComponent* Value);
	class UPrisonerLifeComponent* GetPrisonerLifeComponent();
};


// Class ConZ.AudioStatics
// 0x0000 (0x0028 - 0x0028)
class UAudioStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AudioStatics");
		return ptr;
	}


	static struct FName GetMovementPaceSwitchValue(EPrisonerMovementPace Value);
	static struct FName GetMovementPaceSwitchName();
	static struct FName GetMotionIntensitySwitchValue(EMotionIntensity Value);
	static struct FName GetMotionIntensitySwitchName();
	static struct FName GetMaterialSwitchValue(TEnumAsByte<EPhysicalSurface> Value);
	static struct FName GetMaterialSwitchName();
	static struct FName GetImpactSeveritySwitchValue(EImpactSeverity Value);
	static struct FName GetImpactSeveritySwitchName();
	static struct FName GetGenderSwitchValue(EGender Value);
	static struct FName GetGenderSwitchName();
	static struct FName GetEnvironmentSwitchValue(EEnvironmentClass Value);
	static struct FName GetEnvironmentSwitchName();
	static struct FName GetCharacterPainSeveritySwitchValue(ECharacterPainSoundSeverity Value);
	static struct FName GetCharacterPainSeveritySwitchName();
};


// Class ConZ.AwarenessSkill
// 0x0290 (0x0328 - 0x0098)
class UAwarenessSkill : public UIntelligenceSkill
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET
	float                                              StaminaConsumption;                                       // 0x00A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               EnterFocusModeAudioEvent;                                 // 0x00B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               LeaveFocusModeAudioEvent;                                 // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _updateTime;                                              // 0x00C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _serverUpdateTime;                                        // 0x00C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _basicWatchingDetectionChance;                            // 0x00C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _mediumWatchingDetectionChance;                           // 0x00CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _advancedWatchingDetectionChance;                         // 0x00D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _aboveAdvancedWatchingDetectionChance;                    // 0x00D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _noSkillItemDetectionTime;                                // 0x00D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _basicItemDetectionTime;                                  // 0x00DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _mediumItemDetectionTime;                                 // 0x00E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _advancedItemDetectionTime;                               // 0x00E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _aboveAdvancedItemDetectionTime;                          // 0x00E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _noSkillItemDetectionRadius;                              // 0x00EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _basicItemDetectionRadius;                                // 0x00F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _mediumItemDetectionRadius;                               // 0x00F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _advancedItemDetectionRadius;                             // 0x00F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _aboveAdvancedItemDetectionRadius;                        // 0x00FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _noSkillItemDetectionChance;                              // 0x0100(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _basicItemDetectionChance;                                // 0x0104(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _mediumItemDetectionChance;                               // 0x0108(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _advancedItemDetectionChance;                             // 0x010C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _aboveAdvancedItemDetectionChance;                        // 0x0110(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _noSkillItemHighlightByDayRadius;                         // 0x0114(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _basicItemHighlightByDayRadius;                           // 0x0118(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _mediumItemHighlightByDayRadius;                          // 0x011C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _advancedItemHighlightByDayRadius;                        // 0x0120(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _aboveAdvancedItemHighlightByDayRadius;                   // 0x0124(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _noSkillItemHighlightByNightRadius;                       // 0x0128(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _basicItemHighlightByNightRadius;                         // 0x012C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _mediumItemHighlightByNightRadius;                        // 0x0130(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _advancedItemHighlightByNightRadius;                      // 0x0134(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _aboveAdvancedItemHighlightByNightRadius;                 // 0x0138(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _noSkillWatchingDetectionRadius;                          // 0x013C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _basicWatchingDetectionRadius;                            // 0x0140(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _mediumWatchingDetectionRadius;                           // 0x0144(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _advancedWatchingDetectionRadius;                         // 0x0148(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _aboveAdvancedWatchingDetectionRadius;                    // 0x014C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _characterDetectionAngle;                                 // 0x0150(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _characterDetectionTime;                                  // 0x0154(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _characterDetectionRange;                                 // 0x0158(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _characterDetectionPeriodicRangeIncrement;                // 0x015C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _noSkillHiddenCharacterDetectionRange;                    // 0x0160(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _basicHiddenCharacterDetectionRange;                      // 0x0164(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _mediumHiddenCharacterDetectionRange;                     // 0x0168(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _advancedHiddenCharacterDetectionRange;                   // 0x016C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _aboveAdvancedHiddenCharacterDetectionRange;              // 0x0170(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _noSkillHotSpotHiddenCharacterDetectionRange;             // 0x0174(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _basicHotSpotHiddenCharacterDetectionRange;               // 0x0178(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _mediumHotSpotHiddenCharacterDetectionRange;              // 0x017C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _advancedHotSpotHiddenCharacterDetectionRange;            // 0x0180(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _aboveAdvancedHotSpotHiddenCharacterDetectionRange;       // 0x0184(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _noSkillSoundDetectionRange;                              // 0x0188(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _basicSoundDetectionRange;                                // 0x018C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _mediumSoundDetectionRange;                               // 0x0190(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _advancedSoundDetectionRange;                             // 0x0194(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _aboveAdvancedSoundDetectionRange;                        // 0x0198(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _notMovingFocusRangeMultiplier;                           // 0x019C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _slowMovingFocusRangeMultiplier;                          // 0x01A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _mediumMovingFocusRangeMultiplier;                        // 0x01A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _fastMovingFocusRangeMultiplier;                          // 0x01A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _noSkillFocusModeActivationTime;                          // 0x01AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _basicFocusModeActivationTime;                            // 0x01B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _mediumFocusModeActivationTime;                           // 0x01B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _advancedFocusModeActivationTime;                         // 0x01B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _aboveAdvancedFocusModeActivationTime;                    // 0x01BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _noSkillTrackDetectionRange;                              // 0x01C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _basicTrackDetectionRange;                                // 0x01C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _mediumTrackDetectionRange;                               // 0x01C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _advancedTrackDetectionRange;                             // 0x01CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _aboveAdvancedTrackDetectionRange;                        // 0x01D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _trackDetectionNightTimeMultiplier;                       // 0x01D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x150];                                     // 0x01D8(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.AwarenessSkill");
		return ptr;
	}


	void EnterFocusMode();
};


// Class ConZ.BacillusCereusPoisoning
// 0x0008 (0x01B8 - 0x01B0)
class UBacillusCereusPoisoning : public UPoisoning
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.BacillusCereusPoisoning");
		return ptr;
	}

};


// Class ConZ.BaneberryPoisoning
// 0x0010 (0x01C0 - 0x01B0)
class UBaneberryPoisoning : public UPoisoning
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.BaneberryPoisoning");
		return ptr;
	}

};


// Class ConZ.BaseItemContainerWidget
// 0x0038 (0x0258 - 0x0220)
class UBaseItemContainerWidget : public UDesignableUserWidget
{
public:
	struct FScriptMulticastDelegate                    ObjectAddedToContainer;                                   // 0x0220(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0230(0x0004) MISSED OFFSET
	int                                                Columns;                                                  // 0x0234(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Rows;                                                     // 0x0238(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	class UGridPanel*                                  GridPanel;                                                // 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UUserWidget*                                 HighlightBorder;                                          // 0x0248(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0250(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.BaseItemContainerWidget");
		return ptr;
	}


	void RefreshSize();
	void OnObjectAddedToContainerEvent__DelegateSignature(class UObject* Object);
	void OnDropEvent(class UInventorySlotUserWidget* inventorySlot, class UBaseItemWidget* Item);
	void OnDragStartEvent(class UBaseItemWidget* Widget, const struct FGeometry& Geometry);
	void OnDragLeaveEvent(class UInventorySlotUserWidget* inventorySlot, class UBaseItemWidget* Widget);
	void OnDragEnterEvent(class UInventorySlotUserWidget* inventorySlot, class UBaseItemWidget* Widget);
	void OnDragCancelledEvent(class UBaseItemWidget* Widget);
	void InitGrid(const struct FMargin& gridPadding);
	bool GetSlotsForPanel(class UGridSlot* GridSlot, int Width, int Height, class UGridPanel* panel, int numColumns, int numRows, TArray<class UInventorySlotUserWidget*>* Slots);
	bool GetSlots(class UGridSlot* GridSlot, int Width, int Height, TArray<class UInventorySlotUserWidget*>* Slots);
	TArray<class UItemUserWidget*> GetItemWidgets();
};


// Class ConZ.BaseItemWidget
// 0x0020 (0x0240 - 0x0220)
class UBaseItemWidget : public UDesignableUserWidget
{
public:
	class UBaseItemContainerWidget*                    ParentInventory;                                          // 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0228(0x0008) MISSED OFFSET
	int                                                Width;                                                    // 0x0230(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Height;                                                   // 0x0234(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UImage*                                      _imageWidget;                                             // 0x0238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.BaseItemWidget");
		return ptr;
	}


	void SetStacksCount(int count);
	int GetStacksCount();
	void GetDragImage(const struct FGeometry& Geometry, class UInventorySlotUserWidget* widgetImage);
	void DragCancelled();
};


// Class ConZ.Bear
// 0x0010 (0x09E0 - 0x09D0)
class ABear : public AAnimal
{
public:
	class UAnimMontage*                                AttackMontage;                                            // 0x09D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _scale;                                                   // 0x09D8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x09DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Bear");
		return ptr;
	}


	void PlayAttackMontageOnClients();
	void OnRep_Scale();
};


// Class ConZ.BearAIController
// 0x0010 (0x04B0 - 0x04A0)
class ABearAIController : public AAnimalAIController
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.BearAIController");
		return ptr;
	}

};


// Class ConZ.BearAnimInstance
// 0x0000 (0x03E0 - 0x03E0)
class UBearAnimInstance : public UAnimalAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.BearAnimInstance");
		return ptr;
	}

};


// Class ConZ.BioChemSkill
// 0x0000 (0x0098 - 0x0098)
class UBioChemSkill : public UIntelligenceSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.BioChemSkill");
		return ptr;
	}

};


// Class ConZ.Bird
// 0x0090 (0x08C0 - 0x0830)
class ABird : public AConZCharacter
{
public:
	float                                              RotationRate;                                             // 0x0830(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     TargetLocRandomRange;                                     // 0x0834(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     InitialRotationFactor;                                    // 0x0840(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              TargetThreshold;                                          // 0x084C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TurnAngleRange;                                           // 0x0850(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              YawFactor;                                                // 0x0854(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Speed;                                                    // 0x0858(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     WindDirectionNormalized;                                  // 0x085C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              WindStrength;                                             // 0x0868(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x086C(0x0004) MISSED OFFSET
	class UHitReactComponent*                          HitReactComponent;                                        // 0x0870(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0878(0x0004) MISSED OFFSET
	float                                              _health;                                                  // 0x087C(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0880(0x0030) MISSED OFFSET
	struct FVector                                     _targetLocation;                                          // 0x08B0(0x000C) (CPF_Net, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x08BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Bird");
		return ptr;
	}


	void Kill();
	bool IsAlive();
	void GoToRagdoll();
};


// Class ConZ.Bird2
// 0x0030 (0x0A10 - 0x09E0)
class ABird2 : public AAnimal2
{
public:
	float                                              MaxFlightAltitude;                                        // 0x09E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isLanding;                                               // 0x09E4(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	bool                                               _isTakingOff;                                             // 0x09E5(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	bool                                               _isPerched;                                               // 0x09E6(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	bool                                               _isFlying;                                                // 0x09E7(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	TArray<bool>                                       _states;                                                  // 0x09E8(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      _repStates;                                               // 0x09F8(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x09F9(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Bird2");
		return ptr;
	}


	void OnRep_States();
	bool GetIsTakingOff();
	bool GetIsStaringPerched();
	bool GetIsPerched();
	bool GetIsLanding();
	bool GetIsFlying();
	void CapsuleComponent_OnComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};


// Class ConZ.Bird2AIController
// 0x0060 (0x0470 - 0x0410)
class ABird2AIController : public AAIController
{
public:
	float                                              FlyDurationMin;                                           // 0x0410(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FlyDurationMax;                                           // 0x0414(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RemainOnGroundDurationMin;                                // 0x0418(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RemainOnGroundDurationMax;                                // 0x041C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TurnSpeed;                                                // 0x0420(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FlightSegmentDistance;                                    // 0x0424(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LandingDistance;                                          // 0x0428(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x44];                                      // 0x042C(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Bird2AIController");
		return ptr;
	}


	void UpdatePerception(TArray<class AActor*> actorsPercepted);
};


// Class ConZ.Bird2AnimInstance
// 0x0010 (0x03D0 - 0x03C0)
class UBird2AnimInstance : public UAnimInstance
{
public:
	bool                                               IsStaringPerched;                                         // 0x03C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C1(0x0003) MISSED OFFSET
	struct FRotator                                    SlopeRootTiltRotation;                                    // 0x03C4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Bird2AnimInstance");
		return ptr;
	}

};


// Class ConZ.BirdTargetPoint
// 0x0008 (0x0320 - 0x0318)
class ABirdTargetPoint : public AActor
{
public:
	bool                                               IsOccupied;                                               // 0x0318(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0319(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.BirdTargetPoint");
		return ptr;
	}

};


// Class ConZ.BloodOxygenationWidget
// 0x00C8 (0x01C8 - 0x0100)
class UBloodOxygenationWidget : public UWidget
{
public:
	struct FSlateBrush                                 Brush;                                                    // 0x0100(0x0078) (CPF_Edit, CPF_BlueprintVisible)
	struct FScriptDelegate                             BrushDelegate;                                            // 0x0178(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0188(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x0198(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
	float                                              Thickness;                                                // 0x01A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Periods;                                                  // 0x01AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET
	class UPrisonerLifeComponent*                      _prisonerLifeComponent;                                   // 0x01C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.BloodOxygenationWidget");
		return ptr;
	}


	void SetPrisonerLifeComponent(class UPrisonerLifeComponent* Value);
	class UPrisonerLifeComponent* GetPrisonerLifeComponent();
	float GetMinOxygenSaturation();
	float GetMaxOxygenSaturation();
};


// Class ConZ.BloodPressureWidget
// 0x00C8 (0x01C8 - 0x0100)
class UBloodPressureWidget : public UWidget
{
public:
	struct FSlateBrush                                 Brush;                                                    // 0x0100(0x0078) (CPF_Edit, CPF_BlueprintVisible)
	struct FScriptDelegate                             BrushDelegate;                                            // 0x0178(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0188(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x0198(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
	float                                              Thickness;                                                // 0x01A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Periods;                                                  // 0x01AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET
	class UPrisonerLifeComponent*                      _prisonerLifeComponent;                                   // 0x01C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.BloodPressureWidget");
		return ptr;
	}


	void SetPrisonerLifeComponent(class UPrisonerLifeComponent* Value);
	class UPrisonerLifeComponent* GetPrisonerLifeComponent();
};


// Class ConZ.BodyTemperatureWidget
// 0x00C8 (0x01C8 - 0x0100)
class UBodyTemperatureWidget : public UWidget
{
public:
	struct FSlateBrush                                 Brush;                                                    // 0x0100(0x0078) (CPF_Edit, CPF_BlueprintVisible)
	struct FScriptDelegate                             BrushDelegate;                                            // 0x0178(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0188(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x0198(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
	float                                              Thickness;                                                // 0x01A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Periods;                                                  // 0x01AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET
	class UPrisonerLifeComponent*                      _prisonerLifeComponent;                                   // 0x01C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.BodyTemperatureWidget");
		return ptr;
	}


	void SetPrisonerLifeComponent(class UPrisonerLifeComponent* Value);
	class UPrisonerLifeComponent* GetPrisonerLifeComponent();
	float GetMinTemperature();
	float GetMaxTemperature();
};


// Class ConZ.BotulismPoisoning
// 0x0010 (0x01C0 - 0x01B0)
class UBotulismPoisoning : public UPoisoning
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.BotulismPoisoning");
		return ptr;
	}

};


// Class ConZ.StrengthSkill
// 0x0000 (0x0098 - 0x0098)
class UStrengthSkill : public USkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.StrengthSkill");
		return ptr;
	}

};


// Class ConZ.MeleeSkill
// 0x0018 (0x00B0 - 0x0098)
class UMeleeSkill : public UStrengthSkill
{
public:
	class UMeleeSkillAnimationsPreset*                 AnimationsPreset;                                         // 0x0098(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.MeleeSkill");
		return ptr;
	}


	class UAnimSequenceBase* GetWalkingIdleAnimationTP();
	class UAnimSequenceBase* GetWalkingIdleAnimationFP();
	class UAnimSequenceBase* GetTiredIdleAnimationTP();
	class UAnimSequenceBase* GetTiredIdleAnimationFP();
	float GetStaminaMultiplier(float excessGearWeight);
	class UAnimSequenceBase* GetPrimaryIdleAnimationTP();
	class UAnimSequenceBase* GetPrimaryIdleAnimationFP();
	class UAnimMontage* GetLeaveCombatModeMontage();
	TArray<class UAnimSequenceBase*> GetInactivityIdleAnimations();
	float GetIdleToBlockBlendDuration();
	class UAnimMontage* GetEnterCombatModeMontage();
	float GetBlockToIdleBlendDuration();
	class UAnimSequenceBase* GetBlockIdleAnimationTP();
	class UAnimSequenceBase* GetBlockIdleAnimationFP();
	class UBlendSpace* GetAimOffsetBlendSpaceTP();
	class UBlendSpace* GetAimOffsetBlendSpaceFP();
};


// Class ConZ.BoxingSkill
// 0x0000 (0x00B0 - 0x00B0)
class UBoxingSkill : public UMeleeSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.BoxingSkill");
		return ptr;
	}

};


// Class ConZ.Injury
// 0x0000 (0x01B0 - 0x01B0)
class UInjury : public USickness
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Injury");
		return ptr;
	}

};


// Class ConZ.PhysicalInjury
// 0x0070 (0x0220 - 0x01B0)
class UPhysicalInjury : public UInjury
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x01B0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PhysicalInjury");
		return ptr;
	}

};


// Class ConZ.BrokenLimbsInjury
// 0x0008 (0x0228 - 0x0220)
class UBrokenLimbsInjury : public UPhysicalInjury
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.BrokenLimbsInjury");
		return ptr;
	}

};


// Class ConZ.BruisingComponent
// 0x0078 (0x0168 - 0x00F0)
class UBruisingComponent : public UActorComponent
{
public:
	class UBruisingData*                               BruisingData;                                             // 0x00F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               FadeBruises;                                              // 0x00F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	float                                              BruisesLifeTime;                                          // 0x00FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BruisesFadeUpdateInterval;                                // 0x0100(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	class UTextureRenderTarget2D*                      _renderTargetByLayer[0x3];                                // 0x0108(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x48];                                      // 0x0120(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.BruisingComponent");
		return ptr;
	}


	void MakeCompletelyBruised();
	class UTextureRenderTarget2D* GetBruiseLayerRenderTarget(EBruiseLayer Layer);
	void ClearBruises();
	void AddBruise(EBruiseZone zone);
};


// Class ConZ.BruisingData
// 0x0010 (0x0040 - 0x0030)
class UBruisingData : public UDataAsset
{
public:
	TArray<struct FBruisePatch>                        Patches;                                                  // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.BruisingData");
		return ptr;
	}

};


// Class ConZ.Deficiency
// 0x0010 (0x01C0 - 0x01B0)
class UDeficiency : public USickness
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Deficiency");
		return ptr;
	}

};


// Class ConZ.CalciumDeficiency
// 0x0000 (0x01C0 - 0x01C0)
class UCalciumDeficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CalciumDeficiency");
		return ptr;
	}

};


// Class ConZ.CamouflageSkill
// 0x0098 (0x0130 - 0x0098)
class UCamouflageSkill : public UIntelligenceSkill
{
public:
	float                                              _activationTime;                                          // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _standingPenalty;                                         // 0x009C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _crouchingPenalty;                                        // 0x00A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _pronePenalty;                                            // 0x00A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _slowMovingStandingPenalty;                               // 0x00A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _slowMovingCrouchingPenalty;                              // 0x00AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _slowMovingPronePenalty;                                  // 0x00B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _mediumMovingStandingPenalty;                             // 0x00B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _mediumMovingCrouchingPenalty;                            // 0x00B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _fastMovingStandingPenalty;                               // 0x00BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x70];                                      // 0x00C0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CamouflageSkill");
		return ptr;
	}


	float GetHidePenaltyForCharacter(class AConZCharacter* Character);
};


// Class ConZ.CampylobacteriosisPoisoning
// 0x0008 (0x01B8 - 0x01B0)
class UCampylobacteriosisPoisoning : public UPoisoning
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CampylobacteriosisPoisoning");
		return ptr;
	}

};


// Class ConZ.FoodItem
// 0x00E0 (0x0860 - 0x0780)
class AFoodItem : public AItem
{
public:
	float                                              Water;                                                    // 0x0780(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EatingTime;                                               // 0x0784(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EDigestionGroup                                    DigestionGroup;                                           // 0x0788(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0789(0x0003) MISSED OFFSET
	float                                              Fat;                                                      // 0x078C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SaturatedFat;                                             // 0x0790(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Sodium;                                                   // 0x0794(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Carbs;                                                    // 0x0798(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Fiber;                                                    // 0x079C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Sugar;                                                    // 0x07A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Proteins;                                                 // 0x07A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Alcohol;                                                  // 0x07A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Vitamin_A;                                                // 0x07AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Vitamin_B1;                                               // 0x07B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Vitamin_B2;                                               // 0x07B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Vitamin_B3;                                               // 0x07B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Vitamin_B4;                                               // 0x07BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Vitamin_B5;                                               // 0x07C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Vitamin_B6;                                               // 0x07C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Vitamin_B9;                                               // 0x07C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Vitamin_B12;                                              // 0x07CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Vitamin_C;                                                // 0x07D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Vitamin_D;                                                // 0x07D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Vitamin_E;                                                // 0x07D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Vitamin_K;                                                // 0x07DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Calcium;                                                  // 0x07E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Iron;                                                     // 0x07E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Magnesium;                                                // 0x07E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Phosphorus;                                               // 0x07EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Potassium;                                                // 0x07F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Zinc;                                                     // 0x07F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Copper;                                                   // 0x07F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Manganese;                                                // 0x07FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Selenium;                                                 // 0x0800(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Cookable;                                                 // 0x0804(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0805(0x0003) MISSED OFFSET
	float                                              CookingTime;                                              // 0x0808(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsConsumable;                                             // 0x080C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x080D(0x0003) MISSED OFFSET
	class UStaticMesh*                                 ItemOpenedMesh;                                           // 0x0810(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 ItemEmptyMesh;                                            // 0x0818(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StartEatingAudioEvent;                                    // 0x0820(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StopEatingAudioEvent;                                     // 0x0828(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isCooking;                                               // 0x0830(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x1B];                                      // 0x0831(0x001B) MISSED OFFSET
	float                                              _catchSicknessModifier;                                   // 0x084C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _itemOpened;                                              // 0x0850(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0xF];                                       // 0x0851(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.FoodItem");
		return ptr;
	}


	void OnRep_ItemOpened();
	float GetVolume();
};


// Class ConZ.CookedFoodItem
// 0x0010 (0x0870 - 0x0860)
class ACookedFoodItem : public AFoodItem
{
public:
	float                                              CookedTimeQuantizer;                                      // 0x0860(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0864(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CookedFoodItem");
		return ptr;
	}


	void UpdateCookingIndicatorOnClients(float cookedMinutes, float cookingMinutes);
};


// Class ConZ.CannedFoodItem
// 0x0000 (0x0870 - 0x0870)
class ACannedFoodItem : public ACookedFoodItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CannedFoodItem");
		return ptr;
	}

};


// Class ConZ.CanningFoodItem
// 0x0000 (0x0870 - 0x0870)
class ACanningFoodItem : public ACookedFoodItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CanningFoodItem");
		return ptr;
	}

};


// Class ConZ.CarbonMonoxidePoisoning
// 0x0010 (0x01C0 - 0x01B0)
class UCarbonMonoxidePoisoning : public UDisease
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CarbonMonoxidePoisoning");
		return ptr;
	}

};


// Class ConZ.WeaponItem
// 0x0040 (0x07C0 - 0x0780)
class AWeaponItem : public AItem
{
public:
	uint32_t                                           MinRange;                                                 // 0x0780(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           MaxRange;                                                 // 0x0784(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           MinDamage;                                                // 0x0788(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           MaxDamage;                                                // 0x078C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           AP;                                                       // 0x0790(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           MagazineSize;                                             // 0x0794(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           FireModes;                                                // 0x0798(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           ROF;                                                      // 0x079C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           ReloadTime;                                               // 0x07A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x07A4(0x0004) MISSED OFFSET
	class UWeaponAccuracyGroup*                        AccuracyGroup;                                            // 0x07A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWeaponDamageGroup*                          DamageGroup;                                              // 0x07B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWeaponRecoilGroup*                          RecoilGroup;                                              // 0x07B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeaponItem");
		return ptr;
	}

};


// Class ConZ.Weapon
// 0x0900 (0x10C0 - 0x07C0)
class AWeapon : public AWeaponItem
{
public:
	struct FScriptMulticastDelegate                    AttachmentAdded;                                          // 0x07C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    AttachmentRemoved;                                        // 0x07D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x07E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	EWeaponFiringStateType                             WeaponFiringStateType;                                    // 0x07E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x07E9(0x0007) MISSED OFFSET
	class UWeaponStateFiring*                          TempWeaponStateFiringAutomatic;                           // 0x07F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWeaponStateFiring*                          TempWeaponStateFiringSemiAutomatic;                       // 0x07F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWeaponStateFiring*                          TempWeaponStateFiringManual;                              // 0x0800(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWeaponStateFiring*                          FiringState;                                              // 0x0808(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UClass*>                              ReloadActionSequenceClasses;                              // 0x0810(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UWeaponActionReloadSequence*>         ReloadActionSequences;                                    // 0x0820(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	class UClass*                                      projectileClass;                                          // 0x0830(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      DefaultAmmoClass;                                         // 0x0838(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RequiredAmmoForShot;                                      // 0x0840(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxLoadedAmmo;                                            // 0x0844(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InitialAmmo;                                              // 0x0848(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InternalMagazineCapacity;                                 // 0x084C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IgnoreProceduralDownTheSightFiringAnimation;              // 0x0850(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0851(0x0007) MISSED OFFSET
	class UAnimMontage*                                FireAnimation;                                            // 0x0858(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                FireAnimationLastRound;                                   // 0x0860(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                FireAnimationBody;                                        // 0x0868(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                FirstPersonFireAnimationBody;                             // 0x0870(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TMap<class UClass*, struct FWeaponAttachmentAnimations> AttachmentsAnimations;                                    // 0x0878(0x0050) (CPF_Edit, CPF_ZeroConstructor)
	struct FName                                       MuzzleSocketName;                                         // 0x08C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       GripCorrectionSocketName;                                 // 0x08D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       AimingDownTheSightsCenterSocketName;                      // 0x08D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       EjectCasingSocketName;                                    // 0x08E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IgnoreSupportingHandIK;                                   // 0x08E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x08E9(0x0007) MISSED OFFSET
	struct FName                                       SupportingHandIKSocketName;                               // 0x08F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     SupportingHandIKLocation;                                 // 0x08F8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     AimingDownTheSightsLocationOffset;                        // 0x0904(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     HolsteredOnPrisonerLocationOffset;                        // 0x0910(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FRotator                                    HolsteredOnPrisonerRotationOffset;                        // 0x091C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	bool                                               IgnoreZeroRangeChange;                                    // 0x0928(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0929(0x0003) MISSED OFFSET
	int                                                zeroRange;                                                // 0x092C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ZeroRangeStep;                                            // 0x0930(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ZeroRangeMax;                                             // 0x0934(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UProjectileImpactEffects*                    InstantHitImpactEffects;                                  // 0x0938(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FieldOfView;                                              // 0x0940(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldFocalDistance;                                // 0x0944(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ObstaclesDetectionOffset;                                 // 0x0948(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x094C(0x0004) MISSED OFFSET
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x0950(0x0520) (CPF_Edit)
	class UAnimSequenceBase*                           RelaxedGripCorrectionAnimationPose[0x3];                  // 0x0E70(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           AimingHipAnimationPose[0x3];                              // 0x0E88(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           AimingDownTheSightsAnimationPose[0x3];                    // 0x0EA0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           FirstPersonUpperBodyStandIdleAnimation;                   // 0x0EB8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           FirstPersonUpperBodyStandWalkAnimation;                   // 0x0EC0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           FirstPersonUpperBodyStandJogAnimation;                    // 0x0EC8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           FirstPersonUpperBodyStandRunAnimation;                    // 0x0ED0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           FirstPersonUpperBodyCrouchIdleAnimation;                  // 0x0ED8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           FirstPersonUpperBodyCrouchWalkAnimation;                  // 0x0EE0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           FirstPersonUpperBodyProneIdleAnimation;                   // 0x0EE8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWeaponCategory                                    WeaponCategory;                                           // 0x0EF0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IgnoreAimingSpread;                                       // 0x0EF1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseCustomWeaponSpreadData;                                // 0x0EF2(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x0EF3(0x0001) MISSED OFFSET
	struct FWeaponSpreadData                           WeaponSpreadData;                                         // 0x0EF4(0x0034) (CPF_Edit)
	bool                                               UseCustomWeaponViewKickData;                              // 0x0F28(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0F29(0x0003) MISSED OFFSET
	struct FWeaponViewKickData                         WeaponViewKickData;                                       // 0x0F2C(0x0018) (CPF_Edit)
	float                                              ViewKickMultiplier;                                       // 0x0F44(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxRecoilOffset;                                          // 0x0F48(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilRecoverySpeed;                                      // 0x0F4C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MuzzleEffectsScaleDistanceStart;                          // 0x0F50(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MuzzleEffectsScaleDistanceRange;                          // 0x0F54(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MuzzleEffectsScaleByDistanceFactor;                       // 0x0F58(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ChamberBulletDelay;                                       // 0x0F5C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ChamberBulletAutomatically;                               // 0x0F60(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0F61(0x0007) MISSED OFFSET
	class UWeaponState*                                _currentState;                                            // 0x0F68(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWeaponState*                                _activeState;                                             // 0x0F70(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWeaponStateEquipping*                       _equippingState;                                          // 0x0F78(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWeaponState*                                _unequippingStateDefault;                                 // 0x0F80(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWeaponState*                                _unequippingState;                                        // 0x0F88(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWeaponState*                                _inactiveState;                                           // 0x0F90(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWeaponState*                                _chamberBulletState;                                      // 0x0F98(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWeaponStateReload*                          _reloadState2;                                            // 0x0FA0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystem*                             _muzzlePS;                                                // 0x0FA8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    _muzzlePSC;                                               // 0x0FB0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystem*                             _smokeAfterShotFiredPS;                                   // 0x0FB8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    _smokeAfterShotFiredPSC;                                  // 0x0FC0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystem*                             _ejectCasingPS;                                           // 0x0FC8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               _fireSingleShotAudioEvent;                                // 0x0FD0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               _startAutoFireAudioEvent;                                 // 0x0FD8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               _stopAutoFireAudioEvent;                                  // 0x0FE0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               _noAmmoAudioEvent;                                        // 0x0FE8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               _zeroRangeClickAudioEvent;                                // 0x0FF0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               _changeFiringModeAudioEvent;                              // 0x0FF8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APrisoner*                                   _weaponOwner;                                             // 0x1000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                _loadedAmmoCount;                                         // 0x1008(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x5C];                                      // 0x100C(0x005C) MISSED OFFSET
	EWeaponFiringMode                                  _firingMode;                                              // 0x1068(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x17];                                      // 0x1069(0x0017) MISSED OFFSET
	TArray<class AWeaponAttachment*>                   _weaponAttachmentsReplicated;                             // 0x1080(0x0010) (CPF_Net, CPF_ZeroConstructor)
	unsigned char                                      UnknownData10[0x18];                                      // 0x1090(0x0018) MISSED OFFSET
	int                                                _internalMagazineAmmoCount;                               // 0x10A8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData11[0x5];                                       // 0x10AC(0x0005) MISSED OFFSET
	bool                                               _shouldPlayChamberOpenedIdle;                             // 0x10B1(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x10B2(0x0002) MISSED OFFSET
	bool                                               _isInGameEvent;                                           // 0x10B4(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData13[0xB];                                       // 0x10B5(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Weapon");
		return ptr;
	}


	void UpdateReloadData(struct FWeaponReloadData* reloadDataIn, struct FWeaponReloadData* reloadDataOut);
	void StopFiringEffects();
	void StopFireOnServer();
	void StopFire();
	void StartFireOnServer();
	void StartFire();
	bool ShouldPlayChamberOpenedIdle();
	void SetZeroRangeOnServer(int zeroRange);
	void SetUseMuzzleDirectionForShooting(bool Value);
	void SetShouldPlayChamberOpenedIdle(bool Value);
	void SetIsChambering(bool Value);
	void SetFiringModeOnServer(EWeaponFiringMode Value);
	void SetFiringMode(EWeaponFiringMode Value);
	void Server_SwapAttachments(class AWeaponAttachment* oldAttachment, class AWeaponAttachment* newAttachment);
	void Server_InsertCartridgeIntoWeapon(class AAmmunitionItem* ammo);
	void RemoveAttachmentOnServer(class AWeaponAttachment* Attachment);
	void RemoveAttachmentLocal(class AWeaponAttachment* Attachment);
	void RemoveAttachment(class AWeaponAttachment* Attachment);
	void PlayFiringEffects(bool isLastShot);
	void OnShotFired(bool isLastShot);
	void OnRep_WeaponAttachmentsReplicated();
	void OnRep_FireShotCounterEffectsSync();
	void OnDestroyedEvent(class AActor* Self);
	void OnChamberOpened();
	void OnChamberClosed();
	void NotifyMissOnServer(const struct FVector_NetQuantizeNormal& shootDirection, int randomSeed, float reticleSpread);
	void NotifyHitOnServer(const struct FHitResult& HitResult, const struct FVector_NetQuantizeNormal& shootDirection, int randomSeed, float reticleSpread);
	void NetMulticast_StopFire();
	void NetMulticast_StartFire();
	bool IsInGameEvent();
	bool IsFiring();
	bool IsChamberOpened();
	bool IsAmmoCompatible(class UClass* projectileClass);
	void IncrementZeroRange();
	int GetZeroRange();
	class APrisoner* GetWeaponOwner();
	bool GetUseMuzzleDirectionForShooting();
	int GetUsedAmmoCount();
	float GetSpread();
	class UWeaponActionReloadSequence* GetReloadActionSequenceForData(const struct FWeaponReloadData& reloadData);
	struct FVector GetMuzzleLocation();
	struct FVector GetMuzzleDirection();
	class AWeaponAttachmentMagazine* GetMagazine();
	int GetLoadedAmmoCount();
	bool GetIsChambering();
	int GetInternalMagazineSpace();
	int GetInternalMagazineAmmoCount();
	EWeaponFiringMode GetFiringMode();
	int GetAmmoReloadCapacity(class AAmmunitionItem* ammo);
	int GetAmmoCount();
	void FireShotProjectileOnServer(const struct FVector& startLocation, const struct FVector_NetQuantizeNormal& shootDirection, int zeroRange, float windage, int randomFactor, float ConeHalfAngle);
	void FireShot();
	bool FindReloadData(TArray<class AItem*> Items, struct FWeaponReloadData* reloadData);
	void FillUpWithAmmo();
	void DecrementZeroRange();
	void Client_SetupForEvent();
	void Client_SetLoadedVariables(int zeroRange, int loadedAmmoCount, int internalMagazineAmmoCount, EWeaponFiringMode firingMode);
	bool CanReloadUsingData(const struct FWeaponReloadData& Data);
	void AttachmentRemovedSignature__DelegateSignature(class AWeapon* sender, class AWeaponAttachment* Attachment);
	void AttachmentAddedSignature__DelegateSignature(class AWeapon* sender, class AWeaponAttachment* Attachment);
	void AddAttachmentOnServer(class AWeaponAttachment* Attachment);
	void AddAttachmentLocal(class AWeaponAttachment* Attachment);
	void AddAttachment(class AWeaponAttachment* Attachment);
	void AddAmmo(int amount);
};


// Class ConZ.WeaponAction
// 0x0000 (0x0028 - 0x0028)
class UWeaponAction : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeaponAction");
		return ptr;
	}


	void RemoveAttachmentFromWeapon(class AWeapon* Weapon, class AWeaponAttachment* Attachment);
	void OnActionAnimNotify(ECharacterActionNotifyType notifyType);
	void InsertCartridgeIntoWeapon(class AWeapon* Weapon, class AAmmunitionItem* ammo);
	class AWeapon* GetWeapon();
	void AddAttachmentToWeapon(class AWeapon* Weapon, class AWeaponAttachment* Attachment);
};


// Class ConZ.WeaponActionReloadSequence
// 0x0058 (0x0080 - 0x0028)
class UWeaponActionReloadSequence : public UWeaponAction
{
public:
	struct FBodyWeaponAnimation                        AnimationStandAndCrouch;                                  // 0x0028(0x0010) (CPF_Edit)
	struct FBodyWeaponAnimation                        AnimationProne;                                           // 0x0038(0x0010) (CPF_Edit)
	bool                                               CanBeInterrupted;                                         // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x37];                                      // 0x0049(0x0037) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeaponActionReloadSequence");
		return ptr;
	}


	void SetNextMontageSectionFromPrevious(const struct FName& previousSection, const struct FName& NextSection);
	void SetNextMontageSection(const struct FName& NextSection);
	void OnMontageEnded(class UAnimMontage* Montage, bool interrupted);
	void OnMontageBlendingOutStarted(class UAnimMontage* Montage, bool interrupted);
	struct FWeaponReloadData GetReloadData();
	class UAnimMontage* GetActiveAnimationWeapon();
	class UAnimMontage* GetActiveAnimationBody();
	float ExecuteUsingData(const struct FWeaponReloadData& Data);
	void End(bool Regular);
	bool CanInterrupt();
	bool CanExecuteUsingData(const struct FWeaponReloadData& Data);
};


// Class ConZ.ChamberCartridge
// 0x0000 (0x0080 - 0x0080)
class UChamberCartridge : public UWeaponActionReloadSequence
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ChamberCartridge");
		return ptr;
	}

};


// Class ConZ.CharacterAction
// 0x0148 (0x0170 - 0x0028)
class UCharacterAction : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0028(0x00E8) MISSED OFFSET
	TArray<class UCharacterActionDescription*>         PreActionsDescriptions;                                   // 0x0110(0x0010) (CPF_ZeroConstructor)
	class UCharacterAction*                            ParentAction;                                             // 0x0120(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UCharacterAction*>                    _preActions;                                              // 0x0128(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0138(0x0010) MISSED OFFSET
	class UCharacterActionDescription*                 _description;                                             // 0x0148(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0150(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CharacterAction");
		return ptr;
	}


	float PlayMontage(class UAnimMontage* Montage, float PlayRate, const struct FName& startSection);
	void OnProgressWidgetFinished();
	void OnProgressWidgetCanceled();
	void OnPreActionEnd(class UCharacterAction* action);
	void OnMontageEnded(class UAnimMontage* Montage, bool interrupted);
	void OnMontageBlendingOutStarted(class UAnimMontage* Montage, bool interrupted);
};


// Class ConZ.CharacterActionDescription
// 0x0008 (0x0030 - 0x0028)
class UCharacterActionDescription : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CharacterActionDescription");
		return ptr;
	}

};


// Class ConZ.CharacterCreationWidget
// 0x0008 (0x0228 - 0x0220)
class UCharacterCreationWidget : public UDesignableUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CharacterCreationWidget");
		return ptr;
	}


	void StartGame();
	void ShowErrorDialog(const struct FText& Message);
	void SendKeepServerConnectionAliveRequest();
	void OnUserProfileCreated();
	TArray<int> GetRandomValuesInRangeAddingUpTo(int Min, int Max, int sum, int Num);
	TArray<float> GetRandomizedSkillValuesFloat(float Points, int Num, float* usedPoints);
	TArray<int> GetRandomizedSkillValues(int Points, int Num);
	struct FDateTime GetRandomBirthdayForAge(int Age);
	struct FVector4 GetAgeModifiersFromAge(int Age);
	void EndWaitingOnServerResponse();
	void CreateUserProfile(struct FCharacterTemplate* CharacterTemplate);
	void CancelWaitingOnServerResponse();
	void BeginWaitingOnServerResponse();
};


// Class ConZ.CharacterImpactSoundsData
// 0x0060 (0x0090 - 0x0030)
class UCharacterImpactSoundsData : public UDataAsset
{
public:
	struct FCharacterHeadImpactSoundsData              head;                                                     // 0x0030(0x0018) (CPF_Edit)
	struct FCharacterTorsoImpactSoundsData             Torso;                                                    // 0x0048(0x0018) (CPF_Edit)
	struct FCharacterArmsImpactSoundsData              Arms;                                                     // 0x0060(0x0018) (CPF_Edit)
	struct FCharacterLegsImpactSoundsData              Legs;                                                     // 0x0078(0x0018) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CharacterImpactSoundsData");
		return ptr;
	}

};


// Class ConZ.CharacterPainSoundsData
// 0x0008 (0x0038 - 0x0030)
class UCharacterPainSoundsData : public UDataAsset
{
public:
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CharacterPainSoundsData");
		return ptr;
	}

};


// Class ConZ.CharacterSelectionWidget
// 0x0000 (0x0220 - 0x0220)
class UCharacterSelectionWidget : public UDesignableUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CharacterSelectionWidget");
		return ptr;
	}


	void DeleteCharacter(class UDbUserProfile* userProfile);
};


// Class ConZ.CharacterSpawner
// 0x0078 (0x0390 - 0x0318)
class ACharacterSpawner : public AActor
{
public:
	class UBillboardComponent*                         SpriteComponent;                                          // 0x0318(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<struct FCharacterSpawnerData>               Characters;                                               // 0x0320(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<TEnumAsByte<EPhysicalSurface>>              AllowedSurfaces;                                          // 0x0330(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                CharactersPerCell;                                        // 0x0340(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TotalCharacters;                                          // 0x0344(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CellSize;                                                 // 0x0348(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CellsX;                                                   // 0x034C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CellsY;                                                   // 0x0350(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinSpawnRadius;                                           // 0x0354(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSpawnRadius;                                           // 0x0358(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinSpawnDistance;                                         // 0x035C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSpawnDistance;                                         // 0x0360(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CullDistance;                                             // 0x0364(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SpawnRetries;                                             // 0x0368(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TickFrequency;                                            // 0x036C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Enabled;                                                  // 0x0370(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DebugDraw;                                                // 0x0371(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0372(0x0002) MISSED OFFSET
	struct FColor                                      DebugColor;                                               // 0x0374(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0378(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CharacterSpawner");
		return ptr;
	}

};


// Class ConZ.CharacterStatsManager
// 0x00E0 (0x0108 - 0x0028)
class UCharacterStatsManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0028(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CharacterStatsManager");
		return ptr;
	}


	void SetStats(const struct FString& steamId, const struct FCharacterStats& stats);
	void SetFame(const struct FString& steamId, float FamePoints, int FameLevel);
	void RecalculateFameLevel(const struct FString& steamId);
	bool HasStats(const struct FString& steamId);
	int GetStatsList(const struct FString& steamId, int count, ECharacterStatsSorting sort, bool descending, TArray<struct FCharacterStatsItem>* stats);
	struct FCharacterStats GetStats(const struct FString& steamId);
	struct FString GetPlayerName(const struct FString& steamId);
	float GetFamePoints(const struct FString& steamId);
	int GetFameLevel(const struct FString& steamId);
	void AdjustFamePoints(const struct FString& steamId, float amount);
};


// Class ConZ.ChatText
// 0x0000 (0x0220 - 0x0220)
class UChatText : public UTextBlock
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ChatText");
		return ptr;
	}

};


// Class ConZ.ChatWidget
// 0x0050 (0x0270 - 0x0220)
class UChatWidget : public UDesignableUserWidget
{
public:
	class UImage*                                      _backgroundImage;                                         // 0x0220(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UScrollBox*                                  _chatScrollBox;                                           // 0x0228(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UEditableTextBox*                            _inputText;                                               // 0x0230(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FLinearColor                                _localChatColor;                                          // 0x0238(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                _globalChatColor;                                         // 0x0248(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                _defaultChatColor;                                        // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0268(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ChatWidget");
		return ptr;
	}


	void SetChatType(EChatType chatType);
	void OnTextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnTextChanged(const struct FText& Text);
	EChatType GetChatType();
	void AddText(const struct FText& Text, EChatType chatType);
};


// Class ConZ.CheckDetectableItemsAction
// 0x0010 (0x01C0 - 0x01B0)
class UCheckDetectableItemsAction : public USkillAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CheckDetectableItemsAction");
		return ptr;
	}

};


// Class ConZ.CheckDetectablePlayersAction
// 0x0010 (0x01C0 - 0x01B0)
class UCheckDetectablePlayersAction : public USkillAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CheckDetectablePlayersAction");
		return ptr;
	}

};


// Class ConZ.CheckOccludedDetectablePlayersAction
// 0x0010 (0x01C0 - 0x01B0)
class UCheckOccludedDetectablePlayersAction : public USkillAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CheckOccludedDetectablePlayersAction");
		return ptr;
	}

};


// Class ConZ.Chicken
// 0x0000 (0x09D0 - 0x09D0)
class AChicken : public AAnimal
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Chicken");
		return ptr;
	}

};


// Class ConZ.ChickenAIController
// 0x0000 (0x04A0 - 0x04A0)
class AChickenAIController : public AAnimalAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ChickenAIController");
		return ptr;
	}

};


// Class ConZ.ChokingSickness
// 0x0008 (0x01B8 - 0x01B0)
class UChokingSickness : public USickness
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ChokingSickness");
		return ptr;
	}

};


// Class ConZ.InteractionAction
// 0x0198 (0x01C0 - 0x0028)
class UInteractionAction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x198];                                     // 0x0028(0x0198) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.InteractionAction");
		return ptr;
	}


	void OnActionFinished();
	void OnActionCanceled();
};


// Class ConZ.ChopItemAction
// 0x0000 (0x01C0 - 0x01C0)
class UChopItemAction : public UInteractionAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ChopItemAction");
		return ptr;
	}

};


// Class ConZ.Choppable
// 0x0000 (0x0028 - 0x0028)
class UChoppable : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Choppable");
		return ptr;
	}

};


// Class ConZ.ChoppingRecipeDataAsset
// 0x0090 (0x00C0 - 0x0030)
class UChoppingRecipeDataAsset : public UDataAsset
{
public:
	struct FChoppingRecipe                             ChoppingRecipe;                                           // 0x0030(0x0090) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ChoppingRecipeDataAsset");
		return ptr;
	}

};


// Class ConZ.ChoppingToolItemTag
// 0x0008 (0x0038 - 0x0030)
class UChoppingToolItemTag : public UBaseItemTag
{
public:
	float                                              ChoppingTimeMultiplier;                                   // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                IngredientsQuantityBonus;                                 // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ChoppingToolItemTag");
		return ptr;
	}

};


// Class ConZ.CircularMenuSegmentIcons
// 0x0018 (0x0048 - 0x0030)
class UCircularMenuSegmentIcons : public UDataAsset
{
public:
	class UTexture2D*                                  UnselectedIcon;                                           // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  SelectedIcon;                                             // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  DisabledIcon;                                             // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CircularMenuSegmentIcons");
		return ptr;
	}

};


// Class ConZ.CircularMenuSegmentInfo
// 0x0028 (0x0058 - 0x0030)
class UCircularMenuSegmentInfo : public UDataAsset
{
public:
	struct FText                                       Caption;                                                  // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UCircularMenuSegmentIcons*                   Icons;                                                    // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCircularMenuWidget*                         ParentCircularWidget;                                     // 0x0050(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CircularMenuSegmentInfo");
		return ptr;
	}

};


// Class ConZ.CircularMenuSegmentSubmenuInfo
// 0x0018 (0x0070 - 0x0058)
class UCircularMenuSegmentSubmenuInfo : public UCircularMenuSegmentInfo
{
public:
	TArray<class UCircularMenuSegmentInfo*>            SubmenuInfo;                                              // 0x0058(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	float                                              IndexOffset;                                              // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CircularMenuSegmentSubmenuInfo");
		return ptr;
	}

};


// Class ConZ.CircularMenuSegmentGenericInfo
// 0x0010 (0x0068 - 0x0058)
class UCircularMenuSegmentGenericInfo : public UCircularMenuSegmentInfo
{
public:
	struct FScriptDelegate                             action;                                                   // 0x0058(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CircularMenuSegmentGenericInfo");
		return ptr;
	}

};


// Class ConZ.CircularMenuSegmentInteractionInfo
// 0x0048 (0x00A0 - 0x0058)
class UCircularMenuSegmentInteractionInfo : public UCircularMenuSegmentInfo
{
public:
	EInteractionTargetType                             InteractionTargetType;                                    // 0x0058(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FInteractionStruct                          InteractionInfo;                                          // 0x0060(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class APrisoner*                                   _interactionInitiator;                                    // 0x0090(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     _interactableObject;                                      // 0x0098(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CircularMenuSegmentInteractionInfo");
		return ptr;
	}


	static class UCircularMenuSegmentInteractionInfo* CreateSpecific(class APrisoner* initiator, class UObject* interactable, const struct FInteractionStruct& InteractionStruct);
	static class UCircularMenuSegmentInteractionInfo* Create(EInteractionTargetType interactionTarget, const struct FInteractionStruct& InteractionStruct);
};


// Class ConZ.CircularMenuSegmentWidget
// 0x0058 (0x0278 - 0x0220)
class UCircularMenuSegmentWidget : public UDesignableUserWidget
{
public:
	float                                              _nonSelectableAlpha;                                      // 0x0220(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                _highlightedColour;                                       // 0x0224(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                _unHighlightedColour;                                     // 0x0234(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	class UCircularMenuSegmentInfo*                    _info;                                                    // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UImage*                                      _segment;                                                 // 0x0250(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UOverlay*                                    _iconOverlay;                                             // 0x0258(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UImage*                                      _icon;                                                    // 0x0260(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0268(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CircularMenuSegmentWidget");
		return ptr;
	}


	void UpdateVisualParameters(int numberOfSegments, int Index, float Offset, float middleCutoffPercentage, float Size);
	static class UCircularMenuSegmentWidget* CreateFromInfo(class UCircularMenuSegmentInfo* Info);
};


// Class ConZ.CircularMenuWidget
// 0x0048 (0x0268 - 0x0220)
class UCircularMenuWidget : public UDesignableUserWidget
{
public:
	TArray<struct FCircularLayerData>                  _layerData;                                               // 0x0220(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              _centerSize;                                              // 0x0230(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0234(0x0004) MISSED OFFSET
	TArray<struct FCircularSegmentContainer>           _segmentsByLayer;                                         // 0x0238(0x0010) (CPF_ZeroConstructor)
	class UOverlay*                                    _mainOverlay;                                             // 0x0248(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTextBlock*                                  _actionText;                                              // 0x0250(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0258(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CircularMenuWidget");
		return ptr;
	}


	void InitializeLayer(int Layer, float Offset, TArray<class UCircularMenuSegmentInfo*> segmentInfo, int countParameterOverride);
	int GetSegmentIdForCoordinatesAndLayer(const struct FVector2D& coordinates, int Layer);
	int GetSegmentIdForCoordinates(const struct FVector2D& coordinates, int* Layer);
	static class UCircularMenuWidget* Create(class UObject* WorldContextObject, TArray<class UCircularMenuSegmentInfo*> segmentInfo);
};


// Class ConZ.CircularParameterWidget
// 0x0000 (0x0220 - 0x0220)
class UCircularParameterWidget : public UDesignableUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CircularParameterWidget");
		return ptr;
	}


	void SetMaxValue(float Value);
	void SetCurrentValue(float Value);
	float GetPercentage();
	float GetMaxValue();
	float GetCurrentValue();
};


// Class ConZ.ClockFaceWidget
// 0x0000 (0x0220 - 0x0220)
class UClockFaceWidget : public UDesignableUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ClockFaceWidget");
		return ptr;
	}


	void SetTime(float Time);
	void SetMinutes(int Minutes);
	void SetHours(int Hours);
};


// Class ConZ.ClothesItem
// 0x0070 (0x07F0 - 0x0780)
class AClothesItem : public AItem
{
public:
	class USkeletalMesh*                               EquippedSkeletalMesh;                                     // 0x0780(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UMaterialInstance*>                   EquippedMaterialsOverride;                                // 0x0788(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	EClothesType                                       ClothesType;                                              // 0x0798(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      EquipmentLayer;                                           // 0x0799(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x079A(0x0002) MISSED OFFSET
	uint32_t                                           Warmth;                                                   // 0x079C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           Armor;                                                    // 0x07A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ProjectileHitEnergyAbsorption;                            // 0x07A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ProjectileHitEnergyDamagedAbsorption;                     // 0x07A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TotalEnergyAbsorption;                                    // 0x07AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           CapacityX;                                                // 0x07B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           CapacityY;                                                // 0x07B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           WaterResistance;                                          // 0x07B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InwardsWaterPropagationFactor;                            // 0x07BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutwardsWaterPropagationFactor;                           // 0x07C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CamouflageBonus;                                          // 0x07C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageWhenEquipped;                                       // 0x07C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DirtinessWhenEquipped;                                    // 0x07CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x07D0(0x0001) MISSED OFFSET
	bool                                               _canBeEquipped;                                           // 0x07D1(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x07D2(0x0002) MISSED OFFSET
	float                                              _dirtiness;                                               // 0x07D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x07D8(0x0004) MISSED OFFSET
	unsigned char                                      _dirtinessReplicated;                                     // 0x07DC(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x13];                                      // 0x07DD(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ClothesItem");
		return ptr;
	}


	void UpdateMaterialParamsOnClients();
	void SetDirtiness(float dirtiness);
	void OnRep_Dirtiness();
	int GetWarmth();
	int GetCapacityY();
	int GetCapacityX();
};


// Class ConZ.ClothesItemSpawner
// 0x0020 (0x03B8 - 0x0398)
class AClothesItemSpawner : public AItemSpawner
{
public:
	TArray<class UClass*>                              Items;                                                    // 0x0398(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class UItemGroup*>                          ItemGroups;                                               // 0x03A8(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ClothesItemSpawner");
		return ptr;
	}

};


// Class ConZ.InteractionAssetData
// 0x0008 (0x0030 - 0x0028)
class UInteractionAssetData : public UAssetUserData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.InteractionAssetData");
		return ptr;
	}

};


// Class ConZ.CutObjectAssetData
// 0x0008 (0x0038 - 0x0030)
class UCutObjectAssetData : public UInteractionAssetData
{
public:
	class UChoppingRecipeDataAsset*                    ChoppingRecipeDataAsset;                                  // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CutObjectAssetData");
		return ptr;
	}

};


// Class ConZ.CollectObjectAssetData
// 0x0000 (0x0038 - 0x0038)
class UCollectObjectAssetData : public UCutObjectAssetData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CollectObjectAssetData");
		return ptr;
	}

};


// Class ConZ.CombinedInventoryWidget
// 0x0048 (0x0268 - 0x0220)
class UCombinedInventoryWidget : public UDesignableUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET
	class UGenericItemContainerWidget*                 CurrentInventoryWidget;                                   // 0x0228(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UGenericItemContainerWidget*                 EmptyInventoryWidget;                                     // 0x0230(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UGenericItemContainerWidget*>         InventoryWidgets;                                         // 0x0238(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	class UInventoryContainersWidget*                  ContainersWidget;                                         // 0x0248(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UNamedSlot*                                  MainSlot;                                                 // 0x0250(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FVector2D                                   DefaultPosition;                                          // 0x0258(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_IsPlainOldData)
	bool                                               NeedLayoutLoading;                                        // 0x0260(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	bool                                               SavedLayoutMinimizedPartial;                              // 0x0261(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	bool                                               SavedLayoutMinimizedFull;                                 // 0x0262(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0263(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CombinedInventoryWidget");
		return ptr;
	}


	void SetSavedLayoutMinimizedPartial(bool Value);
	void SetSavedLayoutMinimizedFull(bool Value);
	void SetNeedLayoutLoading(bool Value);
	void ResizeExtraSlots();
	void OnItemContainerClicked(class UItemUserWidget* ItemWidget);
	class UWidget* GetChildWidgetByName(const struct FString& WidgetName);
	void DeferredLoadLayout();
	void ChangeActiveInventory(int Index);
	void AddContainerWidgetFromItem(class AClothesItem* Item, struct FCondensedInventoryContainer* container);
	void AddContainerWidget(class UGenericItemContainerWidget* Widget);
};


// Class ConZ.CommandAnimalAction
// 0x0000 (0x01C0 - 0x01C0)
class UCommandAnimalAction : public UAnimalAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CommandAnimalAction");
		return ptr;
	}

};


// Class ConZ.ComplexAnimal2
// 0x0170 (0x0B50 - 0x09E0)
class AComplexAnimal2 : public AAnimal2
{
public:
	float                                              HungerDepletionRateWhenResting;                           // 0x09E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EnergyRefillRate;                                         // 0x09E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HungerRefillRate;                                         // 0x09E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HealthRegenerationRate;                                   // 0x09EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HealthDepletionRate;                                      // 0x09F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FAnimalPaceSettings                         MovementPaceSettings;                                     // 0x09F4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FAnimalStationaryRotationRateSettings       RotationRateSettings;                                     // 0x0A04(0x003C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FScriptMulticastDelegate                    OnActionChanged;                                          // 0x0A40(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	TArray<struct FChargeAttackData>                   ChargeAttacks;                                            // 0x0A50(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FCloseRangeAttackData>               CloseRangeAttacks;                                        // 0x0A60(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FTurnMontages                               TurnMonatges;                                             // 0x0A70(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FAnimalActionMontageData                    AnimalActions;                                            // 0x0A80(0x0018) (CPF_Edit)
	float                                              AttackRotationRate;                                       // 0x0A98(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinActionTime;                                            // 0x0A9C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTag                                HitReactTypeResting;                                      // 0x0AA0(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTag                                HitReactTypeIntimidate;                                   // 0x0AA8(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0AB0(0x0008) MISSED OFFSET
	uint16_t                                           _hungerAndEnergyReplicated;                               // 0x0AB8(0x0002) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x16];                                      // 0x0ABA(0x0016) MISSED OFFSET
	struct FVector                                     _lookAtPoint;                                             // 0x0AD0(0x000C) (CPF_Net, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x74];                                      // 0x0ADC(0x0074) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ComplexAnimal2");
		return ptr;
	}


	void Wait(float Time);
	float TurnTowardLocation(const struct FVector& Location);
	float TurnTowardActor(class AActor* foe);
	float TurnAwayFromActor(class AActor* foe);
	float Turn(bool directionLeft);
	void StopAction_Multicast();
	void StartAction_Multicast(const struct FRepActionData& newAction);
	void Sit(float Time);
	void Rest(float Time);
	void ResetRotationRate();
	bool PreformChargeAttack(int attackIndex, float Time);
	void OnRep_HungerAndEnergy();
	void OnRep_ActionData();
	void Intimidate(float Time, class AActor* foe);
	struct FVector GetSpeed();
	float GetAngularVelocity();
	void ForceRoattionRate(const struct FRotator& RotationRate);
	void Eat(float Time);
	bool ChargeAttackFoe(class AActor* foe);
	void ChangeSpeed(float pace);
	void ChangePace(EAnimalMovementPace pace);
	void Alert(float Time);
};


// Class ConZ.ComplexAnimal2AnimInstance
// 0x0020 (0x0410 - 0x03F0)
class UComplexAnimal2AnimInstance : public UAnimal2AnimInstance
{
public:
	EAnimalAction                                      CurrentAction;                                            // 0x03F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03F1(0x0003) MISSED OFFSET
	float                                              HeadLookRight;                                            // 0x03F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeadLookUp;                                               // 0x03F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeadMovementLerpSpeed;                                    // 0x03FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngularVelocity;                                          // 0x0400(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0404(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ComplexAnimal2AnimInstance");
		return ptr;
	}

};


// Class ConZ.ConsoleHelpers
// 0x0000 (0x0028 - 0x0028)
class UConsoleHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ConsoleHelpers");
		return ptr;
	}


	static void SetHasPendingChanges(bool Value);
	static void SetGraphicsPreset(int Preset);
	static void SetConfigVar(const struct FString& Key, const struct FString& Value, const struct FString& Section);
	static void RevertConfig();
	static bool IsPushToTalkEnabled();
	static bool GetInvertMouseY();
	static bool GetHasPendingChanges();
	static struct FString GetConfigVar(EConfigFile file, const struct FString& Key, const struct FString& Section);
	static struct FString GetConfigString(const struct FString& Key);
	static int GetConfigInt(const struct FString& Key);
	static float GetConfigFloat(const struct FString& Key);
	static bool GetConfigBool(const struct FString& Key);
	static void ApplyDynamicShadowsQuality(class UWorld* worldToApplyFor);
	static void ApplyConfig();
};


// Class ConZ.ConstitutionSkill
// 0x0018 (0x00B0 - 0x0098)
class UConstitutionSkill : public USkill
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ConstitutionSkill");
		return ptr;
	}

};


// Class ConZ.ElectricalDevice
// 0x0028 (0x0340 - 0x0318)
class AElectricalDevice : public AActor
{
public:
	struct FName                                       ControlName;                                              // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PowerConsumption;                                         // 0x0320(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0324(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0328(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             _rootComponent;                                           // 0x0330(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               _hasPower;                                                // 0x0338(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isWorking;                                               // 0x0339(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x033A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ElectricalDevice");
		return ptr;
	}


	void OnRep_IsWorking();
	void OnRep_HasPower();
	bool IsWorking();
	bool HasPower();
};


// Class ConZ.ControlPanel
// 0x0028 (0x0368 - 0x0340)
class AControlPanel : public AElectricalDevice
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0340(0x0008) MISSED OFFSET
	TArray<class ADoor*>                               ControlledDoors;                                          // 0x0348(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<class AElectricalDevice*>                   ControlledDevices;                                        // 0x0358(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ControlPanel");
		return ptr;
	}

};


// Class ConZ.ConZAssetManager
// 0x0060 (0x0430 - 0x03D0)
class UConZAssetManager : public UAssetManager
{
public:
	TArray<struct FImageAssetToLoad>                   _imageAssetsToLoad;                                       // 0x03D0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x03E0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ConZAssetManager");
		return ptr;
	}

};


// Class ConZ.ConZBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UConZBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ConZBlueprintFunctionLibrary");
		return ptr;
	}


	static void ChangeLocalization(const struct FString& Target);
};


// Class ConZ.ConZGameInstance
// 0x00D0 (0x01C0 - 0x00F0)
class UConZGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET
	struct FCharacterCreationMenuContext               CharacterCreationMenuContext;                             // 0x0100(0x0030) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               NetworkFailed;                                            // 0x0130(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               WasKickedFromGameSession;                                 // 0x0131(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0132(0x0006) MISSED OFFSET
	class UGameplayLog*                                GameplayLogLogin;                                         // 0x0138(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UGameplayLog*                                GameplayLogAdmin;                                         // 0x0140(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UGameplayLog*                                GameplayLogKill;                                          // 0x0148(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0150(0x0008) MISSED OFFSET
	class UDbConnection*                               _primaryDatabaseConnection;                               // 0x0158(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDedicatedServerRequest*                     _serverRequest;                                           // 0x0160(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDbUser*                                     _currentUser;                                             // 0x0168(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDbUserProfile*                              _currentUserProfile;                                      // 0x0170(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  _loadingScreenTexture;                                    // 0x0178(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ULoadingScreen*                              _loadingScreen;                                           // 0x0180(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x38];                                      // 0x0188(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ConZGameInstance");
		return ptr;
	}


	void StartSingleplayerGame();
	void StartMultiplayerGame(const struct FString& Ip, int GameplayPort, const struct FString& authToken);
	void SetCurrentUserProfile(class UDbUserProfile* Value);
	void RemoveLoadingWidget();
	void OnPreLoadMap(const struct FString& mapName);
	void OnPostLoadMap(class UWorld* loadedWorld);
	void OnPlaySessionEnd(bool quit);
	bool IsTransitioningMap();
	void HandleNetworkFailure(class UWorld* World, class UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure> FailureType, const struct FString& errorString);
	class UDedicatedServerRequest* GetServerRequest();
	class UDbConnection* GetPrimaryDatabaseConnection();
	struct FText GetLastNetworkError();
	class UDbUserProfile* GetCurrentUserProfile();
	class UDbUser* GetCurrentUser();
	void AddLoadingWidget(class ULoadingScreen* Widget);
	void AddDefaultLoadingWidget();
};


// Class ConZ.ConZGameMode
// 0x03C0 (0x07C0 - 0x0400)
class AConZGameMode : public AGameMode
{
public:
	float                                              SerializationFrequency;                                   // 0x0400(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	class UClass*                                      _prisonerClassToSpawn;                                    // 0x0408(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      _droneClassToSpawn;                                       // 0x0410(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      _itemSpawningManagerClass;                                // 0x0418(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xB0];                                      // 0x0420(0x00B0) MISSED OFFSET
	class AItemSpawningManager*                        _itemSpawningManager;                                     // 0x04D0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCharacterStatsManager*                      _characterStatsManager;                                   // 0x04D8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AGlobalAnimalSpawner*                        _globalAnimalSpawner;                                     // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AGlobalBirdSpawner2*                         _globalBirdSpawner;                                       // 0x04E8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xC8];                                      // 0x04F0(0x00C8) MISSED OFFSET
	class UDedicatedServerResponse*                    _serverResponse;                                          // 0x05B8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x200];                                     // 0x05C0(0x0200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ConZGameMode");
		return ptr;
	}


	void SendHUDMessageToAll(const struct FString& Message, bool beep);
	class AItemSpawningManager* GetItemSpawningManager();
	class AGlobalBirdSpawner2* GetGlobalBirdSpawner();
	class AGlobalAnimalSpawner* GetGlobalAnimalSpawner();
	class UCharacterStatsManager* GetCharacterStatsManager();
};


// Class ConZ.ConZGameSession
// 0x0000 (0x0330 - 0x0330)
class AConZGameSession : public AGameSession
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ConZGameSession");
		return ptr;
	}

};


// Class ConZ.ConZGameState
// 0x0258 (0x05D0 - 0x0378)
class AConZGameState : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0378(0x0058) MISSED OFFSET
	float                                              ReactionFrequency;                                        // 0x03D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SerializationFrequency;                                   // 0x03D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCraftingDatabase*                           _craftingDatabase;                                        // 0x03D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UGlobalItemSpawner*                          _globalItemSpawner;                                       // 0x03E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBaseItemTag*                                _persistentItemTag;                                       // 0x03E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x03F0(0x0018) MISSED OFFSET
	TArray<class AConZCharacter*>                      _registeredCharacters;                                    // 0x0408(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x80];                                      // 0x0418(0x0080) MISSED OFFSET
	class USicknessClasses*                            _sicknessClasses;                                         // 0x0498(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x04A0(0x0010) MISSED OFFSET
	TArray<class AConZTeam*>                           _repTeams;                                                // 0x04B0(0x0010) (CPF_Net, CPF_ZeroConstructor)
	TMap<TWeakObjectPtr<class AConZCharacter>, int>    _currentDroneTargetDispatcherMap;                         // 0x04C0(0x0050) (CPF_ZeroConstructor)
	TMap<TWeakObjectPtr<class AConZCharacter>, int>    _droneTargetDispatcherHistoryMap;                         // 0x0510(0x0050) (CPF_ZeroConstructor)
	TMap<TWeakObjectPtr<class AConZCharacter>, class UDroneTargetData*> _droneTargetVisits;                                       // 0x0560(0x0050) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData04[0x20];                                      // 0x05B0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ConZGameState");
		return ptr;
	}


	void SendServerTime(float Time);
	void RemoveMemberFromTeam(class APrisoner* Prisoner, class AConZTeam* Team);
	void RemoveMemberFromAllTeams(class APrisoner* Prisoner);
	void OnRep_Teams();
	bool IsMemberOfTeam(class APrisoner* Prisoner, class AConZTeam* Team);
	TArray<class AConZTeam*> GetTeams();
	class AConZTeam* GetTeamForPrisoner(class APrisoner* Prisoner);
	TArray<class APrisoner*> GetRegisteredPrisoners();
	class AConZTeam* FindTeam(const struct FString& teamName);
	class AConZTeam* CreateTeam(const struct FString& teamName);
	void AddMemberToTeam(class APrisoner* Prisoner, class AConZTeam* Team);
};


// Class ConZ.GameplayLog
// 0x0018 (0x0040 - 0x0028)
class UGameplayLog : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.GameplayLog");
		return ptr;
	}

};


// Class ConZ.ConZReverbComponent
// 0x0020 (0x02F0 - 0x02D0)
class UConZReverbComponent : public UAkLateReverbComponent
{
public:
	class UAkAuxBus*                                   IndoorSmallAuxBus;                                        // 0x02D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAuxBus*                                   IndoorMediumAuxBus;                                       // 0x02D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAuxBus*                                   IndoorLargeAuxBus;                                        // 0x02E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAuxBus*                                   OutdoorLargeAuxBus;                                       // 0x02E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ConZReverbComponent");
		return ptr;
	}

};


// Class ConZ.ConZReverbVolume
// 0x0000 (0x0388 - 0x0388)
class AConZReverbVolume : public AAkReverbVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ConZReverbVolume");
		return ptr;
	}

};


// Class ConZ.ConZSpectatorPawn
// 0x0010 (0x03B0 - 0x03A0)
class AConZSpectatorPawn : public ASpectatorPawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ConZSpectatorPawn");
		return ptr;
	}

};


// Class ConZ.ConZTeam
// 0x0040 (0x0358 - 0x0318)
class AConZTeam : public AActor
{
public:
	struct FString                                     teamName;                                                 // 0x0318(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor)
	struct FLinearColor                                TeamColor;                                                // 0x0328(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_IsPlainOldData)
	TArray<class APrisoner*>                           _members;                                                 // 0x0338(0x0010) (CPF_ZeroConstructor)
	TArray<class APrisoner*>                           _repMembers;                                              // 0x0348(0x0010) (CPF_Net, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ConZTeam");
		return ptr;
	}


	void RemoveMember(class APrisoner* Prisoner);
	void OnRep_Members();
	bool HasMember(class APrisoner* Prisoner);
	TArray<class APrisoner*> GetMembers();
	void AddMember(class APrisoner* Prisoner);
};


// Class ConZ.ConZWaterVolume
// 0x0008 (0x0368 - 0x0360)
class AConZWaterVolume : public APhysicsVolume
{
public:
	class AOceanManager*                               Ocean;                                                    // 0x0360(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ConZWaterVolume");
		return ptr;
	}

};


// Class ConZ.ConZWorldBoundsVolume
// 0x0000 (0x0350 - 0x0350)
class AConZWorldBoundsVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ConZWorldBoundsVolume");
		return ptr;
	}

};


// Class ConZ.ConZWorldSettings
// 0x00A0 (0x0578 - 0x04D8)
class AConZWorldSettings : public AWorldSettings
{
public:
	bool                                               SerializeInstances;                                       // 0x04D8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04D9(0x0007) MISSED OFFSET
	class AWeatherController*                          WeatherController;                                        // 0x04E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AWetnessManager*                             WetnessManager;                                           // 0x04E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AGameEventManager*                           GameEventManager;                                         // 0x04F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FItemSpawningSettings                       ItemSpawningSettings;                                     // 0x04F8(0x0078) (CPF_Edit)
	class AVolume*                                     IslandBoundsVolume;                                       // 0x0570(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ConZWorldSettings");
		return ptr;
	}

};


// Class ConZ.CookingSkill
// 0x0000 (0x0098 - 0x0098)
class UCookingSkill : public UIntelligenceSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CookingSkill");
		return ptr;
	}

};


// Class ConZ.CopperDeficiency
// 0x0000 (0x01C0 - 0x01C0)
class UCopperDeficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CopperDeficiency");
		return ptr;
	}

};


// Class ConZ.Corpse
// 0x01C8 (0x04E0 - 0x0318)
class ACorpse : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0318(0x0018) MISSED OFFSET
	class USkeletalMeshComponent*                      RagdollMeshComponent;                                     // 0x0330(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UChoppingRecipeDataAsset*                    ChoppingRecipeDataAsset;                                  // 0x0338(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IterativeChopping;                                        // 0x0340(0x0001) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	struct FName                                       MainBoneName;                                             // 0x0348(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FCorpseSkeletalMeshRepData                  RagdollMeshData;                                          // 0x0350(0x0070) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_EditConst)
	TArray<struct FCorpseStaticMeshRepData>            StaticMeshData;                                           // 0x03C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FCorpseSkeletalMeshRepData>          SkeletalMeshData;                                         // 0x03D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_EditConst)
	struct FCorpsePoseData                             PoseData;                                                 // 0x03E0(0x0080) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_EditConst)
	TArray<class AItem*>                               Inventory;                                                // 0x0460(0x0010) (CPF_Net, CPF_ZeroConstructor)
	float                                              SearchTime;                                               // 0x0470(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               StartSearchAudioEvent;                                    // 0x0478(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StopSearchAudioEvent;                                     // 0x0480(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoDestructTime;                                         // 0x0488(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoDestructRadius;                                       // 0x048C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class AActor*>                              Attachements;                                             // 0x0490(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FName>                               AttachementSockets;                                       // 0x04A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_EditConst)
	unsigned char                                      UnknownData03[0x20];                                      // 0x04B0(0x0020) MISSED OFFSET
	bool                                               _atRest;                                                  // 0x04D0(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0xF];                                       // 0x04D1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Corpse");
		return ptr;
	}


	void OnRep_PoseData();
	void OnRep_AtRest();
	void CopyFromCharacter(class AConZCharacter* sourceCharacter);
	void ApplyAttachements();
};


// Class ConZ.CorpseInterface
// 0x0000 (0x0028 - 0x0028)
class UCorpseInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CorpseInterface");
		return ptr;
	}

};


// Class ConZ.Crab
// 0x0020 (0x09F0 - 0x09D0)
class ACrab : public AAnimal
{
public:
	class UAnimationAsset*                             IdleAnimation1;                                           // 0x09D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimationAsset*                             IdleAnimation2;                                           // 0x09D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimationAsset*                             WalkLeftAnimation;                                        // 0x09E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimationAsset*                             WalkRightAnimation;                                       // 0x09E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Crab");
		return ptr;
	}

};


// Class ConZ.CrabAIController
// 0x0070 (0x0480 - 0x0410)
class ACrabAIController : public AAIController
{
public:
	float                                              MinIdle1Time;                                             // 0x0410(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxIdle1Time;                                             // 0x0414(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinIdle2Time;                                             // 0x0418(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxIdle2Time;                                             // 0x041C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinWalkTime;                                              // 0x0420(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxWalkTime;                                              // 0x0424(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxRadius;                                                // 0x0428(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TickFrequency;                                            // 0x042C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0430(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CrabAIController");
		return ptr;
	}

};


// Class ConZ.CraftableItem
// 0x00C8 (0x00F8 - 0x0030)
class UCraftableItem : public UDataAsset
{
public:
	ECraftingItemCategory                              ItemCategory;                                             // 0x0030(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                ItemOrder;                                                // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FCraftingPair>                       CraftedItems;                                             // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	EInteractionType                                   Interaction;                                              // 0x0048(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FText                                       InteractionCaption;                                       // 0x0050(0x0018) (CPF_Edit)
	TArray<struct FCraftingItem>                       MandatoryItems;                                           // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FCraftingItem>                       OptionalItems;                                            // 0x0078(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FCraftingItem>                       ToolsNeeded;                                              // 0x0088(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	bool                                               AutoCalculation;                                          // 0x0098(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	class UClass*                                      Skill;                                                    // 0x00A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FCraftingSkillLevelData                     NoSkillLevelData;                                         // 0x00A8(0x0014) (CPF_Edit)
	struct FCraftingSkillLevelData                     BasicLevelData;                                           // 0x00BC(0x0014) (CPF_Edit)
	struct FCraftingSkillLevelData                     MediumLevelData;                                          // 0x00D0(0x0014) (CPF_Edit)
	struct FCraftingSkillLevelData                     AdvancedLevelData;                                        // 0x00E4(0x0014) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CraftableItem");
		return ptr;
	}

};


// Class ConZ.CraftingAvailableItemWidget
// 0x0028 (0x0248 - 0x0220)
class UCraftingAvailableItemWidget : public UDesignableUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x0220(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	bool                                               _isSelected;                                              // 0x0230(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isOptional;                                              // 0x0231(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EOptionalState                                     _optionalState;                                           // 0x0232(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0233(0x0005) MISSED OFFSET
	class AItem*                                       _item;                                                    // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               _clickSound;                                              // 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CraftingAvailableItemWidget");
		return ptr;
	}


	void SetOptionalState(EOptionalState State);
	void SetIsSelected(bool isSelected);
	void SetIsOptional(bool isOptional);
	bool IsAvailable();
	void Init(class AItem* Item);
	EOptionalState GetOptionalState();
	bool GetIsSelected();
	bool GetIsOptional();
	void ClickedDelegate__DelegateSignature(class UCraftingAvailableItemWidget* Widget, class AItem* Item);
};


// Class ConZ.CraftingComponentWidget
// 0x0020 (0x0240 - 0x0220)
class UCraftingComponentWidget : public UDesignableUserWidget
{
public:
	class UItemClassWidget*                            ItemWidget;                                               // 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               _isTool;                                                  // 0x0228(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0229(0x0007) MISSED OFFSET
	class UClass*                                      _itemClass;                                               // 0x0230(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isAvailable;                                             // 0x0238(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0239(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CraftingComponentWidget");
		return ptr;
	}


	void SetRequiredCount(int count);
	void SetOrderNumber(int orderNumber);
	void SetIsTool(bool IsTool);
	void SetIsOptional(bool isOptional);
	void SetIsAvailable(bool IsAvailable);
	bool GetIsAvailable();
	void CreateTooltip();
};


// Class ConZ.CraftingDatabase
// 0x0068 (0x0098 - 0x0030)
class UCraftingDatabase : public UDataAsset
{
public:
	TArray<class UCraftableItem*>                      CraftableItems;                                           // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FString>                             AssetPaths;                                               // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UCraftingItemTag*                            CookableTag;                                              // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCraftingItemTag*                            SmokableTag;                                              // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCraftingItemTag*                            OpenItemTag;                                              // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCraftingItemTag*                            LightFireTag;                                             // 0x0068(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UItemGroup*                                  IngredientsGroup;                                         // 0x0070(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FString>                             IngredientsGroupPaths;                                    // 0x0078(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FString>                             IngredientsExcludePaths;                                  // 0x0088(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CraftingDatabase");
		return ptr;
	}

};


// Class ConZ.CraftingInfoWidget
// 0x00F0 (0x0310 - 0x0220)
class UCraftingInfoWidget : public UDesignableUserWidget
{
public:
	class UInspectedItemWidget*                        ItemWidget;                                               // 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UGridPanel*                                  ComponentsGridPanel;                                      // 0x0228(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UGridPanel*                                  CraftingGridPanel;                                        // 0x0230(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UUserWidget*                                 ComponentsMinimizableWidget;                              // 0x0238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UUserWidget*                                 CraftingMinimizableWidget;                                // 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UClass*                                      _itemClass;                                               // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0250(0x0050) MISSED OFFSET
	TArray<class UPreviousNextSwitchWidget*>           _switchWidgets;                                           // 0x02A0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	TWeakObjectPtr<class UPrisonerInventoryComponent>  _inventoryComponent;                                      // 0x02B0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FCraftingRecipe                             _craftingRecipe;                                          // 0x02B8(0x0038)
	unsigned char                                      UnknownData01[0x20];                                      // 0x02F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CraftingInfoWidget");
		return ptr;
	}


	void SwapIngredient(int widgetIndex, int orderIndex);
	void Init(class AItem* itemCDO);
	void Close();
};


// Class ConZ.CraftingItemTag
// 0x0000 (0x0030 - 0x0030)
class UCraftingItemTag : public UBaseItemTag
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CraftingItemTag");
		return ptr;
	}

};


// Class ConZ.CraftingPanelWidget
// 0x00D8 (0x02F8 - 0x0220)
class UCraftingPanelWidget : public UDesignableUserWidget
{
public:
	class UCraftingInfoWidget*                         _craftingInfo;                                            // 0x0220(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UGridPanel*                                  _inventoryBox;                                            // 0x0228(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UGridPanel*                                  _vicinityBox;                                             // 0x0230(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UGridPanel*                                  _toolsAndWeaponsBox;                                      // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UGridPanel*                                  _itemsBox;                                                // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UGridPanel*                                  _foodBox;                                                 // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UScrollBox*                                  _inventoryScrollBox;                                      // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UScrollBox*                                  _vicinityScrollBox;                                       // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UScrollBox*                                  _toolsAndWeaponsScrollBox;                                // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UScrollBox*                                  _itemsScrollBox;                                          // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UScrollBox*                                  _foodScrollBox;                                           // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UScaleBox*                                   _inventoryScaleBox;                                       // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UScaleBox*                                   _vicinityScaleBox;                                        // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UScaleBox*                                   _toolsAndWeaponsScaleBox;                                 // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UScaleBox*                                   _itemsScaleBox;                                           // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UScaleBox*                                   _foodScaleBox;                                            // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TWeakObjectPtr<class UCraftingRecipeWidget>        _selectedRecipeWidget;                                    // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x02A8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CraftingPanelWidget");
		return ptr;
	}


	void UpdateAvailableComponents();
	void OnRecipeClicked(class UCraftingRecipeWidget* Widget);
	void OnAdditionalIngredientSelected(class UCraftingAvailableItemWidget* Widget, class AItem* Item);
	void HandlePrisonerChange(class APrisoner* Prisoner);
	void Craft();
};


// Class ConZ.CraftingRecipeWidget
// 0x0040 (0x0260 - 0x0220)
class UCraftingRecipeWidget : public UDesignableUserWidget
{
public:
	class UItemClassWidget*                            ItemWidget;                                               // 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                RecipeID;                                                 // 0x0228(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x022C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRecipeSelected;                                         // 0x0230(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	bool                                               _isGrayedOut;                                             // 0x0240(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	class UImage*                                      _itemImage;                                               // 0x0248(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0250(0x0008) MISSED OFFSET
	bool                                               _isExaminable;                                            // 0x0258(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	ERecipeAvailabilityState                           _availabilityState;                                       // 0x0259(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x025A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CraftingRecipeWidget");
		return ptr;
	}


	void SetTooltipFromClass(class UClass* ItemClass);
	void SetIsSelected(bool isSelected);
	void SetIsGrayedOut(bool isGrayedOut);
	void SetAvailabilityState(ERecipeAvailabilityState State);
	void RecipeSelectedDelegate__DelegateSignature(class UCraftingRecipeWidget* Widget);
	ERecipeAvailabilityState GetAvailabilityState();
};


// Class ConZ.CraftItemAction
// 0x0080 (0x0240 - 0x01C0)
class UCraftItemAction : public UInteractionAction
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x01C0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CraftItemAction");
		return ptr;
	}

};


// Class ConZ.CTFBase
// 0x0030 (0x0348 - 0x0318)
class ACTFBase : public AActor
{
public:
	class USphereComponent*                            SphereComponent;                                          // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UMaterialInstance*>                   TeamMaterials;                                            // 0x0328(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	class ACTFGameEvent*                               _gameEvent;                                               // 0x0338(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                _team;                                                    // 0x0340(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _radius;                                                  // 0x0344(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CTFBase");
		return ptr;
	}


	void SphereOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnRep_Team();
	void OnRep_Radius();
};


// Class ConZ.CTFFlag
// 0x00B8 (0x03D0 - 0x0318)
class ACTFFlag : public AActor
{
public:
	class USphereComponent*                            SphereComponent;                                          // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      FlagMesh;                                                 // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UMaterialInstance*>                   TeamMaterials;                                            // 0x0328(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FName                                       AttachSocketName;                                         // 0x0338(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ACTFGameEvent*                               _gameEvent;                                               // 0x0340(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                _team;                                                    // 0x0348(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	class APrisoner*                                   _carrier;                                                 // 0x0350(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0358(0x0008) MISSED OFFSET
	float                                              _resetProgress;                                           // 0x0360(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0364(0x000C) MISSED OFFSET
	struct FTransform                                  _baseTransform;                                           // 0x0370(0x0030) (CPF_Net, CPF_IsPlainOldData)
	struct FTransform                                  _flagTransform;                                           // 0x03A0(0x0030) (CPF_Net, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CTFFlag");
		return ptr;
	}


	void SphereOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnRep_Team();
	void OnRep_FlagTransform();
};


// Class ConZ.CTFFlagStand
// 0x0020 (0x0338 - 0x0318)
class ACTFFlagStand : public AActor
{
public:
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPointLightComponent*                        Light;                                                    // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FLinearColor                                _lightColor;                                              // 0x0328(0x0010) (CPF_Net, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CTFFlagStand");
		return ptr;
	}


	void OnRep_LightColor();
};


// Class ConZ.GameEventBase
// 0x0330 (0x0648 - 0x0318)
class AGameEventBase : public AActor
{
public:
	struct FText                                       EventName;                                                // 0x0318(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	class UClass*                                      ParticipantStatsClass;                                    // 0x0330(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      RoundInfoWidgetClass;                                     // 0x0338(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      TeamHeaderWidgetClass;                                    // 0x0340(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      StatWidgetClass;                                          // 0x0348(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      MiniStatWidgetClass;                                      // 0x0350(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      TransportClass;                                           // 0x0358(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               TimesUpAnnouncement;                                      // 0x0360(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               BlueTeamWonRoundAnnouncement;                             // 0x0368(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               RedTeamWonRoundAnnouncement;                              // 0x0370(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               RoundDrawAnnouncement;                                    // 0x0378(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               BlueTeamWonEventAnnouncement;                             // 0x0380(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	class UAkAudioEvent*                               RedTeamWonEventAnnouncement;                              // 0x0388(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	class UAkAudioEvent*                               EventDrawAnnouncement;                                    // 0x0390(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	class UAkAudioEvent*                               Time30sAnnouncement;                                      // 0x0398(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               Time15sAnnouncement;                                      // 0x03A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               Time10sCountdownAnnouncement;                             // 0x03A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               TensionMusicStart;                                        // 0x03B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               TensionMusicStop;                                         // 0x03B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EGameEventState                                    _state;                                                   // 0x03C0(0x0001) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C1(0x0003) MISSED OFFSET
	int                                                _activeParticipantCount;                                  // 0x03C4(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                _numberOfTeams;                                           // 0x03C8(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	TArray<int>                                        _teamMemberCount;                                         // 0x03D0(0x0010) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_EditConst)
	TArray<int>                                        _teamScores;                                              // 0x03E0(0x0010) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_EditConst)
	TArray<int>                                        _roundWinningTeam;                                        // 0x03F0(0x0010) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_EditConst)
	int                                                _round;                                                   // 0x0400(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              _roundTimeLeft;                                           // 0x0404(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _cancelTimeLeft;                                          // 0x0408(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1C];                                      // 0x040C(0x001C) MISSED OFFSET
	class AGameEventLocationMarker*                    _marker;                                                  // 0x0428(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AGameEventBorder*                            _border;                                                  // 0x0430(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AGameEventManager*                           _manager;                                                 // 0x0438(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FGameEventParticipantInfo>           _participantInfo;                                         // 0x0440(0x0010) (CPF_Net, CPF_ZeroConstructor)
	struct FGameEventParameters                        _parameters;                                              // 0x0450(0x0180) (CPF_Net)
	class UGameEventCardWidget*                        _cardWidget;                                              // 0x05D0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UGameEventScoreboardWidget*                  _scoreboardWidget;                                        // 0x05D8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UGameEventScoreboardWidget*                  _miniScoreboardWidget;                                    // 0x05E0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<int>                                        _rankings;                                                // 0x05E8(0x0010) (CPF_Net, CPF_ZeroConstructor)
	unsigned char                                      UnknownData03[0x30];                                      // 0x05F8(0x0030) MISSED OFFSET
	class UAkComponent*                                _lastAnnouncement;                                        // 0x0628(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkComponent*                                _lastCountdownAnnouncement;                               // 0x0630(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0638(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.GameEventBase");
		return ptr;
	}


	void UpdateTeamMemberCount();
	void UpdateRanking(int Index);
	void SetTeamScore(int TeamIndex, float Score);
	void SetParticipantTeam(class APrisoner* Prisoner, int TeamIndex);
	void SetParameters(const struct FGameEventParameters& Parameters);
	void SetNumberOfTeams(int Value);
	bool ScheduleEvent();
	void SavePrisonerState(class APrisoner* Prisoner);
	bool SameTeam(class APrisoner* prisonerA, class APrisoner* prisonerB);
	void RestorePrisonerState(class APrisoner* Prisoner);
	void ResetGameEventArea();
	void RegisterParticipant(class APrisoner* Prisoner, int preferredTeam);
	void PresentSpawnScreen(class APrisoner* Prisoner, bool Force);
	void ParticipantExit(class APrisoner* Prisoner);
	void ParticipantEnter(class APrisoner* Prisoner);
	void OnRep_Rankings();
	void OnRep_ParticipantInfo();
	void Multicast_StopMusic(class UAkAudioEvent* StopAudioEvent);
	void Multicast_StopCountdownAnnouncement();
	void Multicast_ShowScoreboardForEveryone();
	void Multicast_ShowEventNotification(EGameEventNotificationType Type, const struct FString& auxString);
	void Multicast_PlayMusic(class UAkAudioEvent* StartAudioEvent);
	void Multicast_PlayCountdownAnnouncement(class UAkAudioEvent* Sound);
	void Multicast_PlayAnnouncementToTeam(int TeamIndex, class UAkAudioEvent* Sound);
	void Multicast_PlayAnnouncementToParticipant(class APrisoner* Prisoner, class UAkAudioEvent* Sound);
	void Multicast_PlayAnnouncementToAllParticipants(class UAkAudioEvent* Sound);
	void Multicast_HideScoreboardForEveryone();
	void KickParticipant(class APrisoner* Prisoner);
	bool IsTeamFull(int TeamIndex);
	bool IsParticipating(class APrisoner* Prisoner);
	void InitEvent(class AGameEventLocationMarker* marker, class AGameEventManager* manager);
	TArray<int> GetWinningTeamsPerRound();
	float GetTeamScore(int TeamIndex);
	int GetTeamMemberCount(int TeamIndex);
	float GetStatusTime();
	class UGameEventScoreboardWidget* GetScoreboardWidget();
	float GetRoundTimeLeft();
	void GetPossibleLoadout(class APrisoner* Prisoner, TArray<class UItemSelection*>* primaryWeapons, TArray<class UItemSelection*>* secondaryWeapons, TArray<class UItemSelection*>* tertiaryWeapons, TArray<class UItemSelection*>* outfits, TArray<class UItemSelection*>* support, TArray<class UItemSelection*>* Gear);
	int GetParticipantTeam(class APrisoner* Prisoner);
	struct FVector GetParticipantJoinLocation(class APrisoner* Prisoner);
	TArray<struct FGameEventParticipantInfo> GetParticipantInfo();
	int GetParticipantAtRank(int rank);
	struct FGameEventParameters GetParameters();
	int GetNumberOfTeams();
	int GetNumberOfParticipants();
	int GetNumberOfActiveParticipants();
	class UGameEventScoreboardWidget* GetMiniScoreboardWidget();
	float GetMaxDurationLeft();
	class AGameEventLocationMarker* GetMarker();
	EGameEventState GetEventState();
	int GetCurrentRound();
	class UGameEventCardWidget* GetCardWidget();
	float GetCancelTimeLeft();
	class AGameEventBorder* GetBorder();
	void ForceParticipantStatsRep(int Index);
	int FindParticipantIndex(class APrisoner* Prisoner);
	void EquipParticipantLoadout(class APrisoner* Prisoner);
	int DeclareWinningTeam();
	void ConvertScoreToFame(class APrisoner* Prisoner);
	void ClearTeamScores();
	struct FVector ChooseSpawnLocation(class APrisoner* Prisoner);
	void CheckParticipatingPrisoners();
	bool CanStart();
	bool CanSchedule();
	bool CanJoin(class APrisoner* Prisoner, int preferredTeam);
	void CancelEvent();
	void CallInParticipant(class APrisoner* Prisoner);
	void AwardParticipant(int Index, const struct FGameEventRewardPoints& reward);
	int AssignParticipantTeam(class APrisoner* Prisoner);
};


// Class ConZ.GameEventParticipantStats
// 0x0020 (0x0048 - 0x0028)
class UGameEventParticipantStats : public UObject
{
public:
	float                                              Score;                                                    // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                EnemyKills;                                               // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                TeamKills;                                                // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                Deaths;                                                   // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                Suicides;                                                 // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                Assists;                                                  // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                Headshots;                                                // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.GameEventParticipantStats");
		return ptr;
	}

};


// Class ConZ.CTFParticipantStats
// 0x0010 (0x0058 - 0x0048)
class UCTFParticipantStats : public UGameEventParticipantStats
{
public:
	int                                                Pickups;                                                  // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                Captures;                                                 // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                Returns;                                                  // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CTFParticipantStats");
		return ptr;
	}

};


// Class ConZ.CTFGameEvent
// 0x0128 (0x0770 - 0x0648)
class ACTFGameEvent : public AGameEventBase
{
public:
	class UClass*                                      FlagClass;                                                // 0x0648(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      CaptureBaseClass;                                         // 0x0650(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      FlagStandClass;                                           // 0x0658(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  FlagIconTexture;                                          // 0x0660(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  FlagAccentTexture;                                        // 0x0668(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  BaseIconTexture;                                          // 0x0670(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  BaseAccentTexture;                                        // 0x0678(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  EmptyBaseIconTexture;                                     // 0x0680(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  EmptyBaseAccentTexture;                                   // 0x0688(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                TeamColorA;                                               // 0x0690(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                TeamColorB;                                               // 0x06A0(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	class UAkAudioEvent*                               BlueTeamPickedUpFlagAnnouncement;                         // 0x06B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               BlueTeamCapturedFlagAnnouncement;                         // 0x06B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               BlueTeamFlagDroppedAnnouncement;                          // 0x06C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               BlueTeamFlagReturnedAnnouncement;                         // 0x06C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               RedTeamPickedUpFlagAnnouncement;                          // 0x06D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               RedTeamCapturedFlagAnnouncement;                          // 0x06D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               RedTeamFlagDroppedAnnouncement;                           // 0x06E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               RedTeamFlagReturnedAnnouncement;                          // 0x06E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FCTFParameters                              _CTFParameters;                                           // 0x06F0(0x0030) (CPF_Net)
	class ACTFFlag*                                    _flagA;                                                   // 0x0720(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ACTFFlag*                                    _flagB;                                                   // 0x0728(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ACTFBase*                                    _baseA;                                                   // 0x0730(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ACTFBase*                                    _baseB;                                                   // 0x0738(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0740(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CTFGameEvent");
		return ptr;
	}


	void SetCTFParameters(const struct FCTFParameters& Params);
	void ParticipantExit(class APrisoner* Prisoner);
	void OnParticipantDeath(class APrisoner* victim, const struct FDamageEvent& DamageEvent, class AController* eventInstigator, class AActor* causer);
	class ACTFFlag* GetFlagB();
	class ACTFFlag* GetFlagA();
	struct FCTFParameters GetCTFParameters();
};


// Class ConZ.GameEventLocationMarker
// 0x01F0 (0x0508 - 0x0318)
class AGameEventLocationMarker : public AActor
{
public:
	struct FText                                       LocationName;                                             // 0x0318(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	class UTexture2D*                                  LocationImage;                                            // 0x0330(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  LocationImageGrayscale;                                   // 0x0338(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               EligibleForRandomPick;                                    // 0x0340(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	class UClass*                                      GameEventClass;                                           // 0x0348(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameEventParameters                        GameEventParameters;                                      // 0x0350(0x0180) (CPF_Edit, CPF_BlueprintVisible)
	class UClass*                                      BorderClass;                                              // 0x04D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     AreaCenterOffset;                                         // 0x04D8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x04E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FSpawnArea>                          SpawnAreas;                                               // 0x04E8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class USphereComponent*                            Sphere;                                                   // 0x04F8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBillboardComponent*                         Sprite;                                                   // 0x0500(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.GameEventLocationMarker");
		return ptr;
	}


	struct FVector GetAreaCenter();
	class AGameEventBase* CreateGameEvent();
	class AGameEventBorder* CreateBorder();
};


// Class ConZ.CTFLocationMarker
// 0x00C8 (0x05D0 - 0x0508)
class ACTFLocationMarker : public AGameEventLocationMarker
{
public:
	struct FCTFParameters                              CTFParameters;                                            // 0x0508(0x0030) (CPF_Edit, CPF_BlueprintVisible)
	struct FVector                                     CaptureOffsetA;                                           // 0x0538(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     CaptureOffsetB;                                           // 0x0544(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              CaptureRadiusA;                                           // 0x0550(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CaptureRadiusB;                                           // 0x0554(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0558(0x0008) MISSED OFFSET
	struct FTransform                                  FlagOffsetA;                                              // 0x0560(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FTransform                                  FlagOffsetB;                                              // 0x0590(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        FlagAPreviewMesh;                                         // 0x05C0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        FlagBPreviewMesh;                                         // 0x05C8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CTFLocationMarker");
		return ptr;
	}


	class AGameEventBase* CreateGameEvent();
};


// Class ConZ.CutObjectAction
// 0x0030 (0x01F0 - 0x01C0)
class UCutObjectAction : public UInteractionAction
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x01C0(0x0020) MISSED OFFSET
	TArray<class AItem*>                               _selectedTools;                                           // 0x01E0(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CutObjectAction");
		return ptr;
	}

};


// Class ConZ.CyclosporiasisPoisoning
// 0x0008 (0x01B8 - 0x01B0)
class UCyclosporiasisPoisoning : public UPoisoning
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CyclosporiasisPoisoning");
		return ptr;
	}

};


// Class ConZ.CystitisDisease
// 0x0028 (0x01D8 - 0x01B0)
class UCystitisDisease : public UDisease
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x01B0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.CystitisDisease");
		return ptr;
	}

};


// Class ConZ.DamageDirectionIndicator
// 0x0048 (0x0070 - 0x0028)
class UDamageDirectionIndicator : public UObject
{
public:
	bool                                               visible;                                                  // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class UTexture*                                    Texture;                                                  // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OpacityMultiplier;                                        // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DefaultDelayDuration;                                     // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DefaultSustainDuration;                                   // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DefaultReleaseDuration;                                   // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x004C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DamageDirectionIndicator");
		return ptr;
	}

};


// Class ConZ.DataSingleton
// 0x0330 (0x0358 - 0x0028)
class UDataSingleton : public UObject
{
public:
	TArray<struct FProjectileImpulseMultiplier>        ImpulseMultipliers;                                       // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FCanvasIcon                                 CrosshairIconUp;                                          // 0x0038(0x0018) (CPF_Edit)
	struct FCanvasIcon                                 CrosshairIconDown;                                        // 0x0050(0x0018) (CPF_Edit)
	struct FCanvasIcon                                 CrosshairIconLeft;                                        // 0x0068(0x0018) (CPF_Edit)
	struct FCanvasIcon                                 CrosshairIconRight;                                       // 0x0080(0x0018) (CPF_Edit)
	struct FCanvasIcon                                 CrosshairIconCenter;                                      // 0x0098(0x0018) (CPF_Edit)
	struct FCanvasIcon                                 CrosshairBlockedIcon;                                     // 0x00B0(0x0018) (CPF_Edit)
	float                                              WeaponSpreadBase;                                         // 0x00C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWeaponSpreadData                           WeaponSpreadData[0x8];                                    // 0x00CC(0x0034) (CPF_Edit)
	struct FWeaponViewKickData                         WeaponViewKickData[0x8];                                  // 0x026C(0x0018) (CPF_Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x032C(0x0004) MISSED OFFSET
	struct FCanvasIcon                                 InteractIcon;                                             // 0x0330(0x0018) (CPF_Edit)
	class UInputDataAsset*                             DefaultInputData;                                         // 0x0348(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDerivedWidgetsData*                         Widgets;                                                  // 0x0350(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DataSingleton");
		return ptr;
	}

};


// Class ConZ.DbConnection
// 0x0038 (0x0060 - 0x0028)
class UDbConnection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
	class UDbUserTable*                                _userTable;                                               // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDbUserProfileTable*                         _userProfileTable;                                        // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DbConnection");
		return ptr;
	}


	bool Open(EDbConnectionOpenMode mode);
	bool IsOpen();
	EDbConnectionOpenMode GetOpenMode();
	struct FDbIntegerId FindOrInsertMap(const struct FString& Name);
	bool DeleteUsersHavingNullOrEmptyProvider();
	bool Close();
};


// Class ConZ.DbObject
// 0x0000 (0x0028 - 0x0028)
class UDbObject : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DbObject");
		return ptr;
	}


	class UDbConnection* GetConnection();
};


// Class ConZ.DbTable
// 0x0000 (0x0028 - 0x0028)
class UDbTable : public UDbObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DbTable");
		return ptr;
	}

};


// Class ConZ.DbTableRow
// 0x0000 (0x0028 - 0x0028)
class UDbTableRow : public UDbObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DbTableRow");
		return ptr;
	}


	class UDbTable* GetTable();
	bool Equals(class UDbTableRow* Other);
};


// Class ConZ.DbUserTable
// 0x0000 (0x0028 - 0x0028)
class UDbUserTable : public UDbTable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DbUserTable");
		return ptr;
	}


	class UDbUser* Insert(const struct FString& ID);
	class UDbUser* FindOrInsert(const struct FString& ID);
	class UDbUser* Find(const struct FString& ID);
	bool Exists(const struct FString& ID);
	bool Delete(const struct FString& ID);
};


// Class ConZ.DbUser
// 0x0070 (0x0098 - 0x0028)
class UDbUser : public UDbTableRow
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DbUser");
		return ptr;
	}


	void Unbind();
	void SetRecentServers(TArray<struct FDbUserServerHistoryItem> Value);
	void SetProvider(const struct FString& Value);
	void SetName(const struct FString& Value);
	void SetLastLoginTime(const struct FDateTime& Value);
	void SetLastDirectConnectionAddress(const struct FString& Value);
	void SetFavoriteServers(TArray<struct FDbUserServerHistoryItem> Value);
	void RemoveRecentServerAt(int Index);
	void RemoveRecentServer(const struct FDbUserServerHistoryItem& Item);
	void RemoveFavoriteServerAt(int Index);
	void RemoveFavoriteServer(const struct FDbUserServerHistoryItem& Item);
	bool Refresh();
	bool IsBound();
	bool HasProfileWithName(EDbUserProfileType Type, const struct FString& Name);
	TArray<struct FDbUserServerHistoryItem> GetRecentServers();
	struct FString GetProvider();
	TArray<struct FString> GetProfileNames(EDbUserProfileType Type);
	struct FString GetName();
	struct FDateTime GetLastLoginTime();
	struct FString GetLastDirectConnectionAddress();
	struct FString GetId();
	TArray<struct FDbUserServerHistoryItem> GetFavoriteServers();
	TArray<class UDbUserProfile*> FindProfiles(EDbUserProfileType Type);
	class UDbUserProfile* FindProfile(const struct FDbIntegerId& ID);
	class UDbUserProfile* FindMultiplayerCacheProfile(const struct FString& ServerIp, int ServerResponsePort);
	bool EndEdit(bool commit);
	bool DeleteProfile(const struct FDbIntegerId& ID);
	class UDbUserProfile* CreateProfileFromTemplate(EDbUserProfileType Type, const struct FCharacterTemplate& Value);
	class UDbUserProfile* CreateEmptyProfile(EDbUserProfileType Type);
	class UDbUserProfile* CreateDefaultProfile(EDbUserProfileType Type);
	void ClearRecentServers();
	void ClearFavoriteServers();
	bool BindAndRefresh(const struct FString& ID);
	void Bind(const struct FString& ID);
	void BeginEdit();
	void AddRecentServer(const struct FDbUserServerHistoryItem& Item);
	void AddFavoriteServer(const struct FDbUserServerHistoryItem& Item);
};


// Class ConZ.DbUserProfileTable
// 0x0000 (0x0028 - 0x0028)
class UDbUserProfileTable : public UDbTable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DbUserProfileTable");
		return ptr;
	}


	class UDbUserProfile* InsertDefault(const struct FString& UserId);
	class UDbUserProfile* Insert(const struct FDbIntegerId& ID, const struct FString& UserId);
	class UDbUserProfile* FindOrInsert(const struct FDbIntegerId& ID, const struct FString& UserId);
	class UDbUserProfile* Find(const struct FDbIntegerId& ID);
	bool Exists(const struct FDbIntegerId& ID);
	bool Delete(const struct FDbIntegerId& ID);
};


// Class ConZ.DbUserProfile
// 0x00A0 (0x00C8 - 0x0028)
class UDbUserProfile : public UDbTableRow
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DbUserProfile");
		return ptr;
	}


	void Unbind();
	void SetUserId(const struct FString& Value);
	void SetType(EDbUserProfileType Value);
	void SetPrisonerId(const struct FDbIntegerId& Value);
	void SetName(const struct FString& Value);
	void SetLastLoginTime(const struct FDateTime& Value);
	void SetCreationTemplateXml(const struct FString& Value);
	void SetAuthorityInfo(const struct FDbUserProfileAuthorityInfo& Value);
	bool Refresh();
	struct FCharacterTemplate MakeCharacterTemplate();
	bool IsBound();
	struct FString GetUserId();
	class UDbUser* GetUser();
	EDbUserProfileType GetType();
	struct FDbIntegerId GetPrisonerId();
	struct FString GetName();
	struct FDateTime GetLastLoginTime();
	struct FDbIntegerId GetId();
	struct FString GetCreationTemplateXml();
	struct FCharacterTemplate GetCreationTemplate();
	struct FDbUserProfileAuthorityInfo GetAuthorityInfo();
	bool EndEdit(bool commit);
	bool BindAndRefresh(const struct FDbIntegerId& ID);
	void Bind(const struct FDbIntegerId& ID);
	void BeginEdit();
};


// Class ConZ.DeadlyNightshadePoisoning
// 0x0010 (0x01C0 - 0x01B0)
class UDeadlyNightshadePoisoning : public UPoisoning
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DeadlyNightshadePoisoning");
		return ptr;
	}

};


// Class ConZ.DeathmatchParticipantStats
// 0x0010 (0x0058 - 0x0048)
class UDeathmatchParticipantStats : public UGameEventParticipantStats
{
public:
	float                                              LongestHeadshot;                                          // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                MeleeKills;                                               // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              LongestLife;                                              // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DeathmatchParticipantStats");
		return ptr;
	}

};


// Class ConZ.DeathmatchGameEvent
// 0x0020 (0x0668 - 0x0648)
class ADeathmatchGameEvent : public AGameEventBase
{
public:
	struct FDeathmatchParameters                       _deathmatchParameters;                                    // 0x0648(0x0014) (CPF_Net)
	unsigned char                                      UnknownData00[0xC];                                       // 0x065C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DeathmatchGameEvent");
		return ptr;
	}


	void SetDeathmatchParameters(const struct FDeathmatchParameters& Params);
	bool SameTeam(class APrisoner* prisonerA, class APrisoner* prisonerB);
	void RestrictGameEventArea();
	struct FDeathmatchParameters GetDeathmatchParameters();
	void AwardParticipant(int Index, const struct FGameEventRewardPoints& reward);
	int AssignParticipantTeam(class APrisoner* Prisoner);
};


// Class ConZ.DeathmatchLocationMarker
// 0x0028 (0x0530 - 0x0508)
class ADeathmatchLocationMarker : public AGameEventLocationMarker
{
public:
	struct FDeathmatchParameters                       DeathmatchParameters;                                     // 0x0508(0x0014) (CPF_Edit, CPF_BlueprintVisible)
	struct FVector                                     FocusOffset;                                              // 0x051C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              MinimalRadius;                                            // 0x0528(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x052C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DeathmatchLocationMarker");
		return ptr;
	}


	class AGameEventBase* CreateGameEvent();
};


// Class ConZ.DedicatedServerRequest
// 0x00C0 (0x00E8 - 0x0028)
class UDedicatedServerRequest : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0028(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DedicatedServerRequest");
		return ptr;
	}

};


// Class ConZ.DedicatedServerResponse
// 0x0068 (0x0090 - 0x0028)
class UDedicatedServerResponse : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DedicatedServerResponse");
		return ptr;
	}

};


// Class ConZ.Deer
// 0x0060 (0x0A30 - 0x09D0)
class ADeer : public AAnimal
{
public:
	float                                              HartBaseScale;                                            // 0x09D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HartScaleVariance;                                        // 0x09D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HindBaseScale;                                            // 0x09D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HindScaleVariance;                                        // 0x09DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bMale;                                                    // 0x09E0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x09E1(0x0007) MISSED OFFSET
	class USkeletalMesh*                               SkeletalMeshes[0x2];                                      // 0x09E8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 AntlerMeshes[0x4];                                        // 0x09F8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Antlers;                                                  // 0x0A18(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	uint32_t                                           _hartHind;                                                // 0x0A20(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0A24(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Deer");
		return ptr;
	}


	void OnRep_HartHind();
};


// Class ConZ.Deer2
// 0x0060 (0x0BB0 - 0x0B50)
class ADeer2 : public AComplexAnimal2
{
public:
	float                                              HartBaseScale;                                            // 0x0B50(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HartScaleVariance;                                        // 0x0B54(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HindBaseScale;                                            // 0x0B58(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HindScaleVariance;                                        // 0x0B5C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bMale;                                                    // 0x0B60(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0B61(0x0007) MISSED OFFSET
	class USkeletalMesh*                               SkeletalMeshes[0x2];                                      // 0x0B68(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 AntlerMeshes[0x4];                                        // 0x0B78(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Antlers;                                                  // 0x0B98(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	uint32_t                                           _hartHind;                                                // 0x0BA0(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0BA4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Deer2");
		return ptr;
	}


	void OnRep_HartHind();
};


// Class ConZ.DeerAIController
// 0x0000 (0x04A0 - 0x04A0)
class ADeerAIController : public AAnimalAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DeerAIController");
		return ptr;
	}

};


// Class ConZ.DehydrationSickness
// 0x0008 (0x01B8 - 0x01B0)
class UDehydrationSickness : public USickness
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DehydrationSickness");
		return ptr;
	}

};


// Class ConZ.DerivedWidgetsData
// 0x0048 (0x0078 - 0x0030)
class UDerivedWidgetsData : public UDataAsset
{
public:
	class UClass*                                      CraftingPanel;                                            // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      CraftingInfo;                                             // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      CraftingSectionContainer;                                 // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      CraftableItem;                                            // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      CraftingIngredient;                                       // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      CraftingPossibleItem;                                     // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      StripedFiller;                                            // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      AvailableItem;                                            // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      LoadingScreen;                                            // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DerivedWidgetsData");
		return ptr;
	}

};


// Class ConZ.DexteritySkill
// 0x0000 (0x0098 - 0x0098)
class UDexteritySkill : public USkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DexteritySkill");
		return ptr;
	}

};


// Class ConZ.DiarrheaSickness
// 0x0018 (0x01C8 - 0x01B0)
class UDiarrheaSickness : public USickness
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x01B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DiarrheaSickness");
		return ptr;
	}

};


// Class ConZ.DigestionItem
// 0x0160 (0x0188 - 0x0028)
class UDigestionItem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0028(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DigestionItem");
		return ptr;
	}


	float GetWeight();
	float GetVolume();
	bool GetShouldProcess();
	float GetRemainingWeight();
	float GetRemainingWater();
	float GetRemainingVolume();
	int GetId();
	struct FString GetCaption();
};


// Class ConZ.DistantLandscape
// 0x0018 (0x0330 - 0x0318)
class ADistantLandscape : public AActor
{
public:
	TArray<struct FDistantLevel>                       AllLevels;                                                // 0x0318(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              UpdateInterval;                                           // 0x0328(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x032C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DistantLandscape");
		return ptr;
	}

};


// Class ConZ.Door
// 0x0098 (0x03B0 - 0x0318)
class ADoor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET
	struct FName                                       ControlName;                                              // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsElectric;                                               // 0x0328(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0329(0x0003) MISSED OFFSET
	float                                              PowerConsumption;                                         // 0x032C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMeshComponent*                              Mesh;                                                     // 0x0330(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             _rootComponent;                                           // 0x0338(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0340(0x0001) MISSED OFFSET
	bool                                               CanOpenOnBothSides;                                       // 0x0341(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0342(0x0002) MISSED OFFSET
	float                                              _health;                                                  // 0x0344(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _breakingImpulse;                                         // 0x0348(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _openingDuration;                                         // 0x034C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _canOpen;                                                 // 0x0350(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               _openingSoundCue;                                         // 0x0358(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               _openedSoundCue;                                          // 0x0360(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               _closingSoundCue;                                         // 0x0368(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               _closedSoundCue;                                          // 0x0370(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _noiseLoudness;                                           // 0x0378(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isJammed;                                                // 0x037C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	float                                              _jammedOpenPercent;                                       // 0x0380(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x14];                                      // 0x0384(0x0014) MISSED OFFSET
	struct FString                                     _lockPassword;                                            // 0x0398(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	EDoorStateFlags                                    _stateFlags;                                              // 0x03A8(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Door");
		return ptr;
	}


	void OnRep_StateFlags(EDoorStateFlags Previous);
	void OnRep_FractureLocation();
	bool IsOpen();
	bool IsLocked();
	bool HasPower();
	void ChangeOpenState(bool shouldOpen);
};


// Class ConZ.DoubleDoor
// 0x0020 (0x03D0 - 0x03B0)
class ADoubleDoor : public ADoor
{
public:
	class UMeshComponent*                              Mesh1;                                                    // 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              _health1;                                                 // 0x03B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x03BC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DoubleDoor");
		return ptr;
	}


	void OnRep_FractureLocation1();
};


// Class ConZ.DoubleRegularDoorStatic
// 0x0030 (0x0400 - 0x03D0)
class ADoubleRegularDoorStatic : public ADoubleDoor
{
public:
	struct FRotator                                    _openRotation0;                                           // 0x03D0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FRotator                                    _openRotation1;                                           // 0x03DC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FRotator                                    _closedRotation0;                                         // 0x03E8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FRotator                                    _closedRotation1;                                         // 0x03F4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DoubleRegularDoorStatic");
		return ptr;
	}

};


// Class ConZ.DoubleRegularDoorDestructible
// 0x0030 (0x0400 - 0x03D0)
class ADoubleRegularDoorDestructible : public ADoubleDoor
{
public:
	struct FRotator                                    _openRotation0;                                           // 0x03D0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FRotator                                    _openRotation1;                                           // 0x03DC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FRotator                                    _closedRotation0;                                         // 0x03E8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FRotator                                    _closedRotation1;                                         // 0x03F4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DoubleRegularDoorDestructible");
		return ptr;
	}

};


// Class ConZ.DoubleSlidingDoorStatic
// 0x0020 (0x03F0 - 0x03D0)
class ADoubleSlidingDoorStatic : public ADoubleDoor
{
public:
	class USceneComponent*                             ClosedPositionComponent0;                                 // 0x03D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             ClosedPositionComponent1;                                 // 0x03D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             OpenPositionComponent0;                                   // 0x03E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             OpenPositionComponent1;                                   // 0x03E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DoubleSlidingDoorStatic");
		return ptr;
	}

};


// Class ConZ.DoubleSlidingDoorDestructible
// 0x0020 (0x03F0 - 0x03D0)
class ADoubleSlidingDoorDestructible : public ADoubleDoor
{
public:
	class USceneComponent*                             ClosedPositionComponent0;                                 // 0x03D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             ClosedPositionComponent1;                                 // 0x03D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             OpenPositionComponent0;                                   // 0x03E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             OpenPositionComponent1;                                   // 0x03E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DoubleSlidingDoorDestructible");
		return ptr;
	}

};


// Class ConZ.DrinkItem
// 0x0000 (0x0860 - 0x0860)
class ADrinkItem : public AFoodItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DrinkItem");
		return ptr;
	}

};


// Class ConZ.DrinkItemSpawner
// 0x0020 (0x03B8 - 0x0398)
class ADrinkItemSpawner : public AItemSpawner
{
public:
	TArray<class UClass*>                              Items;                                                    // 0x0398(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class UItemGroup*>                          ItemGroups;                                               // 0x03A8(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DrinkItemSpawner");
		return ptr;
	}

};


// Class ConZ.DrinkWaterAssetData
// 0x0018 (0x0048 - 0x0030)
class UDrinkWaterAssetData : public UInteractionAssetData
{
public:
	float                                              QuantityPerDrink;                                         // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              salinity;                                                 // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StartDrinkingAudioEvent;                                  // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StopDrinkingAudioEvent;                                   // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DrinkWaterAssetData");
		return ptr;
	}

};


// Class ConZ.Drone
// 0x0150 (0x0980 - 0x0830)
class ADrone : public AConZCharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0830(0x0008) MISSED OFFSET
	float                                              MovementInertiaPlayer;                                    // 0x0838(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MovementInertiaAI;                                        // 0x083C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MovementRotationSpeedExpFactor;                           // 0x0840(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EngineParticlesChangeSpeedExpFactor;                      // 0x0844(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 EngineVolumeFromSpeed;                                    // 0x0848(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MovementBreathingInterval;                                // 0x0850(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MovementBreathingIntensity;                               // 0x0854(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScanBeamOpeningSpeed;                                     // 0x0858(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScanBeamScanningSpeed;                                    // 0x085C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScanFaceHalfHeight;                                       // 0x0860(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0864(0x0004) MISSED OFFSET
	class UParticleSystem*                             SelfDestructParticles;                                    // 0x0868(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               EngineAudioEvent;                                         // 0x0870(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               SelfDestructAudioEvent;                                   // 0x0878(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0880(0x0030) MISSED OFFSET
	class UMaterialInterface*                          _nightVisionMaterial;                                     // 0x08B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      _currentSpeedStep;                                        // 0x08B8(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x08B9(0x0003) MISSED OFFSET
	float                                              _movementInertia;                                         // 0x08BC(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0xA0];                                      // 0x08C0(0x00A0) MISSED OFFSET
	float                                              _health;                                                  // 0x0960(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x1C];                                      // 0x0964(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Drone");
		return ptr;
	}


	void Server_SetCurrentSpeedStep(int step);
	void Server_SetActorLocation(const struct FVector& Location);
	void SelfDestruct();
	void OnRep_CurrentSpeedStep();
	void OnHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void AActor_OnDestroyed(class AActor* ActorDestroyed);
};


// Class ConZ.DroneAIController
// 0x0358 (0x0768 - 0x0410)
class ADroneAIController : public AAIController
{
public:
	float                                              FollowingDuration;                                        // 0x0410(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FollowingHeight;                                          // 0x0414(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FollowingDistance;                                        // 0x0418(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinDistanceForFollowingAtHeight;                          // 0x041C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ProximityAccelScale;                                      // 0x0420(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ProximityZPriority;                                       // 0x0424(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinimumNavigationProximity;                               // 0x0428(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DroneCruisingHeight;                                      // 0x042C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x338];                                     // 0x0430(0x0338) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DroneAIController");
		return ptr;
	}


	void SensingComponent_OnHearNoise(class APawn* NoiseInstigator, const struct FVector& Location, float Volume);
	void NavigationResultHandler(const struct FDoNNavigationQueryData& queryData);
	void FollowCharacter(class ACharacter* characterToFollow);
	void FindWayTo(const struct FVector& Destination);
	void DynamicCollisionListener(const struct FDonNavigationDynamicCollisionPayload& CollisionData);
};


// Class ConZ.DroneCameraActor
// 0x0000 (0x0870 - 0x0870)
class ADroneCameraActor : public ACameraActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DroneCameraActor");
		return ptr;
	}

};


// Class ConZ.DroneSoundComponent
// 0x0050 (0x0168 - 0x0118)
class UDroneSoundComponent : public UCharacterSoundComponent
{
public:
	class USoundCue*                                   IdleSound;                                                // 0x0118(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               IdleAudioEvent;                                           // 0x0120(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundCue*                                   AngrySound;                                               // 0x0128(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               AngryAudioEvent;                                          // 0x0130(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundCue*                                   AttackSound;                                              // 0x0138(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               AttackAudioEvent;                                         // 0x0140(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundCue*                                   KillSound;                                                // 0x0148(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               KillAudioEvent;                                           // 0x0150(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinSilenceTimeout;                                        // 0x0158(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSilenceTimeout;                                        // 0x015C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0160(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DroneSoundComponent");
		return ptr;
	}


	void PlaySoundOnClients(EDroneSound SoundToPlay, bool Force);
};


// Class ConZ.DroneTargetData
// 0x0008 (0x0030 - 0x0028)
class UDroneTargetData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DroneTargetData");
		return ptr;
	}

};


// Class ConZ.DropZoneDroppable
// 0x0060 (0x0378 - 0x0318)
class ADropZoneDroppable : public AActor
{
public:
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0318(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkAudioEvent*                               LandSound;                                                // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ADropZoneGameEvent*                          _gameEvent;                                               // 0x0328(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0330(0x0008) MISSED OFFSET
	class UParticleSystemComponent*                    _flareParticles0;                                         // 0x0338(0x0008) (CPF_ExportObject, CPF_Net, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    _flareParticles1;                                         // 0x0340(0x0008) (CPF_ExportObject, CPF_Net, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    _flareParticles2;                                         // 0x0348(0x0008) (CPF_ExportObject, CPF_Net, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0350(0x0008) MISSED OFFSET
	struct FVector                                     _endLocation;                                             // 0x0358(0x000C) (CPF_Net, CPF_IsPlainOldData)
	float                                              _fallingSpeed;                                            // 0x0364(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _flareParticlesEnabled;                                   // 0x0368(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0369(0x0003) MISSED OFFSET
	int                                                _flareParticlesTeam;                                      // 0x036C(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0370(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DropZoneDroppable");
		return ptr;
	}


	void SetGameEvent(class ADropZoneGameEvent* gameEvent);
	void OnRep_FlareParticlesTeam();
	void OnRep_FlareParticlesEnabled();
	class ADropZoneGameEvent* GetGameEvent();
};


// Class ConZ.DropZoneCargo
// 0x0010 (0x0388 - 0x0378)
class ADropZoneCargo : public ADropZoneDroppable
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0378(0x0008) MISSED OFFSET
	class UChildActorComponent*                        Slot;                                                     // 0x0380(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DropZoneCargo");
		return ptr;
	}

};


// Class ConZ.DropZoneCrate
// 0x0010 (0x0388 - 0x0378)
class ADropZoneCrate : public ADropZoneDroppable
{
public:
	class UClass*                                      KeyClass;                                                 // 0x0378(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _hasKey;                                                  // 0x0380(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0381(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DropZoneCrate");
		return ptr;
	}


	void OnRep_HasKey();
};


// Class ConZ.DropZoneEquipmentTable
// 0x0018 (0x0330 - 0x0318)
class ADropZoneEquipmentTable : public AActor
{
public:
	TArray<class AItem*>                               _trackedItems;                                            // 0x0318(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0328(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DropZoneEquipmentTable");
		return ptr;
	}


	void UntrackItem(class AItem* Item);
	void TrackItem(class AItem* Item);
	void OnTrackedItemDestroyed(class AActor* Actor);
	void EndCleaningItems();
	void BeginCleaningItems();
};


// Class ConZ.DropZoneParticipantStats
// 0x0008 (0x0050 - 0x0048)
class UDropZoneParticipantStats : public UGameEventParticipantStats
{
public:
	int                                                Activations;                                              // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DropZoneParticipantStats");
		return ptr;
	}

};


// Class ConZ.DropZoneGameEvent
// 0x0158 (0x07A0 - 0x0648)
class ADropZoneGameEvent : public AGameEventBase
{
public:
	class UClass*                                      TableAClass;                                              // 0x0648(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      TableBClass;                                              // 0x0650(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      CrateClass;                                               // 0x0658(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      CargoClass;                                               // 0x0660(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               IntroAnnouncement;                                        // 0x0668(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               LocateTheKeyAnnouncement;                                 // 0x0670(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               BlueTeamFoundKeyAnnouncement;                             // 0x0678(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               BlueTeamUnlockedAnnouncement;                             // 0x0680(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               BlueTeamStolenAnnouncement;                               // 0x0688(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               RedTeamFoundKeyAnnouncement;                              // 0x0690(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               RedTeamUnlockedAnnouncement;                              // 0x0698(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               RedTeamStolenAnnouncement;                                // 0x06A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               CargoDropAnnouncement;                                    // 0x06A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               CargoLandedAnnouncement;                                  // 0x06B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  KeyIcon;                                                  // 0x06B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  CargoIcon;                                                // 0x06C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                FriendlyColor;                                            // 0x06C8(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                EnemyColor;                                               // 0x06D8(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FDropZoneParameters                         _dropZoneParameters;                                      // 0x06E8(0x002C) (CPF_Net)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0714(0x000C) MISSED OFFSET
	EDropZoneGameEventPhase                            _phase;                                                   // 0x0720(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0721(0x0003) MISSED OFFSET
	int                                                _capturingTeam;                                           // 0x0724(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _phaseTimeLeft;                                           // 0x0728(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _captureProgress;                                         // 0x072C(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0730(0x0008) MISSED OFFSET
	class AGameEventBorder*                            _barrierA;                                                // 0x0738(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AGameEventBorder*                            _barrierB;                                                // 0x0740(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ADropZoneEquipmentTable*                     _tableA;                                                  // 0x0748(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ADropZoneEquipmentTable*                     _tableB;                                                  // 0x0750(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ADropZoneCrate*                              _crateA;                                                  // 0x0758(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ADropZoneCrate*                              _crateB;                                                  // 0x0760(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ADropZoneKey*                                _key;                                                     // 0x0768(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APrisoner*                                   _keyCarrier;                                              // 0x0770(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      _topmostKeyOwner;                                         // 0x0778(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ADropZoneCargo*                              _cargo;                                                   // 0x0780(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ADropZoneSlot*                               _slot;                                                    // 0x0788(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0790(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DropZoneGameEvent");
		return ptr;
	}


	void SetDropZoneParameters(const struct FDropZoneParameters& Params);
	void ParticipantExit(class APrisoner* Prisoner);
	void OnRep_CapturingTeam();
	void OnParticipantDeath(class APrisoner* victim, const struct FDamageEvent& DamageEvent, class AController* eventInstigator, class AActor* causer);
	float GetStatusTime();
	class ADropZoneSlot* GetSlot();
	float GetPhaseTimeLeft();
	EDropZoneGameEventPhase GetPhase();
	float GetMaxDurationLeft();
	class APrisoner* GetKeyCarrier();
	class ADropZoneKey* GetKey();
	struct FDropZoneParameters GetDropZoneParameters();
	class ADropZoneCrate* GetCrateB();
	class ADropZoneCrate* GetCrateA();
	class ADropZoneCargo* GetCargo();
	int GetCapturingTeam();
	float GetCaptureProgress();
	int DeclareWinningTeam();
	struct FVector ChooseSpawnLocation(class APrisoner* Prisoner);
};


// Class ConZ.DropZoneKey
// 0x0010 (0x0790 - 0x0780)
class ADropZoneKey : public AItem
{
public:
	class ADropZoneGameEvent*                          _gameEvent;                                               // 0x0780(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0788(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DropZoneKey");
		return ptr;
	}


	void SphereOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void SetGameEvent(class ADropZoneGameEvent* gameEvent);
	class ADropZoneGameEvent* GetGameEvent();
};


// Class ConZ.DropZoneLocationMarker
// 0x0108 (0x0610 - 0x0508)
class ADropZoneLocationMarker : public AGameEventLocationMarker
{
public:
	struct FDropZoneParameters                         DropZoneParameters;                                       // 0x0508(0x002C) (CPF_Edit, CPF_BlueprintVisible)
	struct FVector                                     SpawnOffsetA;                                             // 0x0534(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     SpawnOffsetB;                                             // 0x0540(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              SpawnRadiusA;                                             // 0x054C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpawnRadiusB;                                             // 0x0550(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0554(0x000C) MISSED OFFSET
	struct FTransform                                  CargoDropOffset;                                          // 0x0560(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FTransform                                  CrateDropOffsetA;                                         // 0x0590(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FTransform                                  CrateDropOffsetB;                                         // 0x05C0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        CrateAPreviewMesh;                                        // 0x05F0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        CrateBPreviewMesh;                                        // 0x05F8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        CargoPreviewMesh;                                         // 0x0600(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0608(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DropZoneLocationMarker");
		return ptr;
	}


	class AGameEventBase* CreateGameEvent();
};


// Class ConZ.DropZoneSlot
// 0x0040 (0x0358 - 0x0318)
class ADropZoneSlot : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0318(0x0010) MISSED OFFSET
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0328(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              ActivationDuration;                                       // 0x0330(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	class UStaticMesh*                                 UnlockedMesh;                                             // 0x0338(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               ActivateSound;                                            // 0x0340(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ADropZoneGameEvent*                          _gameEvent;                                               // 0x0348(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0350(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DropZoneSlot");
		return ptr;
	}


	void SetGameEvent(class ADropZoneGameEvent* gameEvent);
	void Server_Activate(class APrisoner* Prisoner);
	float GetOpeningDuration();
	class ADropZoneGameEvent* GetGameEvent();
};


// Class ConZ.DrunkennessSickness
// 0x0010 (0x01C0 - 0x01B0)
class UDrunkennessSickness : public USickness
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DrunkennessSickness");
		return ptr;
	}

};


// Class ConZ.DysenteryDisease
// 0x0008 (0x01B8 - 0x01B0)
class UDysenteryDisease : public UDisease
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.DysenteryDisease");
		return ptr;
	}

};


// Class ConZ.ElectricalNetwork
// 0x0020 (0x0360 - 0x0340)
class AElectricalNetwork : public AElectricalDevice
{
public:
	TArray<class ADoor*>                               AttachedDoors;                                            // 0x0340(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<class AElectricalDevice*>                   AttachedDevices;                                          // 0x0350(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ElectricalNetwork");
		return ptr;
	}

};


// Class ConZ.ElectricDoorAssetData
// 0x0000 (0x0028 - 0x0028)
class UElectricDoorAssetData : public UAssetUserData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ElectricDoorAssetData");
		return ptr;
	}

};


// Class ConZ.ElectricFence
// 0x0010 (0x0350 - 0x0340)
class AElectricFence : public AElectricalDevice
{
public:
	TArray<class AStaticMeshActor*>                    StaticParts;                                              // 0x0340(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ElectricFence");
		return ptr;
	}

};


// Class ConZ.ElectricFenceAssetData
// 0x0008 (0x0030 - 0x0028)
class UElectricFenceAssetData : public UAssetUserData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ElectricFenceAssetData");
		return ptr;
	}

};


// Class ConZ.EnduranceSkill
// 0x0028 (0x00D8 - 0x00B0)
class UEnduranceSkill : public UConstitutionSkill
{
public:
	struct FEnduranceSkillParametersPerSkillLevel      NoSkillParameters;                                        // 0x00B0(0x0008) (CPF_Edit)
	struct FEnduranceSkillParametersPerSkillLevel      BasicSkillParameters;                                     // 0x00B8(0x0008) (CPF_Edit)
	struct FEnduranceSkillParametersPerSkillLevel      MediumSkillParameters;                                    // 0x00C0(0x0008) (CPF_Edit)
	struct FEnduranceSkillParametersPerSkillLevel      AdvancedSkillParameters;                                  // 0x00C8(0x0008) (CPF_Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.EnduranceSkill");
		return ptr;
	}

};


// Class ConZ.EnergyDeficiency
// 0x0000 (0x01C0 - 0x01C0)
class UEnergyDeficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.EnergyDeficiency");
		return ptr;
	}

};


// Class ConZ.EnvironmentStatics
// 0x0000 (0x0028 - 0x0028)
class UEnvironmentStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.EnvironmentStatics");
		return ptr;
	}


	static bool IsEnvironmentClassOutdoor(EEnvironmentClass Value);
	static bool IsEnvironmentClassIndoor(EEnvironmentClass Value);
	static float GetExtraAirTemperatureFromHeatSourcesAtLocation(class UObject* WorldContextObject, const struct FVector& Location);
	static EEnvironmentClass GetEnvironmentClassAtLocation(class UObject* WorldContextObject, const struct FVector& Location);
};


// Class ConZ.EnvironmentDescriptionComponent
// 0x0010 (0x0700 - 0x06F0)
class UEnvironmentDescriptionComponent : public UStaticMeshComponent
{
public:
	EEnvironmentClass                                  EnvironmentClass;                                         // 0x06F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x06F1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.EnvironmentDescriptionComponent");
		return ptr;
	}

};


// Class ConZ.EquipmentItem
// 0x0010 (0x0790 - 0x0780)
class AEquipmentItem : public AItem
{
public:
	uint32_t                                           MinDamage;                                                // 0x0780(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           MaxDamage;                                                // 0x0784(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           AP;                                                       // 0x0788(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x078C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.EquipmentItem");
		return ptr;
	}

};


// Class ConZ.EquipmentItemSpawner
// 0x0020 (0x03B8 - 0x0398)
class AEquipmentItemSpawner : public AItemSpawner
{
public:
	TArray<class UClass*>                              Items;                                                    // 0x0398(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class UItemGroup*>                          ItemGroups;                                               // 0x03A8(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.EquipmentItemSpawner");
		return ptr;
	}

};


// Class ConZ.EventInsertCartridge
// 0x0010 (0x0090 - 0x0080)
class UEventInsertCartridge : public UWeaponActionReloadSequence
{
public:
	struct FName                                       MontageEndSectionName;                                    // 0x0080(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.EventInsertCartridge");
		return ptr;
	}

};


// Class ConZ.EventInsertMagazine
// 0x0000 (0x0080 - 0x0080)
class UEventInsertMagazine : public UWeaponActionReloadSequence
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.EventInsertMagazine");
		return ptr;
	}

};


// Class ConZ.ExamineAction
// 0x0000 (0x01C0 - 0x01C0)
class UExamineAction : public UInteractionAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ExamineAction");
		return ptr;
	}

};


// Class ConZ.ExamineAssetData
// 0x0290 (0x02C0 - 0x0030)
class UExamineAssetData : public UInteractionAssetData
{
public:
	bool                                               UsePresetBasedSpawning;                                   // 0x0030(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FExamineItemSpawnerData                     ExamineData;                                              // 0x0038(0x00A0) (CPF_Edit)
	class UAkAudioEvent*                               StartExamineAudioEvent;                                   // 0x00D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StopExamineAudioEvent;                                    // 0x00E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                quantity;                                                 // 0x00E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinQuantity;                                              // 0x00EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxQuantity;                                              // 0x00F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Probability;                                              // 0x00F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       ItemSpawnTypes;                                           // 0x00F8(0x0020) (CPF_Edit)
	TArray<class UClass*>                              Items;                                                    // 0x0118(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class UItemGroup*>                          ItemGroups;                                               // 0x0128(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TMap<class UItemGroup*, struct FExamineDataPerItemGroup> DataPerItemGroup;                                         // 0x0138(0x0050) (CPF_Edit, CPF_ZeroConstructor)
	TWeakObjectPtr<class AActor>                       ItemsOwner;                                               // 0x0188(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseItemZone;                                              // 0x0190(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseItemRarity;                                            // 0x0191(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0192(0x0002) MISSED OFFSET
	float                                              InitialDamage;                                            // 0x0194(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RandomizeDamage;                                          // 0x0198(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InitialUsage;                                             // 0x019C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RandomizeUsage;                                           // 0x01A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InitialDirtiness;                                         // 0x01A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RandomizeDirtiness;                                       // 0x01A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET
	TArray<struct FPossibleItemSickness>               PossibleSicknesses;                                       // 0x01B0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	bool                                               CanStore;                                                 // 0x01C0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanSave;                                                  // 0x01C1(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x01C2(0x0006) MISSED OFFSET
	struct FText                                       Title;                                                    // 0x01C8(0x0018) (CPF_Edit)
	unsigned char                                      UnknownData04[0xE0];                                      // 0x01E0(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ExamineAssetData");
		return ptr;
	}

};


// Class ConZ.ExamineContainerWidget
// 0x0048 (0x02A0 - 0x0258)
class UExamineContainerWidget : public UBaseItemContainerWidget
{
public:
	unsigned char                                      MaxWidth;                                                 // 0x0258(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MaxHeight;                                                // 0x0259(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x025A(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    ClosingWidgetDelegate;                                    // 0x0260(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWidgetIsEmpty;                                          // 0x0270(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0280(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ExamineContainerWidget");
		return ptr;
	}


	void SetWidgetTitle(const struct FText& Title);
	void OnWidgetIsEmpty__DelegateSignature();
	void OnClose__DelegateSignature();
};


// Class ConZ.ExamineObjectAction
// 0x0010 (0x01D0 - 0x01C0)
class UExamineObjectAction : public UExamineAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ExamineObjectAction");
		return ptr;
	}

};


// Class ConZ.ExaminePrisonerAction
// 0x0000 (0x01C0 - 0x01C0)
class UExaminePrisonerAction : public UExamineAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ExaminePrisonerAction");
		return ptr;
	}

};


// Class ConZ.ExecuteInteractionAction
// 0x0080 (0x0240 - 0x01C0)
class UExecuteInteractionAction : public UInteractionAction
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x01C0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ExecuteInteractionAction");
		return ptr;
	}

};


// Class ConZ.ExplosionDamageType
// 0x0000 (0x0040 - 0x0040)
class UExplosionDamageType : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ExplosionDamageType");
		return ptr;
	}

};


// Class ConZ.FatDeficiency
// 0x0000 (0x01C0 - 0x01C0)
class UFatDeficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.FatDeficiency");
		return ptr;
	}

};


// Class ConZ.FeedAnimalAction
// 0x0000 (0x01C0 - 0x01C0)
class UFeedAnimalAction : public UAnimalAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.FeedAnimalAction");
		return ptr;
	}

};


// Class ConZ.FiberDeficiency
// 0x0000 (0x01C0 - 0x01C0)
class UFiberDeficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.FiberDeficiency");
		return ptr;
	}

};


// Class ConZ.FillWaterAction
// 0x0020 (0x01E0 - 0x01C0)
class UFillWaterAction : public UInteractionAction
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x01C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.FillWaterAction");
		return ptr;
	}

};


// Class ConZ.FireItem
// 0x0050 (0x07E0 - 0x0790)
class AFireItem : public AEquipmentItem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0790(0x0008) MISSED OFFSET
	float                                              BurningDuration;                                          // 0x0798(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BurningSpeed;                                             // 0x079C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RainFireOutTime;                                          // 0x07A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x07A4(0x0004) MISSED OFFSET
	TArray<struct FHeatEmitter>                        HeatEmitters;                                             // 0x07A8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UAkAudioEvent*                               StartBurningAudioEvent;                                   // 0x07B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StopBurningAudioEvent;                                    // 0x07C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    FireComponent;                                            // 0x07C8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               _isBurning;                                               // 0x07D0(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x07D1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.FireItem");
		return ptr;
	}


	void SetBurning(bool burning);
	void OnRep_IsBurning();
	bool GetBurning();
};


// Class ConZ.FireplaceItem
// 0x0010 (0x07F0 - 0x07E0)
class AFireplaceItem : public AFireItem
{
public:
	class USceneComponent*                             CookingComponent;                                         // 0x07E0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x07E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.FireplaceItem");
		return ptr;
	}

};


// Class ConZ.Fish
// 0x0010 (0x09F0 - 0x09E0)
class AFish : public AAnimal2
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x09E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Fish");
		return ptr;
	}

};


// Class ConZ.FishAIController
// 0x0060 (0x0470 - 0x0410)
class AFishAIController : public AAIController
{
public:
	float                                              TurnSpeed;                                                // 0x0410(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FleeImpulse;                                              // 0x0414(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StuckCheckTime;                                           // 0x0418(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FleeTime;                                                 // 0x041C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FleeTurnSpeed;                                            // 0x0420(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FleeDistance;                                             // 0x0424(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    FleeRotationRate;                                         // 0x0428(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0434(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.FishAIController");
		return ptr;
	}


	void UpdatePerception(TArray<class AActor*> actorsPercepted);
};


// Class ConZ.FishSpawner
// 0x0160 (0x0478 - 0x0318)
class AFishSpawner : public AActor
{
public:
	float                                              StartSpawningDistance;                                    // 0x0318(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinSpawnAnwayDistance;                                    // 0x031C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MaxFishesPerVolume;                                       // 0x0320(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MinFishesPerVolume;                                       // 0x0321(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      BulkSpawnAtOnceMax;                                       // 0x0322(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      WaterVolumeChecksPerFrame;                                // 0x0323(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0324(0x0004) MISSED OFFSET
	class UBillboardComponent*                         Sprite;                                                   // 0x0328(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	TMap<class UClass*, struct FFishSpawnInfo>         SpawnInfo;                                                // 0x0330(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	float                                              UpVertialExtent;                                          // 0x0380(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DownVertialExtent;                                        // 0x0384(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xF0];                                      // 0x0388(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.FishSpawner");
		return ptr;
	}


	void UpdateWaterVolumeAssignment();
};


// Class ConZ.FlashbangItem
// 0x0010 (0x0790 - 0x0780)
class AFlashbangItem : public AItem
{
public:
	class UClass*                                      FlashbangEffectsClass;                                    // 0x0780(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0788(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.FlashbangItem");
		return ptr;
	}


	void Multicast_PlayEffects(const struct FVector& zeroBasedFlashbangLocation);
};


// Class ConZ.FlashbangItemEffects
// 0x0050 (0x0368 - 0x0318)
class AFlashbangItemEffects : public AActor
{
public:
	class UParticleSystem*                             ExplosionParticles;                                       // 0x0318(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      ExplosionCameraShakeClass;                                // 0x0320(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               ExplosionAudioEvent;                                      // 0x0328(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StartStunnedSoundEffectsAudioEvent;                       // 0x0330(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StopStunnedSoundEffectsAudioEvent;                        // 0x0338(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinFlashbangDurationToStartStunnedSoundEffects;           // 0x0340(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FullFlashDuration;                                        // 0x0344(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FlashFadeOutDuration;                                     // 0x0348(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FlashRadius;                                              // 0x034C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FlashLineTraceDistance;                                   // 0x0350(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0354(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.FlashbangItemEffects");
		return ptr;
	}

};


// Class ConZ.FlockAnimationComponent
// 0x0010 (0x0108 - 0x00F8)
class UFlockAnimationComponent : public UAnimalAnimationComponent
{
public:
	int                                                RunStartIndex;                                            // 0x00F8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WalkSpeedMultiplied;                                      // 0x00FC(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RunSpeedMultiplied;                                       // 0x0100(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.FlockAnimationComponent");
		return ptr;
	}

};


// Class ConZ.FlockAnimInstance
// 0x0080 (0x0460 - 0x03E0)
class UFlockAnimInstance : public UAnimalAnimInstance
{
public:
	bool                                               bIsMoving;                                                // 0x03E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	bool                                               bIsInAir;                                                 // 0x03E1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03E2(0x0002) MISSED OFFSET
	float                                              Speed;                                                    // 0x03E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              RunThreshold;                                             // 0x03E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x03EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              TurnDelta;                                                // 0x03F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              TurnThreshold;                                            // 0x03F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bPlayerNearby;                                            // 0x03F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03F9(0x0003) MISSED OFFSET
	float                                              LeftRightAim;                                             // 0x03FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              UpDownAim;                                                // 0x0400(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              Bolt180Threshold;                                         // 0x0404(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TurnDeltaSmoothed;                                        // 0x0408(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RequestedSpeed;                                           // 0x040C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              TurnRateSmoothed;                                         // 0x0410(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              RequestedSpeedSmoothed;                                   // 0x0414(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              TargetTwitchWeight;                                       // 0x0418(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              TwitchTimer;                                              // 0x041C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              TwitchWeight;                                             // 0x0420(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              Bolt90Threshold;                                          // 0x0424(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TransitionDelayTimer;                                     // 0x0428(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RunSpeed;                                                 // 0x042C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              WalkSpeed;                                                // 0x0430(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              SpeedMultiplier;                                          // 0x0434(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              TurnAmount;                                               // 0x0438(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                RunStartIndex;                                            // 0x043C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0440(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.FlockAnimInstance");
		return ptr;
	}


	float GetWalkAnimationSpeed();
	float GetRunAnimationSpeed();
};


// Class ConZ.FoliageAmbientSounds
// 0x0068 (0x0380 - 0x0318)
class AFoliageAmbientSounds : public AActor
{
public:
	float                                              MinCameraLocationDeltaForUpdate;                          // 0x0318(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForestSearchRadius;                                       // 0x031C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTag                                ForestMask;                                               // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FVector                                     ForestMaskTopLeftWorld;                                   // 0x0328(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     ForestMaskBottomRightWorld;                               // 0x0334(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	class UAkAudioEvent*                               CoastalForestAudioEvent;                                  // 0x0340(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               ContinentalForest1AudioEvent;                             // 0x0348(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               ContinentalForest2AudioEvent;                             // 0x0350(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               ContinentalForest3AudioEvent;                             // 0x0358(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0360(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.FoliageAmbientSounds");
		return ptr;
	}

};


// Class ConZ.FoliageEffectsAssetData
// 0x0020 (0x0048 - 0x0028)
class UFoliageEffectsAssetData : public UAssetUserData
{
public:
	struct FFoliageEffectsData                         FoliageEffectsData;                                       // 0x0028(0x0020) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.FoliageEffectsAssetData");
		return ptr;
	}

};


// Class ConZ.FoliageInstancedBush
// 0x0000 (0x08F0 - 0x08F0)
class UFoliageInstancedBush : public UFoliageInstancedStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.FoliageInstancedBush");
		return ptr;
	}

};


// Class ConZ.FoliageInstancedGrass
// 0x0000 (0x08F0 - 0x08F0)
class UFoliageInstancedGrass : public UFoliageInstancedStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.FoliageInstancedGrass");
		return ptr;
	}

};


// Class ConZ.FoliageInstancedTree
// 0x0000 (0x08F0 - 0x08F0)
class UFoliageInstancedTree : public UFoliageInstancedStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.FoliageInstancedTree");
		return ptr;
	}

};


// Class ConZ.FollowsMouseActor
// 0x0008 (0x0320 - 0x0318)
class AFollowsMouseActor : public AActor
{
public:
	float                                              DistanceFromCamera;                                       // 0x0318(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x031C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.FollowsMouseActor");
		return ptr;
	}

};


// Class ConZ.FoodItemSpawner
// 0x0020 (0x03B8 - 0x0398)
class AFoodItemSpawner : public AItemSpawner
{
public:
	TArray<class UClass*>                              Items;                                                    // 0x0398(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class UItemGroup*>                          ItemGroups;                                               // 0x03A8(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.FoodItemSpawner");
		return ptr;
	}

};


// Class ConZ.FoodPreparationItem
// 0x0000 (0x0860 - 0x0860)
class AFoodPreparationItem : public AFoodItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.FoodPreparationItem");
		return ptr;
	}

};


// Class ConZ.FoxglovePoisoning
// 0x0010 (0x01C0 - 0x01B0)
class UFoxglovePoisoning : public UPoisoning
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.FoxglovePoisoning");
		return ptr;
	}

};


// Class ConZ.FragGrenadeItem
// 0x0030 (0x07B0 - 0x0780)
class AFragGrenadeItem : public AItem
{
public:
	float                                              _explosionDamage;                                         // 0x0780(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _explosionOuterRadius;                                    // 0x0784(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _explosionInnerRadius;                                    // 0x0788(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _explosionFalloff;                                        // 0x078C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _explosionDelay;                                          // 0x0790(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _explosionImpulse_OBSOLETE;                               // 0x0794(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0798(0x0008) MISSED OFFSET
	class UParticleSystem*                             _explosionParticle;                                       // 0x07A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      _explosionCameraShakeClass;                               // 0x07A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.FragGrenadeItem");
		return ptr;
	}


	void Multicast_PlayEffects(const struct FVector& ZeroBasedLocation);
};


// Class ConZ.FuelCanister
// 0x0000 (0x0790 - 0x0790)
class AFuelCanister : public AEquipmentItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.FuelCanister");
		return ptr;
	}

};


// Class ConZ.FuelPump
// 0x0028 (0x0340 - 0x0318)
class AFuelPump : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET
	float                                              Capacity;                                                 // 0x0320(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0324(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0328(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             _rootComponent;                                           // 0x0330(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.FuelPump");
		return ptr;
	}

};


// Class ConZ.FuelTank
// 0x0028 (0x0340 - 0x0318)
class AFuelTank : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET
	float                                              Capacity;                                                 // 0x0320(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0324(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0328(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             _rootComponent;                                           // 0x0330(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.FuelTank");
		return ptr;
	}

};


// Class ConZ.GameEventBorder
// 0x0078 (0x0390 - 0x0318)
class AGameEventBorder : public AActor
{
public:
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0318(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    Material;                                                 // 0x0320(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EGameEventBorderState                              _state;                                                   // 0x0328(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0329(0x0003) MISSED OFFSET
	float                                              _replicatedRadius;                                        // 0x032C(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0330(0x000C) MISSED OFFSET
	struct FVector                                     _replicatedOffset;                                        // 0x033C(0x000C) (CPF_Net, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0348(0x0020) MISSED OFFSET
	float                                              _replicatedHeat;                                          // 0x0368(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x036C(0x000C) MISSED OFFSET
	bool                                               _collisionEnabled;                                        // 0x0378(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _blockPawns;                                              // 0x0379(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x16];                                      // 0x037A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.GameEventBorder");
		return ptr;
	}


	void SetEnablePawnCollision(bool Value);
	void OnRep_Radius();
	void OnRep_Offset();
	void OnRep_Heat();
	void OnRep_Collision();
	void Multicast_SetRadius(float Value);
	void Multicast_SetOffset(const struct FVector& Offset);
	bool IsActive();
	void HeatUpAndChangeArea(float Radius, const struct FVector& focus, float Duration, float heatUpDuration);
	EGameEventBorderState GetState();
	float GetRadiusChangeAmount();
	float GetRadius();
	struct FVector GetOffset();
	struct FVector GetBorderCenter();
	void ChangeState(EGameEventBorderState State, float Duration);
	void ChangeArea(float Radius, const struct FVector& focus, float Duration);
};


// Class ConZ.GameEventCardWidget
// 0x0008 (0x0228 - 0x0220)
class UGameEventCardWidget : public UDesignableUserWidget
{
public:
	class AGameEventBase*                              _gameEvent;                                               // 0x0220(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.GameEventCardWidget");
		return ptr;
	}


	void UpdateStats();
	class AGameEventBase* GetGameEvent();
	static class UGameEventCardWidget* Create(class AGameEventBase* gameEvent);
};


// Class ConZ.GameEventInfoWidget
// 0x0000 (0x0220 - 0x0220)
class UGameEventInfoWidget : public UDesignableUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.GameEventInfoWidget");
		return ptr;
	}


	void UpdateStats(class AGameEventBase* _gameEvent);
};


// Class ConZ.GameEventLeaderboardWidget
// 0x0030 (0x0250 - 0x0220)
class UGameEventLeaderboardWidget : public UDesignableUserWidget
{
public:
	TArray<struct FCharacterStatsItem>                 TopPlayersStats;                                          // 0x0220(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FCharacterStatsItem>                 PlayerRankingStats;                                       // 0x0230(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                PlayerRank;                                               // 0x0240(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0244(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.GameEventLeaderboardWidget");
		return ptr;
	}


	void UpdateTopPlayers();
	void UpdatePlayerRanking();
	void RequestTopPlayers(int count, ECharacterStatsSorting sort, bool descending);
	void RequestPlayerRanking(int Pad, ECharacterStatsSorting sort, bool descending);
	void CancelReqeusts();
};


// Class ConZ.GameEventLoadoutMenuWidget
// 0x0008 (0x0228 - 0x0220)
class UGameEventLoadoutMenuWidget : public UDesignableUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.GameEventLoadoutMenuWidget");
		return ptr;
	}


	void SetGameEvent(class AGameEventBase* gameEvent);
	class AGameEventBase* GetGameEvent();
	void CreateLoadout(class UClass* primary, class UClass* secondary, class UClass* tertiary, TArray<class UClass*> outfit, TArray<class UClass*> support, class UPrisonerLoadout* loadout);
};


// Class ConZ.GameEventManager
// 0x0040 (0x0358 - 0x0318)
class AGameEventManager : public AActor
{
public:
	int                                                EventHistoryLimit;                                        // 0x0318(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x031C(0x0004) MISSED OFFSET
	TArray<class AGameEventBase*>                      _announcedGameEvents;                                     // 0x0320(0x0010) (CPF_Net, CPF_ZeroConstructor)
	TArray<class AGameEventBase*>                      _currentGameEvents;                                       // 0x0330(0x0010) (CPF_Net, CPF_ZeroConstructor)
	TArray<class AGameEventBase*>                      _endedGameEvents;                                         // 0x0340(0x0010) (CPF_Net, CPF_ZeroConstructor)
	class UGameEventPanelWidget*                       _panelWidget;                                             // 0x0350(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.GameEventManager");
		return ptr;
	}


	class AGameEventBase* TrySchedulingNextEvent();
	class AGameEventLocationMarker* PickRandomMarker(class UClass* markerType, bool preferUnused, bool forcePick);
	void OnRep_EndedGameEvents();
	void OnRep_CurrentGameEvents();
	void OnRep_AnnouncedGameEvents();
	bool IsEventLocationFree(struct FText* Location);
	class AGameEventBase* GetPrisonerRegisteredGameEvent(class APrisoner* Prisoner);
	class UGameEventPanelWidget* GetPanelWidget();
	TArray<class AGameEventBase*> GetEndedEvents();
	TArray<class AGameEventBase*> GetCurrentEvents();
	TArray<class AGameEventBase*> GetAnnouncedEvents();
	class AGameEventBase* CreateGameEvent(class AGameEventLocationMarker* marker, float StartDelay);
};


// Class ConZ.GameEventPanelWidget
// 0x0008 (0x0228 - 0x0220)
class UGameEventPanelWidget : public UDesignableUserWidget
{
public:
	class AGameEventManager*                           _GEManager;                                               // 0x0220(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.GameEventPanelWidget");
		return ptr;
	}


	void UpdateLists();
	void OnUpdate();
	void OnOpened();
	void OnClosed();
	class AGameEventManager* GetGameEventManager();
	void EmptyLists();
	static class UGameEventPanelWidget* Create(class AGameEventManager* GEManager);
	void AddEndedEvent(class AGameEventBase* gameEvent);
	void AddCurrentEvent(class AGameEventBase* gameEvent);
	void AddAnnouncedEvent(class AGameEventBase* gameEvent);
};


// Class ConZ.GameEventParticipantInfoCardWidget
// 0x0000 (0x0220 - 0x0220)
class UGameEventParticipantInfoCardWidget : public UDesignableUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.GameEventParticipantInfoCardWidget");
		return ptr;
	}


	void UpdateStats(class APrisoner* Prisoner);
};


// Class ConZ.GameEventParticipantStatsWidget
// 0x0020 (0x0240 - 0x0220)
class UGameEventParticipantStatsWidget : public UDesignableUserWidget
{
public:
	class AGameEventBase*                              _gameEvent;                                               // 0x0220(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                _index;                                                   // 0x0228(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x022C(0x0004) MISSED OFFSET
	class UGameEventScoreboardWidget*                  _scoreboard;                                              // 0x0230(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                _teamIndex;                                               // 0x0238(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x023C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.GameEventParticipantStatsWidget");
		return ptr;
	}


	void UpdateStats();
	void UpdateColours();
	void SetTeamIndex(int Index);
	void SetColours(const struct FGameEventTeamColours& colours);
	bool IsValid();
	int GetTeamIndex();
	class UGameEventScoreboardWidget* GetScoreboard();
	int GetIndex();
	class AGameEventBase* GetGameEvent();
	void FillLabels();
};


// Class ConZ.GameEventRoundInfoWidget
// 0x0000 (0x0220 - 0x0220)
class UGameEventRoundInfoWidget : public UDesignableUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.GameEventRoundInfoWidget");
		return ptr;
	}


	void SetGameEvent(class AGameEventBase* gameEvent);
};


// Class ConZ.GameEventScoreboardWidget
// 0x0038 (0x0258 - 0x0220)
class UGameEventScoreboardWidget : public UDesignableUserWidget
{
public:
	class UClass*                                      RoundInfoWidgetClass;                                     // 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      TeamHeaderWidgetClass;                                    // 0x0228(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      StatWidgetClass;                                          // 0x0230(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UGameEventParticipantStatsWidget*>    StatWidgets;                                              // 0x0238(0x0010) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	class AGameEventBase*                              _gameEvent;                                               // 0x0248(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                _selected;                                                // 0x0250(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0254(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.GameEventScoreboardWidget");
		return ptr;
	}


	void SetSelectedIndex(int Index);
	void OnUpdate();
	void InitializeScoreboard();
	int GetSelectedIndex();
	static class UGameEventScoreboardWidget* CreateMini(class AGameEventBase* gameEvent, class UClass* statClass, class UClass* teamHeaderClass);
	static class UGameEventScoreboardWidget* Create(class AGameEventBase* gameEvent, class UClass* roundInfoClass, class UClass* teamHeaderClass, class UClass* statClass);
};


// Class ConZ.GameEventTeamHeaderWidget
// 0x0000 (0x0220 - 0x0220)
class UGameEventTeamHeaderWidget : public UDesignableUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.GameEventTeamHeaderWidget");
		return ptr;
	}


	void SetGameEvent(class AGameEventBase* gameEvent);
	void ClearWinCounters();
	void AddWinCounter();
};


// Class ConZ.GameEventTeamScoreWidget
// 0x0008 (0x0228 - 0x0220)
class UGameEventTeamScoreWidget : public UDesignableUserWidget
{
public:
	class AGameEventBase*                              _gameEvent;                                               // 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.GameEventTeamScoreWidget");
		return ptr;
	}


	void UpdateScore();
};


// Class ConZ.GameEventTransport
// 0x0098 (0x03B0 - 0x0318)
class AGameEventTransport : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0318(0x0010) MISSED OFFSET
	class USphereComponent*                            Sphere;                                                   // 0x0328(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        PodMesh;                                                  // 0x0330(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        TargetMesh;                                               // 0x0338(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              TravelSpeed;                                              // 0x0340(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TravelHeight;                                             // 0x0344(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HoverHeight;                                              // 0x0348(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LargerRadius;                                             // 0x034C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SmallerRadius;                                            // 0x0350(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EGameEventTransportState                           _state;                                                   // 0x0354(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	struct FVector                                     _lastPosition;                                            // 0x0358(0x000C) (CPF_Net, CPF_IsPlainOldData)
	struct FVector                                     _targetPosition;                                          // 0x0364(0x000C) (CPF_Net, CPF_IsPlainOldData)
	float                                              _blend;                                                   // 0x0370(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3C];                                      // 0x0374(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.GameEventTransport");
		return ptr;
	}


	void TravelToDestination(const struct FVector& Destination);
	void SkipToDestination();
	void ReserveForPrisoner(class APrisoner* Prisoner);
	void OnRep_TargetPosition();
	void OnRep_LastPosition();
	void OnOrderComplete();
	void LiftOff();
	void LeaveIsland();
	void LandAtLocation(const struct FVector& Destination);
	bool IsInteractable();
	class APrisoner* GetReservedParticipant();
	void CancelOrder();
};


// Class ConZ.GenericItemContainerWidget
// 0x0050 (0x02A8 - 0x0258)
class UGenericItemContainerWidget : public UBaseItemContainerWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0258(0x0008) MISSED OFFSET
	TWeakObjectPtr<class AItem>                        containerItem;                                            // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UNamedSlot*                                  UnderInventorySlot;                                       // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UGenericItemContainerWidget*>         LinkedWidgets;                                            // 0x0270(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	TWeakObjectPtr<class UGenericItemContainerWidget>  ParentWidget;                                             // 0x0280(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TWeakObjectPtr<class UCombinedInventoryWidget>     ParentCombinedInventory;                                  // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               InventoryJustSwitchedToThis;                              // 0x0290(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsContainersPanelMinimized;                               // 0x0291(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0292(0x0006) MISSED OFFSET
	class UImage*                                      MainExtraSlotImage;                                       // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UImage*                                      ExtraSlotBackground;                                      // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.GenericItemContainerWidget");
		return ptr;
	}


	void UpdateVisualsFromItem(class AItem* Item);
	void UpdateImageFromBodySlot(EBodySlot bodySlot);
	void SetResizableWindowParentSlot(class UCanvasPanelSlot* PanelSlot);
	void SetMinimizationState(bool minimizePartial, bool minimizeFull);
	void RefreshOccupiedSlotsAndMassVisuals();
	void OnClose();
	bool GetMinimizedPartial();
	bool GetMinimizedFull();
	void ChangeTitle(const struct FText& Title);
	void BlinkItemContainer();
	void AdjustSize(const struct FVector2D& oldSize);
};


// Class ConZ.GhostTrailComponent
// 0x0000 (0x00F0 - 0x00F0)
class UGhostTrailComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.GhostTrailComponent");
		return ptr;
	}


	void SetTrailActive(bool active);
	bool GetTrailActive();
};


// Class ConZ.Gib
// 0x0010 (0x0328 - 0x0318)
class AGib : public AActor
{
public:
	class UStaticMeshComponent*                        MeshComponent;                                            // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              ShrinkFactor;                                             // 0x0320(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ImpulseMultiplier;                                        // 0x0324(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Gib");
		return ptr;
	}

};


// Class ConZ.GlobalAnimalSpawner
// 0x00D0 (0x03E8 - 0x0318)
class AGlobalAnimalSpawner : public AActor
{
public:
	TMap<class UClass*, struct FGlobalAnimalSpawnInfo> SpawnInfo;                                                // 0x0318(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<TEnumAsByte<EPhysicalSurface>>              AllowedSurfaces;                                          // 0x0368(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<class AAnimalSpawner2*>                     AnimalSpawners;                                           // 0x0378(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst)
	class UBillboardComponent*                         Sprite;                                                   // 0x0388(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0390(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.GlobalAnimalSpawner");
		return ptr;
	}

};


// Class ConZ.GlobalBirdSpawner2
// 0x00E0 (0x03F8 - 0x0318)
class AGlobalBirdSpawner2 : public AActor
{
public:
	int                                                MaxSpawnInstances;                                        // 0x0318(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxCoastalBirdSpawnPerPlayer;                             // 0x031C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxContinentalBirdSpawnPerPlayer;                         // 0x0320(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0324(0x0004) MISSED OFFSET
	TArray<class UClass*>                              CoastalBirds;                                             // 0x0328(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<class UClass*>                              ContinentalBirds;                                         // 0x0338(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	float                                              FlyingBirdSpawnAwayDistanceMin;                           // 0x0348(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FlyingBirdSpawnAwayDistanceMax;                           // 0x034C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroundBirdSpawnAwayDistanceMin;                           // 0x0350(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroundBirdSpawnAwayDistanceMax;                           // 0x0354(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinSpawnInfrontDistance;                                  // 0x0358(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	struct FGameplayTag                                BirdSpawnerMask;                                          // 0x0360(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FVector                                     MapTopLeft;                                               // 0x0368(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FVector                                     MapBottomRight;                                           // 0x0374(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	int                                                BulkSpawn;                                                // 0x0380(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EPhysicalSurface>>              AllowedSurfaces;                                          // 0x0388(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	class UBillboardComponent*                         Sprite;                                                   // 0x0398(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x03A0(0x0008) MISSED OFFSET
	TArray<class ABird2*>                              _birds;                                                   // 0x03A8(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData04[0x40];                                      // 0x03B8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.GlobalBirdSpawner2");
		return ptr;
	}

};


// Class ConZ.GlobalItemSpawner
// 0x0140 (0x0168 - 0x0028)
class UGlobalItemSpawner : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET
	int                                                SpawnProbabilityMultiplier;                               // 0x00A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RespawnInterval;                                          // 0x00AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RespawnDistanceSquared;                                   // 0x00B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RespawnBatch;                                             // 0x00B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RarityValues[0x6];                                        // 0x00B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	TArray<TSoftObjectPtr<class UClass>>               _itemClasses;                                             // 0x00D8(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00E8(0x0010) MISSED OFFSET
	TArray<class AItemSpawnerVolume*>                  _spawnerVolumes;                                          // 0x00F8(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData03[0x60];                                      // 0x0108(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.GlobalItemSpawner");
		return ptr;
	}

};


// Class ConZ.RangedWeaponsSkill
// 0x0010 (0x00A8 - 0x0098)
class URangedWeaponsSkill : public UStrengthSkill
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.RangedWeaponsSkill");
		return ptr;
	}

};


// Class ConZ.HandgunSkill
// 0x0000 (0x00A8 - 0x00A8)
class UHandgunSkill : public URangedWeaponsSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.HandgunSkill");
		return ptr;
	}

};


// Class ConZ.HandInventorySecondIteration
// 0x0010 (0x0268 - 0x0258)
class UHandInventorySecondIteration : public UBaseItemContainerWidget
{
public:
	class UGridPanel*                                  _addonsGridPanel;                                         // 0x0258(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class AItem*                                       _equippedItem;                                            // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.HandInventorySecondIteration");
		return ptr;
	}


	void UpdateVisuals();
	void UpdateItemWidgetHighlightings();
	void OnWeaponAttachmentRemoved(class AWeapon* sender, class AWeaponAttachment* Attachment);
	void OnWeaponAttachmentAdded(class AWeapon* sender, class AWeaponAttachment* Attachment);
	void OnItemPickedUpStateChanged(class AItem* Item, bool pickedUp);
	void OnItemDestroyed(class AActor* Actor);
	void OnDropEvent(class UInventorySlotUserWidget* inventorySlot, class UBaseItemWidget* Item);
	bool GetSlots(class UGridSlot* GridSlot, int Width, int Height, TArray<class UInventorySlotUserWidget*>* Slots);
	TArray<class UItemUserWidget*> GetItemWidgets();
	void EquipItem(class AItem* Item);
};


// Class ConZ.InventoryUserWidget
// 0x0008 (0x0260 - 0x0258)
class UInventoryUserWidget : public UBaseItemContainerWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0258(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.InventoryUserWidget");
		return ptr;
	}


	void UpdateImage(class UTexture2D* Texture);
	void UpdateDisplayValues(unsigned char occupiedSlots, float occupiedMass);
	void SetTitle(const struct FText& Title);
	void SetMinimizeAndAdjustSize(bool isMinimizedFull, bool isMinimizedPartial, bool adjustPosition);
	void OnDropEvent(class UInventorySlotUserWidget* inventorySlot, class UBaseItemWidget* Item);
	bool GetMinimizedPartial();
	bool GetMinimizedFull();
};


// Class ConZ.HandInventoryWidget
// 0x0020 (0x0280 - 0x0260)
class UHandInventoryWidget : public UInventoryUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0260(0x0010) MISSED OFFSET
	class AItem*                                       EquippedItem;                                             // 0x0270(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UGridPanel*                                  _addonsGridPanel;                                         // 0x0278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.HandInventoryWidget");
		return ptr;
	}


	void UpdateWithItem(class AItem* Item);
	void SetGridVisibility(ESlateVisibility gridVisibility);
	void SetAddonsVisibility(bool Value);
	void RequestUpdateSize();
	void OnDropEvent(class UInventorySlotUserWidget* inventorySlot, class UBaseItemWidget* Item);
	bool GetSlots(class UGridSlot* GridSlot, int Width, int Height, TArray<class UInventorySlotUserWidget*>* Slots);
};


// Class ConZ.HandPanel
// 0x0000 (0x0220 - 0x0220)
class UHandPanel : public UDesignableUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.HandPanel");
		return ptr;
	}


	void UpdateItemWidgetHighlightings();
	class UShoulderHolsterWidget* GetShoulderHolster(int holsterId);
	class UQuickAccessItemSwitcher* GetQuickAccessAt(int Index);
	class UHandInventorySecondIteration* GetHandInventory();
};


// Class ConZ.HasLadderMarkersInterface
// 0x0000 (0x0028 - 0x0028)
class UHasLadderMarkersInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.HasLadderMarkersInterface");
		return ptr;
	}


	void GetLadderMarkers(TArray<struct FLadderMarker>* Result);
};


// Class ConZ.HasWindowMarkersInterface
// 0x0000 (0x0028 - 0x0028)
class UHasWindowMarkersInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.HasWindowMarkersInterface");
		return ptr;
	}


	void GetWindowMarkers(TArray<struct FWindowMarker>* Result);
};


// Class ConZ.HealingItem
// 0x0050 (0x0078 - 0x0028)
class UHealingItem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.HealingItem");
		return ptr;
	}


	float GetQuantity();
	int GetId();
	struct FString GetCaption();
};


// Class ConZ.HeartAttack
// 0x0048 (0x01F8 - 0x01B0)
class UHeartAttack : public UDisease
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x01B0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.HeartAttack");
		return ptr;
	}

};


// Class ConZ.HeartbeatWidget
// 0x00C8 (0x01C8 - 0x0100)
class UHeartbeatWidget : public UWidget
{
public:
	struct FSlateBrush                                 Brush;                                                    // 0x0100(0x0078) (CPF_Edit, CPF_BlueprintVisible)
	struct FScriptDelegate                             BrushDelegate;                                            // 0x0178(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0188(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x0198(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
	float                                              Thickness;                                                // 0x01A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Periods;                                                  // 0x01AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET
	class UPrisonerLifeComponent*                      _prisonerLifeComponent;                                   // 0x01C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.HeartbeatWidget");
		return ptr;
	}


	void SetPrisonerLifeComponent(class UPrisonerLifeComponent* Value);
	class UPrisonerLifeComponent* GetPrisonerLifeComponent();
};


// Class ConZ.HeatSource
// 0x0000 (0x0028 - 0x0028)
class UHeatSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.HeatSource");
		return ptr;
	}

};


// Class ConZ.HeatstrokeDisease
// 0x0020 (0x01D0 - 0x01B0)
class UHeatstrokeDisease : public UDisease
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x01B0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.HeatstrokeDisease");
		return ptr;
	}

};


// Class ConZ.Helpers
// 0x0000 (0x0028 - 0x0028)
class UHelpers : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Helpers");
		return ptr;
	}


	static void SortSkillsByLevelAndExperience(TArray<class USkill*>* Skills);
	static void SendChatLineToAll(class UObject* WorldContextObject, const struct FString& Text);
	static bool PasteLocationAndRotationFromClipboard(struct FVector* Location, struct FRotator* Rotation);
	static bool ParseServerIpAndPort(const struct FString& Text, struct FString* Ip, int* Port);
	static struct FString MakeAuthTokenForUser(class UDbUser* user, const struct FString& password);
	static struct FString MakeAuthTokenForCurrentUser(class AActor* Context, const struct FString& password);
	static struct FString MakeAuthToken(const struct FString& UserId, const struct FString& password);
	static bool IsWorldStreamed(class UObject* WorldContextObject);
	static bool IsPointWithinCircle(const struct FVector2D& Point, const struct FVector2D& circleCenter, float circleRadius);
	static struct FVector2D GetRandomPointWithinTwoCircles(const struct FVector2D& centerA, float radiusA, const struct FVector2D& centerB, float radiusB);
	static struct FVector2D GetRandomPointWithinCircle(const struct FVector2D& Center, float Radius);
	static class ULineBatchComponent* GetLineBatcher(class UObject* WorldContextObject, bool bPersistentLines, float LifeTime, bool bDepthIsForeground);
	static struct FString GetGameVersion();
	static struct FString GetEnumeratorName(const struct FString& Name, int Value);
	static float GetDistanceToClosestPlayerPawnOrSpectator(class UWorld* World, const struct FVector& Location);
	static int GetDefaultDedicatedServerResponsePort();
	static class UDataSingleton* GetDataSingleton();
	static float GetCircleYForX(float X, const struct FVector2D& Center, float Radius, bool Up);
	static struct FString GetAuthTokenForUser(class UDbUser* user, const struct FString& ServerIp, int ServerResponsePort);
	static struct FString GetAuthTokenForCurrentUser(class AActor* Context, const struct FString& ServerIp, int ServerResponsePort);
	static class UActorComponent* GetActorComponentByName(class AActor* Actor, const struct FName& Name);
	static void DrawLine(class UObject* WorldContextObject, const struct FVector& LineStart, const struct FVector& LineEnd, const struct FColor& Color, bool bPersistentLines, float LifeTime, unsigned char DepthPriority, float Thickness);
	static void CopyLocationAndRotationToClipboard(const struct FVector& Location, const struct FRotator& Rotation);
	static bool AreCirclesIntersecting(const struct FVector2D& centerA, float radiusA, const struct FVector2D& centerB, float radiusB, bool onlyEdge);
	static void AddChatLine(class UObject* WorldContextObject, const struct FString& Text);
};


// Class ConZ.HemlockPoisoning
// 0x0010 (0x01C0 - 0x01B0)
class UHemlockPoisoning : public UPoisoning
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.HemlockPoisoning");
		return ptr;
	}

};


// Class ConZ.HepatitisADisease
// 0x0008 (0x01B8 - 0x01B0)
class UHepatitisADisease : public UDisease
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.HepatitisADisease");
		return ptr;
	}

};


// Class ConZ.Highlightable
// 0x0000 (0x0028 - 0x0028)
class UHighlightable : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Highlightable");
		return ptr;
	}

};


// Class ConZ.HitReactComponent
// 0x0180 (0x0270 - 0x00F0)
class UHitReactComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x00F0(0x0070) MISSED OFFSET
	TArray<class UHitReactMapping*>                    HitReactMappings;                                         // 0x0160(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FPhysicalHitReactData                       PhysicalHitReactData;                                     // 0x0170(0x0018) (CPF_Edit)
	struct FName                                       RagdollConstraintProfileName;                             // 0x0188(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RagdollRestThresholdSingleBodyMax;                        // 0x0190(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RagdollRestThresholdAverageBodyMax;                       // 0x0194(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0198(0x0028) MISSED OFFSET
	struct FName                                       _pelvisBoneName;                                          // 0x01C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       _rootBoneName;                                            // 0x01C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _getUpFromFaceMontage;                                    // 0x01D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _getUpFromBackMontage;                                    // 0x01D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7A];                                      // 0x01E0(0x007A) MISSED OFFSET
	ERagdollTransitionState                            _ragdollTransitionState;                                  // 0x025A(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x025B(0x0001) MISSED OFFSET
	struct FVector                                     _serverRagollLocation;                                    // 0x025C(0x000C) (CPF_Net, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0268(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.HitReactComponent");
		return ptr;
	}


	void RecoverFromRagdollImmediately();
	void RecoverFromRagdoll();
	void OnRep_ServerRagdollLocation();
	void OnRep_RagdollTransitionState();
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool interrupted);
	void MoveRagdollMesh(class UPrimitiveComponent* MeshComponent, const struct FVector& currentLocation, const struct FVector& TargetLocation);
	bool IsRagdollAtRest();
	bool IsPlayingGetUpMontage();
	bool IsInRagdoll();
	bool IsCapsuleOverlapped();
	bool IsBlendingRagdoll();
	void GoToRagdoll();
	struct FName GetPelvisBoneName();
	bool CanRecoverFromRagdoll();
	void ApplyPhysicalAnimationData(const struct FPhysicalAnimationDesc& desc);
};


// Class ConZ.HitReactMapping
// 0x03B0 (0x03E0 - 0x0030)
class UHitReactMapping : public UDataAsset
{
public:
	struct FGameplayTagContainer                       HitReactTypes;                                            // 0x0030(0x0020) (CPF_Edit)
	float                                              RegainControlMultiplier;                                  // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FHitReactMagnitudeData                      HeadHit;                                                  // 0x0058(0x0120) (CPF_Edit)
	struct FHitReactMagnitudeData                      BodyHit;                                                  // 0x0178(0x0120) (CPF_Edit)
	struct FHitReactMagnitudeData                      LegsHit;                                                  // 0x0298(0x0120) (CPF_Edit)
	struct FHitReactLandingData                        LandingHit;                                               // 0x03B8(0x0028) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.HitReactMapping");
		return ptr;
	}

};


// Class ConZ.HookwormsDisease
// 0x0008 (0x01B8 - 0x01B0)
class UHookwormsDisease : public UDisease
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.HookwormsDisease");
		return ptr;
	}

};


// Class ConZ.HUD_John
// 0x0050 (0x0458 - 0x0408)
class AHUD_John : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0408(0x0008) MISSED OFFSET
	class UFont*                                       NormalFont;                                               // 0x0410(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0418(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.HUD_John");
		return ptr;
	}

};


// Class ConZ.HudWidget
// 0x0018 (0x0238 - 0x0220)
class UHudWidget : public UDesignableUserWidget
{
public:
	class UQuickAccessBarWidget*                       _quickAccessBar;                                          // 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0228(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.HudWidget");
		return ptr;
	}


	void UpdateAttributesHistory();
	void ToggleMonitorsVisibility();
	void SwitchTabMode(int Index);
	void ShowNotification(const struct FString& Message, float Duration);
	void ShowKillFeedNotification(const struct FText& prefix, const struct FText& characterName, const struct FText& suffix, bool ping);
	bool ShouldSerializeWidgetLayout(class UWidget* Widget);
	void SetTabEnabled(ETabMode Tab, bool Value);
	void SetPrisoner(class APrisoner* Prisoner);
	void SetMainCanvasVisibility(bool visible);
	bool SaveLayout();
	void ResetLayout();
	void RemoveTeammateName(const struct FString& Name);
	void OpenChat();
	bool LoadLayout();
	bool IsChatOpen();
	class UVicinityPanelSecondIteration* GetVicinityPanel();
	class UPanelWidget* GetTopLevelPanelWidget();
	class UTabModeSwitcherWidget* GetTabModeSwitcherWidget();
	bool GetMainCanvasVisibility();
	class UInventoryPanelSecondIteration* GetInventoryPanel();
	class UHandPanel* GetHandPanel();
	class UCraftingPanelWidget* GetCraftingPanel();
	class UUserWidget* GetBCURightPanel();
	class UUserWidget* GetBCULeftPanel();
	static bool DumpStringToFile(const struct FString& stringToDump);
	void CloseChat();
	void ClearTeammateNames();
	void ClearNotifications();
	void ChangeChatType(EChatType chatType);
	void AddWarning(EWarningType warningType);
	void AddTeammateName(const struct FString& Name);
	void AddMessageToScreen(const struct FText& Text, bool beep);
	void AddChatLine(const struct FString& string, EChatType chatType);
};


// Class ConZ.HyperthermiaDisease
// 0x0000 (0x01B0 - 0x01B0)
class UHyperthermiaDisease : public UDisease
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.HyperthermiaDisease");
		return ptr;
	}

};


// Class ConZ.HypothermiaDisease
// 0x0010 (0x01C0 - 0x01B0)
class UHypothermiaDisease : public UDisease
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.HypothermiaDisease");
		return ptr;
	}

};


// Class ConZ.InocybePatouillardiiPoisoning
// 0x0008 (0x01B8 - 0x01B0)
class UInocybePatouillardiiPoisoning : public UPoisoning
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.InocybePatouillardiiPoisoning");
		return ptr;
	}

};


// Class ConZ.InsertCartridge
// 0x0010 (0x0090 - 0x0080)
class UInsertCartridge : public UWeaponActionReloadSequence
{
public:
	struct FName                                       MontageEndSectionName;                                    // 0x0080(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.InsertCartridge");
		return ptr;
	}

};


// Class ConZ.InsertMagazine
// 0x0000 (0x0080 - 0x0080)
class UInsertMagazine : public UWeaponActionReloadSequence
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.InsertMagazine");
		return ptr;
	}

};


// Class ConZ.InspectedItemWidget
// 0x0018 (0x0238 - 0x0220)
class UInspectedItemWidget : public UDesignableUserWidget
{
public:
	class UItemClassWidget*                            ItemWidget;                                               // 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTextBlock*                                  SkillText;                                                // 0x0228(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTextBlock*                                  SkillLevelText;                                           // 0x0230(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.InspectedItemWidget");
		return ptr;
	}


	void SetIsToolForSomething(bool IsTool);
};


// Class ConZ.InstancedStaticMeshActor
// 0x0008 (0x0320 - 0x0318)
class AInstancedStaticMeshActor : public AActor
{
public:
	class UStaticMeshComponent*                        MeshComponent;                                            // 0x0318(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.InstancedStaticMeshActor");
		return ptr;
	}

};


// Class ConZ.InteractableInterface
// 0x0000 (0x0028 - 0x0028)
class UInteractableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.InteractableInterface");
		return ptr;
	}

};


// Class ConZ.InteractionComponent
// 0x0158 (0x0248 - 0x00F0)
class UInteractionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	float                                              ExamineChanceMultiplier;                                  // 0x00F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExamineActionDuration;                                    // 0x00FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExamineReplicationDelay;                                  // 0x0100(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReexamineInterval;                                        // 0x0104(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PickupItemActionDuration;                                 // 0x0108(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PickupItemReplicationDelay;                               // 0x010C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StoreItemActionDuration;                                  // 0x0110(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TickFrequency;                                            // 0x0114(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinLandscapeInteractionDistanceSquared;                   // 0x0118(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SavedGroundSearchLocationsCount;                          // 0x011C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0120(0x0018) MISSED OFFSET
	TArray<class UInteractionAction*>                  _actions;                                                 // 0x0138(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0xA8];                                      // 0x0148(0x00A8) MISSED OFFSET
	struct FSpawnedItems                               _replicatedExamineSpawnedItems;                           // 0x01F0(0x0018) (CPF_Net)
	struct FSpawnedItems                               _replicatedPickupSpawnedItem;                             // 0x0208(0x0018) (CPF_Net)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0220(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.InteractionComponent");
		return ptr;
	}


	void UseItemOnServer(class AItem* Item, int usage, float usageWeight, bool Eat);
	void UpdateItemDataOnServer(class AItem* Item);
	void UpdateExistenceOnClient(bool Exists);
	void UnspawnExaminedItemsOnServer(bool destroyItems);
	void UnexamineItemOnServer(class AItem* Item);
	void UnexamineItemOnClient(class AItem* Item);
	void UncraftItemOnServer(class AItem* Item);
	void TankFuelOnServer(class AFuelTank* FuelTank, class AFuelCanister* FuelCanister, float quantity);
	void StoreItemsOnServer(class UMeshComponent* MeshComponent, int InstanceIndex, const struct FVector& instanceLocation, TArray<class AItem*> storeItems);
	void PickupItemOnServer(class UMeshComponent* MeshComponent, int InstanceIndex, class UStaticMesh* StaticMesh, const struct FVector& pickupLocation, EPickupItemOperation Operation);
	void PickupItemOnClients(class UMeshComponent* MeshComponent, int InstanceIndex, class UStaticMesh* StaticMesh, const struct FVector& pickupLocation);
	void OperateGeneratorOnServer(class APowerGenerator* generator, bool working);
	void OperateElectricDoorOnServer(class ADoor* Door, bool Open);
	void OperateElectricalDeviceOnServer(class AElectricalDevice* device, bool working);
	void OpenItemOnServer(class AFoodItem* FoodItem, class AItem* openingItem);
	void OnRep_PickupSpawnedItem();
	void OnRep_ExamineSpawnedItems();
	void LockElectricDoorOnServer(class ADoor* Door, bool lock, const struct FString& password);
	void FinishPickupItemOnServer();
	void FinishExaminePrisonerOnServer(class APrisoner* Prisoner);
	void FinishExamineObjectOnServer();
	void FillWaterOnServer(class AItem* Item, float Ratio, float salinity);
	void FillCanisterOnServer(class AFuelPump* FuelPump, class AFuelCanister* FuelCanister, float quantity);
	void ExecuteInteractionOnServer(class AItem* interactionItem, EInteractionType Interaction, const struct FServerCraftableItem& CraftableItem);
	void ExamineWidgetIsEmpty();
	void ExamineWidgetClose();
	void ExaminePrisonerOnServer(class APrisoner* Prisoner);
	void ExamineObjectOnServer(class UMeshComponent* MeshComponent, int InstanceIndex, const struct FVector& instanceLocation);
	void DestroyItemOnServer(class AItem* Item);
	void DestroyActorOnServer(class AActor* Actor);
	void CutObjectOnServer(class AActor* Actor, TArray<class AItem*> tools, class UMeshComponent* MeshComponent, int InstanceIndex, const struct FVector& Location, bool collectOnly);
	void CutObjectOnClients(class UMeshComponent* MeshComponent, int InstanceIndex);
	void CraftItemOnServer(const struct FServerCraftableItem& CraftableItem);
	void Client_SendGroundSearchLocation(const struct FVector& Location);
	void ChopOnServer(class UObject* choppedObject, TArray<class AItem*> tools);
	void CheckExistenceOnServer(class UMeshComponent* MeshComponent, int InstanceIndex);
};


// Class ConZ.InteractionContainerUserWidget
// 0x0038 (0x0258 - 0x0220)
class UInteractionContainerUserWidget : public UDesignableUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0220(0x0018) MISSED OFFSET
	class UVerticalBox*                                _actionContainer;                                         // 0x0238(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0240(0x000C) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       _underlyingInteractableActor;                             // 0x024C(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0254(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.InteractionContainerUserWidget");
		return ptr;
	}


	static void RemoveActiveInteractionWidget(class APlayerController* PlayerController);
	void InteractableDestroyed(class AActor* interactable);
};


// Class ConZ.InteractionObject
// 0x0000 (0x0028 - 0x0028)
class UInteractionObject : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.InteractionObject");
		return ptr;
	}

};


// Class ConZ.InteractionUserWidget
// 0x0038 (0x0258 - 0x0220)
class UInteractionUserWidget : public UDesignableUserWidget
{
public:
	class UTextBlock*                                  _actionText;                                              // 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UButton*                                     _actionButton;                                            // 0x0228(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0230(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.InteractionUserWidget");
		return ptr;
	}


	void Interact();
};


// Class ConZ.InteriorStaticMeshComponent
// 0x0000 (0x06F0 - 0x06F0)
class UInteriorStaticMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.InteriorStaticMeshComponent");
		return ptr;
	}

};


// Class ConZ.IntestinalCryptosporidiosisPoisoning
// 0x0008 (0x01B8 - 0x01B0)
class UIntestinalCryptosporidiosisPoisoning : public UPoisoning
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.IntestinalCryptosporidiosisPoisoning");
		return ptr;
	}

};


// Class ConZ.InventoryContainersWidget
// 0x0028 (0x0248 - 0x0220)
class UInventoryContainersWidget : public UDesignableUserWidget
{
public:
	class UGridPanel*                                  MainGridPanel;                                            // 0x0220(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class AItem*>                               Items;                                                    // 0x0228(0x0010) (CPF_ZeroConstructor)
	class UGenericItemContainerWidget*                 ParentWidget;                                             // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UImage*                                      ExtraSlotImage;                                           // 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.InventoryContainersWidget");
		return ptr;
	}


	void RemoveItem(class AItem* Item);
	class UItemUserWidget* GetWidgetForItem(class AItem* Item);
	void ChangeTitle(const struct FText& Title);
	class UItemUserWidget* AddItem(class AItem* Item);
};


// Class ConZ.InventoryPanelSecondIteration
// 0x0000 (0x0220 - 0x0220)
class UInventoryPanelSecondIteration : public UDesignableUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.InventoryPanelSecondIteration");
		return ptr;
	}


	void UpdateItemWidgetHighlightings();
	void UpdateContainerForItem(class AItem* Item);
	void RemoveContainerForItem(class AItem* Item);
	void AddContainerForItem(class AItem* Item);
};


// Class ConZ.InventorySecondIteration
// 0x0008 (0x0260 - 0x0258)
class UInventorySecondIteration : public UBaseItemContainerWidget
{
public:
	class AItem*                                       _item;                                                    // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.InventorySecondIteration");
		return ptr;
	}


	void UpdateItemWidgetHighlightings();
	void UpdateContainer();
	void Blink();
};


// Class ConZ.InventorySlotUserWidget
// 0x0020 (0x0240 - 0x0220)
class UInventorySlotUserWidget : public UDesignableUserWidget
{
public:
	bool                                               HasItem;                                                  // 0x0220(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0221(0x0007) MISSED OFFSET
	class UImage*                                      ImageWidget;                                              // 0x0228(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USizeBox*                                    SizeBoxWrapper;                                           // 0x0230(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBaseItemContainerWidget*                    ParentContainerWidget;                                    // 0x0238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.InventorySlotUserWidget");
		return ptr;
	}

};


// Class ConZ.IronDeficiency
// 0x0000 (0x01C0 - 0x01C0)
class UIronDeficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.IronDeficiency");
		return ptr;
	}

};


// Class ConZ.ItemClassWidget
// 0x0008 (0x0228 - 0x0220)
class UItemClassWidget : public UDesignableUserWidget
{
public:
	class UClass*                                      _itemClass;                                               // 0x0220(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ItemClassWidget");
		return ptr;
	}


	void InteractWith(class APrisoner* Prisoner);
	void Init(class UClass* ItemClass, class UTexture2D* Texture);
	void Examine();
};


// Class ConZ.ItemContainer
// 0x0018 (0x0238 - 0x0220)
class UItemContainer : public UDesignableUserWidget
{
public:
	class UGridPanel*                                  MainGridPanel;                                            // 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class AItem*                                       UnderlyingItem;                                           // 0x0228(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isHands;                                                 // 0x0230(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isCollapsed;                                             // 0x0231(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0232(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ItemContainer");
		return ptr;
	}


	void ShowInteractions(class AItem* Item);
	void Expand();
	void Collapse();
};


// Class ConZ.ItemDropPlaceholder
// 0x0028 (0x0340 - 0x0318)
class AItemDropPlaceholder : public AActor
{
public:
	class UBoxComponent*                               BoxCollisionComponent;                                    // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // 0x0328(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0330(0x0008) MISSED OFFSET
	class USceneComponent*                             _rootComponent;                                           // 0x0338(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ItemDropPlaceholder");
		return ptr;
	}

};


// Class ConZ.ItemGroup
// 0x0010 (0x0040 - 0x0030)
class UItemGroup : public UDataAsset
{
public:
	TArray<class UClass*>                              Items;                                                    // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ItemGroup");
		return ptr;
	}

};


// Class ConZ.ItemSelection
// 0x0068 (0x0098 - 0x0030)
class UItemSelection : public UDataAsset
{
public:
	class UClass*                                      MainItem;                                                 // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UClass*>                              SupportItems;                                             // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<class UClass*>                              Attachments;                                              // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	class UTexture2D*                                  UnselectedIcon;                                           // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  SelectedIcon;                                             // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  DisabledIcon;                                             // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       SelectionName;                                            // 0x0070(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              SizeX;                                                    // 0x0088(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SizeY;                                                    // 0x008C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TeamIndex;                                                // 0x0090(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ItemSelection");
		return ptr;
	}

};


// Class ConZ.ItemSelectionSlotWidget
// 0x0000 (0x0220 - 0x0220)
class UItemSelectionSlotWidget : public UDesignableUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ItemSelectionSlotWidget");
		return ptr;
	}

};


// Class ConZ.ItemSpawnerComponent
// 0x0020 (0x02B0 - 0x0290)
class UItemSpawnerComponent : public USceneComponent
{
public:
	int                                                ItemSpawnLimit;                                           // 0x0290(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0294(0x0004) MISSED OFFSET
	TArray<struct FItemSpawnerMarker>                  SpawnerMarkers;                                           // 0x0298(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ItemSpawnerComponent");
		return ptr;
	}

};


// Class ConZ.ItemSpawnerGroup
// 0x0008 (0x0320 - 0x0318)
class AItemSpawnerGroup : public AActor
{
public:
	class UItemSpawnerComponent*                       SpawnerComponent;                                         // 0x0318(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ItemSpawnerGroup");
		return ptr;
	}

};


// Class ConZ.ItemSpawnerVolume
// 0x0010 (0x0360 - 0x0350)
class AItemSpawnerVolume : public AVolume
{
public:
	struct FItemLocation                               zone;                                                     // 0x0350(0x000C) (CPF_Edit)
	int                                                ItemSpawnLimit;                                           // 0x035C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ItemSpawnerVolume");
		return ptr;
	}

};


// Class ConZ.ItemSpawningManager
// 0x1718 (0x1A30 - 0x0318)
class AItemSpawningManager : public AActor
{
public:
	struct FExamineItemSpawnerData                     ExamineItemSpawnerDataForSimulation;                      // 0x0318(0x00A0) (CPF_Edit)
	unsigned char                                      UnknownData00[0x1678];                                    // 0x03B8(0x1678) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ItemSpawningManager");
		return ptr;
	}


	void SimulateExamineSpawner(int numIterations);
};


// Class ConZ.ItemSpawnerPreset
// 0x0070 (0x0098 - 0x0028)
class UItemSpawnerPreset : public UObject
{
public:
	struct FItemSpawnerData                            SpawnerData;                                              // 0x0028(0x0070) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ItemSpawnerPreset");
		return ptr;
	}

};


// Class ConZ.ItemUserWidget
// 0x0020 (0x0260 - 0x0240)
class UItemUserWidget : public UBaseItemWidget
{
public:
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x0240(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UUserWidget*                                 _uiBorder;                                                // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               _isSelected;                                              // 0x0258(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isHovered;                                               // 0x0259(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x025A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ItemUserWidget");
		return ptr;
	}


	void UpdateHighlightStatus();
	void SetItem(class AItem* Item);
	void SetImage(class UTexture2D* Image);
	void OnClicked__DelegateSignature(class UItemUserWidget* clickedWidget);
	void MarkAsWeaponWidget();
	void ItemPickedUpStateChanged(class AItem* Item, bool pickedUp);
	void InteractableDestroyed(class AActor* interactable);
	class AItem* GetItem();
	static class UItemUserWidget* CreateFromItem(class AItem* Item);
	void BlinkItemContainer();
};


// Class ConZ.LandingDamageType
// 0x0000 (0x0040 - 0x0040)
class ULandingDamageType : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.LandingDamageType");
		return ptr;
	}

};


// Class ConZ.LandingEffects
// 0x06D8 (0x0708 - 0x0030)
class ULandingEffects : public UDataAsset
{
public:
	float                                              MinImpactSpeedForLightEffects;                            // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinImpactSpeedForMediumEffects;                           // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinImpactSpeedForHeavyEffects;                            // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               ImpactAudioEvent;                                         // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLandingEffectDataPerPhysicalSurface        Default;                                                  // 0x0048(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        grass;                                                    // 0x0078(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        ForrestGroundCoastal;                                     // 0x00A8(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        ForrestGroundContinental;                                 // 0x00D8(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Rock;                                                     // 0x0108(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Stone;                                                    // 0x0138(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Gravel;                                                   // 0x0168(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        GravelBeach;                                              // 0x0198(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Pebbles;                                                  // 0x01C8(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Snow;                                                     // 0x01F8(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Ice;                                                      // 0x0228(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Sand;                                                     // 0x0258(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Asphalt;                                                  // 0x0288(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Dirt;                                                     // 0x02B8(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Water;                                                    // 0x02E8(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        WaterOcean;                                               // 0x0318(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Cloth;                                                    // 0x0348(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Metal;                                                    // 0x0378(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Aluminium;                                                // 0x03A8(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Concrete;                                                 // 0x03D8(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Brick;                                                    // 0x0408(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Wood;                                                     // 0x0438(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Plastic;                                                  // 0x0468(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Rubber;                                                   // 0x0498(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Glass;                                                    // 0x04C8(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Folliage;                                                 // 0x04F8(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Bark;                                                     // 0x0528(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Flesh;                                                    // 0x0558(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        RoofTile;                                                 // 0x0588(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        CeramicsTiles;                                            // 0x05B8(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Scrap;                                                    // 0x05E8(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Trunk;                                                    // 0x0618(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Leaves;                                                   // 0x0648(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Plaster;                                                  // 0x0678(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        Kevlar;                                                   // 0x06A8(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLandingEffectDataPerPhysicalSurface        ForceField;                                               // 0x06D8(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.LandingEffects");
		return ptr;
	}

};


// Class ConZ.LearnAnimalAction
// 0x0000 (0x01C0 - 0x01C0)
class ULearnAnimalAction : public UAnimalAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.LearnAnimalAction");
		return ptr;
	}

};


// Class ConZ.LeptospirosisDisease
// 0x0010 (0x01C0 - 0x01B0)
class ULeptospirosisDisease : public UDisease
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.LeptospirosisDisease");
		return ptr;
	}

};


// Class ConZ.LevelMarkers
// 0x0020 (0x0338 - 0x0318)
class ALevelMarkers : public AActor
{
public:
	TArray<struct FLadderMarker>                       LadderMarkers;                                            // 0x0318(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FWindowMarker>                       WindowMarkers;                                            // 0x0328(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.LevelMarkers");
		return ptr;
	}

};


// Class ConZ.LoadingIconWidget
// 0x0000 (0x0220 - 0x0220)
class ULoadingIconWidget : public UDesignableUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.LoadingIconWidget");
		return ptr;
	}

};


// Class ConZ.LoadingScreen
// 0x0008 (0x0228 - 0x0220)
class ULoadingScreen : public UDesignableUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.LoadingScreen");
		return ptr;
	}

};


// Class ConZ.MagnesiumDeficiency
// 0x0000 (0x01C0 - 0x01C0)
class UMagnesiumDeficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.MagnesiumDeficiency");
		return ptr;
	}

};


// Class ConZ.MainMenuGameMode
// 0x0060 (0x0460 - 0x0400)
class AMainMenuGameMode : public AGameMode
{
public:
	class UClass*                                      MainMenuClass;                                            // 0x0400(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UUserWidget>                  _currentWidget;                                           // 0x0408(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0410(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.MainMenuGameMode");
		return ptr;
	}


	void UpdatePreviewPrisoner(class APrisoner* Prisoner, class UDbUserProfile* profile);
	void UITransition(class UClass** newWidget);
};


// Class ConZ.MakeConsciousAction
// 0x0000 (0x01C0 - 0x01C0)
class UMakeConsciousAction : public UMedicalAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.MakeConsciousAction");
		return ptr;
	}

};


// Class ConZ.MakeUnconsciousAction
// 0x0000 (0x01C0 - 0x01C0)
class UMakeUnconsciousAction : public UMedicalAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.MakeUnconsciousAction");
		return ptr;
	}

};


// Class ConZ.MalariaDisease
// 0x0030 (0x01E0 - 0x01B0)
class UMalariaDisease : public UDisease
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x01B0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.MalariaDisease");
		return ptr;
	}

};


// Class ConZ.ManganeseDeficiency
// 0x0000 (0x01C0 - 0x01C0)
class UManganeseDeficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ManganeseDeficiency");
		return ptr;
	}

};


// Class ConZ.MechanoidsManager
// 0x0058 (0x0370 - 0x0318)
class AMechanoidsManager : public AActor
{
public:
	class UClass*                                      DroneSpawnClass;                                          // 0x0318(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SendDroneIntervalPerPlayer;                               // 0x0320(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DroneSpawnDistance;                                       // 0x0324(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DroneSpawnHeight;                                         // 0x0328(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DroneCheckForNearbyPlayerDistance;                        // 0x032C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   DronePatrolDistanceRange;                                 // 0x0330(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0338(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.MechanoidsManager");
		return ptr;
	}

};


// Class ConZ.MedicalBonusAction
// 0x0010 (0x01D0 - 0x01C0)
class UMedicalBonusAction : public UMedicalAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.MedicalBonusAction");
		return ptr;
	}

};


// Class ConZ.MedicalDiagnosisAction
// 0x0000 (0x01C0 - 0x01C0)
class UMedicalDiagnosisAction : public UMedicalAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.MedicalDiagnosisAction");
		return ptr;
	}

};


// Class ConZ.MedicalItemTag
// 0x0000 (0x0030 - 0x0030)
class UMedicalItemTag : public UBaseItemTag
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.MedicalItemTag");
		return ptr;
	}

};


// Class ConZ.MedicalSkill
// 0x0070 (0x0108 - 0x0098)
class UMedicalSkill : public UIntelligenceSkill
{
public:
	class UMedicalItemTag*                             PatchLightWoundsTag;                                      // 0x0098(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMedicalItemTag*                             PatchSevereWoundsTag;                                     // 0x00A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMedicalItemTag*                             ImmobilizeLimbsTag;                                       // 0x00A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMedicalItemTag*                             MendBonesTag;                                             // 0x00B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMedicalItemTag*                             PullToothTag;                                             // 0x00B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMedicalItemTag*                             PerformLocalAnesthesiaTag;                                // 0x00C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMedicalItemTag*                             PerformGeneralAnesthesiaTag;                              // 0x00C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMedicalItemTag*                             PerformSurgeryTag;                                        // 0x00D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x00D8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.MedicalSkill");
		return ptr;
	}

};


// Class ConZ.MedicationItem
// 0x0000 (0x0780 - 0x0780)
class AMedicationItem : public AItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.MedicationItem");
		return ptr;
	}

};


// Class ConZ.MedicationItemSpawner
// 0x0020 (0x03B8 - 0x0398)
class AMedicationItemSpawner : public AItemSpawner
{
public:
	TArray<class UClass*>                              Items;                                                    // 0x0398(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class UItemGroup*>                          ItemGroups;                                               // 0x03A8(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.MedicationItemSpawner");
		return ptr;
	}

};


// Class ConZ.MeleeAttackCollisionCapsule
// 0x0030 (0x06C0 - 0x0690)
class UMeleeAttackCollisionCapsule : public UCapsuleComponent
{
public:
	struct FGameplayTag                                _attachment;                                              // 0x0690(0x0008) (CPF_Edit)
	struct FMeleeWeaponDesc                            _weaponDesc;                                              // 0x0698(0x0028) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.MeleeAttackCollisionCapsule");
		return ptr;
	}

};


// Class ConZ.MeleeCombatComponent
// 0x01B0 (0x02A0 - 0x00F0)
class UMeleeCombatComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x14C];                                     // 0x00F0(0x014C) MISSED OFFSET
	struct FMeleeAction                                _currentMeleeAction;                                      // 0x023C(0x0024) (CPF_Net)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0260(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.MeleeCombatComponent");
		return ptr;
	}


	void ToggleCombatMode();
	void SetIsInCombatMode(bool Value);
	void Server_StartMeleeAttack(const struct FMeleeAction& action);
	void Server_EnablePendingBlockOrDodge(bool Value);
	void Server_Dodge(const struct FMeleeAction& action);
	void OnRep_CurrentMeleeAction();
	bool IsHoldingBlock();
	bool GetIsInCombatMode();
};


// Class ConZ.MeleeDamageType
// 0x0000 (0x0040 - 0x0040)
class UMeleeDamageType : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.MeleeDamageType");
		return ptr;
	}

};


// Class ConZ.MeleeDetectHitCollisionCapsule
// 0x0010 (0x06A0 - 0x0690)
class UMeleeDetectHitCollisionCapsule : public UCapsuleComponent
{
public:
	EDetectHitCollisionType                            DetectHitCollisionType;                                   // 0x0690(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0691(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.MeleeDetectHitCollisionCapsule");
		return ptr;
	}

};


// Class ConZ.MeleeInterface
// 0x0000 (0x0028 - 0x0028)
class UMeleeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.MeleeInterface");
		return ptr;
	}


	void OnBeingAttackedByMelee(const struct FAttackedByMeleeData& Data);
	bool CheckMeleeAttackCapsuleCollision(const struct FCheckMeleeAttackCapsuleCollisionData& Data);
	bool CanHoldBlock();
};


// Class ConZ.MeleeSkillAnimationsPreset
// 0x04C0 (0x04F0 - 0x0030)
class UMeleeSkillAnimationsPreset : public UDataAsset
{
public:
	struct FMeleeSkillAnimations                       NoSkillAnimations;                                        // 0x0030(0x0098) (CPF_Edit)
	struct FMeleeSkillAnimations                       BasicSkillAnimations;                                     // 0x00C8(0x0098) (CPF_Edit)
	struct FMeleeSkillAnimations                       MediumSkillAnimations;                                    // 0x0160(0x0098) (CPF_Edit)
	struct FMeleeSkillAnimations                       AdvancedSkillAnimations;                                  // 0x01F8(0x0098) (CPF_Edit)
	struct FMeleeSkillParametersPerSkillLevel          NoSkillParameters;                                        // 0x0290(0x0098) (CPF_Edit)
	struct FMeleeSkillParametersPerSkillLevel          BasicSkillParameters;                                     // 0x0328(0x0098) (CPF_Edit)
	struct FMeleeSkillParametersPerSkillLevel          MediumSkillParameters;                                    // 0x03C0(0x0098) (CPF_Edit)
	struct FMeleeSkillParametersPerSkillLevel          AdvancedSkillParameters;                                  // 0x0458(0x0098) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.MeleeSkillAnimationsPreset");
		return ptr;
	}

};


// Class ConZ.MeleeWeaponItemTag
// 0x0008 (0x0038 - 0x0030)
class UMeleeWeaponItemTag : public UBaseItemTag
{
public:
	float                                              CombatAnimationPlayRateModifier;                          // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StrengthBelowWhichCombatPerformanceBeginsToDrop;          // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.MeleeWeaponItemTag");
		return ptr;
	}

};


// Class ConZ.MeleeWeaponsSkill
// 0x0000 (0x00B0 - 0x00B0)
class UMeleeWeaponsSkill : public UMeleeSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.MeleeWeaponsSkill");
		return ptr;
	}

};


// Class ConZ.MeningitisDisease
// 0x0000 (0x01B0 - 0x01B0)
class UMeningitisDisease : public UDisease
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.MeningitisDisease");
		return ptr;
	}

};


// Class ConZ.MenuHelpers
// 0x0038 (0x0068 - 0x0030)
class UMenuHelpers : public UDataAsset
{
public:
	class UClass*                                      MainMenuClass;                                            // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      ServerBrowserClass;                                       // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      OptionsClass;                                             // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      AdvancedOptionsClass;                                     // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      CharacterCreationClass;                                   // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      CharacterSelectionClass;                                  // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      CharacterCreationSecondIterationClass;                    // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.MenuHelpers");
		return ptr;
	}

};


// Class ConZ.MenuPlayerController
// 0x0000 (0x0670 - 0x0670)
class AMenuPlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.MenuPlayerController");
		return ptr;
	}


	void InputComponent_MouseReleased();
	void InputComponent_MousePressed();
};


// Class ConZ.Mountable
// 0x0000 (0x0028 - 0x0028)
class UMountable : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Mountable");
		return ptr;
	}


	void Eject();
};


// Class ConZ.NativeWindowsContent
// 0x0008 (0x0228 - 0x0220)
class UNativeWindowsContent : public UDesignableUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.NativeWindowsContent");
		return ptr;
	}


	void TestText();
	void SetParentWindow(class UUserWidget* _parentWindow);
	class UUserWidget* GetParentWindow();
};


// Class ConZ.NightVisionGogglesItem
// 0x0030 (0x0820 - 0x07F0)
class ANightVisionGogglesItem : public AClothesItem
{
public:
	class UAkAudioEvent*                               ActivatedSound;                                           // 0x07F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               DeactivatedSound;                                         // 0x07F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    ActivatedChanged;                                         // 0x0800(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	bool                                               _isActivated;                                             // 0x0810(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0811(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.NightVisionGogglesItem");
		return ptr;
	}


	void SetActivatedOnServer(bool Value);
	void OnRep_Activated();
	void ActivatedChangedEvent__DelegateSignature(class ANightVisionGogglesItem* sender);
};


// Class ConZ.NotificationWidget
// 0x0008 (0x0228 - 0x0220)
class UNotificationWidget : public UDesignableUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.NotificationWidget");
		return ptr;
	}

};


// Class ConZ.NotificationPanelWidget
// 0x0000 (0x0220 - 0x0220)
class UNotificationPanelWidget : public UDesignableUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.NotificationPanelWidget");
		return ptr;
	}


	void ShowNotification(class UNotificationWidget* notification);
	void ClearAllNotifications();
};


// Class ConZ.ObjectSelectionContainerWidget
// 0x0040 (0x0298 - 0x0258)
class UObjectSelectionContainerWidget : public UBaseItemContainerWidget
{
public:
	unsigned char                                      MaxWidth;                                                 // 0x0258(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MaxHeight;                                                // 0x0259(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x025A(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDoubleClickedOnHeader;                                  // 0x0260(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0270(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ObjectSelectionContainerWidget");
		return ptr;
	}


	bool HasItem(class AItem* Item);
	void DoubleClickedOnHeaderDelegate__DelegateSignature(class UObjectSelectionContainerWidget* Widget);
	void Close();
};


// Class ConZ.OpenItemAction
// 0x0010 (0x01D0 - 0x01C0)
class UOpenItemAction : public UInteractionAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.OpenItemAction");
		return ptr;
	}

};


// Class ConZ.InputDataAsset
// 0x0020 (0x0050 - 0x0030)
class UInputDataAsset : public UDataAsset
{
public:
	TArray<struct FInputActionKeyMapping>              ActionMappings;                                           // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FInputAxisKeyMapping>                AxisMappings;                                             // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.InputDataAsset");
		return ptr;
	}

};


// Class ConZ.OptionsWidget
// 0x0020 (0x0240 - 0x0220)
class UOptionsWidget : public UDesignableUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0220(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.OptionsWidget");
		return ptr;
	}


	void SetMouseSensitivity(EMouseSensitivityMode mode, float Value);
	void SetInvertMouseY(bool invert);
	void RevertControlChanges();
	void ResetControlsToDefault();
	struct FString GetResolutionStringFormatted(const struct FString& string);
	float GetMouseSensitivity(EMouseSensitivityMode mode);
	TArray<struct FInputAxisKeyMapping> GetAxisMappings();
	struct FInputAxisKeyMapping GetAxisMappingForAxisName(const struct FName& AxisName, float Scale);
	TArray<struct FInputActionKeyMapping> GetActionMappings();
	struct FInputActionKeyMapping GetActionMappingForActionName(const struct FName& ActionName);
	void ChangeAxisMapping(const struct FName& AxisName, const struct FKey& Key, float Scale);
	void ChangeActionMapping(const struct FName& ActionName, const struct FKey& Key);
	void ApplyControlChanges();
};


// Class ConZ.OverdoseSickness
// 0x0008 (0x01B8 - 0x01B0)
class UOverdoseSickness : public USickness
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.OverdoseSickness");
		return ptr;
	}

};


// Class ConZ.OvereatingSickness
// 0x0030 (0x01E0 - 0x01B0)
class UOvereatingSickness : public USickness
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x01B0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.OvereatingSickness");
		return ptr;
	}

};


// Class ConZ.PacifyAnimalAction
// 0x0000 (0x01C0 - 0x01C0)
class UPacifyAnimalAction : public UAnimalAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PacifyAnimalAction");
		return ptr;
	}

};


// Class ConZ.PatchWoundsAction
// 0x0010 (0x01D0 - 0x01C0)
class UPatchWoundsAction : public UMedicalAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PatchWoundsAction");
		return ptr;
	}

};


// Class ConZ.PAX_GameEventManager
// 0x0048 (0x03A0 - 0x0358)
class APAX_GameEventManager : public AGameEventManager
{
public:
	class AGameEventLocationMarker*                    EventMarker;                                              // 0x0358(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeBetweenEvents;                                        // 0x0360(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ForceJoinOnEventStart;                                    // 0x0364(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	class UClass*                                      ShootingRangeTableClass;                                  // 0x0368(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ADropZoneEquipmentTable*                     ShootingRangeTable;                                       // 0x0370(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ShootingRangeTableOffset;                                 // 0x0378(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x0384(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PAX_GameEventManager");
		return ptr;
	}


	void ForceUnjoinedParticipantsIntoEvent();
};


// Class ConZ.PerformAnesthesiaAction
// 0x0000 (0x01C0 - 0x01C0)
class UPerformAnesthesiaAction : public UMedicalAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PerformAnesthesiaAction");
		return ptr;
	}

};


// Class ConZ.PerformSurgeryAction
// 0x0000 (0x01C0 - 0x01C0)
class UPerformSurgeryAction : public UMedicalAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PerformSurgeryAction");
		return ptr;
	}

};


// Class ConZ.PhosphorusDeficiency
// 0x0000 (0x01C0 - 0x01C0)
class UPhosphorusDeficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PhosphorusDeficiency");
		return ptr;
	}

};


// Class ConZ.PhysicalSurfacesData
// 0x01C8 (0x01F8 - 0x0030)
class UPhysicalSurfacesData : public UDataAsset
{
public:
	struct FPhysicalSurfaceData                        Default;                                                  // 0x0030(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        grass;                                                    // 0x003C(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        ForrestGroundCoastal;                                     // 0x0048(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        ForrestGroundContinental;                                 // 0x0054(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Rock;                                                     // 0x0060(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Stone;                                                    // 0x006C(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Gravel;                                                   // 0x0078(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        GravelBeach;                                              // 0x0084(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Pebbles;                                                  // 0x0090(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Snow;                                                     // 0x009C(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Ice;                                                      // 0x00A8(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Sand;                                                     // 0x00B4(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Asphalt;                                                  // 0x00C0(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Dirt;                                                     // 0x00CC(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Water;                                                    // 0x00D8(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        WaterOcean;                                               // 0x00E4(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Cloth;                                                    // 0x00F0(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Metal;                                                    // 0x00FC(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Aluminium;                                                // 0x0108(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Concrete;                                                 // 0x0114(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Brick;                                                    // 0x0120(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Wood;                                                     // 0x012C(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Plastic;                                                  // 0x0138(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Rubber;                                                   // 0x0144(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Glass;                                                    // 0x0150(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Foliage;                                                  // 0x015C(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Bark;                                                     // 0x0168(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Flesh;                                                    // 0x0174(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        RoofTile;                                                 // 0x0180(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        CeramicTiles;                                             // 0x018C(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Scrap;                                                    // 0x0198(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Trunk;                                                    // 0x01A4(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Leaves;                                                   // 0x01B0(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Fruit;                                                    // 0x01BC(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Cardboard;                                                // 0x01C8(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Plaster;                                                  // 0x01D4(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        Kevlar;                                                   // 0x01E0(0x000C) (CPF_Edit)
	struct FPhysicalSurfaceData                        ForceField;                                               // 0x01EC(0x000C) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PhysicalSurfacesData");
		return ptr;
	}

};


// Class ConZ.PickupItemAction
// 0x0000 (0x01C0 - 0x01C0)
class UPickupItemAction : public UInteractionAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PickupItemAction");
		return ptr;
	}

};


// Class ConZ.PickupItemAssetData
// 0x0008 (0x0038 - 0x0030)
class UPickupItemAssetData : public UInteractionAssetData
{
public:
	class UClass*                                      Item;                                                     // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PickupItemAssetData");
		return ptr;
	}

};


// Class ConZ.PlayEffectsWhenParticleCollides
// 0x0008 (0x0030 - 0x0028)
class UPlayEffectsWhenParticleCollides : public UParticleModuleEventSendToGame
{
public:
	class UProjectileImpactEffects*                    ImpactEffects;                                            // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PlayEffectsWhenParticleCollides");
		return ptr;
	}

};


// Class ConZ.PotassiumDeficiency
// 0x0000 (0x01C0 - 0x01C0)
class UPotassiumDeficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PotassiumDeficiency");
		return ptr;
	}

};


// Class ConZ.PowerGenerator
// 0x0068 (0x0380 - 0x0318)
class APowerGenerator : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET
	TArray<class ADoor*>                               AttachedDoors;                                            // 0x0320(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<class AElectricalDevice*>                   AttachedDevices;                                          // 0x0330(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<class AFuelTank*>                           FuelTanks;                                                // 0x0340(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	float                                              IdleFuelConsumption;                                      // 0x0350(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxFuelConsumption;                                       // 0x0354(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxOutputPower;                                           // 0x0358(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TickFrequency;                                            // 0x035C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0360(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAudioComponent*                             SoundComponent;                                           // 0x0368(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             _rootComponent;                                           // 0x0370(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               _canWork;                                                 // 0x0378(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isWorking;                                               // 0x0379(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x037A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PowerGenerator");
		return ptr;
	}


	void OnRep_IsWorking();
};


// Class ConZ.PreviousNextSwitchWidget
// 0x0030 (0x0250 - 0x0220)
class UPreviousNextSwitchWidget : public UDesignableUserWidget
{
public:
	struct FScriptMulticastDelegate                    IndexChanged;                                             // 0x0220(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UButton*                                     PreviousButton;                                           // 0x0230(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UButton*                                     NextButton;                                               // 0x0238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0240(0x0008) MISSED OFFSET
	int                                                _index;                                                   // 0x0248(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x024C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PreviousNextSwitchWidget");
		return ptr;
	}


	void OnSwitchClickedDelegate__DelegateSignature(int widgetArrayIndex, int Index);
	void OnPreviousClicked();
	void OnNextClicked();
};


// Class ConZ.Prisoner
// 0x1550 (0x1D80 - 0x0830)
class APrisoner : public AConZCharacter
{
public:
	class UPrisonerLifeComponent*                      LifeComponent;                                            // 0x0830(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPrisonerSkillComponent*                     SkillComponent;                                           // 0x0838(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPrisonerInventoryComponent*                 InventoryComponent;                                       // 0x0840(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UMeleeCombatComponent*                       MeleeCombatComponent;                                     // 0x0848(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UHitReactComponent*                          HitReactComponent;                                        // 0x0850(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPhysicalAnimationComponent*                 PhysicalAnimationComponent;                               // 0x0858(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UInteractionComponent*                       InteractionComponent;                                     // 0x0860(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPawnSensingComponent*                       SensingComponent;                                         // 0x0868(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              MaxActorEyesOffsetWhenLeaning;                            // 0x0870(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumberOfCrouchStages;                                     // 0x0874(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CrouchStagesInterpSpeed;                                  // 0x0878(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x087C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 CrouchViewsAdditionalGlobalOffsetZVsCrouchStage;          // 0x0880(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ProneEyeHeight;                                           // 0x0888(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ProneEyeForwardOffset;                                    // 0x088C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EPrisonerMovementPace                              DefaultPace;                                              // 0x0890(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0891(0x0007) MISSED OFFSET
	class UPrisonerMovementSettings*                   MovementSettings;                                         // 0x0898(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Fatness;                                                  // 0x08A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Leanness;                                                 // 0x08A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IgnoreMovementSettings;                                   // 0x08A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OverrideAimOffset;                                        // 0x08A9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x08AA(0x0002) MISSED OFFSET
	struct FRotator                                    AimOffsetOverride;                                        // 0x08AC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              DefaultViewBlendDuration;                                 // 0x08B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x08BC(0x0004) MISSED OFFSET
	class AActor*                                      EyesLookAtTargetOverride;                                 // 0x08C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinEyesRotationYaw;                                       // 0x08C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxEyesRotationYaw;                                       // 0x08CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinEyesRotationPitch;                                     // 0x08D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxEyesRotationPitch;                                     // 0x08D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 MinEyesRotationPitchCurve;                                // 0x08D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 MaxEyesRotationPitchCurve;                                // 0x08E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EyesRotationSpeed;                                        // 0x08E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DebugEyesRotation;                                        // 0x08EC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OverrideEyesRotation;                                     // 0x08ED(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x08EE(0x0002) MISSED OFFSET
	float                                              EyesYawDeltaOverride;                                     // 0x08F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EyesPitchDeltaOverride;                                   // 0x08F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstance*                           StandardUndershirtMaterial;                               // 0x08F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstance*                           DeluxeUndershirtMaterial;                                 // 0x0900(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LandingImpactSpeedVelocityXYWeight;                       // 0x0908(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LandingImpactSpeedVelocityZWeight;                        // 0x090C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 LandingStaminaDrainCurve;                                 // 0x0910(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 LandingImpactSpeedModifierCurveForHitReact;               // 0x0918(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 LandingImpactSpeedModifierCurveForDamage;                 // 0x0920(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 LandingDamageCurve;                                       // 0x0928(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ULandingEffects*                             LandingEffects;                                           // 0x0930(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LandingImpactSpeedForRagdoll;                             // 0x0938(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LandingMinRagdollDuration;                                // 0x093C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LandingMaxRagdollDuration;                                // 0x0940(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LandingRagdollDurationPerSpeedUnit;                       // 0x0944(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystem*                             WaterParticlesWhenIdle;                                   // 0x0948(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystem*                             WaterParticlesWhenIdleInOcean;                            // 0x0950(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystem*                             WaterParticlesWhenMoving;                                 // 0x0958(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystem*                             WaterParticlesWhenMovingInOcean;                          // 0x0960(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystem*                             WaterParticlesWhenDiving;                                 // 0x0968(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       WaterParticlesWhenDivingAttachPointName;                  // 0x0970(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystem*                             WaterContactParticles;                                    // 0x0978(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       WaterContactParticlesAttachPointName;                     // 0x0980(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinVelocityZToSpawnWaterContactParticles;                 // 0x0988(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x098C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DrowningAccelerationVsGearWeightLimitDeviation;           // 0x0990(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StartedDivingAudioEvent;                                  // 0x0998(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StoppedDivingAudioEvent;                                  // 0x09A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxHeadWaterWeight;                                       // 0x09A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxUpperBodyWaterWeight;                                  // 0x09AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxLowerBodyWaterWeight;                                  // 0x09B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxFeetWaterWeight;                                       // 0x09B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutwardsWaterPropagationFactor;                           // 0x09B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InwardsWaterPropagationRate;                              // 0x09BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutwardsWaterPropagationRate;                             // 0x09C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x09C4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 GettingDryRateVsSpeed;                                    // 0x09C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystem*                             SmallBleedingEffect;                                      // 0x09D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystem*                             LargeBleedingEffect;                                      // 0x09D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystem*                             UrineParticles;                                           // 0x09E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       UrineParticlesAttachPointName;                            // 0x09E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DetectNearbyFoliageRadius;                                // 0x09F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinLocationDeltaToUpdateNearbyFoliage;                    // 0x09F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinSpeedToTriggerMovingThroughFoliageEffects;             // 0x09F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinAngularSpeedToTriggerMovingThroughFoliageEffects;      // 0x09FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               OpenInventoryAudioEvent;                                  // 0x0A00(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               CloseInventoryAudioEvent;                                 // 0x0A08(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsFriendly;                                               // 0x0A10(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0A11(0x0007) MISSED OFFSET
	struct FGameplayTag                                HitReactTypeWhenStanding;                                 // 0x0A18(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTag                                HitReactTypeWhenStandingInCombatMode;                     // 0x0A20(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTag                                HitReactTypeWhenStandingInCombatModeAndHoldingBlock;      // 0x0A28(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTag                                HitReactTypeWhenCrouching;                                // 0x0A30(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTag                                HitReactTypeWhenProne;                                    // 0x0A38(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTag                                MeleeAttackCapsulesAttachmentForItemInLHand;              // 0x0A40(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FGameplayTag                                MeleeAttackCapsulesAttachmentForItemInRHand;              // 0x0A48(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FPrisonerMeleeAttackTypes                   MeleeAttackTypes;                                         // 0x0A50(0x0080) (CPF_Edit, CPF_BlueprintVisible)
	float                                              MeleeTargetMaxDistance;                                   // 0x0AD0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MeleeTargetMaxHeightDifference;                           // 0x0AD4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 MeleeTargetMaxConeHalfAngleVsDistanceToTarget;            // 0x0AD8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeSpanAfterWhichMeleeAttacksBecomeInitial;              // 0x0AE0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanEverBeKnockedOutByMeleeAttack;                         // 0x0AE4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0AE5(0x0003) MISSED OFFSET
	TMap<EDamageMagnitudeType, float>                  MeleeHitRagdollImpulseByDamageMagnitudeType;              // 0x0AE8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              DefaultMeleeHitRagdollImpulse;                            // 0x0B38(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ThrowModeActivationDelay;                                 // 0x0B3C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ThrowLaunchLocationSocketName;                            // 0x0B40(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IslandBoundsCheckInterval;                                // 0x0B48(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShouldOverrideCharacterTemplate;                          // 0x0B4C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0B4D(0x0003) MISSED OFFSET
	struct FCharacterTemplate                          CharacterTemplateOverride;                                // 0x0B50(0x0088) (CPF_Edit)
	struct FAttachmentSocket                           LeftHandAttachmentSocket;                                 // 0x0BD8(0x0010) (CPF_Edit)
	struct FAttachmentSocket                           RightHandAttachmentSocket;                                // 0x0BE8(0x0010) (CPF_Edit)
	struct FAttachmentSocket                           LeftShoulderHolsterSocket;                                // 0x0BF8(0x0010) (CPF_Edit)
	struct FAttachmentSocket                           RightShoulderHolsterSocket;                               // 0x0C08(0x0010) (CPF_Edit)
	class UPhysicalSurfacesData*                       PhysicalSurfacesData;                                     // 0x0C18(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    InteractedWithObject;                                     // 0x0C20(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class URespawnPrices*                              RespawnPrices;                                            // 0x0C30(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               RespawnOnKill;                                            // 0x0C38(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0C39(0x0003) MISSED OFFSET
	float                                              IKOffsetLeftFoot;                                         // 0x0C3C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IKOffsetRightFoot;                                        // 0x0C40(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0C44(0x0004) MISSED OFFSET
	class UClass*                                      _deluxeWristwatchClass;                                   // 0x0C48(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EPrisonerBorderCrossingPenalty                     BorderCrossingPenalty;                                    // 0x0C50(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0C51(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    BorderCrossingPenaltyChange;                              // 0x0C58(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData13[0xF8];                                      // 0x0C68(0x00F8) MISSED OFFSET
	TArray<class USkeletalMesh*>                       _headMeshes;                                              // 0x0D60(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<class UMaterialInstance*>                   _skinMaterials;                                           // 0x0D70(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FLinearColor>                        _skinColors;                                              // 0x0D80(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FLinearColor>                        _skinColorsAA;                                            // 0x0D90(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<class UTexture2D*>                          _headTattoos;                                             // 0x0DA0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<class UTexture2D*>                          _bodyTattoos;                                             // 0x0DB0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                DeluxeTattooCount;                                        // 0x0DC0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isFaded;                                                 // 0x0DC4(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0DC5(0x0003) MISSED OFFSET
	TMap<EPrisonerBorderCrossingPenalty, float>        _leavingTheIslandPenaltyTimes;                            // 0x0DC8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      UnknownData15[0x8];                                       // 0x0E18(0x0008) MISSED OFFSET
	class UMaterialInstance*                           _itemPlacingMaterialAllowed;                              // 0x0E20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstance*                           _itemPlacingMaterialDisallowed;                           // 0x0E28(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 _fadeCurve;                                               // 0x0E30(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _ikInterpSpeed;                                           // 0x0E38(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0E3C(0x0004) MISSED OFFSET
	class UMaterialParameterCollection*                _commonParameterCollection;                               // 0x0E40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData17[0x8];                                       // 0x0E48(0x0008) MISSED OFFSET
	class UDbUserProfile*                              _userProfile;                                             // 0x0E50(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     _userId;                                                  // 0x0E58(0x0010) (CPF_Net, CPF_ZeroConstructor)
	struct FString                                     _userProfileName;                                         // 0x0E68(0x0010) (CPF_Net, CPF_ZeroConstructor)
	unsigned char                                      UnknownData18[0xD0];                                      // 0x0E78(0x00D0) MISSED OFFSET
	class UParticleSystemComponent*                    _waterParticlesComponentWhenIdle;                         // 0x0F48(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    _waterParticlesComponentWhenMoving;                       // 0x0F50(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    _waterParticlesComponentWhenDiving;                       // 0x0F58(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData19[0x14];                                      // 0x0F60(0x0014) MISSED OFFSET
	float                                              _targetCrouchStage;                                       // 0x0F74(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EPrisonerMovementPace                              _desiredPace;                                             // 0x0F78(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData20[0x1];                                       // 0x0F79(0x0001) MISSED OFFSET
	bool                                               _freeLookEnabled;                                         // 0x0F7A(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData21[0x25];                                      // 0x0F7B(0x0025) MISSED OFFSET
	bool                                               _postFreeLookControllerRotationBlendActive;               // 0x0FA0(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x0FA1(0x0003) MISSED OFFSET
	struct FRotator                                    _aimOffset;                                               // 0x0FA4(0x000C) (CPF_Net, CPF_IsPlainOldData)
	unsigned char                                      UnknownData23[0x44];                                      // 0x0FB0(0x0044) MISSED OFFSET
	struct FVector                                     _lastSafeLocation;                                        // 0x0FF4(0x000C) (CPF_Net, CPF_IsPlainOldData)
	class APrisonerCorpse*                             _lastCorpse;                                              // 0x1000(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData24[0xC];                                       // 0x1008(0x000C) MISSED OFFSET
	float                                              _targetLeanAmount;                                        // 0x1014(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData25[0x718];                                     // 0x1018(0x0718) MISSED OFFSET
	EPrisonerMeleeTargetSelectionMode                  _meleeTargetSelectionMode;                                // 0x1730(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData26[0x7];                                       // 0x1731(0x0007) MISSED OFFSET
	class AActor*                                      _meleeTarget;                                             // 0x1738(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData27[0x8];                                       // 0x1740(0x0008) MISSED OFFSET
	class UMeleeSkill*                                 _activeMeleeSkill;                                        // 0x1748(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData28[0x10];                                      // 0x1750(0x0010) MISSED OFFSET
	class UUnarmedCombatInputRedirector*               _unarmedCombatInputRedirector;                            // 0x1760(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USkillEventHandler*                          _skillEventHandler;                                       // 0x1768(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData29[0x20];                                      // 0x1770(0x0020) MISSED OFFSET
	struct FName                                       _weaponSocketName;                                        // 0x1790(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       _weaponHolsterSocketName;                                 // 0x1798(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AWeapon*                                     _weapon;                                                  // 0x17A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AItem*                                       _itemInHands;                                             // 0x17A8(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData30[0x1B];                                      // 0x17B0(0x001B) MISSED OFFSET
	EWeaponAimingType                                  _weaponAimingType;                                        // 0x17CB(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData31[0x4];                                       // 0x17CC(0x0004) MISSED OFFSET
	class UAnimMontage*                                _swapWeapons;                                             // 0x17D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _swapItemsNotWeaponToNotWeapon;                           // 0x17D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _swapItemsWeaponToWeapon;                                 // 0x17E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _swapItemsNotWeaponToWeapon;                              // 0x17E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _swapItemsWeaponToNotWeapon;                              // 0x17F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _equipRifleStanding;                                      // 0x17F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _unequipRifleStanding;                                    // 0x1800(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _equipHandgunStanding;                                    // 0x1808(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _unequipHadgunStanding;                                   // 0x1810(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _urinateMontage;                                          // 0x1818(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _urinateForcedMontage;                                    // 0x1820(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _defecateMontage;                                         // 0x1828(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _defecateForcedMontage;                                   // 0x1830(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _vomitMontage;                                            // 0x1838(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _vomitForcedMontage;                                      // 0x1840(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _searchObject;                                            // 0x1848(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _searchObjectWhileItemInHands;                            // 0x1850(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _searchObjectWhileWeaponInHands;                          // 0x1858(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _searchPrisoner;                                          // 0x1860(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _patchWoundsStanding;                                     // 0x1868(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _patchWoundsCrouching;                                    // 0x1870(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _patchWoundsProne;                                        // 0x1878(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _patchWoundsStandingEnd;                                  // 0x1880(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _patchWoundsCrouchingEnd;                                 // 0x1888(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _patchWoundsProneEnd;                                     // 0x1890(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _eatStanding;                                             // 0x1898(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _eatCrouching;                                            // 0x18A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _drinkFromBottleStanding;                                 // 0x18A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _drinkFromBottleCrouching;                                // 0x18B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _drinkInteraction;                                        // 0x18B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _throwMontage;                                            // 0x18C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _chopTreeStanding;                                        // 0x18C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _chopTreeStandingEnd;                                     // 0x18D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _chopLogStanding;                                         // 0x18D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _chopLogStandingEnd;                                      // 0x18E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _craftStanding;                                           // 0x18E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _craftCrouching;                                          // 0x18F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _craftProne;                                              // 0x18F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _uncraftStanding;                                         // 0x1900(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _uncraftCrouching;                                        // 0x1908(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _uncraftProne;                                            // 0x1910(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _checkTime;                                               // 0x1918(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _checkTimeWhileItemInHands;                               // 0x1920(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                _checkTimeWhileWeaponInHands;                             // 0x1928(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData32[0xAC];                                      // 0x1930(0x00AC) MISSED OFFSET
	float                                              _respawnTime;                                             // 0x19DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData33[0x20];                                      // 0x19E0(0x0020) MISSED OFFSET
	int                                                _headIndex;                                               // 0x1A00(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                _skinColorIndex;                                          // 0x1A04(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                _headTattooIndex;                                         // 0x1A08(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                _bodyTattooIndex;                                         // 0x1A0C(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData34[0x20];                                      // 0x1A10(0x0020) MISSED OFFSET
	bool                                               _isInCombatMode;                                          // 0x1A30(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EThrowingMode                                      _throwingMode;                                            // 0x1A31(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData35[0x5E];                                      // 0x1A32(0x005E) MISSED OFFSET
	class AItem*                                       _leftShoulderHolsteredItemReplicated;                     // 0x1A90(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData36[0x8];                                       // 0x1A98(0x0008) MISSED OFFSET
	class AItem*                                       _rightShoulderHolsteredItemReplicated;                    // 0x1AA0(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData37[0x48];                                      // 0x1AA8(0x0048) MISSED OFFSET
	TArray<class UCircularMenuSegmentInfo*>            _selfInteractionSegmentInfo;                              // 0x1AF0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData38[0x8];                                       // 0x1B00(0x0008) MISSED OFFSET
	struct FTimerHandle                                _interactDefaultContextMenuTimerHandle;                   // 0x1B08(0x0008)
	TArray<class APrisoner*>                           _examinedBy;                                              // 0x1B10(0x0010) (CPF_Net, CPF_ZeroConstructor)
	class UMaterialInstanceDynamic*                    _tacticsBlobMaterial;                                     // 0x1B20(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UParticleSystemComponent*>            _bodyPartEffects;                                         // 0x1B28(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	unsigned char                                      UnknownData39[0xC];                                       // 0x1B38(0x000C) MISSED OFFSET
	TWeakObjectPtr<class AItemDropPlaceholder>         _itemDropPlaceholder;                                     // 0x1B44(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class AItem>                        _currentlyDroppingItem;                                   // 0x1B4C(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData40[0x4];                                       // 0x1B54(0x0004) MISSED OFFSET
	TArray<class UCharacterAction*>                    _actionsList;                                             // 0x1B58(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	unsigned char                                      UnknownData41[0x30];                                      // 0x1B68(0x0030) MISSED OFFSET
	uint32_t                                           _packedWaterWeight;                                       // 0x1B98(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData42[0x4];                                       // 0x1B9C(0x0004) MISSED OFFSET
	class AActor*                                      _mount;                                                   // 0x1BA0(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AGameEventBase*                              _gameEvent;                                               // 0x1BA8(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrisonerLoadout*                            _gameEventLoadout;                                        // 0x1BB0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData43[0x10];                                      // 0x1BB8(0x0010) MISSED OFFSET
	struct FPrisonerNearbyFoliageInfo                  _nearbyFoliageInfo;                                       // 0x1BC8(0x0010)
	unsigned char                                      UnknownData44[0x158];                                     // 0x1BD8(0x0158) MISSED OFFSET
	class UWidgetComponent*                            _nameWidgetComponent;                                     // 0x1D30(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                _chipLightColorIndex;                                     // 0x1D38(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData45[0x4];                                       // 0x1D3C(0x0004) MISSED OFFSET
	class UBaseItemTag*                                SaveSpawnLocationTag;                                     // 0x1D40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData46[0x1C];                                      // 0x1D48(0x001C) MISSED OFFSET
	bool                                               _isDeluxePlayer;                                          // 0x1D64(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isTalking;                                               // 0x1D65(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData47[0x2];                                       // 0x1D66(0x0002) MISSED OFFSET
	float                                              _dedicatedServerHandleFootstepInterval;                   // 0x1D68(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData48[0x14];                                      // 0x1D6C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Prisoner");
		return ptr;
	}


	void UpdateZoomEffect(float Fraction);
	void UpdateWristwatchVisibility();
	void UpdateMaterialsFadeAmount(float fadeAmount);
	void UpdateChipLightColorIndex();
	void Unmount();
	void Unhide();
	void TryInteractDefault();
	void ToggleWantsToHoldBlock();
	void ToggleEventsPanel();
	void ToggleCraftingPanel();
	void TeleportToRandomPlayerStart();
	void TeleportToPlayer(const struct FString& Name);
	void Teleport(const struct FPrisonerTeleportRequest& request);
	void TakeItemInHandsOnServer(class AItem* Item);
	void TakeItemInHands(class AItem* Item);
	void StopInteraction();
	void StartSecondaryMeleeAttack();
	void StartPrimaryMeleeAttack();
	void StartMeleeDodge(EDodgeDirectionType Direction);
	void StartMeleeAttack(const struct FGameplayTag& meleeAttackType);
	void StartComboMeleeAttack();
	void ShowSpawnScreen();
	bool ShouldLookatMeleeTarget();
	void SetWeaponsVisibility(bool visible);
	void SetWeaponOnClient(class AWeapon* Weapon);
	void SetWeaponAimingTypeOnServer(EWeaponAimingType Value);
	void SetThrowingModeOnServer(EThrowingMode Value);
	void SetThrowingMode(EThrowingMode Value);
	void SetTeamIndexOnServer(int TeamIndex);
	void SetTargetOnServer(class AActor* Target);
	void SetTargetLeanAmountOnServer(float Value);
	void SetTargetCrouchStage(float Value);
	void SetStrengthOnServer(float Value);
	void SetStrength(float Value);
	void SetStance(EPrisonerStance Value);
	void SetSkillLevelOnServer(const struct FString& Name, int Value);
	void SetSkillLevel(const struct FString& Name, int Value);
	void SetPlayerWaypoint(const struct FString& Name);
	void SetPlayerSoundLevel(float Value);
	void SetPartWaterWeight(EPrisonerWettablePart part, float Value);
	void SetNightVisionEnabled(bool Value);
	void SetNameTextVisibilityForAll(bool visible);
	void SetNameTextVisibility(bool visible);
	void SetMeleeTargetSelectionMode(EPrisonerMeleeTargetSelectionMode Value);
	void SetMeleeTarget(class AActor* Value);
	void SetLocationAndRotationOnServer(const struct FVector& Location, const struct FRotator& Rotation);
	void SetItemInHandsOnClient(class AItem* Item);
	void SetIsInCombatModeOnServer(bool Value);
	void SetIsInCombatMode(bool Value);
	void SetIntelligenceOnServer(float Value);
	void SetIntelligence(float Value);
	void SetGameEventLoadout(class UClass* primary, TArray<class UClass*> primaryAttachments, class UClass* secondary, TArray<class UClass*> secondaryAttachments, class UClass* tertiary, TArray<class UClass*> tertiaryAttachments, TArray<class UClass*> outfit, TArray<class UClass*> support);
	void SetGameEvent(class AGameEventBase* gameEvent);
	void SetFreeLookEnabledOnServer(bool Value);
	void SetFreeLookEnabled(bool Value);
	void SetDexterityOnServer(float Value);
	void SetDexterity(float Value);
	void SetDesiredPaceOnServer(unsigned char Value);
	void SetDesiredPace(EPrisonerMovementPace Value);
	void SetDesiredLeanAmount(float Value);
	void SetCrouchStage(float Value);
	void SetConstitutionOnServer(float Value);
	void SetConstitution(float Value);
	void SetAutoWalk(bool Value);
	void Server_UnpackAmmoBox(class AAmmunitionBoxItem* Item);
	void Server_UnloadAmmoFromMagazine(class AWeaponAttachmentMagazine* magazine);
	void Server_Teleport(const struct FPrisonerTeleportRequest& request);
	void Server_SyncWeaponState(class AWeapon* Weapon, int loadedAmmoCount, int internalMagazineAmmoCount, bool IsChamberOpened);
	void Server_SwapWeaponAttachments(class AWeapon* Weapon, class AWeaponAttachment* oldAttachment, class AWeaponAttachment* newAttachment);
	void Server_StoreAmmoInAmmoBox(class AAmmunitionItem* ammo, class AAmmunitionBoxItem* Box);
	void Server_SplitAmmo(class AAmmunitionItem* ammoitem);
	void Server_SetTargetCrouchStage(float Value);
	void Server_SetMeleeTargetSelectionMode(EPrisonerMeleeTargetSelectionMode Value);
	void Server_SetMeleeTarget(class AActor* Value);
	void Server_SetIsDeluxePlayer(bool Value);
	void Server_RespawnAtCommonSpawnLocation(EPrisonerCommonSpawnLocation commonSpawnLocation, const struct FName& spawnTag);
	void Server_RequestCharacterAction(const struct FCharacterActionReplicationHelper& Value);
	void Server_ReportClientWantsToSpawn();
	void Server_ReportClientReady();
	void Server_LoadAmmoIntoMagazine(class AAmmunitionItem* AmmunitionItem, class AWeaponAttachmentMagazine* magazine, int count);
	void Server_JumpOffLadder();
	void Server_JoinAmmo(class AAmmunitionItem* finalItem, class AAmmunitionItem* initiatingItem);
	void Server_InteractWithLadder(const struct FVector& traceOrigin, const struct FVector& traceDirection);
	void Server_HandleGearMotion(EMotionIntensity motionIntensity, bool shouldMakeNoise);
	void Server_HandleFootstep(EMotionIntensity motionIntensity, bool shouldMakeNoise);
	void Server_CommitSuicide();
	void Server_ClimbWindow();
	void Server_Climb();
	void Server_CharacterActionAck(const struct FCharacterActionAck& ack);
	void SendTeamInvitationOnServer(class APrisoner* invited);
	void SendTeamInvitationOnClient(class APrisoner* invitor, const struct FString& invitorName);
	void SendMessageToClient(const struct FString& Message, bool beep);
	void RightShoulderHolsterInteract();
	void RespawnAtCommonSpawnLocation(EPrisonerCommonSpawnLocation commonSpawnLocation, const struct FName& spawnTag);
	void RequestRespawn(const struct FPrisonerTeleportRequest& request);
	void RequestCharacterAction(class UCharacterActionDescription* desc);
	void RemoveWeaponAttachment(class AWeapon* Weapon, class AWeaponAttachment* Attachment);
	void RemoveFromTeamOnServer(class APrisoner* member);
	void RecoverLastSafeLocation();
	void RecoverFromRagdollImmediately();
	void RecoverFromRagdoll();
	void ProjectileDealDirectDamageOnServer(const struct FProjectilePointDamageEvent& ProjectilePointDamageEvent, const struct FSkillEventWeaponProjectileHitTarget& SkillEventWeaponProjectileHitTarget);
	void Preset4();
	void Preset3();
	void Preset2();
	void Preset1();
	void PlaceItemInInventoryOrHolster(class AItem* Item);
	void OpenTabMode(ETabMode mode);
	void OpenInteractDefaultContextMenu();
	void OnRep_UserProfileName();
	void OnRep_ThrowingMode();
	void OnRep_SkinColorIndex();
	void OnRep_RightShoulderHolsteredItem();
	void OnRep_PackedWetness(uint32_t oldWetness);
	void OnRep_MeleeTargetSelectionMode();
	void OnRep_MeleeTarget();
	void OnRep_LeftShoulderHolsteredItem();
	void OnRep_LastSafeLocation();
	void OnRep_LastCorpse();
	void OnRep_ItemInHands();
	void OnRep_IsInCombatMode();
	void OnRep_IsDeluxePlayer();
	void OnRep_HeadTattooIndex();
	void OnRep_HeadIndex();
	void OnRep_GameEvent();
	void OnRep_FreeLookEnabled();
	void OnRep_DesiredPace();
	void OnRep_ChipLightColorIndex();
	void OnRep_BodyTattooIndex();
	void OnRep_AimOffset();
	void OnMovingThroughNearbyFoliageInstance(const struct FPrisonerNearbyFoliageInstanceInfo& instanceInfo, float DeltaTime);
	void OnInteractDefaultContextMenuClosed();
	void OnHearNoise(class APawn* instigatorPawn, const struct FVector& Location, float Volume);
	void OnEndMovingThroughNearbyFoliageInstance(const struct FPrisonerNearbyFoliageInstanceInfo& instanceInfo);
	void OnBorderCrossingPenaltyChange(class APrisoner* Prisoner, EPrisonerBorderCrossingPenalty newPenalty);
	void OnBeginMovingThroughNearbyFoliageInstance(const struct FPrisonerNearbyFoliageInstanceInfo& instanceInfo);
	void NetMulticast_Teleport_SpawnScreen();
	void NetMulticast_Teleport_MoveAndWaitUntilReady();
	void NetMulticast_Teleport_Finish();
	void NetMulticast_Teleport_FadeIn();
	void NetMulticast_Teleport(const struct FPrisonerTeleportRequest& request);
	void NetMulticast_RequestCharacterAction(const struct FCharacterActionReplicationHelper& Value, bool ignoreAutonomousProxy);
	void NetMulticast_HandleLanded(const struct FVector& ImpactVelocity, const struct FHitResult& HitResult);
	void NetMulticast_CharacterActionAck(const struct FCharacterActionAck& ack, bool ignoreAutonomousProxy);
	void Mount(class AActor* Mount);
	void MakeUnconscious();
	void MakeConscious();
	void LifeComponent_StateRemoved(class UPrisonerLifeComponent* sender, EBodyState State);
	void LifeComponent_StateAdded(class UPrisonerLifeComponent* sender, EBodyState State);
	void LeftShoulderHolsterInteract();
	void LeaveTeamOnServer();
	void LeaveCombatMode();
	bool IsPostFreeLookControllerRotationBlendActive();
	bool IsNightVisionEnabled();
	bool IsInteracting();
	bool IsInCombatMode();
	bool IsFreeLookEnabled();
	bool IsDeluxePlayer();
	bool IsCompletelyInitialized();
	bool IsAutoWalking();
	bool IsAliveInGameEvent();
	bool IsActorMeleeTargetCandidate(class AActor* Actor);
	bool IsActivelyParticipatingInGameEvent();
	void InventoryComponent_ItemUnequipped(class UPrisonerInventoryComponent* sender, class AItem* Item);
	void InventoryComponent_ItemEquipped(class UPrisonerInventoryComponent* sender, class AItem* Item);
	void InteractWithObjectOnServer(class UObject* interactable, EInteractionType InteractionType, const struct FInteractionData& InteractionData);
	void InteractedDelegate__DelegateSignature(class APrisoner* sender, class UObject* interactable, EInteractionType InteractionType);
	void InitTextMeshFromName(const struct FString& Name);
	void InitFromCharacterTemplate(const struct FCharacterTemplate& CharacterTemplate);
	void IncreaseCrouchStage();
	void HolsterItemOnServer(class AItem* Item, int attachmentSocketHelper);
	void HitReactComponent_StateChanged();
	void Hide();
	bool HasItem(class AItem* Item);
	bool HasCurrentMovementEffectOnNearbyFoliage();
	bool HasCharacterAction();
	void GoToRagdoll();
	class UChildActorComponent* GetWristwatchComponent();
	float GetWetness();
	struct FName GetWeaponSocketName();
	struct FName GetWeaponHolsterSocketName();
	class AWeapon* GetWeapon();
	struct FPrisonerWaterMovementParameters GetWaterMovementParameters();
	class UVisionEffectsComponent* GetVisionEffectsComponent();
	struct FString GetUserProfileName();
	class UDbUserProfile* GetUserProfile();
	struct FString GetUserId();
	class UStaticMeshComponent* GetUpperMouthMeshComponent();
	class USkeletalMeshComponent* GetUpperHeadSkeletalMeshComponent();
	class UStaticMeshComponent* GetUpperHeadMeshComponent();
	class USkeletalMeshComponent* GetTorsoMeshComponent();
	struct FDateTime GetTimeOfDeath();
	EPrisonerTeleportState GetTeleportState();
	float GetTargetCrouchStage();
	class UMaterialInstanceDynamic* GetTacticsBlobMaterial();
	struct FVector2D GetTabMouseMovement();
	EPrisonerStance GetStance();
	class UPrisonerSoundComponent* GetSoundComponent();
	bool GetSavedSpawnLocationActive();
	struct FVector GetSavedSpawnLocation();
	struct FRotator GetREyeRotationDelta();
	class UStaticMeshComponent* GetREyeMeshComponent();
	class UPrisonerMovementComponent* GetPrisonerMovement();
	class UPrisonerAnimInstance* GetPrisonerAnimInstance();
	float GetPartWetness(EPrisonerWettablePart part);
	float GetPartWaterWeight(EPrisonerWettablePart part);
	struct FPrisonerNearbyFoliageInfo GetNearbyFoliageInfo();
	class AActor* GetMount();
	EMotionIntensity GetMotionIntensity();
	EPrisonerMeleeTargetSelectionMode GetMeleeTargetSelectionMode();
	class AActor* GetMeleeTarget();
	float GetMaxPartWaterWeight(EPrisonerWettablePart part);
	EPrisonerMovementPace GetMaxAllowedPace();
	class UStaticMeshComponent* GetLowerMouthMeshComponent();
	class UStaticMeshComponent* GetLowerHeadMeshComponent();
	struct FRotator GetLookatMeleeTargetAimOffset();
	struct FRotator GetLEyeRotationDelta();
	class UStaticMeshComponent* GetLEyeMeshComponent();
	class USkeletalMeshComponent* GetLegsMeshComponent();
	class UParticleSystemComponent* GetLeavesComponent();
	float GetLeanAmount();
	struct FVector GetLastSafeLocation();
	class AItem* GetItemInHands();
	bool GetIsInFirstPersonView();
	EHoldBreathState GetHoldBreathState();
	class USkeletalMeshComponent* GetHeadMeshComponent();
	class USkeletalMeshComponent* GetHandsMeshComponent();
	class UStaticMeshComponent* GetHairMeshComponent();
	struct FPrisonerGroundMovementParameters GetGroundMovementParameters();
	class AGameEventBase* GetGameEvent();
	class USkeletalMeshComponent* GetFeetMeshComponent();
	class UStaticMeshComponent* GetFacialHairMeshComponent();
	class UStaticMeshComponent* GetEyewearMeshComponent();
	struct FString GetEnumeratorNameENetMode();
	EPrisonerMovementPace GetDesiredPace();
	float GetDesiredLeanAmount();
	struct FGameplayTag GetCurrentHitReactType();
	float GetCrouchStage();
	EPrisonerCombatMode GetCombatMode();
	EPrisonerMovementPace GetClampedDesiredPace();
	class UStaticMeshComponent* GetChipMeshComponent();
	class UCharacterAction* GetCharacterAction();
	float GetChanceToKnockoutTargetUsingMeleeAttack(class AActor* Target);
	class UBruisingComponent* GetBruisingComponent();
	class USkeletalMeshComponent* GetBodyArmorMeshComponent();
	class USkeletalMeshComponent* GetBackpackMeshComponent();
	class USkeletalMeshComponent* GetArmsMeshComponent();
	float GetAngularVelocity();
	struct FRotator GetAimOffset();
	EPrisonerMovementPace GetActualPace();
	bool GameEventFriendlyFireCheck(class APrisoner* Other);
	class AActor* FindNextOrPreviousMeleeTarget(class AActor* Target, bool Next);
	void ExamineItem(class AItem* Item);
	void EquipWeapon(class AWeapon* Weapon);
	void EquippedNightVisionGoggles_ActivatedChanged(class ANightVisionGogglesItem* Item);
	bool EnterCombatMode();
	void DropItemFromHands();
	bool DidGameEventRoundStarted();
	void DiarrheaOnServer();
	void DetonateChip();
	void DecreaseCrouchStage();
	void ConstructWristwatchChildActor();
	void CommitSuicide();
	bool ClosePanels();
	void Client_ShowSpawnScreen();
	void Client_SetSavedSpawnLocation(bool active, const struct FVector& Location);
	void Client_RequestCharacterAction(const struct FCharacterActionReplicationHelper& Value, bool cancelExecutingAction);
	void Client_OnTakeDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* eventInstigator, class AActor* DamageCauser);
	void Client_LoadAmmoIntoMagazine(class AWeaponAttachmentMagazine* magazine, int count);
	void Client_FadeOutVision(float Duration);
	void Client_FadeInVision(float Duration);
	void ClearGameEventLoadout();
	void ClearEquipment();
	class AActor* ChooseFirstMeleeTarget();
	void CheckForDeluxeDLC();
	void CharacterAction_End(class UCharacterAction* action);
	void CapsuleComponent_PhysicsVolumeChanged(class APhysicsVolume* Volume);
	bool CanLeaveCombatMode();
	bool CanEnterMeleeCombatMode();
	bool CanEnterCombatMode();
	void CancelInteractableDragging();
	void BorderCrossingPenaltyChange__DelegateSignature(class APrisoner* sender, EPrisonerBorderCrossingPenalty newPenalty);
	float BCU_GetSpeedModifier();
	float BCU_GetMovementSpeed(EPrisonerMovementPace pace);
	float BCU_GetMeleeDamageBonus();
	float BCU_GetMaxMovementSpeed(EPrisonerMovementPace pace);
	void ApplyHeadMesh();
	void AddWeaponAttachment(class AWeapon* Weapon, class AWeaponAttachment* Attachment);
	void AddToTeamOnServer(const struct FString& teamName);
	void AcceptTeamInvitationOnServer(class APrisoner* invitor, bool accepted);
};


// Class ConZ.PrisonerAction
// 0x0010 (0x0180 - 0x0170)
class UPrisonerAction : public UCharacterAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0170(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerAction");
		return ptr;
	}

};


// Class ConZ.PrisonerActionActivateSlot
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionActivateSlot : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionActivateSlot");
		return ptr;
	}

};


// Class ConZ.PrisonerActionActivateSlotDescription
// 0x0008 (0x0038 - 0x0030)
class UPrisonerActionActivateSlotDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionActivateSlotDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionAddWeaponAttachment
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionAddWeaponAttachment : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionAddWeaponAttachment");
		return ptr;
	}

};


// Class ConZ.PrisonerActionAddWeaponAttachmentDescription
// 0x0010 (0x0040 - 0x0030)
class UPrisonerActionAddWeaponAttachmentDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionAddWeaponAttachmentDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionArtificialPerspiration
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionArtificialPerspiration : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionArtificialPerspiration");
		return ptr;
	}

};


// Class ConZ.PrisonerActionArtificialPerspirationDescription
// 0x0008 (0x0038 - 0x0030)
class UPrisonerActionArtificialPerspirationDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionArtificialPerspirationDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionChangeStance
// 0x0010 (0x0180 - 0x0170)
class UPrisonerActionChangeStance : public UCharacterAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0170(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionChangeStance");
		return ptr;
	}

};


// Class ConZ.PrisonerActionChangeStanceDescription
// 0x0008 (0x0038 - 0x0030)
class UPrisonerActionChangeStanceDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionChangeStanceDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionCheckTime
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionCheckTime : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionCheckTime");
		return ptr;
	}

};


// Class ConZ.PrisonerActionCheckTimeDescription
// 0x0000 (0x0030 - 0x0030)
class UPrisonerActionCheckTimeDescription : public UCharacterActionDescription
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionCheckTimeDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionChopItem
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionChopItem : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionChopItem");
		return ptr;
	}

};


// Class ConZ.PrisonerActionChopItemDescription
// 0x0018 (0x0048 - 0x0030)
class UPrisonerActionChopItemDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionChopItemDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionClimbOntoLadder
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionClimbOntoLadder : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionClimbOntoLadder");
		return ptr;
	}

};


// Class ConZ.PrisonerActionClimbOntoLadderDescription
// 0x0018 (0x0048 - 0x0030)
class UPrisonerActionClimbOntoLadderDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionClimbOntoLadderDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionCommandAnimal
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionCommandAnimal : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionCommandAnimal");
		return ptr;
	}

};


// Class ConZ.PrisonerActionCommandAnimalDescription
// 0x0010 (0x0040 - 0x0030)
class UPrisonerActionCommandAnimalDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionCommandAnimalDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionCraftItem
// 0x0000 (0x0180 - 0x0180)
class UPrisonerActionCraftItem : public UPrisonerAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionCraftItem");
		return ptr;
	}

};


// Class ConZ.PrisonerActionCraftItemDescription
// 0x0070 (0x00A0 - 0x0030)
class UPrisonerActionCraftItemDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0030(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionCraftItemDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionCutObject
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionCutObject : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionCutObject");
		return ptr;
	}

};


// Class ConZ.PrisonerActionCutObjectDescription
// 0x0038 (0x0068 - 0x0030)
class UPrisonerActionCutObjectDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionCutObjectDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionDefecate
// 0x0010 (0x0180 - 0x0170)
class UPrisonerActionDefecate : public UCharacterAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0170(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionDefecate");
		return ptr;
	}

};


// Class ConZ.PrisonerActionDefecateDescription
// 0x0008 (0x0038 - 0x0030)
class UPrisonerActionDefecateDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionDefecateDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionDrinkInteraction
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionDrinkInteraction : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionDrinkInteraction");
		return ptr;
	}

};


// Class ConZ.PrisonerActionDrinkInteractionDescription
// 0x0008 (0x0038 - 0x0030)
class UPrisonerActionDrinkInteractionDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionDrinkInteractionDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionEatItem
// 0x0010 (0x0180 - 0x0170)
class UPrisonerActionEatItem : public UCharacterAction
{
public:
	class UAkAudioEvent*                               _stopEatingAudioEvent;                                    // 0x0170(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionEatItem");
		return ptr;
	}

};


// Class ConZ.PrisonerActionEatItemDescription
// 0x0010 (0x0040 - 0x0030)
class UPrisonerActionEatItemDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionEatItemDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionEquipWeapon
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionEquipWeapon : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionEquipWeapon");
		return ptr;
	}

};


// Class ConZ.PrisonerActionEquipWeaponDescription
// 0x0010 (0x0040 - 0x0030)
class UPrisonerActionEquipWeaponDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionEquipWeaponDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionExecuteInteraction
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionExecuteInteraction : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionExecuteInteraction");
		return ptr;
	}

};


// Class ConZ.PrisonerActionExecuteInteractionDescription
// 0x0080 (0x00B0 - 0x0030)
class UPrisonerActionExecuteInteractionDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0030(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionExecuteInteractionDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionFeedAnimal
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionFeedAnimal : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionFeedAnimal");
		return ptr;
	}

};


// Class ConZ.PrisonerActionFeedAnimalDescription
// 0x0008 (0x0038 - 0x0030)
class UPrisonerActionFeedAnimalDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionFeedAnimalDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionFillFuel
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionFillFuel : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionFillFuel");
		return ptr;
	}

};


// Class ConZ.PrisonerActionFillFuelDescription
// 0x0018 (0x0048 - 0x0030)
class UPrisonerActionFillFuelDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionFillFuelDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionFillWater
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionFillWater : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionFillWater");
		return ptr;
	}

};


// Class ConZ.PrisonerActionFillWaterDescription
// 0x0020 (0x0050 - 0x0030)
class UPrisonerActionFillWaterDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionFillWaterDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionLearnAnimal
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionLearnAnimal : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionLearnAnimal");
		return ptr;
	}

};


// Class ConZ.PrisonerActionLearnAnimalDescription
// 0x0010 (0x0040 - 0x0030)
class UPrisonerActionLearnAnimalDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionLearnAnimalDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionLootCorpse
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionLootCorpse : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionLootCorpse");
		return ptr;
	}

};


// Class ConZ.PrisonerActionLootCorpseDescription
// 0x0018 (0x0048 - 0x0030)
class UPrisonerActionLootCorpseDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionLootCorpseDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionMakeConscious
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionMakeConscious : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionMakeConscious");
		return ptr;
	}

};


// Class ConZ.PrisonerActionMakeConsciousDescription
// 0x0008 (0x0038 - 0x0030)
class UPrisonerActionMakeConsciousDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionMakeConsciousDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionMedicalDiagnosis
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionMedicalDiagnosis : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionMedicalDiagnosis");
		return ptr;
	}

};


// Class ConZ.PrisonerActionMedicalDiagnosisDescription
// 0x0010 (0x0040 - 0x0030)
class UPrisonerActionMedicalDiagnosisDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionMedicalDiagnosisDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionOpenItem
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionOpenItem : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionOpenItem");
		return ptr;
	}

};


// Class ConZ.PrisonerActionOpenItemDescription
// 0x0008 (0x0038 - 0x0030)
class UPrisonerActionOpenItemDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionOpenItemDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionOperateGenerator
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionOperateGenerator : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionOperateGenerator");
		return ptr;
	}

};


// Class ConZ.PrisonerActionOperateGeneratorDescription
// 0x0010 (0x0040 - 0x0030)
class UPrisonerActionOperateGeneratorDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionOperateGeneratorDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionPacifyAnimal
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionPacifyAnimal : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionPacifyAnimal");
		return ptr;
	}

};


// Class ConZ.PrisonerActionPacifyAnimalDescription
// 0x0008 (0x0038 - 0x0030)
class UPrisonerActionPacifyAnimalDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionPacifyAnimalDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionPatchWounds
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionPatchWounds : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionPatchWounds");
		return ptr;
	}

};


// Class ConZ.PrisonerActionPatchWoundsDescription
// 0x0010 (0x0040 - 0x0030)
class UPrisonerActionPatchWoundsDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionPatchWoundsDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionPerformAnesthesia
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionPerformAnesthesia : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionPerformAnesthesia");
		return ptr;
	}

};


// Class ConZ.PrisonerActionPerformAnesthesiaDescription
// 0x0010 (0x0040 - 0x0030)
class UPrisonerActionPerformAnesthesiaDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionPerformAnesthesiaDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionPerformSurgery
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionPerformSurgery : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionPerformSurgery");
		return ptr;
	}

};


// Class ConZ.PrisonerActionPerformSurgeryDescription
// 0x0008 (0x0038 - 0x0030)
class UPrisonerActionPerformSurgeryDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionPerformSurgeryDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionPullTooth
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionPullTooth : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionPullTooth");
		return ptr;
	}

};


// Class ConZ.PrisonerActionPullToothDescription
// 0x0008 (0x0038 - 0x0030)
class UPrisonerActionPullToothDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionPullToothDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionReloadWeapon
// 0x0010 (0x0180 - 0x0170)
class UPrisonerActionReloadWeapon : public UCharacterAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0170(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionReloadWeapon");
		return ptr;
	}

};


// Class ConZ.PrisonerActionReloadWeaponDescription
// 0x0020 (0x0050 - 0x0030)
class UPrisonerActionReloadWeaponDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionReloadWeaponDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionRemoveItemFromHands
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionRemoveItemFromHands : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionRemoveItemFromHands");
		return ptr;
	}

};


// Class ConZ.PrisonerActionRemoveItemFromHandsDescription
// 0x0000 (0x0030 - 0x0030)
class UPrisonerActionRemoveItemFromHandsDescription : public UCharacterActionDescription
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionRemoveItemFromHandsDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionRemoveWeaponAttachment
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionRemoveWeaponAttachment : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionRemoveWeaponAttachment");
		return ptr;
	}

};


// Class ConZ.PrisonerActionRemoveWeaponAttachmentDescription
// 0x0010 (0x0040 - 0x0030)
class UPrisonerActionRemoveWeaponAttachmentDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionRemoveWeaponAttachmentDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionRevivePatient
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionRevivePatient : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionRevivePatient");
		return ptr;
	}

};


// Class ConZ.PrisonerActionRevivePatientDescription
// 0x0008 (0x0038 - 0x0030)
class UPrisonerActionRevivePatientDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionRevivePatientDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionSearchGround
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionSearchGround : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionSearchGround");
		return ptr;
	}

};


// Class ConZ.PrisonerActionSearchGroundDescription
// 0x0028 (0x0058 - 0x0030)
class UPrisonerActionSearchGroundDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionSearchGroundDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionSearchObject
// 0x0010 (0x0180 - 0x0170)
class UPrisonerActionSearchObject : public UCharacterAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0170(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionSearchObject");
		return ptr;
	}

};


// Class ConZ.PrisonerActionSearchObjectDescription
// 0x0028 (0x0058 - 0x0030)
class UPrisonerActionSearchObjectDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionSearchObjectDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionSearchPrisoner
// 0x0010 (0x0180 - 0x0170)
class UPrisonerActionSearchPrisoner : public UCharacterAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0170(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionSearchPrisoner");
		return ptr;
	}

};


// Class ConZ.PrisonerActionSearchPrisonerDescription
// 0x0008 (0x0038 - 0x0030)
class UPrisonerActionSearchPrisonerDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionSearchPrisonerDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionStoreItem
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionStoreItem : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionStoreItem");
		return ptr;
	}

};


// Class ConZ.PrisonerActionStoreItemDescription
// 0x0018 (0x0048 - 0x0030)
class UPrisonerActionStoreItemDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionStoreItemDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionTakeItemInHands
// 0x0010 (0x0180 - 0x0170)
class UPrisonerActionTakeItemInHands : public UCharacterAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0170(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionTakeItemInHands");
		return ptr;
	}

};


// Class ConZ.PrisonerActionTakeItemInHandsDescription
// 0x0010 (0x0040 - 0x0030)
class UPrisonerActionTakeItemInHandsDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionTakeItemInHandsDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionTakeMedication
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionTakeMedication : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionTakeMedication");
		return ptr;
	}

};


// Class ConZ.PrisonerActionTakeMedicationDescription
// 0x0008 (0x0038 - 0x0030)
class UPrisonerActionTakeMedicationDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionTakeMedicationDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionTameAnimal
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionTameAnimal : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionTameAnimal");
		return ptr;
	}

};


// Class ConZ.PrisonerActionTameAnimalDescription
// 0x0008 (0x0038 - 0x0030)
class UPrisonerActionTameAnimalDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionTameAnimalDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionTankFuel
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionTankFuel : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionTankFuel");
		return ptr;
	}

};


// Class ConZ.PrisonerActionTankFuelDescription
// 0x0018 (0x0048 - 0x0030)
class UPrisonerActionTankFuelDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionTankFuelDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionTreatBrokenLimbs
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionTreatBrokenLimbs : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionTreatBrokenLimbs");
		return ptr;
	}

};


// Class ConZ.PrisonerActionTreatBrokenLimbsDescription
// 0x0010 (0x0040 - 0x0030)
class UPrisonerActionTreatBrokenLimbsDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionTreatBrokenLimbsDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionTreatSickness
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionTreatSickness : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionTreatSickness");
		return ptr;
	}

};


// Class ConZ.PrisonerActionTreatSicknessDescription
// 0x0010 (0x0040 - 0x0030)
class UPrisonerActionTreatSicknessDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionTreatSicknessDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionUncraftItem
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionUncraftItem : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionUncraftItem");
		return ptr;
	}

};


// Class ConZ.PrisonerActionUncraftItemDescription
// 0x0008 (0x0038 - 0x0030)
class UPrisonerActionUncraftItemDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionUncraftItemDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionUnequipWeapon
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionUnequipWeapon : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionUnequipWeapon");
		return ptr;
	}

};


// Class ConZ.PrisonerActionUnequipWeaponDescription
// 0x0000 (0x0030 - 0x0030)
class UPrisonerActionUnequipWeaponDescription : public UCharacterActionDescription
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionUnequipWeaponDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionUrinate
// 0x0010 (0x0180 - 0x0170)
class UPrisonerActionUrinate : public UCharacterAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0170(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionUrinate");
		return ptr;
	}

};


// Class ConZ.PrisonerActionUrinateDescription
// 0x0008 (0x0038 - 0x0030)
class UPrisonerActionUrinateDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionUrinateDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerActionVomit
// 0x0000 (0x0170 - 0x0170)
class UPrisonerActionVomit : public UCharacterAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionVomit");
		return ptr;
	}

};


// Class ConZ.PrisonerActionVomitDescription
// 0x0008 (0x0038 - 0x0030)
class UPrisonerActionVomitDescription : public UCharacterActionDescription
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerActionVomitDescription");
		return ptr;
	}

};


// Class ConZ.PrisonerAIController
// 0x0028 (0x0438 - 0x0410)
class APrisonerAIController : public AAIController
{
public:
	class APrisoner*                                   _prisoner;                                                // 0x0410(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrisonerMovementComponent*                  _prisonerMovementComponent;                               // 0x0418(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0420(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerAIController");
		return ptr;
	}

};


// Class ConZ.PrisonerAnimInstance
// 0x0C80 (0x1040 - 0x03C0)
class UPrisonerAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x03C0(0x0160) MISSED OFFSET
	float                                              MeleeCombatWalkUsageRadius;                               // 0x0520(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MeleeExhaustionFactorInterpSpeed;                         // 0x0524(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UpperEyelidsLookLeftFactor;                               // 0x0528(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LowerEyelidsLookLeftFactor;                               // 0x052C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UpperEyelidsLookRightFactor;                              // 0x0530(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LowerEyelidsLookRightFactor;                              // 0x0534(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UpperEyelidsLookUpFactor;                                 // 0x0538(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LowerEyelidsLookUpFactor;                                 // 0x053C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UpperEyelidsLookDownFactor;                               // 0x0540(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LowerEyelidsLookDownFactor;                               // 0x0544(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               AutoBlinkEnabled;                                         // 0x0548(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x9F];                                      // 0x0549(0x009F) MISSED OFFSET
	bool                                               _isPrisonerCompletelyInitialized;                         // 0x05E8(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isOwnerLocallyControlled;                                // 0x05E9(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isOwnerPlayerControlled;                                 // 0x05EA(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isInFirstPersonView;                                     // 0x05EB(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isAimingWeapon;                                          // 0x05EC(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isAbleToFireWeapon;                                      // 0x05ED(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWeaponAimingType                                  _weaponAimingType;                                        // 0x05EE(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x05EF(0x0001) MISSED OFFSET
	struct FVector                                     _weaponSupportingHandIKLocation;                          // 0x05F0(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              _weaponAimYaw;                                            // 0x05FC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _weaponAimPitch;                                          // 0x0600(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0604(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           _meleeSkill_PrimaryIdleAnimationTP;                       // 0x0608(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           _meleeSkill_PrimaryIdleAnimationFP;                       // 0x0610(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           _meleeSkill_TiredIdleAnimationTP;                         // 0x0618(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           _meleeSkill_TiredIdleAnimationFP;                         // 0x0620(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           _meleeSkill_WalkingIdleAnimationTP;                       // 0x0628(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           _meleeSkill_WalkingIdleAnimationFP;                       // 0x0630(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           _meleeSkill_BlockIdleAnimationTP;                         // 0x0638(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           _meleeSkill_BlockIdleAnimationFP;                         // 0x0640(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpace*                                 _meleeSkill_AimOffsetBlendSpaceTP;                        // 0x0648(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpace*                                 _meleeSkill_AimOffsetBlendSpaceFP;                        // 0x0650(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _meleeSkill_IdleToBlockBlendDuration;                     // 0x0658(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _meleeSkill_BlockToIdleBlendDuration;                     // 0x065C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _meleeSkill_ExhaustionFactor;                             // 0x0660(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _shouldUseUnarmedCombatWalk;                              // 0x0664(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isHoldingBlock;                                          // 0x0665(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0666(0x0002) MISSED OFFSET
	float                                              _stamina;                                                 // 0x0668(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _fatness;                                                 // 0x066C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    _eyesRotationDelta;                                       // 0x0670(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              _minEyesRotationPitch;                                    // 0x067C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _maxEyesRotationPitch;                                    // 0x0680(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _shouldUseWeaponAnimationPose;                            // 0x0684(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x63];                                      // 0x0685(0x0063) MISSED OFFSET
	bool                                               _shouldIgnoreWeaponSupportingHandIK;                      // 0x06E8(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x06E9(0x0003) MISSED OFFSET
	float                                              _firstPersonAimPitch;                                     // 0x06EC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _firstPersonAimYawDelta;                                  // 0x06F0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _shouldAimDownTheSights;                                  // 0x06F4(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x06F5(0x0003) MISSED OFFSET
	struct FVector                                     _aimingDownTheSightsLocationOffset;                       // 0x06F8(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FRotator                                    _armsLagRotation;                                         // 0x0704(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	EPrisonerStance                                    _stance;                                                  // 0x0710(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0711(0x0003) MISSED OFFSET
	float                                              _crouchStage;                                             // 0x0714(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _targetCrouchStage;                                       // 0x0718(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isFreeLookEnabled;                                       // 0x071C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x071D(0x0003) MISSED OFFSET
	struct FRotator                                    _aimOffset;                                               // 0x0720(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              _leanAmount;                                              // 0x072C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _shouldLookAtMeleeTarget;                                 // 0x0730(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0731(0x0003) MISSED OFFSET
	struct FRotator                                    _lookAtMeleeTargetAimOffset;                              // 0x0734(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	EPrisonerAnimationSet                              _animationSet;                                            // 0x0740(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isInRagdoll;                                             // 0x0741(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isMovingOnGround;                                        // 0x0742(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isFalling;                                               // 0x0743(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isSwimming;                                              // 0x0744(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0745(0x0003) MISSED OFFSET
	struct FVector                                     _acceleration;                                            // 0x0748(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	bool                                               _wantsToMove;                                             // 0x0754(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _wantsToMoveHorizontallyOnly;                             // 0x0755(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _wantsToMoveVerticallyOnly;                               // 0x0756(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _wantsToWalk;                                             // 0x0757(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _wantsToJog;                                              // 0x0758(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _wantsToRun;                                              // 0x0759(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x075A(0x0002) MISSED OFFSET
	struct FVector                                     _velocity;                                                // 0x075C(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0768(0x0004) MISSED OFFSET
	float                                              _speed;                                                   // 0x076C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _speedXY;                                                 // 0x0770(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _maxSpeed;                                                // 0x0774(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _stoppingDistance;                                        // 0x0778(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData14[0x40];                                      // 0x077C(0x0040) MISSED OFFSET
	float                                              _leftHandIKAmount;                                        // 0x07BC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _desiredCourseAngle;                                      // 0x07C0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _desiredCoursePitchAngle;                                 // 0x07C4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _actualCourseAngle;                                       // 0x07C8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EPrisonerMovementPace                              _desiredMovementPace;                                     // 0x07CC(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EPrisonerMovementPace                              _clampedDesiredMovementPace;                              // 0x07CD(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EPrisonerMovementPace                              _movementPaceBeforeGroundStart;                           // 0x07CE(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData15[0x1];                                       // 0x07CF(0x0001) MISSED OFFSET
	float                                              _legsPoseBeforeGroundStop;                                // 0x07D0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	ECardinalDirection                                 _movementDirectionBeforeGroundStop;                       // 0x07D4(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EPrisonerMovementPace                              _movementPaceBeforeGroundStop;                            // 0x07D5(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EPrisonerAnimationSet                              _animationSetBeforeGroundStop;                            // 0x07D6(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _shouldUseLUGroundStopAnimation;                          // 0x07D7(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EHitReactState                                     _hitReactState;                                           // 0x07D8(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _useLocomotionAdditiveAnimations;                         // 0x07D9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData16[0x2];                                       // 0x07DA(0x0002) MISSED OFFSET
	float                                              _drunkenness;                                             // 0x07DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _drunkennessMultiplier;                                   // 0x07E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x07E4(0x0004) MISSED OFFSET
	float                                              _jumpApex;                                                // 0x07E8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _distanceToJumpApex;                                      // 0x07EC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _legsPoseBeforeJump;                                      // 0x07F0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EPrisonerMovementPace                              _movementPaceBeforeJump;                                  // 0x07F4(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EPrisonerAnimationSet                              _animationSetBeforeJump;                                  // 0x07F5(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _shouldJumpGoToFallingLoop;                               // 0x07F6(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData18[0x1];                                       // 0x07F7(0x0001) MISSED OFFSET
	float                                              _waterImmersionDepth;                                     // 0x07F8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _wantsToDiveIn;                                           // 0x07FC(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData19[0xD3];                                      // 0x07FD(0x00D3) MISSED OFFSET
	bool                                               _isClimbing;                                              // 0x08D0(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isClimbingAnchoring;                                     // 0x08D1(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData20[0x86];                                      // 0x08D2(0x0086) MISSED OFFSET
	class UAnimSequenceBase*                           _climbAnchoringAnimation;                                 // 0x0958(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _climbAnchoringAnimationTime;                             // 0x0960(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isClimbingLadder;                                        // 0x0964(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData21[0xBB];                                      // 0x0965(0x00BB) MISSED OFFSET
	struct FVector                                     _ladderClimbingRootBoneOffset;                            // 0x0A20(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              _ladderClimbingLoopState;                                 // 0x0A2C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _ladderClimbingLoopStateForPeeking;                       // 0x0A30(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _ladderClimbingPeekState;                                 // 0x0A34(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isClimbingWindow;                                        // 0x0A38(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isClimbingWindowAnchoring;                               // 0x0A39(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData22[0x6];                                       // 0x0A3A(0x0006) MISSED OFFSET
	class UAnimSequenceBase*                           _windowClimbingAnchoringAnimation;                        // 0x0A40(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _windowClimbingAnchoringAnimationTime;                    // 0x0A48(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWeaponType                                        _weaponType;                                              // 0x0A4C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isDedicatedServer;                                       // 0x0A4D(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData23[0x34A];                                     // 0x0A4E(0x034A) MISSED OFFSET
	class UAnimSequenceBase*                           _weaponFirstPersonUpperBodyStandIdleAnimation;            // 0x0D98(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           _weaponFirstPersonUpperBodyStandWalkAnimation;            // 0x0DA0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           _weaponFirstPersonUpperBodyStandJogAnimation;             // 0x0DA8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           _weaponFirstPersonUpperBodyStandRunAnimation;             // 0x0DB0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           _weaponFirstPersonUpperBodyCrouchIdleAnimation;           // 0x0DB8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           _weaponFirstPersonUpperBodyCrouchWalkAnimation;           // 0x0DC0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           _weaponFirstPersonUpperBodyProneIdleAnimation;            // 0x0DC8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           _rightHandCorrectionPoseStanding;                         // 0x0DD0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           _rightHandCorrectionPoseCrouching;                        // 0x0DD8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           _rightHandCorrectionPoseProne;                            // 0x0DE0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           _rightFistCorrectionPoseStanding;                         // 0x0DE8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           _rightFistCorrectionPoseStandingInCombatMode;             // 0x0DF0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           _rightFistCorrectionPoseCrouching;                        // 0x0DF8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           _rightFistCorrectionPoseProne;                            // 0x0E00(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _rightHandToIdleBlendAlphaStanding;                       // 0x0E08(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _rightHandToIdleBlendAlphaCrouching;                      // 0x0E0C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData24[0x8];                                       // 0x0E10(0x0008) MISSED OFFSET
	bool                                               _hasItemInHands;                                          // 0x0E18(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isInCombatMode;                                          // 0x0E19(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _shouldUseHandCorrections;                                // 0x0E1A(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _shouldUseFistCorrections;                                // 0x0E1B(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _overrideFingersOnlyInProne;                              // 0x0E1C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _ignoreAimOffsets;                                        // 0x0E1D(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EPrisonerMontageBlendType                          _prisonerMontageBlendType;                                // 0x0E1E(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData25[0x221];                                     // 0x0E1F(0x0221) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerAnimInstance");
		return ptr;
	}


	void OnIdleStateExit(const struct FAnimNode_StateMachine& machine, int prevStateIndex, int nextStateIndex);
	void OnIdleStateEntry(const struct FAnimNode_StateMachine& machine, int prevStateIndex, int nextStateIndex);
	bool IsCourseAngleSupportedByStartAndStopAnimations(float courseAngle);
	bool IsAnyStanceTransitionActive();
	float GetWeaponRelatedIdleStateAnimationPlayRateOnGameThread();
	class UAnimSequenceBase* GetWeaponAnimationPoseOnWorkerThread(EWeaponAnimationPose animationPose, EPrisonerStance Stance);
	float GetWeaponAimingNoisePlayRateOnGameThread();
	float GetWeaponAimingNoiseBlendValueOnGameThread();
	struct FRotator GetUpperEyelidRotationDelta();
	float GetPlayRateFromSpeed(float speedInAnimation, float MinPlayRate, float MaxPlayRate);
	struct FRotator GetLowerEyelidRotationDelta();
	float GetLocomotionStateWeight(EPrisonerAnimationState State);
	void GetLeanBlendWeights(float Multiplier, class UCurveFloat* strengthBySpeedCurve, float* Left, float* Right);
	float GetKnownCurveValueOnWorkerThread(EPrisonerAnimationCurve Curve);
	float GetInPlaceTurningElapsedTimeRight(EPrisonerStance Stance);
	float GetInPlaceTurningElapsedTimeLeft(EPrisonerStance Stance);
	float GetInPlaceTurningDirectionBlendAlpha(EPrisonerStance Stance);
	float GetInPlaceTurningBlendAlpha(EPrisonerStance Stance);
	struct FVector GetIKLegsRootOffsetVectorFromCardinalDirection(ECardinalDirection Value);
	float GetFacialExpressionBlendWeightOnWorkerThread(EPrisonerFacialExpression facialExpression);
	float GetFacialExpressionBlendWeightOnGameThread(EPrisonerFacialExpression facialExpression);
	float GetCurrentLocomotionStateElapsedTime();
	EPrisonerAnimationState GetCurrentLocomotionState();
	ECardinalDirection GetCardinalDirectionFromCourseAngle(float Value);
	float GetBoxingTurnAngle();
	float GetBoxingInPlaceTurningElapsedTimeRight();
	float GetBoxingInPlaceTurningElapsedTimeLeft();
	float GetBoxingInPlaceTurningDirectionBlendAlpha();
	float GetBoxingInPlaceTurningBlendAlpha();
	static float FindTimeBeforeJumpApex(class UAnimSequenceBase* AnimSequence, float distanceToApex);
	static float FindTimeAtStoppingDistance(class UAnimSequenceBase* AnimSequence, float stoppingDistance);
	static float FindTimeAfterJumpApex(class UAnimSequenceBase* AnimSequence, float distanceToApex);
	void DeactivateFacialExpressionOnGameThread(EPrisonerFacialExpression facialExpression);
	void DeactivateAllFacialExpressionsOnGameThread();
	void Blink();
	void AnimNotify_ThrowRelease(class UAnimNotify* Notify);
	void AnimNotify_TakeItemInHands(class UAnimNotify* Notify);
	void AnimNotify_RFootDown();
	void AnimNotify_RemoveItemFromHands(class UAnimNotify* Notify);
	void AnimNotify_LFootDown();
	void AnimNotify_EnableCapsuleCollision(class UAnimNotify* Notify);
	void AnimNotify_DisableCapsuleCollision(class UAnimNotify* Notify);
	void ActivateFacialExpressionOnGameThread(EPrisonerFacialExpression facialExpression, float blendInDuration, float Duration, float blendOutDuration, float blendWeightMultiplier);
};


// Class ConZ.PrisonerAnimNotify_PlayGearSound
// 0x0008 (0x0040 - 0x0038)
class UPrisonerAnimNotify_PlayGearSound : public UAnimNotify
{
public:
	EMotionIntensity                                   motionIntensity;                                          // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerAnimNotify_PlayGearSound");
		return ptr;
	}

};


// Class ConZ.PrisonerCameraManager
// 0x0000 (0x1AE0 - 0x1AE0)
class APrisonerCameraManager : public APlayerCameraManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerCameraManager");
		return ptr;
	}

};


// Class ConZ.PrisonerCorpse
// 0x0040 (0x0520 - 0x04E0)
class APrisonerCorpse : public ACorpse
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04E0(0x0008) MISSED OFFSET
	TArray<struct FCorpseSkeletalMeshRepData>          StrippedSkeletalMeshData;                                 // 0x04E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_EditConst)
	class UClass*                                      GibClass;                                                 // 0x04F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystem*                             HeadExplosionParticles;                                   // 0x0500(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USkeletalMesh*                               HeadExplodedMesh;                                         // 0x0508(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UStaticMesh*>                         HeadExplosionGibMeshes;                                   // 0x0510(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerCorpse");
		return ptr;
	}

};


// Class ConZ.PrisonerFirstPersonSubviewComponent
// 0x0060 (0x0890 - 0x0830)
class UPrisonerFirstPersonSubviewComponent : public UCameraComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0830(0x0008) MISSED OFFSET
	float                                              MinViewYaw;                                               // 0x0838(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxViewYaw;                                               // 0x083C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveLinearColor*                           MinMaxViewPitchByYawAndSpeed;                             // 0x0840(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveVector*                                LocalSpaceOffsetByYaw;                                    // 0x0848(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveVector*                                LocalSpaceOffsetByPitch;                                  // 0x0850(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveVector*                                ActorSpaceOffsetByYaw;                                    // 0x0858(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveVector*                                ActorSpaceOffsetByPitch;                                  // 0x0860(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ProbeSize;                                                // 0x0868(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     ProbeChannel;                                             // 0x086C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DoCollisionTest;                                          // 0x086D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x086E(0x0002) MISSED OFFSET
	struct FName                                       AnimationBobbingTYCurveName;                              // 0x0870(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       AnimationBobbingTZCurveName;                              // 0x0878(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       AnimationBobbingRRCurveName;                              // 0x0880(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimationBobbingTScale;                                   // 0x0888(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimationBobbingRScale;                                   // 0x088C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerFirstPersonSubviewComponent");
		return ptr;
	}

};


// Class ConZ.PrisonerViewComponent
// 0x0020 (0x0110 - 0x00F0)
class UPrisonerViewComponent : public UActorComponent
{
public:
	float                                              DefaultSubviewBlendDuration;                              // 0x00F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x00F4(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerViewComponent");
		return ptr;
	}

};


// Class ConZ.PrisonerFirstPersonViewComponent
// 0x00F0 (0x0200 - 0x0110)
class UPrisonerFirstPersonViewComponent : public UPrisonerViewComponent
{
public:
	float                                              StandingToCrouchingSubviewBlendDuration;                  // 0x0110(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StandingToProneSubviewBlendDuration;                      // 0x0114(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StandingToStandingMeleeSubviewBlendDuration;              // 0x0118(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CrouchingToStandingSubviewBlendDuration;                  // 0x011C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CrouchingToProneSubviewBlendDuration;                     // 0x0120(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ProneToStandingSubviewBlendDuration;                      // 0x0124(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ProneToCrouchingSubviewBlendDuration;                     // 0x0128(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StandingMeleeToStandingSubviewBlendDuration;              // 0x012C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnyToStandingAimingSubviewBlendDuration;                  // 0x0130(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnyToCrouchingAimingSubviewBlendDuration;                 // 0x0134(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnyToProneAimingSubviewBlendDuration;                     // 0x0138(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnyToStandingAimingDownTheSightsSubviewBlendDuration;     // 0x013C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnyToCrouchingAimingDownTheSightsSubviewBlendDuration;    // 0x0140(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnyToProneAimingDownTheSightsSubviewBlendDuration;        // 0x0144(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnyToClimbingWindowSubviewBlendDuration;                  // 0x0148(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnyFromClimbingWindowSubviewBlendDuration;                // 0x014C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       StandingSubviewName;                                      // 0x0150(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       CrouchingSubviewName;                                     // 0x0158(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ProneSubviewName;                                         // 0x0160(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       StandingMeleeSubviewName;                                 // 0x0168(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       StandingAimingSubviewName;                                // 0x0170(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       CrouchingAimingSubviewName;                               // 0x0178(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ProneAimingSubviewName;                                   // 0x0180(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       StandingAimingDownTheSightsSubviewName;                   // 0x0188(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       CrouchingAimingDownTheSightsSubviewName;                  // 0x0190(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ProneAimingDownTheSightsSubviewName;                      // 0x0198(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ClimbingWindowSubviewName;                                // 0x01A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x01A8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerFirstPersonViewComponent");
		return ptr;
	}

};


// Class ConZ.PrisonerHUD
// 0x00E0 (0x04E8 - 0x0408)
class APrisonerHUD : public AHUD
{
public:
	class UHudWidget*                                  HudWidget;                                                // 0x0408(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UDamageDirectionIndicator*                   DamageDirectionIndicator;                                 // 0x0410(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_NoClear, CPF_IsPlainOldData)
	bool                                               ShouldDrawCrosshair;                                      // 0x0418(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShouldDrawScreenCenterDot;                                // 0x0419(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x041A(0x0006) MISSED OFFSET
	class UMaterialInterface*                          TacticsMaterial;                                          // 0x0420(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ULoadingIconWidget*                          LoadingIconWidget;                                        // 0x0428(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USpawnScreen*                                SpawnScreenWidget;                                        // 0x0430(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWaypointScreenWidget*                       WaypointScreenWidget;                                     // 0x0438(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0440(0x00A0) MISSED OFFSET
	class UGameEventScoreboardWidget*                  _scoreboardWidget;                                        // 0x04E0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerHUD");
		return ptr;
	}


	void ToggleHUDMode();
	void SetHUDMode(EPrisonerHUDMode NewMode);
	bool IsShowingSpawnScreen();
	bool IsShowingLoading();
	class UWaypointScreenWidget* GetWaypointScreenWidget();
	class UCanvasPanel* GetHudWidgetCanvasPanel();
	EPrisonerHUDMode GetHUDMode();
};


// Class ConZ.PrisonerInventoryComponent
// 0x0250 (0x0340 - 0x00F0)
class UPrisonerInventoryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00F0(0x0028) MISSED OFFSET
	struct FScriptMulticastDelegate                    ItemEquipped;                                             // 0x0118(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ItemUnequipped;                                           // 0x0128(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UObjectSelectionContainerWidget*             SelectionWidget;                                          // 0x0138(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UCraftingInfoWidget*>                 CraftingInfoWidgets;                                      // 0x0140(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	TArray<struct FItemArray>                          EquippedItems;                                            // 0x0150(0x0010) (CPF_Net, CPF_ZeroConstructor)
	float                                              AddSelectionDuration;                                     // 0x0160(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AddSelectionReplicationDelay;                             // 0x0164(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TickFrequency;                                            // 0x0168(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	class UVicinityItemContainerWidget*                VicinityWidget;                                           // 0x0170(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UClass*>                              _startingClothes;                                         // 0x0178(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<class UCombinedInventoryWidget*>            _inventoryWidgets;                                        // 0x0188(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	TMap<TWeakObjectPtr<class AItem>, TWeakObjectPtr<class UGenericItemContainerWidget>> _viewingItemContainerWidgets;                             // 0x0198(0x0050) (CPF_ExportObject, CPF_ZeroConstructor)
	class UHandInventoryWidget*                        _handWidget;                                              // 0x01E8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x01F0(0x0008) MISSED OFFSET
	class USkeletalMesh*                               _unequippedHeadMesh;                                      // 0x01F8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USkeletalMesh*                               _unequippedTorsoMesh;                                     // 0x0200(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USkeletalMesh*                               _unequippedLegsMesh;                                      // 0x0208(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USkeletalMesh*                               _unequippedFeetMesh;                                      // 0x0210(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USkeletalMesh*                               _unequippedArmsMesh;                                      // 0x0218(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USkeletalMesh*                               _unequippedHandsMesh;                                     // 0x0220(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 _chipMesh;                                                // 0x0228(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AClothesItem*                                _headUpperItem;                                           // 0x0230(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AClothesItem*                                _torsoItem;                                               // 0x0238(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AClothesItem*                                _legsItem;                                                // 0x0240(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AClothesItem*                                _feetItem;                                                // 0x0248(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AClothesItem*                                _backItem;                                                // 0x0250(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AClothesItem*                                _handsItem;                                               // 0x0258(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AClothesItem*                                _eyesItem;                                                // 0x0260(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FItemArray>                          _oldEquippedItems;                                        // 0x0268(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0278(0x0020) MISSED OFFSET
	TMap<TWeakObjectPtr<class AItem>, uint32_t>        _vicinityItems;                                           // 0x0298(0x0050) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData04[0x8];                                       // 0x02E8(0x0008) MISSED OFFSET
	TMap<struct FGameplayTag, struct FClothesPartSet>  _clothesPartsToDamageByMeleeAttackCapsuleAttachment;      // 0x02F0(0x0050) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerInventoryComponent");
		return ptr;
	}


	void UpdateItemContainerOnServer(class AItem* Item, const struct FCondensedInventoryContainer& container, EItemContainerOperation Operation);
	void UpdateItemContainerOnClient(class AItem* Item, const struct FCondensedInventoryContainer& container, EItemContainerOperation Operation);
	void UnEquipStolenClothesItemOnServer(class APrisoner* stolenPrisoner, class AClothesItem* Item);
	void UnEquipClothesItemOnServer(class AClothesItem* Item, bool placeInInventory);
	void UnEquipClothesItem(class AClothesItem* Item, bool placeInInventory);
	void ResendItemToClientOnServer(class AItem* containingItem, unsigned char column, unsigned char row);
	void ReportItemNotReceived(unsigned char containerId, unsigned char column, unsigned char row);
	void RemoveStolenItemOnServer(class APrisoner* stolenPrisoner, class AItem* Item);
	void RemoveSelectionItemsOnClients(TArray<class AItem*> Items, bool allClients);
	void RemoveSelectionItemsOnClient(TArray<class AItem*> Items);
	void RemoveItemOnServer(class AItem* Item);
	void RemoveItemOnClient(unsigned char containerId, class AItem* Item);
	void OnViewingItemPickedUpStateChanged(class AItem* Item, bool pickedUp);
	void OnViewingItemDestroyed(class AActor* viewingItem);
	void OnRep_TorsoItem(class AClothesItem* oldItem);
	void OnRep_LegsItem(class AClothesItem* oldItem);
	void OnRep_HeadUpperItem(class AClothesItem* oldItem);
	void OnRep_HandsItem(class AClothesItem* oldItem);
	void OnRep_FeetItem(class AClothesItem* oldItem);
	void OnRep_EyesItem(class AClothesItem* oldItem);
	void OnRep_EquippedItems();
	void OnRep_BackItem(class AClothesItem* oldItem);
	void OnEquippedItemStaticMeshChanged(class AItem* Item);
	void OnEquippedItemSkeletalMeshChanged(class AItem* Item);
	void OnEquippedClothesDestroyed(class AActor* Actor);
	void MoveItemOnServer(unsigned char oldContainerId, unsigned char newContainerId, class AItem* Item, unsigned char column, unsigned char row);
	void MoveItemOnClient(unsigned char oldContainerId, unsigned char newContainerId, class AItem* Item, unsigned char column, unsigned char row);
	void ItemUnequippedDelegate__DelegateSignature(class UPrisonerInventoryComponent* sender, class AItem* Item);
	void ItemEquippedDelegate__DelegateSignature(class UPrisonerInventoryComponent* sender, class AItem* Item);
	bool IsClothesItemEquipped(class AClothesItem* Item);
	void InitializeItemContainerOnServer(class AClothesItem* Item);
	bool HasSelectionItem(class AItem* Item);
	TArray<class AItem*> GetVicinityItems(bool containedItems);
	float GetGearWeightFast();
	float GetGearWeight();
	TArray<class AClothesItem*> GetEquippedItemsForClothesType(EClothesType ClothesType);
	TArray<class AClothesItem*> GetEquippedClothes();
	EBodySlot GetBodySlotForClothesType(EClothesType ClothesType);
	TArray<class AItem*> GetAllItems(bool containedItems);
	void ForceInitiateDropOnClient(class AItem* Item);
	void FinishAddSelectionItemOnServer();
	void EquipItemInHandsOnServer(class AItem* Item);
	void EquipItemInHandsOnClient(class AItem* Item);
	void EquipClothesItemOnServer(class AClothesItem* Item);
	void EquipClothesItem(class AClothesItem* Item);
	void DropItemOnServer(class AItem* Item);
	void DropItemOnClient(class AItem* Item);
	void DropItemAtOnServer(class AItem* Item, const struct FVector& Location, const struct FRotator& Rotation);
	void DropAllItemsOnServer(TArray<class AItem*> Items, bool removeSelection);
	bool CanEquipClothesItem(class AClothesItem* Item);
	bool CanAddItem(class AItem* Item);
	void AutoAddItemToItemOnServer(class AItem* containerItem, class AItem* containedItem);
	void AutoAddItemOnServer(class AItem* Item);
	void AutoAddAllItemsOnServer(TArray<class AItem*> Items, bool removeSelection);
	void AddSelectionItemOnClient(class AItem* Item);
	void AddItemOnServer(unsigned char containerId, class AItem* Item, unsigned char column, unsigned char row);
	void AddItemOnClient(unsigned char containerId, class AItem* Item, unsigned char column, unsigned char row);
	void AddEquippedClothesOnServer(unsigned char containerId, class AClothesItem* Item, unsigned char column, unsigned char row);
	void AddDefaultEquipment();
};


// Class ConZ.PrisonerLifeComponent
// 0x0878 (0x0968 - 0x00F0)
class UPrisonerLifeComponent : public UActorComponent
{
public:
	float                                              GameTimeMultiplier;                                       // 0x00F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BCUDataDownloadInterval;                                  // 0x00F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ComputeStamina;                                           // 0x00F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	float                                              StaminaMultiplier;                                        // 0x00FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UpdateFatness;                                            // 0x0100(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UpdateLeanness;                                           // 0x0101(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UpdateHairLength;                                         // 0x0102(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UpdateFacialHairLength;                                   // 0x0103(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShouldAgeAffectAttributes;                                // 0x0104(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	float                                              BreathOxygenSaturationRate;                               // 0x0108(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ChokingOxygenSaturationThreshold;                         // 0x010C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinUnconsciousTimeAfterMeleeCombatKnockout;               // 0x0110(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxUnconsciousTimeAfterMeleeCombatKnockout;               // 0x0114(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    StateAdded;                                               // 0x0118(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    StateRemoved;                                             // 0x0128(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    PrisonerDied;                                             // 0x0138(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	bool                                               _BCUDataInitialized;                                      // 0x0148(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0149(0x0003) MISSED OFFSET
	float                                              SCR_Idle;                                                 // 0x014C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SCR_Walking;                                              // 0x0150(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SCR_Jogging;                                              // 0x0154(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SCR_Running;                                              // 0x0158(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SCR_ExtraWhenMovingUphill;                                // 0x015C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SCR_ExtraWhenMovingDownhill;                              // 0x0160(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SP_Easy;                                                  // 0x0164(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SP_Demanding;                                             // 0x0168(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SP_VeryDemanding;                                         // 0x016C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 DexterityModifierVsExcessGearWeight;                      // 0x0170(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CaloriesConsumptionModifierWhenMovingUphill;              // 0x0178(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CaloriesConsumptionModifierWhenMovingDownhill;            // 0x017C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MeleeDamageModifierWhenStrengthIsMinimal;                 // 0x0180(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MeleeDamageModifierWhenStrengthIsMaximal;                 // 0x0184(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AlcoholExcretionRate;                                     // 0x0188(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShouldOverridePulse;                                      // 0x018C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x018D(0x0003) MISSED OFFSET
	float                                              OverriddenPulse;                                          // 0x0190(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShouldOverrideSystolicBloodPressure;                      // 0x0194(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0195(0x0003) MISSED OFFSET
	float                                              OverriddenSystolicBloodPressure;                          // 0x0198(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShouldOverrideDiastolicBloodPressure;                     // 0x019C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	float                                              OverriddenDiastolicBloodPressure;                         // 0x01A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShouldOverrideBreathRate;                                 // 0x01A4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x01A5(0x0003) MISSED OFFSET
	float                                              OverriddenBreathRate;                                     // 0x01A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShouldOverrideBodyTemperature;                            // 0x01AC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x01AD(0x0003) MISSED OFFSET
	float                                              OverriddenBodyTemperature;                                // 0x01B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET
	TArray<class UClass*>                              PrisonWalletItems;                                        // 0x01B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	class UClass*                                      PrisonWalletMilestoneEventItem;                           // 0x01C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PrisonerWalletLastMilestone;                              // 0x01D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x5C];                                      // 0x01D4(0x005C) MISSED OFFSET
	float                                              _initialStrength;                                         // 0x0230(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _initialConstitution;                                     // 0x0234(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _initialDexterity;                                        // 0x0238(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _initialIntelligence;                                     // 0x023C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           _initialAge;                                              // 0x0240(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _shouldIgnoreBodyTemperatureChanges;                      // 0x0244(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData10[0x5B];                                      // 0x0245(0x005B) MISSED OFFSET
	bool                                               _overrideInitialWeight;                                   // 0x02A0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x02A1(0x0003) MISSED OFFSET
	float                                              _initialWeight;                                           // 0x02A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData12[0x470];                                     // 0x02A8(0x0470) MISSED OFFSET
	TArray<class UDigestionItem*>                      _digestionItems;                                          // 0x0718(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData13[0x8];                                       // 0x0728(0x0008) MISSED OFFSET
	TArray<class USickness*>                           _sicknesses;                                              // 0x0730(0x0010) (CPF_ZeroConstructor)
	TArray<class UHealingItem*>                        _healingItems;                                            // 0x0740(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData14[0x9C];                                      // 0x0750(0x009C) MISSED OFFSET
	float                                              _forcedUrinationDefecationWarningDelay;                   // 0x07EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _forcedUrinationDefecationActionDelay;                    // 0x07F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData15[0x10];                                      // 0x07F4(0x0010) MISSED OFFSET
	uint32_t                                           _replicatedStatus;                                        // 0x0804(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData16[0x8];                                       // 0x0808(0x0008) MISSED OFFSET
	uint64_t                                           _replicatedStates;                                        // 0x0810(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           _replicatedBreath;                                        // 0x0818(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           _replicatedBodyTemp;                                      // 0x081C(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           _replicatedEnergy;                                        // 0x0820(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           _replicatedFatnessLeannessHair;                           // 0x0824(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           _replicatedAgilityNormalized;                             // 0x0828(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EPrisonerMovementPace                              _replicatedPace;                                          // 0x082C(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x082D(0x0003) MISSED OFFSET
	uint32_t                                           _replicatedHealth;                                        // 0x0830(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           _replicatedStamina;                                       // 0x0834(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           _replicatedSCR;                                           // 0x0838(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x083C(0x0004) MISSED OFFSET
	struct FPrisonerBCUMonitorData                     _BCUMonitorData;                                          // 0x0840(0x0128) (CPF_Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerLifeComponent");
		return ptr;
	}


	void UpdateAttributesHistoryOnClient(TArray<float> strengthHistory, TArray<float> constitutionHistory, TArray<float> dexterityHistory, TArray<float> intelligenceHistory);
	void TestDoDigestionStuff(float Value);
	void TestDoBladderStuff(float Value);
	void TakeMedicationOnServer(class AMedicationItem* MedicationItem);
	void StopLifeProcessing();
	void StateRemovedDelegate__DelegateSignature(class UPrisonerLifeComponent* sender, EBodyState State);
	void StateAddedDelegate__DelegateSignature(class UPrisonerLifeComponent* sender, EBodyState State);
	void SetUsingDebugPresets(bool Value);
	void SetStrength(float Value);
	void SetStamina(float Value);
	void SetMuscularAndFatFactors(float muscular, float Fat);
	void SetMusclesOnServer(ETestMinMax Value);
	void SetInitialAttributes(float Strength, float Constitution, float Dexterity, float Intelligence, int Age);
	void SetFatnessOnServer(ETestMinMax Value);
	void SetDexterity(float Value);
	void SetConstitution(float Value);
	void SetBreathRateFactorOnServer(float factor);
	void Server_SpawnPrisonWalletItem(const struct FVector& Location);
	void PushActionOnServer(float Duration, float staminaDrain, EPrisonerTempCategory tempCategory, float staminaRecoveryDelay, float staminaRecoveryTime);
	void PushAction(float Duration, float staminaDrain, EPrisonerTempCategory tempCategory, float staminaRecoveryDelay, float staminaRecoveryTime);
	void PrisonerDiedDelegate__DelegateSignature(class UPrisonerLifeComponent* sender);
	void OnRep_ReplicatedStatus();
	void OnRep_ReplicatedStates();
	void OnRep_BCUMonitorData();
	bool IsReadyToEat();
	bool IsConscious();
	bool IsChoking();
	bool IsBreathing();
	bool IsBodyPartInjured(EBodyPart bodyPart);
	bool IsAlive();
	bool HasState(EBodyState State);
	float GetWLTVeryDemanding();
	float GetWLTForActionDifficulty(EPrisonerActionDifficulty actionDifficulty);
	float GetWLTEasy();
	float GetWLTDemanding();
	float GetWLT();
	float GetWeightNormalized();
	float GetWeightLoad();
	float GetWeight();
	float GetWCRWalking();
	float GetWCRRunning();
	float GetWCRModifier();
	float GetWCRJogging();
	float GetWCRIdle();
	float GetWaterUsage();
	float GetWaterToAbsorb();
	float GetWaterIntake();
	float GetWaterBalanceClamped();
	float GetWaterBalance();
	float GetVitamin(EVitamin vitamin);
	float GetViewRange();
	float GetTemperatureDeviation();
	unsigned char GetTeethNumber();
	float GetSystolicBloodPressure();
	float GetSugarRDA();
	float GetSugarNormalized();
	float GetSugar();
	float GetStrengthNormalized();
	TArray<float> GetStrengthHistory();
	float GetStrengthGain();
	float GetStrengthChangeInLastPeriod();
	float GetStrength();
	float GetStorageFat();
	float GetStomachWaterVolume();
	float GetStomachVolumeRatio();
	float GetStomachVolumeOccupied();
	float GetStomachVolumeMax();
	float GetStaminaRecoveryModifier();
	float GetStaminaNormalized();
	float GetStaminaConsumptionModifier();
	float GetStamina();
	float GetSodiumRDA();
	float GetSodiumNormalized();
	float GetSodium();
	TArray<class USickness*> GetSicknesses();
	EPrisonerSex GetSex();
	float GetSCRWalking();
	float GetSCRRunning();
	float GetSCRJogging();
	float GetSCRIdle();
	float GetSCR();
	float GetSaturatedFatRDA();
	float GetSaturatedFatNormalized();
	float GetSaturatedFat();
	float GetResistPoisonsModifier();
	float GetPulse();
	float GetProteinsRDA();
	float GetProteinsNormalized();
	float GetProteins();
	float GetPerformanceFailure();
	float GetOxygenSaturation();
	float GetMuscleMassRange();
	float GetMuscleMassChange();
	float GetMuscleMass();
	float GetMSR();
	float GetMSI();
	float GetMineral(EMineral mineral);
	float GetMinBlood();
	float GetMetabolicCalories();
	float GetMaxHealth();
	float GetMaxFoodWeight();
	float GetLifeTime();
	float GetIntestineVolumeOccupied();
	float GetIntestineVolumeMax();
	float GetIntelligenceNormalized();
	TArray<float> GetIntelligenceHistory();
	float GetIntelligenceChangeInLastPeriod();
	float GetIntelligence();
	float GetInitialWeight();
	float GetInitialMuscleMass();
	float GetInitialBlood();
	float GetHydration();
	float GetHungerCalories();
	float GetHoldingBreathModifier();
	float GetHealthPointsModifier();
	float GetHealth();
	float GetHealingSpeedModifier();
	float GetHealingSpeed();
	TArray<class UHealingItem*> GetHealingItems();
	float GetGearWeightLimitForSwimming();
	float GetGearWeight();
	float GetFoodWeightRatio();
	float GetFoodWeight();
	float GetFiberRDA();
	float GetFiberNormalized();
	float GetFiber();
	float GetFatRDA();
	float GetFatNormalized();
	float GetFat();
	float GetEnergyUsage();
	float GetEnergyIntake();
	float GetEnergy();
	EPrisonerECGRhythm GetECGRhythm();
	float GetEatingSpeed();
	float GetDrunkenness();
	TArray<class UDigestionItem*> GetDigestionItems();
	float GetDiastolicBloodPressure();
	float GetDexterityNormalized();
	float GetDexterityMultiplier(float gearWeight, EPrisonerActionDifficulty actionDifficulty);
	TArray<float> GetDexterityHistory();
	float GetDexterityGain();
	float GetDexterityChangeInLastPeriod();
	float GetDexterity();
	float GetDailyWaterIntake();
	float GetDailySugarCalories();
	float GetDailyProteinsCalories();
	float GetDailyFatCalories();
	float GetDailyCarbsCalories();
	float GetDailyCaloriesIntake();
	float GetDailyAlcoholCalories();
	float GetCurrentWaterConsumption();
	EPrisonerMovementPace GetCurrentState();
	float GetCurrentStaminaChange();
	float GetCurrentCaloriesConsumption();
	float GetConstitutionNormalized();
	TArray<float> GetConstitutionHistory();
	float GetConstitutionGain();
	float GetConstitutionChangeInLastPeriod();
	float GetConstitution();
	float GetColonVolumeOccupied();
	float GetColonVolumeMax();
	float GetCarbsRDA();
	float GetCarbsNormalized();
	float GetCarbs();
	float GetCaloriesWalking();
	float GetCaloriesUsageSpeed();
	float GetCaloriesRunning();
	float GetCaloriesJogging();
	float GetCaloriesIdle();
	float GetCaloriesBurntModifier();
	float GetCaloriesBalance();
	float GetCalories();
	float GetBreathVolume();
	float GetBreath();
	float GetBodyTempIncrease();
	float GetBodyTempCategory();
	float GetBodyTemp();
	float GetBlood();
	EBleedingType GetBleedingType(EBodyPart bodyPart, bool returnNoneIfTreated);
	float GetBladderVolumeOccupied();
	float GetBladderVolumeMax();
	float GetBFP();
	bool GetBCUDataInitialized();
	bool GetAttributesHistoryInitialized();
	float GetAlcohol();
	float GetAge();
	void EnterUnconsciousness(float unconsciousTime, float deathTime);
	void EatFoodOnServer(class AFoodItem* FoodItem, bool eatAll);
	void DrinkWaterOnServer(float quantity, float salinity);
	void DownloadBCUMonitorDataFromServer();
	void DieOnServer();
	void Die();
	void Client_WarnForBodyState(EBodyState State);
	void CancelEatingOnServer();
	void CancelEating();
};


// Class ConZ.PrisonerLoadout
// 0x0068 (0x0098 - 0x0030)
class UPrisonerLoadout : public UDataAsset
{
public:
	class UClass*                                      primary;                                                  // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UClass*>                              primaryAttachments;                                       // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UClass*                                      secondary;                                                // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UClass*>                              secondaryAttachments;                                     // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UClass*                                      tertiary;                                                 // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UClass*>                              tertiaryAttachments;                                      // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class UClass*>                              outfit;                                                   // 0x0078(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class UClass*>                              support;                                                  // 0x0088(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerLoadout");
		return ptr;
	}


	void EquipPrisoner(class APrisoner* Prisoner, TArray<class AItem*>* givenItems);
};


// Class ConZ.PrisonerMovementComponent
// 0x05B0 (0x0D70 - 0x07C0)
class UPrisonerMovementComponent : public UCharacterMovementComponent
{
public:
	float                                              CapsuleHalfHeightWhenCrouched;                            // 0x07C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CapsuleHalfHeightWhenProne;                               // 0x07C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseCustomRotationRate;                                    // 0x07C8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               RequestedPathMovesForwardOnly;                            // 0x07C9(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x07CA(0x0002) MISSED OFFSET
	float                                              RotationInterpolationSpeed;                               // 0x07CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 MaxRotationRateCurve;                                     // 0x07D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationRateMultiplierWhenStanding;                       // 0x07D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationRateMultiplierWhenCrouched;                       // 0x07DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationRateMultiplierWhenProne;                          // 0x07E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationRateMultiplierWhenSwimming;                       // 0x07E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationRateMultiplierWhenSwimmingAndDiving;              // 0x07E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroundSlopeAngleForSpeedScalingSmoothingRate;             // 0x07EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroundSlopeAngleSmoothingRate;                            // 0x07F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseSmoothedGroundSlopeAngleForPaceChecks;                 // 0x07F4(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07F5(0x0003) MISSED OFFSET
	float                                              MinGroundSlopeAngleForJogging;                            // 0x07F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxGroundSlopeAngleForJogging;                            // 0x07FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinGroundSlopeAngleForRunning;                            // 0x0800(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxGroundSlopeAngleForRunning;                            // 0x0804(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinSpeedModifierWhenMovingUphill;                         // 0x0808(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BaseJumpZVelocity;                                        // 0x080C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StaminaUnitsToDrainOnJump;                                // 0x0810(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0814(0x0004) MISSED OFFSET
	class UCurveFloat*                                 JumpZVelocityMultiplierVsSpeed;                           // 0x0818(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 JumpZVelocityMultiplierVsGroundSlopeAngle;                // 0x0820(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FPrisonerClimbAnimationInfo>         ClimbAnimations;                                          // 0x0828(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              ClimbingStaminaDrainModifier;                             // 0x0838(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ClimbingPlayRateMultiplierWhenRequiredHandIsNotFree;      // 0x083C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ClimbingDebuggingEnabled;                                 // 0x0840(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0841(0x0003) MISSED OFFSET
	float                                              ClimbingDebuggingDrawTime;                                // 0x0844(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     LadderClimbingCapsuleBias;                                // 0x0848(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              LadderClimbingMaxSpeed;                                   // 0x0854(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanClimbOffLadderUpwardsAutomatically;                    // 0x0858(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanClimbOffLadderDownwardsAutomatically;                  // 0x0859(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x085A(0x0002) MISSED OFFSET
	float                                              MaxHorzDistanceToLadderForClimbing;                       // 0x085C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumberOfLadderPeekSteps;                                  // 0x0860(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     PostLadderClimbingLaunchVelocity;                         // 0x0864(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              MaxHeightToJumpOffLadderSafely;                           // 0x0870(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxFallingSpeedAllowedForLadderClimbing;                  // 0x0874(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 MaxHorzDistanceToWindowForClimbingVsSpeed;                // 0x0878(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FWindowClimbingAnimationInfo>        WindowClimbingAnimations;                                 // 0x0880(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              WaterImmersionToStartSwimming;                            // 0x0890(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WaterImmersionToStopSwimming;                             // 0x0894(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DesiredWaterImmersion;                                    // 0x0898(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DesiredWaterImmersionCorrectionAcceleration;              // 0x089C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 DesiredWaterImmersionCorrectionAccelerationCurve;         // 0x08A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WaterResurfaceAcceleration;                               // 0x08A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   OceanWavesAcceleration;                                   // 0x08AC(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	float                                              WaterImmersionAfterWhichRunningIsDisabled;                // 0x08B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ImmersionCorrectionDownMultiplier;                        // 0x08B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationRateMultiplierWhenImmersedInWater;                // 0x08BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DiveInAccelerationScale;                                  // 0x08C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DiveInAccelerationTimeout;                                // 0x08C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DiveInCollisionCheckOffset;                               // 0x08C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BuoyancyWhenDiving;                                       // 0x08CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BuoyancyWhenNotDiving;                                    // 0x08D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationRatePitchWhenDiving;                              // 0x08D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x228];                                     // 0x08D8(0x0228) MISSED OFFSET
	struct FPrisonerClimbingStateForSimulatedProxies   _climbingStateForSimulatedProxy;                          // 0x0B00(0x0038) (CPF_Net)
	unsigned char                                      UnknownData06[0xD8];                                      // 0x0B38(0x00D8) MISSED OFFSET
	struct FLadderInfoRepData                          _ladderInfoRepData;                                       // 0x0C10(0x0050) (CPF_Net)
	unsigned char                                      UnknownData07[0x110];                                     // 0x0C60(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerMovementComponent");
		return ptr;
	}


	void Server_ClimbOffLadder();
	bool JumpOffLadder(const struct FVector& jumpVelocity);
	float IsFlyingOrFalling();
	bool IsClimbingWindow();
	bool IsClimbingLadder();
	bool IsClimbing();
	struct FWindowInfo GetWindowInfo();
	float GetWaterImmersionDepth();
	float GetTimeSpentInAir();
	float GetTimeSpentFalling();
	EPrisonerMovementPace GetMaxAllowedPace();
	struct FLadderInfo GetLadderInfo();
	float GetGroundSlopeAngleSmoothed();
	float GetGroundSlopeAngleForSpeedScaling();
	float GetGroundSlopeAngle();
	float GetDesiredCoursePitchAngle();
	float GetDesiredCourseAngle();
	EPrisonerMovementMode GetCustomMovementMode();
	struct FClimbableObstacleInfo GetClimbableObstacleInfo();
	struct FHitResult GetAnticipatedLandingSpot();
	float GetActualCourseAngle();
	bool DetectWindow(struct FWindowInfo* Result);
	bool DetectLadderDisembarkLocation(const struct FLadderInfo& LadderInfo, struct FVector* newCapsuleLocation, struct FRotator* newCapsuleRotation);
	bool DetectLadder(struct FLadderInfo* Result);
	bool DetectClimbableObstacle(struct FClimbableObstacleInfo* Result);
	bool ClimbWindow(const struct FWindowInfo& WindowInfo);
	bool ClimbOntoLadder(const struct FLadderInfo& LadderInfo);
	bool ClimbOffLadder();
	bool Climb();
	bool CanClimbWindow();
	bool CanClimbOntoLadder();
	bool CanClimb();
};


// Class ConZ.PrisonerMovementSettings
// 0x0160 (0x0190 - 0x0030)
class UPrisonerMovementSettings : public UDataAsset
{
public:
	struct FPrisonerMovementSettings_Ground            Ground;                                                   // 0x0030(0x00F4) (CPF_Edit)
	struct FPrisonerMovementSettings_Air               Air;                                                      // 0x0124(0x000C) (CPF_Edit)
	struct FPrisonerMovementSettings_Water             Water;                                                    // 0x0130(0x0048) (CPF_Edit)
	float                                              RotationRateMultiplierWhenDexterityIsMinimal;             // 0x0178(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationRateMultiplierWhenDexterityIsMaximal;             // 0x017C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ClimbingSpeedMultiplierWhenDexterityIsMinimal;            // 0x0180(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ClimbingSpeedMultiplierWhenDexterityIsMaximal;            // 0x0184(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WindowClimbingSpeedMultiplierWhenDexterityIsMinimal;      // 0x0188(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WindowClimbingSpeedMultiplierWhenDexterityIsMaximal;      // 0x018C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerMovementSettings");
		return ptr;
	}

};


// Class ConZ.PrisonerPlayerController
// 0x0108 (0x0778 - 0x0670)
class APrisonerPlayerController : public APlayerController
{
public:
	TArray<class UPrimitiveComponent*>                 ComponentsToHide;                                         // 0x0670(0x0010) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor)
	struct FScriptMulticastDelegate                    OnPrisonerSpawned;                                        // 0x0680(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UInteractionContainerUserWidget*             CurrentInteractionContainerWidget;                        // 0x0690(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              LocalChatDistance;                                        // 0x0698(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x069C(0x0054) MISSED OFFSET
	class UDbUserProfile*                              _userProfile;                                             // 0x06F0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x06F8(0x0030) MISSED OFFSET
	class APawn*                                       _possessedPawn;                                           // 0x0728(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0730(0x0010) MISSED OFFSET
	class UPawnNoiseEmitterComponent*                  _noiseEmitterComponent;                                   // 0x0740(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0748(0x0020) MISSED OFFSET
	int                                                _cachedFamePoints;                                        // 0x0768(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                _cachedFameLevel;                                         // 0x076C(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0770(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerPlayerController");
		return ptr;
	}


	void ToggleGameMenuEvent();
	void ShowNotification(const struct FString& Message, float Duration);
	void ShowKillFeedNotificationOnClient(const struct FString& prefix, const struct FString& characterName, const struct FString& suffix, bool ping);
	void SetIsChatDuplicationToMessageNotificationsMuted(bool Value);
	void SetGameEventCooldown(float cooldown);
	void SetFamePoints(int Value);
	void Server_RequestRespawnWaitTime();
	void Server_RequestGameEventTeamChange(int preferredTeam);
	void Server_RequestCharacterStats(uint32_t ID, const struct FString& steamId, int count, ECharacterStatsSorting sort, bool descending);
	void Server_ReportWorldStreamed();
	void Server_ReportStartLeavingGame();
	void Server_ReportCancelLeavingGame();
	void Server_ProcessAdminCommand(const struct FString& authToken, const struct FString& commandText);
	void Server_LeaveGameEvent();
	void Server_JoinGameEvent(class AGameEventBase* gameEvent, int preferredTeam);
	void SendHUDMessageToClient(const struct FString& Message, bool beep);
	void SendHUDMessageToAll(const struct FString& Message, bool beep);
	void SendChatStringToServer(const struct FString& string, EChatType chatType);
	void SendChatStringToClient(const struct FString& string, EChatType chatType);
	void SendAnimalEyeSocketYawToServer(class AAnimal2* Animal, unsigned char Yaw);
	void SaveState();
	void RepossesOriginalPrisoner();
	void RemoveServerFromFavorites();
	void PrisonerSpawnedDelegate__DelegateSignature(class APrisoner* spawnedPrisoner);
	void OnRep_PossessedPawn();
	bool LineOfSightTo(class AActor* Other, const struct FVector& ViewPoint, bool alternateChecks);
	void LeaveGameEvent();
	void JoinGameEvent(class AGameEventBase* gameEvent, int preferredTeam);
	void InputComponent_CancelAllControllerActions();
	struct FString GetUserProfileName();
	class UDbUserProfile* GetUserProfile();
	struct FString GetUserName2();
	struct FString GetUserId();
	float GetRespawnWaitTime();
	class APrisonerCameraManager* GetPrisonerCameraManager();
	class UPawnNoiseEmitterComponent* GetNoiseEmitterComponent();
	struct FPlayerLoginInfo GetLoginInfo();
	bool GetIsChatDuplicationToMessageNotificationsMuted();
	float GetGameEventCooldown();
	int GetFamePoints();
	float GetFameMultiplier();
	int GetFameLevel();
	static void Crash();
	void Client_SetRespawnWaitTime(float Seconds);
	void Client_SetGameEventCooldown(float cooldown);
	void Client_SaveState();
	void Client_RecieveCharacterStats(uint32_t ID, TArray<struct FCharacterStatsItem> stats, int rank);
	void Client_ProcessAdminCommand_ListAssets(const struct FString& assetType, const struct FString& Filter);
	void Client_Login(const struct FPlayerLoginInfo& serverLoginInfo);
	bool CanAddServerToFavorites();
	void AddServerToFavorites();
};


// Class ConZ.PrisonerSkillComponent
// 0x0180 (0x0270 - 0x00F0)
class UPrisonerSkillComponent : public UActorComponent
{
public:
	TArray<struct FPrisonerInitialSkillInfo>           InitialSkills;                                            // 0x00F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	float                                              TickFrequency;                                            // 0x0100(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReplicatedMedicalDiagnosisDone;                           // 0x0104(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x0105(0x0013) MISSED OFFSET
	TArray<class USkill*>                              _skills;                                                  // 0x0118(0x0010) (CPF_ZeroConstructor)
	TArray<class USkillAction*>                        _actions;                                                 // 0x0128(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0xA8];                                      // 0x0138(0x00A8) MISSED OFFSET
	class USkillClasses*                               _skillClasses;                                            // 0x01E0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class AAnimal*>                             _handledAnimals;                                          // 0x01E8(0x0010) (CPF_Net, CPF_ZeroConstructor)
	TArray<class AItem*>                               _lastSurroundingItems;                                    // 0x01F8(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0208(0x0008) MISSED OFFSET
	TArray<class APrisoner*>                           _detectablePrisoners;                                     // 0x0210(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0220(0x0010) MISSED OFFSET
	struct FMedicalRecord                              _replicatedMedicalRecord;                                 // 0x0230(0x0028) (CPF_Net)
	TArray<struct FSkillRecord>                        _replicatedSkills;                                        // 0x0258(0x0010) (CPF_Net, CPF_ZeroConstructor)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0268(0x0004) MISSED OFFSET
	uint32_t                                           _replicatedNoiseLevel;                                    // 0x026C(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerSkillComponent");
		return ptr;
	}


	void UpdateNearbyFoliageCoverageOnServer(float coverage, bool isInBushes);
	void UpdateIsInFocusModeOnServer(bool isInFocus);
	void TreatSicknessOnServer(class APrisoner* Patient, EDiagnosedResult diagnosedResult, TArray<class AItem*> medicalItems);
	void TreatBrokenLimbsOnServer(class APrisoner* Patient, EBrokenLimbsTreatment treatment, TArray<class AItem*> medicalItems);
	void TreatBrokenLimbsOnClients(class APrisoner* Patient);
	void TameAnimalOnServer(class AAnimal* Animal, class AItem* Item);
	void ShowWatchingWarningOnClient();
	void SetSkillStaminaConsumptionOnServer(class USkill* Skill, float consumption);
	void SetDetectablePrisonersOnServer(TArray<class APrisoner*> detectablePrisoners);
	void SendVisiblePrisoners();
	void RevivePatientOnServer(class APrisoner* Patient);
	void RevivePatientOnClients(class APrisoner* Patient);
	void RequestNearbyFoliageUpdateOnClient();
	void PullToothOnServer(class APrisoner* Patient, TArray<class AItem*> medicalItems);
	void PullToothOnClients(class APrisoner* Patient);
	void PerformSurgeryOnServer(class APrisoner* Patient, TArray<class AItem*> medicalItems);
	void PerformSurgeryOnClients(class APrisoner* Patient);
	void PerformAnesthesiaOnServer(class APrisoner* Patient, EAnesthesiaType anesthesiaType, TArray<class AItem*> medicalItems);
	void PerformAnesthesiaOnClients(class APrisoner* Patient);
	void PatchWoundsOnServer(class APrisoner* Patient, TArray<class AItem*> medicalItems);
	void PatchWoundsOnClients(class APrisoner* Patient);
	void PacifyAnimalOnServer(class AAnimal* Animal, class AItem* Item);
	void OnRep_Skills();
	void OnRep_MedicalRecord();
	void MedicalDiagnosisOnServer(class APrisoner* Patient, EMedicalDiagnosisType diagnosisType);
	void MakeUnconsciousOnServer(class APrisoner* Patient);
	void MakeUnconsciousOnClients(class APrisoner* Patient);
	void MakeConsciousOnServer(class APrisoner* Patient);
	void MakeConsciousOnClients(class APrisoner* Patient);
	void LearnAnimalOnServer(class AAnimal* Animal, TArray<class AItem*> Items, EAnimalLearnLevel learnLevel);
	void HighlightNearbyItems();
	void HighlightItemOnClient(class AItem* Item);
	TArray<class USkill*> GetSkills();
	void ForceSkillsReplicationOnServer();
	void FeedAnimalOnServer(class AAnimal* Animal, TArray<class AItem*> Items);
	void CommandAnimalOnServer(class AAnimal* Animal, EAnimalCommand Command, class AItem* Item, class AConZCharacter* Character);
	void ArtificalPerspirationOnServer(class APrisoner* Patient);
	void ArtificalPerspirationOnClients(class APrisoner* Patient);
};


// Class ConZ.PrisonerSoundComponent
// 0x0158 (0x0270 - 0x0118)
class UPrisonerSoundComponent : public UCharacterSoundComponent
{
public:
	float                                              MinBreathingRateToPostPeriodicInhaleExhaleAudioEvents;    // 0x0118(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxDistanceToListenerToPostPeriodicInhaleExhaleAudioEvents;// 0x011C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               PeriodicInhaleAudioEvent;                                 // 0x0120(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               PeriodicExhaleAudioEvent;                                 // 0x0128(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               HoldBreathInhaleAudioEvent;                               // 0x0130(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               HoldBreathExhaleAudioEvent;                               // 0x0138(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               HoldBreathBreathlessExhaleAudioEvent;                     // 0x0140(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinHeartRateToPostHeartbeatAudioEvent;                    // 0x0148(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               HeartbeatAudioEvent;                                      // 0x0150(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               FootstepsAudioEvent;                                      // 0x0158(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MovingThroughFoliageGateDuration;                         // 0x0160(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               StartGenericMovingThroughFoliageAudioEvent;               // 0x0168(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StopGenericMovingThroughFoliageAudioEvent;                // 0x0170(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               GenericOneShotMovingThroughFoliageAudioEvent;             // 0x0178(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               GearNoiseAudioEvent;                                      // 0x0180(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               GearNoiseAudioEventWhenInWater;                           // 0x0188(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ItemMotionNoiseTimeToLive;                                // 0x0190(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               StartGenericEatItemAudioEvent;                            // 0x0198(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StopGenericEatItemAudioEvent;                             // 0x01A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StartGenericDrinkItemAudioEvent;                          // 0x01A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StopGenericDrinkItemAudioEvent;                           // 0x01B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StartGenericDrinkWaterAudioEvent;                         // 0x01B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StopGenericDrinkWaterAudioEvent;                          // 0x01C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StartGenericExamineObjectAudioEvent;                      // 0x01C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StopGenericExamineObjectAudioEvent;                       // 0x01D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StartGenericCraftAudioEvent;                              // 0x01D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StopGenericCraftAudioEvent;                               // 0x01E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StartGenericUncraftAudioEvent;                            // 0x01E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StopGenericUncraftAudioEvent;                             // 0x01F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundCue*                                   OutOfBoundsSound;                                         // 0x01F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               ChipExplosionSound;                                       // 0x0200(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x48];                                      // 0x0208(0x0048) MISSED OFFSET
	TArray<struct FActiveMovingThroughFoliageSounds>   _activeMovingThroughFoliageSounds;                        // 0x0250(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0260(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerSoundComponent");
		return ptr;
	}


	bool UpdateMovingThroughFoliageSounds(int playingId, EMotionIntensity motionIntensity);
	bool StopMovingThroughFoliageSounds(int playingId);
	void StopAllMovingThroughFoliageSounds();
	int PlayMovingThroughFoliageSounds(class UAkAudioEvent* StartAudioEvent, class UAkAudioEvent* StopAudioEvent, EMotionIntensity motionIntensity);
	void PlayGearSounds(EMotionIntensity motionIntensity);
	void PlayFootstepSounds(TEnumAsByte<EPhysicalSurface> inPhysicalSurface);
	void OnOutOfBoundsSoundPercentChanged(class USoundWave* PlayingSoundWave, float PlaybackPercent);
	void OnBorderCrossingStateChanged(class APrisoner* Prisoner, EPrisonerBorderCrossingPenalty penalty);
};


// Class ConZ.PrisonerSubview
// 0x0000 (0x0028 - 0x0028)
class UPrisonerSubview : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerSubview");
		return ptr;
	}

};


// Class ConZ.PrisonerThirdPersonSubviewComponent
// 0x05E0 (0x0900 - 0x0320)
class UPrisonerThirdPersonSubviewComponent : public USpringArmComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0320(0x0008) MISSED OFFSET
	float                                              FieldOfView;                                              // 0x0328(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseFieldOfViewForLOD;                                     // 0x032C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ConstrainAspectRatio;                                     // 0x032D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x032E(0x0002) MISSED OFFSET
	float                                              AspectRatio;                                              // 0x0330(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinViewYaw;                                               // 0x0334(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxViewYaw;                                               // 0x0338(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinViewPitch;                                             // 0x033C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxViewPitch;                                             // 0x0340(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LeanOffsetLeft;                                           // 0x0344(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LeanOffsetRight;                                          // 0x0348(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     GlobalOffset;                                             // 0x034C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	bool                                               MirrorAroundXZPlane;                                      // 0x0358(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	struct FVector                                     MaxLocalOffsetWhenColliding;                              // 0x035C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              LocalOffsetCurvesBlendSpeed;                              // 0x0368(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	struct FLocalOffsetCurves                          LocalOffsetCurves[0x2];                                   // 0x0370(0x0020) (CPF_Edit)
	struct FName                                       AnimationOffsetTZCurveName;                               // 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PostProcessBlendWeight;                                   // 0x03B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x03C0(0x0520) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData05[0x20];                                      // 0x08E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerThirdPersonSubviewComponent");
		return ptr;
	}

};


// Class ConZ.PrisonerThirdPersonViewComponent
// 0x0118 (0x0228 - 0x0110)
class UPrisonerThirdPersonViewComponent : public UPrisonerViewComponent
{
public:
	float                                              StandingToCrouchingSubviewBlendDuration;                  // 0x0110(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StandingToProneSubviewBlendDuration;                      // 0x0114(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CrouchingToStandingSubviewBlendDuration;                  // 0x0118(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CrouchingToProneSubviewBlendDuration;                     // 0x011C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ProneToStandingSubviewBlendDuration;                      // 0x0120(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ProneToCrouchingSubviewBlendDuration;                     // 0x0124(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StandingMeleeSubviewBlendDuration;                        // 0x0128(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StandingAimingSubviewBlendDuration;                       // 0x012C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CrouchingAimingSubviewBlendDuration;                      // 0x0130(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ProneAimingSubviewBlendDuration;                          // 0x0134(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RagdollToSubviewBlendDuration;                            // 0x0138(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RagdollFromSubviewBlendDuration;                          // 0x013C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NarrowLadderSubviewBlendDuration;                         // 0x0140(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DivingSubviewBlendDuration;                               // 0x0144(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ClimbingWindowToSubviewBlendDuration;                     // 0x0148(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ClimbingWindowFromSubviewBlendDuration;                   // 0x014C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DefecatingToSubviewBlendDuration;                         // 0x0150(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DefecatingFromSubviewBlendDuration;                       // 0x0154(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       StandingSubviewName;                                      // 0x0158(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       CrouchingSubviewName;                                     // 0x0160(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ProneSubviewName;                                         // 0x0168(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       StandingMeleeSubviewName;                                 // 0x0170(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       StandingAimingSubviewName;                                // 0x0178(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       CrouchingAimingSubviewName;                               // 0x0180(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ProneAimingSubviewName;                                   // 0x0188(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       RagdollSubviewName;                                       // 0x0190(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       NarrowLadderSubviewName;                                  // 0x0198(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       DivingSubviewName;                                        // 0x01A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ClimbingWindowSubviewName;                                // 0x01A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       DefecatingSubviewName;                                    // 0x01B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x70];                                      // 0x01B8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PrisonerThirdPersonViewComponent");
		return ptr;
	}

};


// Class ConZ.Projectile
// 0x01B0 (0x04C8 - 0x0318)
class AProjectile : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               RotationFollowsVelocity;                                  // 0x0320(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IsInstantHit;                                             // 0x0321(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               AddImpulseOnHit;                                          // 0x0322(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0323(0x0001) MISSED OFFSET
	float                                              ImpulseMultiplier;                                        // 0x0324(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxImpulse;                                               // 0x0328(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x032C(0x0004) MISSED OFFSET
	class UProjectileImpactEffects*                    ImpactEffects;                                            // 0x0330(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FProjectileData                             ProjectileData;                                           // 0x0338(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              MeshScaleStartLocal;                                      // 0x0360(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MeshScaleRangeLocal;                                      // 0x0364(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MeshScaleMinLocal;                                        // 0x0368(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MeshScaleMaxLocal;                                        // 0x036C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MeshScaleStart;                                           // 0x0370(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MeshScaleRange;                                           // 0x0374(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MeshScaleMin;                                             // 0x0378(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MeshScaleMax;                                             // 0x037C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TraceScaleMultiplier;                                     // 0x0380(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              GravityScale;                                             // 0x0384(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               FlyByAudioEvent;                                          // 0x0388(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ColorMaterialParameterName;                               // 0x0390(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                InitialColor;                                             // 0x0398(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                FinalColor;                                               // 0x03A8(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	int                                                HitCount;                                                 // 0x03B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IgnoreCallingWeaponsFiringEffects;                        // 0x03BC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x13];                                      // 0x03BD(0x0013) MISSED OFFSET
	bool                                               _useFixedTimestep;                                        // 0x03D0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03D1(0x0003) MISSED OFFSET
	float                                              _fixedTimestep;                                           // 0x03D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x18];                                      // 0x03D8(0x0018) MISSED OFFSET
	int                                                _zeroRange;                                               // 0x03F0(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _windage;                                                 // 0x03F4(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _distanceTraveled;                                        // 0x03F8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _meshScaleFactor;                                         // 0x03FC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x20];                                      // 0x0400(0x0020) MISSED OFFSET
	float                                              _offsetFromBarrel;                                        // 0x0420(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	int                                                _randomSeed;                                              // 0x0428(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x7C];                                      // 0x042C(0x007C) MISSED OFFSET
	bool                                               _doNotForceInitialReplication;                            // 0x04A8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               _createdOnServer;                                         // 0x04A9(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x04AA(0x0002) MISSED OFFSET
	float                                              _halfAngle;                                               // 0x04AC(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x18];                                      // 0x04B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Projectile");
		return ptr;
	}


	void OnStop();
};


// Class ConZ.ProjectileDamageType
// 0x0000 (0x0040 - 0x0040)
class UProjectileDamageType : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ProjectileDamageType");
		return ptr;
	}

};


// Class ConZ.ProjectileImpactEffects
// 0x0290 (0x02C0 - 0x0030)
class UProjectileImpactEffects : public UDataAsset
{
public:
	float                                              MinDecalSize;                                             // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxDecalSize;                                             // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinDecalLifetime;                                         // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxDecalLifetime;                                         // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DecalFadeMultiplier;                                      // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class UParticleSystem*                             BulletPenetrationExitParticlesDaytime;                    // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             BulletPenetrationExitParticlesNighttime;                  // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterial*                                   DayTimePenetrationDecal;                                  // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterial*                                   NightTimePenetrationDecal;                                // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0068(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FImpactEffectData                           Default;                                                  // 0x0070(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           grass;                                                    // 0x0080(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           ForrestGroundCoastal;                                     // 0x0090(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           ForrestGroundContinental;                                 // 0x00A0(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Rock;                                                     // 0x00B0(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Stone;                                                    // 0x00C0(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Gravel;                                                   // 0x00D0(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           GravelBeach;                                              // 0x00E0(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Pebbles;                                                  // 0x00F0(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Snow;                                                     // 0x0100(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Ice;                                                      // 0x0110(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Sand;                                                     // 0x0120(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Asphalt;                                                  // 0x0130(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Dirt;                                                     // 0x0140(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Water;                                                    // 0x0150(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           WaterOcean;                                               // 0x0160(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Cloth;                                                    // 0x0170(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Metal;                                                    // 0x0180(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Aluminium;                                                // 0x0190(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Concrete;                                                 // 0x01A0(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Brick;                                                    // 0x01B0(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Wood;                                                     // 0x01C0(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Plastic;                                                  // 0x01D0(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Rubber;                                                   // 0x01E0(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Glass;                                                    // 0x01F0(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Folliage;                                                 // 0x0200(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Bark;                                                     // 0x0210(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Flesh;                                                    // 0x0220(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           RoofTile;                                                 // 0x0230(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           CeramicsTiles;                                            // 0x0240(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Scrap;                                                    // 0x0250(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Trunk;                                                    // 0x0260(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Leaves;                                                   // 0x0270(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Cardboard;                                                // 0x0280(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Plaster;                                                  // 0x0290(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           Kevlar;                                                   // 0x02A0(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FImpactEffectData                           ForceField;                                               // 0x02B0(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ProjectileImpactEffects");
		return ptr;
	}

};


// Class ConZ.ProjectileShotgun
// 0x0010 (0x04D8 - 0x04C8)
class AProjectileShotgun : public AProjectile
{
public:
	class UClass*                                      projectileClass;                                          // 0x04C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ShotsCount;                                               // 0x04D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04D4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ProjectileShotgun");
		return ptr;
	}

};


// Class ConZ.ProteinDeficiency
// 0x0000 (0x01C0 - 0x01C0)
class UProteinDeficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ProteinDeficiency");
		return ptr;
	}

};


// Class ConZ.PsilocybeCyanescensPoisoning
// 0x0008 (0x01B8 - 0x01B0)
class UPsilocybeCyanescensPoisoning : public UPoisoning
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PsilocybeCyanescensPoisoning");
		return ptr;
	}

};


// Class ConZ.PullToothAction
// 0x0000 (0x01C0 - 0x01C0)
class UPullToothAction : public UMedicalAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.PullToothAction");
		return ptr;
	}

};


// Class ConZ.QuickAccessBarWidget
// 0x0010 (0x0230 - 0x0220)
class UQuickAccessBarWidget : public UDesignableUserWidget
{
public:
	TArray<class UQuickAccessItemWidget*>              _quickAccessItemContainers;                               // 0x0220(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.QuickAccessBarWidget");
		return ptr;
	}

};


// Class ConZ.QuickAccessItemSwitcher
// 0x0018 (0x0270 - 0x0258)
class UQuickAccessItemSwitcher : public UBaseItemContainerWidget
{
public:
	int                                                Index;                                                    // 0x0258(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x025C(0x0004) MISSED OFFSET
	class AItem*                                       _item;                                                    // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTextBlock*                                  _nameText;                                                // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.QuickAccessItemSwitcher");
		return ptr;
	}


	void OnDropEvent(class UInventorySlotUserWidget* inventorySlot, class UBaseItemWidget* Item);
	void OnDragStartEvent(class UBaseItemWidget* Widget, const struct FGeometry& Geometry);
	void OnDragCancelledEvent(class UBaseItemWidget* Widget);
	bool GetSlots(class UGridSlot* GridSlot, int Width, int Height, TArray<class UInventorySlotUserWidget*>* Slots);
};


// Class ConZ.QuickAccessItemWidget
// 0x0030 (0x0250 - 0x0220)
class UQuickAccessItemWidget : public UDesignableUserWidget
{
public:
	unsigned char                                      MaxWidth;                                                 // 0x0220(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MaxHeight;                                                // 0x0221(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0222(0x0006) MISSED OFFSET
	class UImage*                                      _imageWidget;                                             // 0x0228(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TWeakObjectPtr<class AItem>                        _item;                                                    // 0x0230(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DefaultWidth;                                             // 0x0238(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DefaultHeight;                                            // 0x023C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   DefaultPosition;                                          // 0x0240(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0248(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.QuickAccessItemWidget");
		return ptr;
	}


	void OnQuickAccessItemPickedUpStateChanged(class AItem* Item, bool PickedUpState);
	void OnItemDestroyed(class AActor* itemActor);
};


// Class ConZ.Rabbit
// 0x0000 (0x09D0 - 0x09D0)
class ARabbit : public AAnimal
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Rabbit");
		return ptr;
	}

};


// Class ConZ.Rabbit2
// 0x0000 (0x09E0 - 0x09E0)
class ARabbit2 : public AAnimal2
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Rabbit2");
		return ptr;
	}

};


// Class ConZ.SimpleAnimalAIController
// 0x0090 (0x04A0 - 0x0410)
class ASimpleAnimalAIController : public AAIController
{
public:
	float                                              WanderRadius;                                             // 0x0410(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RunAwayTime;                                              // 0x0414(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinActionTime;                                            // 0x0418(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxActionTime;                                            // 0x041C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WalkSpeed;                                                // 0x0420(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RunSpeed;                                                 // 0x0424(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FleeSegmentDistance;                                      // 0x0428(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AlertStartupTime;                                         // 0x042C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinMoveDistance;                                          // 0x0430(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DoNotDespawnTime;                                         // 0x0434(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0438(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SimpleAnimalAIController");
		return ptr;
	}


	void UpdatePerception(TArray<class AActor*> actorsPercepted);
	void StartAlert();
	void OnTakeDamageHandler(class AActor* damageActor, float Damage, const struct FVector& HitLocation, class APawn* eventInstigator);
};


// Class ConZ.Rabbit2AIController
// 0x0010 (0x04B0 - 0x04A0)
class ARabbit2AIController : public ASimpleAnimalAIController
{
public:
	float                                              MoveSegment;                                              // 0x04A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MovementPauseMinTime;                                     // 0x04A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MovementPauseMaxTime;                                     // 0x04A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngleOffset;                                              // 0x04AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Rabbit2AIController");
		return ptr;
	}


	void Wander();
};


// Class ConZ.RabbitAIController
// 0x0000 (0x04A0 - 0x04A0)
class ARabbitAIController : public AAnimalAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.RabbitAIController");
		return ptr;
	}

};


// Class ConZ.RabbitAnimInstance
// 0x0000 (0x03E0 - 0x03E0)
class URabbitAnimInstance : public UAnimalAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.RabbitAnimInstance");
		return ptr;
	}

};


// Class ConZ.RadiationSickness
// 0x0028 (0x01D8 - 0x01B0)
class URadiationSickness : public UDisease
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x01B0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.RadiationSickness");
		return ptr;
	}

};


// Class ConZ.RecastNavMesh_Humanoids
// 0x0000 (0x05D0 - 0x05D0)
class ARecastNavMesh_Humanoids : public ARecastNavMesh
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.RecastNavMesh_Humanoids");
		return ptr;
	}

};


// Class ConZ.RecastNavMesh_LargeAnimals
// 0x0000 (0x05D0 - 0x05D0)
class ARecastNavMesh_LargeAnimals : public ARecastNavMesh
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.RecastNavMesh_LargeAnimals");
		return ptr;
	}

};


// Class ConZ.RecastNavMesh_Sentries
// 0x0000 (0x05D0 - 0x05D0)
class ARecastNavMesh_Sentries : public ARecastNavMesh
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.RecastNavMesh_Sentries");
		return ptr;
	}

};


// Class ConZ.RecastNavMesh_SmallAnimals
// 0x0000 (0x05D0 - 0x05D0)
class ARecastNavMesh_SmallAnimals : public ARecastNavMesh
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.RecastNavMesh_SmallAnimals");
		return ptr;
	}

};


// Class ConZ.RegularDoorStatic
// 0x0018 (0x03C8 - 0x03B0)
class ARegularDoorStatic : public ADoor
{
public:
	struct FRotator                                    _openRotation;                                            // 0x03B0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FRotator                                    _closedRotation;                                          // 0x03BC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.RegularDoorStatic");
		return ptr;
	}

};


// Class ConZ.RegularDoorDestructible
// 0x0018 (0x03C8 - 0x03B0)
class ARegularDoorDestructible : public ADoor
{
public:
	struct FRotator                                    _openRotation;                                            // 0x03B0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FRotator                                    _closedRotation;                                          // 0x03BC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.RegularDoorDestructible");
		return ptr;
	}

};


// Class ConZ.RemoveMagazineInsertCartridge
// 0x0000 (0x0080 - 0x0080)
class URemoveMagazineInsertCartridge : public UWeaponActionReloadSequence
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.RemoveMagazineInsertCartridge");
		return ptr;
	}

};


// Class ConZ.RemoveMagazineInsertMagazine
// 0x0000 (0x0080 - 0x0080)
class URemoveMagazineInsertMagazine : public UWeaponActionReloadSequence
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.RemoveMagazineInsertMagazine");
		return ptr;
	}

};


// Class ConZ.ResistanceSkill
// 0x0000 (0x00B0 - 0x00B0)
class UResistanceSkill : public UConstitutionSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ResistanceSkill");
		return ptr;
	}

};


// Class ConZ.RespawnPrices
// 0x0010 (0x0040 - 0x0030)
class URespawnPrices : public UDataAsset
{
public:
	int                                                RandomLocationPrice;                                      // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SectorLocationPrice;                                      // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ShelterLocationPrice;                                     // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SquadLocationPrice;                                       // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.RespawnPrices");
		return ptr;
	}

};


// Class ConZ.RespiratoryRateWidget
// 0x00C8 (0x01C8 - 0x0100)
class URespiratoryRateWidget : public UWidget
{
public:
	struct FSlateBrush                                 Brush;                                                    // 0x0100(0x0078) (CPF_Edit, CPF_BlueprintVisible)
	struct FScriptDelegate                             BrushDelegate;                                            // 0x0178(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0188(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x0198(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
	float                                              Thickness;                                                // 0x01A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Periods;                                                  // 0x01AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET
	class UPrisonerLifeComponent*                      _prisonerLifeComponent;                                   // 0x01C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.RespiratoryRateWidget");
		return ptr;
	}


	void SetPrisonerLifeComponent(class UPrisonerLifeComponent* Value);
	class UPrisonerLifeComponent* GetPrisonerLifeComponent();
	float GetMinRespiratoryRate();
	float GetMaxRespiratoryRate();
};


// Class ConZ.RevivePatientAction
// 0x0000 (0x01C0 - 0x01C0)
class URevivePatientAction : public UMedicalAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.RevivePatientAction");
		return ptr;
	}

};


// Class ConZ.RiflesSkill
// 0x0000 (0x00A8 - 0x00A8)
class URiflesSkill : public URangedWeaponsSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.RiflesSkill");
		return ptr;
	}

};


// Class ConZ.RunningSkill
// 0x0048 (0x00F8 - 0x00B0)
class URunningSkill : public UConstitutionSkill
{
public:
	struct FRunningSkillParametersPerSkillLevel        NoSkillParameters;                                        // 0x00B0(0x0010) (CPF_Edit)
	struct FRunningSkillParametersPerSkillLevel        BasicSkillParameters;                                     // 0x00C0(0x0010) (CPF_Edit)
	struct FRunningSkillParametersPerSkillLevel        MediumSkillParameters;                                    // 0x00D0(0x0010) (CPF_Edit)
	struct FRunningSkillParametersPerSkillLevel        AdvancedSkillParameters;                                  // 0x00E0(0x0010) (CPF_Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.RunningSkill");
		return ptr;
	}

};


// Class ConZ.SalmonellaDisease
// 0x0008 (0x01B8 - 0x01B0)
class USalmonellaDisease : public UDisease
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SalmonellaDisease");
		return ptr;
	}

};


// Class ConZ.SaltedFoodItem
// 0x0000 (0x0870 - 0x0870)
class ASaltedFoodItem : public ACookedFoodItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SaltedFoodItem");
		return ptr;
	}

};


// Class ConZ.SearchItemDataAsset
// 0x0040 (0x0070 - 0x0030)
class USearchItemDataAsset : public UDataAsset
{
public:
	struct FText                                       Caption;                                                  // 0x0030(0x0018) (CPF_Edit)
	float                                              Duration;                                                 // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<struct FSearchPerItemData>                  SearchData;                                               // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UAkAudioEvent*                               StartSearchAudioEvent;                                    // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StopSearchAudioEvent;                                     // 0x0068(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SearchItemDataAsset");
		return ptr;
	}

};


// Class ConZ.SearchForItemsAssetData
// 0x0008 (0x0038 - 0x0030)
class USearchForItemsAssetData : public UInteractionAssetData
{
public:
	class USearchItemDataAsset*                        SearchAsset;                                              // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SearchForItemsAssetData");
		return ptr;
	}

};


// Class ConZ.SeleniumDeficiency
// 0x0000 (0x01C0 - 0x01C0)
class USeleniumDeficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SeleniumDeficiency");
		return ptr;
	}

};


// Class ConZ.Sentry
// 0x08D0 (0x1100 - 0x0830)
class ASentry : public AConZCharacter
{
public:
	float                                              MaxRunningSpeed;                                          // 0x0830(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0834(0x0004) MISSED OFFSET
	struct FName                                       LeftGunName;                                              // 0x0838(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       RightGunName;                                             // 0x0840(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       LeftGunRail02Name;                                        // 0x0848(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       RightGunRail02Name;                                       // 0x0850(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       LeftGunSocketName;                                        // 0x0858(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       RightGunSocket01Name;                                     // 0x0860(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       RightGunSocket02Name;                                     // 0x0868(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UAnimMontage*>                        KickMontages;                                             // 0x0870(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FName                                       RightFootSocket;                                          // 0x0880(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       LeftFootSocket;                                           // 0x0888(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     RightFootHitNormal;                                       // 0x0890(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FVector                                     LeftFoorHitNormal;                                        // 0x089C(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              IKInterpSpeed;                                            // 0x08A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IKOffsetRightFoot;                                        // 0x08AC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IKOffsetLeftFoot;                                         // 0x08B0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08B4(0x0004) MISSED OFFSET
	class UClass*                                      projectileClass;                                          // 0x08B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseCustomWeaponSpreadData;                                // 0x08C0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x08C1(0x0003) MISSED OFFSET
	struct FWeaponSpreadData                           WeaponSpreadData;                                         // 0x08C4(0x0034) (CPF_Edit)
	bool                                               UseCustomWeaponViewKickData;                              // 0x08F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x08F9(0x0003) MISSED OFFSET
	struct FWeaponViewKickData                         WeaponViewKickData;                                       // 0x08FC(0x0018) (CPF_Edit)
	float                                              AIWeaponSpreadConeHalfAngle;                              // 0x0914(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayerWeaponSpreadConeHalfAngle;                          // 0x0918(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FirstBulletsToMiss;                                       // 0x091C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     LGunSocketBasePoseRelativeLocation;                       // 0x0920(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector                                     RGunSocket01BasePoseRelativeLocation;                     // 0x092C(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector                                     RGunSocket02BasePoseRelativeLocation;                     // 0x0938(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0944(0x0004) MISSED OFFSET
	TArray<struct FPatrolPoint>                        PatrolPoints;                                             // 0x0948(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                AmmoCountInOneMagazine;                                   // 0x0958(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x095C(0x0004) MISSED OFFSET
	class UAnimMontage*                                ReloadMontage;                                            // 0x0960(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GunRotationHalfAngleDegrees;                              // 0x0968(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x096C(0x0004) MISSED OFFSET
	struct FName                                       EyesViewPointSocketName;                                  // 0x0970(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class ASentryGuardVolume*>                  GuardedAreaVolumes;                                       // 0x0978(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<struct FDangerZone>                         DangerZones;                                              // 0x0988(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	class UAkAudioEvent*                               FireBulletAudioEvent;                                     // 0x0998(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               ReloadAudioEvent;                                         // 0x09A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               WarningAudioEvent;                                        // 0x09A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               TargetEngagedAudioEvent;                                  // 0x09B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               LastWarningAudioEvent;                                    // 0x09B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               PlayerKilledAudioEvent;                                   // 0x09C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               PlayerLostAudioEvent;                                     // 0x09C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               HeardPrisonerAudioEvent;                                  // 0x09D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StompShakeEffectRadius;                                   // 0x09D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x09DC(0x0004) MISSED OFFSET
	class UClass*                                      StompCameraShake;                                         // 0x09E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USplineMeshComponent*                        LaserSplineMesh;                                          // 0x09E8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class USplineComponent*                            LaserSpline;                                              // 0x09F0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              LaserLerpSpeed;                                           // 0x09F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MeleeAttackCooldownTime;                                  // 0x09FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     JumpAttackLaunchVelocityOBSOLETE;                         // 0x0A00(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0A0C(0x0004) MISSED OFFSET
	class UAnimMontage*                                JumpAttackMontageOBSOLETE;                                // 0x0A10(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RunDamage;                                                // 0x0A18(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0A1C(0x0004) MISSED OFFSET
	class UCapsuleComponent*                           PawnBlockingCapsule;                                      // 0x0A20(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData10[0xA];                                       // 0x0A28(0x000A) MISSED OFFSET
	bool                                               _isInCombatMode;                                          // 0x0A32(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWeaponAimingType                                  _weaponAimingType;                                        // 0x0A33(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isAimOverridden;                                         // 0x0A34(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0A35(0x0003) MISSED OFFSET
	struct FVector                                     _overrideAimLocation;                                     // 0x0A38(0x000C) (CPF_Net, CPF_IsPlainOldData)
	unsigned char                                      UnknownData12[0x63C];                                     // 0x0A44(0x063C) MISSED OFFSET
	struct FVector                                     _gunsLookAtLocation;                                      // 0x1080(0x000C) (CPF_Net, CPF_IsPlainOldData)
	unsigned char                                      UnknownData13[0x20];                                      // 0x108C(0x0020) MISSED OFFSET
	bool                                               _holdGunsAtReady;                                         // 0x10AC(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData14[0xF];                                       // 0x10AD(0x000F) MISSED OFFSET
	float                                              _inflictedDamageMultiplier;                               // 0x10BC(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData15[0x20];                                      // 0x10C0(0x0020) MISSED OFFSET
	TArray<class USpotLightComponent*>                 _spotLights;                                              // 0x10E0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	TArray<class UStaticMeshComponent*>                _lightsMeshes;                                            // 0x10F0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Sentry");
		return ptr;
	}


	void TickIK(float DeltaTime);
	void PlayWarningSound();
	void PlayTargetEngagedSound();
	void PlayReloadSound();
	void PlayPlayerLostSound();
	void PlayPlayerKilledSound();
	void PlayMontageMulticast(class UAnimMontage* Montage, float PlayRate, const struct FName& montageSection);
	void PlayLastWarningSound();
	void PlayHeardPrisonerSound();
	void OnRep_GunsLookAtLocation();
	void NetMulticast_Reload();
	void Kill();
	bool IsAlive();
	struct FVector GetMuzzleLocation();
	struct FVector GetMuzzleDirection();
	float GetHealth();
	void GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation);
	void FireShotEffects_Multicast();
	void DealDamage_Multicast(class AActor* ActorToDamge, float Damage);
	void ChangeLightsColor(const struct FColor& Color);
};


// Class ConZ.SentryAIController
// 0x0108 (0x0518 - 0x0410)
class ASentryAIController : public AAIController
{
public:
	float                                              CloseCombatRange;                                         // 0x0410(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StandStillCombatRange;                                    // 0x0414(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FollowSlowlyCombatRange;                                  // 0x0418(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TargetNotSeenWaitTime;                                    // 0x041C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TargetSeenWaitTime;                                       // 0x0420(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AttackCooldownTime;                                       // 0x0424(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LostSightCooldown;                                        // 0x0428(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TargetEngagedStartup;                                     // 0x042C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StuckCountdown;                                           // 0x0430(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SentryRunAttackChance;                                    // 0x0434(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RunAttackRange;                                           // 0x0438(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RunAttackPredictionFactor;                                // 0x043C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RunAttackTrackingRangeStart;                              // 0x0440(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RunAttackTrackingRangeStop;                               // 0x0444(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RunAttackExtraDistance;                                   // 0x0448(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxNumOfWarningsOBSOLETE;                                 // 0x044C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WarningNumberResetTime;                                   // 0x0450(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeardNoiseAudioAllowedAgainTime;                          // 0x0454(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LostSightOfTargetAudioAllowedAgainTime;                   // 0x0458(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xBC];                                      // 0x045C(0x00BC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SentryAIController");
		return ptr;
	}


	void SensingComponent_OnSensePawn(TArray<class AActor*> actorsPercepted);
	void SensingComponent_OnSeePawn(class AActor* PawnSeen);
	void SensingComponent_OnHearNoise(class AActor* NoiseInstigator, const struct FVector& Location, float Volume);
	void OnTakenDamage(class AActor* damageInstigator);
};


// Class ConZ.SentryAnimInstance
// 0x00E0 (0x04A0 - 0x03C0)
class USentryAnimInstance : public UAnimInstance
{
public:
	float                                              BlendOutTime;                                             // 0x03C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GunsLerpFactor;                                           // 0x03C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     RightFootEffectorLocation;                                // 0x03C8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FVector                                     LeftFootEffectorLocation;                                 // 0x03D4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FRotator                                    RightFootRotation;                                        // 0x03E0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FRotator                                    LeftFootRotation;                                         // 0x03EC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	bool                                               ShouldUseLUWalkStopAnimation;                             // 0x03F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03F9(0x0003) MISSED OFFSET
	float                                              stoppingDistance;                                         // 0x03FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0400(0x0048) MISSED OFFSET
	bool                                               _isSentryCompletelyInitialized;                           // 0x0448(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isInCombatMode;                                          // 0x0449(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _wantsToMove;                                             // 0x044A(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _previousWantsToMove;                                     // 0x044B(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	ESentryMovementPace                                _movementPace;                                            // 0x044C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x044D(0x0003) MISSED OFFSET
	float                                              _actualCourseAngle;                                       // 0x0450(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _desiredCourseAngle;                                      // 0x0454(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _desiredCoursePitchAngle;                                 // 0x0458(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _angularVelocity;                                         // 0x045C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     _velocity;                                                // 0x0460(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              _speed;                                                   // 0x046C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     _forwardVector;                                           // 0x0470(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	bool                                               _isFalling;                                               // 0x047C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x047D(0x0003) MISSED OFFSET
	struct FVector                                     _gunsLookAtLocation;                                      // 0x0480(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              _leanLeftBlendWeight;                                     // 0x048C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _leanRightBlendWeight;                                    // 0x0490(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0494(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SentryAnimInstance");
		return ptr;
	}


	float GetTurnInPlaceElapsedTimeRight();
	float GetTurnInPlaceElapsedTimeLeft();
	float GetTurnInPlaceDirectionBlendAlpha();
	float GetTurnInPlaceBlendAlpha();
	static float FindTimeAtStoppingDistance(class UAnimSequenceBase* AnimSequence, float stoppingDistance);
	void AnimNotify_SentryJump();
	void AnimNotify_RFootDown();
	void AnimNotify_LFootDown();
};


// Class ConZ.SentryFirstPersonViewComponent
// 0x0000 (0x0110 - 0x0110)
class USentryFirstPersonViewComponent : public UPrisonerViewComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SentryFirstPersonViewComponent");
		return ptr;
	}

};


// Class ConZ.SentryGuardVolume
// 0x0020 (0x0370 - 0x0350)
class ASentryGuardVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0350(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SentryGuardVolume");
		return ptr;
	}

};


// Class ConZ.SentryMovementComponent
// 0x0030 (0x07F0 - 0x07C0)
class USentryMovementComponent : public UCharacterMovementComponent
{
public:
	class UCurveFloat*                                 MaxRotationRateCurve;                                     // 0x07C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationInterpolationSpeed;                               // 0x07C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CorrectServerReceivedZ;                                   // 0x07CC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x23];                                      // 0x07CD(0x0023) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SentryMovementComponent");
		return ptr;
	}

};


// Class ConZ.SentrySpawner
// 0x0068 (0x0380 - 0x0318)
class ASentrySpawner : public AActor
{
public:
	float                                              ActivationDistance;                                       // 0x0318(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x031C(0x0004) MISSED OFFSET
	class UClass*                                      SentryToSpawn;                                            // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FPatrolPoint>                        PatrolPoints;                                             // 0x0328(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<class ASentryGuardVolume*>                  GuardedAreaVolumes;                                       // 0x0338(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<struct FDangerZone>                         DangerZones;                                              // 0x0348(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	class UBillboardComponent*                         Sprite;                                                   // 0x0358(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0360(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SentrySpawner");
		return ptr;
	}

};


// Class ConZ.SentryThirdPersonViewComponent
// 0x0030 (0x0140 - 0x0110)
class USentryThirdPersonViewComponent : public UPrisonerViewComponent
{
public:
	struct FName                                       StandingSubviewName;                                      // 0x0110(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       StandingAimingSubviewName;                                // 0x0118(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0120(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SentryThirdPersonViewComponent");
		return ptr;
	}

};


// Class ConZ.SerializableLayoutWidgetInterface
// 0x0000 (0x0028 - 0x0028)
class USerializableLayoutWidgetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SerializableLayoutWidgetInterface");
		return ptr;
	}


	void SaveLayout(const TScriptInterface<class UAttributeMapInterface>& attributes);
	void ResetLayout();
	void LoadLayout(const TScriptInterface<class UAttributeMapInterface>& attributes);
};


// Class ConZ.ServerBrowser
// 0x0120 (0x0328 - 0x0208)
class UServerBrowser : public UUserWidget
{
public:
	int                                                _currentIndex;                                            // 0x0208(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                _widgetCount;                                             // 0x020C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	TArray<struct FServerInfo>                         _serverInfos;                                             // 0x0210(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FServerInfo>                         _unfilteredServerInfos;                                   // 0x0220(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FServerInfo>                         _serverInfosToPing;                                       // 0x0230(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FServerInfo>                         _serverInfosWithPing;                                     // 0x0240(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FServerInfo>                         _serverInfosLastPlayed;                                   // 0x0250(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FServerInfo>                         _serverInfosFavorites;                                    // 0x0260(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst)
	bool                                               _requestingServerList;                                    // 0x0270(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0271(0x0003) MISSED OFFSET
	float                                              _desiredMaxPing;                                          // 0x0274(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FString                                     _desiredHostName;                                         // 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst)
	int                                                _desiredMinPlayers;                                       // 0x0288(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                _desiredMaxPlayers;                                       // 0x028C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	bool                                               _showFullServers;                                         // 0x0290(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	bool                                               _showOnlyPasswordProtectedServers;                        // 0x0291(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	EServerBrowserTab                                  _currentlyOpenTab;                                        // 0x0292(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0293(0x0005) MISSED OFFSET
	class UVerticalBox*                                _serverList;                                              // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x88];                                      // 0x02A0(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ServerBrowser");
		return ptr;
	}


	void UpdateSorting();
	void UpdateList();
	void UpdateFilter();
	void StartNewMultiplayerGame(const struct FString& Ip, int GameplayPort, int ResponsePort, const struct FString& authToken);
	void ShutdownPingingThread();
	static void ShowRentAServerPage();
	void ShowErrorDialog(const struct FText& Message);
	void SetSortType(ESortType Type, bool ascending);
	void SetFilter(const struct FString& Filter);
	void RequestServerList();
	void RemoveInfo(int Index);
	static void RemoveFavoriteServer(class AActor* Context, const struct FString& Host, int ResponsePort);
	void RefreshServerInfosPing();
	void OpenContinueOrNewDialog(const struct FString& Ip, int GameplayPort, int ResponsePort, const struct FString& authToken);
	void OnLastPlayedServersTabOpened();
	void OnInternetTabOpened();
	void OnFavoriteServersTabOpened();
	void EnterPassword();
	void EndWaitingOnServerResponse();
	bool DoesServerInfoSatisfyFilter(const struct FServerInfo& ServerInfo);
	void DisconnectFromServer();
	void ContinueMultiplayerGame(const struct FString& Ip, int GameplayPort, int ResponsePort, const struct FString& authToken);
	bool ConnectToServer(const struct FString& Ip, int ResponsePort, const struct FString& authToken);
	void CloseSocketAndPingingThreads();
	void CloseConnection();
	void CancelWaitingOnServerResponse();
	void BeginWaitingOnServerResponse();
	void AddNewInfo(const struct FServerInfo& ServerInfo);
};


// Class ConZ.ShoulderHolsterWidget
// 0x0018 (0x0270 - 0x0258)
class UShoulderHolsterWidget : public UBaseItemContainerWidget
{
public:
	class UGridPanel*                                  _addonsGridPanel;                                         // 0x0258(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class AItem*                                       _equippedItem;                                            // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                _index;                                                   // 0x0268(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x026C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ShoulderHolsterWidget");
		return ptr;
	}


	void UpdateVisuals();
	void UpdateItemWidgetHighlightings();
	void OnWeaponAttachmentRemoved(class AWeapon* sender, class AWeaponAttachment* Attachment);
	void OnWeaponAttachmentAdded(class AWeapon* sender, class AWeaponAttachment* Attachment);
	void OnDropEvent(class UInventorySlotUserWidget* inventorySlot, class UBaseItemWidget* Item);
	bool GetSlots(class UGridSlot* GridSlot, int Width, int Height, TArray<class UInventorySlotUserWidget*>* Slots);
	TArray<class UItemUserWidget*> GetItemWidgets();
	void EquipItem(class AItem* Item);
};


// Class ConZ.SicknessClasses
// 0x0010 (0x0038 - 0x0028)
class USicknessClasses : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SicknessClasses");
		return ptr;
	}

};


// Class ConZ.SkillClasses
// 0x0010 (0x0038 - 0x0028)
class USkillClasses : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SkillClasses");
		return ptr;
	}

};


// Class ConZ.SkillEventHandler
// 0x0008 (0x0030 - 0x0028)
class USkillEventHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SkillEventHandler");
		return ptr;
	}

};


// Class ConZ.SlidingDoorStatic
// 0x0010 (0x03C0 - 0x03B0)
class ASlidingDoorStatic : public ADoor
{
public:
	class USceneComponent*                             ClosedPositionComponent;                                  // 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             OpenPositionComponent;                                    // 0x03B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SlidingDoorStatic");
		return ptr;
	}

};


// Class ConZ.SlidingDoorDestructible
// 0x0010 (0x03C0 - 0x03B0)
class ASlidingDoorDestructible : public ADoor
{
public:
	class USceneComponent*                             ClosedPositionComponent;                                  // 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             OpenPositionComponent;                                    // 0x03B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SlidingDoorDestructible");
		return ptr;
	}

};


// Class ConZ.SmokedFoodItem
// 0x0000 (0x0870 - 0x0870)
class ASmokedFoodItem : public ACookedFoodItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SmokedFoodItem");
		return ptr;
	}

};


// Class ConZ.SmokeGrenadeItem
// 0x0030 (0x07B0 - 0x0780)
class ASmokeGrenadeItem : public AItem
{
public:
	class UAkAudioEvent*                               SmokeStoppedAudioEvent;                                   // 0x0780(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SmokeSoundDuration;                                       // 0x0788(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _explosionDelay;                                          // 0x078C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0790(0x0008) MISSED OFFSET
	class UParticleSystem*                             _smokeParticle;                                           // 0x0798(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x07A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SmokeGrenadeItem");
		return ptr;
	}


	void Multicast_PlayEffects(const struct FVector& ZeroBasedLcoation, const struct FRotator& Rotation);
};


// Class ConZ.SnipingSkill
// 0x0008 (0x00A0 - 0x0098)
class USnipingSkill : public UIntelligenceSkill
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SnipingSkill");
		return ptr;
	}

};


// Class ConZ.SodiumDeficiency
// 0x0000 (0x01C0 - 0x01C0)
class USodiumDeficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SodiumDeficiency");
		return ptr;
	}

};


// Class ConZ.Spline
// 0x0010 (0x0328 - 0x0318)
class ASpline : public AActor
{
public:
	class USceneComponent*                             SceneComponent;                                           // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USplineComponent*                            SplineComponent;                                          // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Spline");
		return ptr;
	}

};


// Class ConZ.SoundSpline
// 0x0050 (0x0378 - 0x0328)
class ASoundSpline : public ASpline
{
public:
	float                                              MinCameraLocationDeltaForUpdate;                          // 0x0328(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WorldStreamedCheckInterval;                               // 0x032C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0330(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               InsideSplineAudioEvent;                                   // 0x0338(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               OutsideSplineAudioEvent;                                  // 0x0340(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0348(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SoundSpline");
		return ptr;
	}

};


// Class ConZ.SpawnDecalWhenParticleCollides
// 0x0010 (0x0038 - 0x0028)
class USpawnDecalWhenParticleCollides : public UParticleModuleEventSendToGame
{
public:
	TArray<struct FParticleCollisionDecalData>         Decals;                                                   // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SpawnDecalWhenParticleCollides");
		return ptr;
	}

};


// Class ConZ.SpawnMenuWidget
// 0x0000 (0x0220 - 0x0220)
class USpawnMenuWidget : public UDesignableUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SpawnMenuWidget");
		return ptr;
	}

};


// Class ConZ.SpawnScreen
// 0x0000 (0x0220 - 0x0220)
class USpawnScreen : public UDesignableUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SpawnScreen");
		return ptr;
	}


	void UpdateInfo();
};


// Class ConZ.StaphylococcalPoisoning
// 0x0008 (0x01B8 - 0x01B0)
class UStaphylococcalPoisoning : public UPoisoning
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.StaphylococcalPoisoning");
		return ptr;
	}

};


// Class ConZ.StarvationSickness
// 0x0008 (0x01B8 - 0x01B0)
class UStarvationSickness : public USickness
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.StarvationSickness");
		return ptr;
	}

};


// Class ConZ.StealthSkill
// 0x0000 (0x0098 - 0x0098)
class UStealthSkill : public UDexteritySkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.StealthSkill");
		return ptr;
	}

};


// Class ConZ.StoreItemAction
// 0x0020 (0x01E0 - 0x01C0)
class UStoreItemAction : public UInteractionAction
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x01C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.StoreItemAction");
		return ptr;
	}

};


// Class ConZ.SunburnSickness
// 0x0008 (0x01B8 - 0x01B0)
class USunburnSickness : public USickness
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SunburnSickness");
		return ptr;
	}

};


// Class ConZ.SurveillanceCamera
// 0x0000 (0x0340 - 0x0340)
class ASurveillanceCamera : public AElectricalDevice
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SurveillanceCamera");
		return ptr;
	}

};


// Class ConZ.SurveillanceReflector
// 0x0000 (0x0340 - 0x0340)
class ASurveillanceReflector : public AElectricalDevice
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SurveillanceReflector");
		return ptr;
	}

};


// Class ConZ.SurveillanceReflectors
// 0x0048 (0x0388 - 0x0340)
class ASurveillanceReflectors : public AElectricalDevice
{
public:
	struct FVector                                     LightLocation;                                            // 0x0340(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FRotator                                    LightRotation;                                            // 0x034C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              LightIntensity;                                           // 0x0358(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      LightColor;                                               // 0x035C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              LightAttenuationRadius;                                   // 0x0360(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LightSourceRadius;                                        // 0x0364(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LightSourceLength;                                        // 0x0368(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LightInnerConeAngle;                                      // 0x036C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LightOuterConeAngle;                                      // 0x0370(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0374(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SurveillanceReflectors");
		return ptr;
	}

};


// Class ConZ.SurvivalSkill
// 0x0000 (0x0098 - 0x0098)
class USurvivalSkill : public UIntelligenceSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SurvivalSkill");
		return ptr;
	}

};


// Class ConZ.SwimmingSkill
// 0x0000 (0x00B0 - 0x00B0)
class USwimmingSkill : public UConstitutionSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.SwimmingSkill");
		return ptr;
	}

};


// Class ConZ.TabElement
// 0x0050 (0x0270 - 0x0220)
class UTabElement : public UDesignableUserWidget
{
public:
	class UWidget*                                     CategoryNameWidget;                                       // 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      MaxIndex;                                                 // 0x0228(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Index;                                                    // 0x0229(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x022A(0x0002) MISSED OFFSET
	struct FVector2D                                   _initialPosition;                                         // 0x022C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector2D                                   _oldPosition;                                             // 0x0234(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector2D                                   _newPosition;                                             // 0x023C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector2D                                   _initialSize;                                             // 0x0244(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector2D                                   _oldSize;                                                 // 0x024C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector2D                                   _newSize;                                                 // 0x0254(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              _oldAlpha;                                                // 0x025C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _newAlpha;                                                // 0x0260(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _interpolationTime;                                       // 0x0264(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _interpolationDuration;                                   // 0x0268(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x026C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.TabElement");
		return ptr;
	}


	void Update(bool Up, const struct FVector2D& Offset);
	int GetNextIndex(bool Up);
};


// Class ConZ.TabModeSwitcherWidget
// 0x0008 (0x0228 - 0x0220)
class UTabModeSwitcherWidget : public UDesignableUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.TabModeSwitcherWidget");
		return ptr;
	}


	ETabMode GetSelectedTabMode();
};


// Class ConZ.TacticsSkill
// 0x00B0 (0x0148 - 0x0098)
class UTacticsSkill : public UIntelligenceSkill
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0098(0x0050) MISSED OFFSET
	float                                              _updateTime;                                              // 0x00E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _serverUpdateTime;                                        // 0x00EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _noSkillDetectionRange;                                   // 0x00F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _basicDetectionRange;                                     // 0x00F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _mediumDetectionRange;                                    // 0x00F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _advancedDetectionRange;                                  // 0x00FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _aboveAdvancedDetectionRange;                             // 0x0100(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _noSkillDetectionTime;                                    // 0x0104(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _basicDetectionTime;                                      // 0x0108(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _mediumDetectionTime;                                     // 0x010C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _advancedDetectionTime;                                   // 0x0110(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _aboveAdvancedDetectionTime;                              // 0x0114(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _fadeOutTime;                                             // 0x0118(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 _detectionTimeDistanceScale;                              // 0x0120(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _noSkillExperiencePerSecond;                              // 0x0128(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _basicExperiencePerSecond;                                // 0x012C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _mediumExperiencePerSecond;                               // 0x0130(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _advancedExperiencePerSecond;                             // 0x0134(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _tacticsDetectionCurveCoefficient1;                       // 0x0138(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _tacticsDetectionCurveCoefficient2;                       // 0x013C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _tacticsDetectionCurveCoefficient3;                       // 0x0140(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0144(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.TacticsSkill");
		return ptr;
	}


	bool ShouldDetectPrisoner(class APrisoner* Prisoner);
	bool IsPrisonerDetected(class APrisoner* Prisoner);
};


// Class ConZ.HandsCorrectionsData
// 0x0068 (0x0098 - 0x0030)
class UHandsCorrectionsData : public UDataAsset
{
public:
	struct FHandsPoseCorrections                       Corrections[0x3];                                         // 0x0030(0x0020) (CPF_Edit, CPF_IsPlainOldData)
	bool                                               OverrideFingersOnlyInProne;                               // 0x0090(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.HandsCorrectionsData");
		return ptr;
	}

};


// Class ConZ.TakeInHandsAssetData
// 0x0038 (0x0068 - 0x0030)
class UTakeInHandsAssetData : public UInteractionAssetData
{
public:
	class UClass*                                      AttachmentSocketMountType;                                // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       GripSocketName;                                           // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                TakeInHandsMontage;                                       // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                RemoveFromHandsMontage;                                   // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMeleeSkillAnimationsPreset*                 MeleeSkillAnimationsPreset;                               // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UHandsCorrectionsData*                       HandsCorrectionssData;                                    // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MovementSpeedModifier;                                    // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.TakeInHandsAssetData");
		return ptr;
	}

};


// Class ConZ.TameAnimalAction
// 0x0000 (0x01C0 - 0x01C0)
class UTameAnimalAction : public UAnimalAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.TameAnimalAction");
		return ptr;
	}

};


// Class ConZ.TeamDeathmatchParticipantStats
// 0x0000 (0x0048 - 0x0048)
class UTeamDeathmatchParticipantStats : public UGameEventParticipantStats
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.TeamDeathmatchParticipantStats");
		return ptr;
	}

};


// Class ConZ.TeamDeathmatchGameEvent
// 0x0020 (0x0668 - 0x0648)
class ATeamDeathmatchGameEvent : public AGameEventBase
{
public:
	struct FTeamDeathmatchParameters                   _teamDeathmatchParameters;                                // 0x0648(0x0014) (CPF_Net)
	unsigned char                                      UnknownData00[0xC];                                       // 0x065C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.TeamDeathmatchGameEvent");
		return ptr;
	}


	void SetTeamDeathmatchParameters(const struct FTeamDeathmatchParameters& Params);
	void RestrictGameEventArea();
	struct FTeamDeathmatchParameters GetTeamDeathmatchParameters();
	void AwardParticipant(int Index, const struct FGameEventRewardPoints& reward);
};


// Class ConZ.TeamDeathmatchLocationMarker
// 0x0028 (0x0530 - 0x0508)
class ATeamDeathmatchLocationMarker : public AGameEventLocationMarker
{
public:
	struct FTeamDeathmatchParameters                   TeamDeathmatchParameters;                                 // 0x0508(0x0014) (CPF_Edit, CPF_BlueprintVisible)
	struct FVector                                     FocusOffset;                                              // 0x051C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              MinimalRadius;                                            // 0x0528(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x052C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.TeamDeathmatchLocationMarker");
		return ptr;
	}


	class AGameEventBase* CreateGameEvent();
};


// Class ConZ.TeamInfoWidget
// 0x0000 (0x0220 - 0x0220)
class UTeamInfoWidget : public UDesignableUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.TeamInfoWidget");
		return ptr;
	}

};


// Class ConZ.TeamInvitationWidget
// 0x0028 (0x0248 - 0x0220)
class UTeamInvitationWidget : public UDesignableUserWidget
{
public:
	struct FText                                       InvitationText;                                           // 0x0220(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class APrisoner*                                   invitor;                                                  // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APrisoner*                                   invited;                                                  // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.TeamInvitationWidget");
		return ptr;
	}

};


// Class ConZ.TeammateNameWidget
// 0x0000 (0x0220 - 0x0220)
class UTeammateNameWidget : public UDesignableUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.TeammateNameWidget");
		return ptr;
	}

};


// Class ConZ.TeleportStagingLocation
// 0x0000 (0x0318 - 0x0318)
class ATeleportStagingLocation : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.TeleportStagingLocation");
		return ptr;
	}

};


// Class ConZ.TempPlayerStart
// 0x0000 (0x0348 - 0x0348)
class ATempPlayerStart : public APlayerStart
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.TempPlayerStart");
		return ptr;
	}

};


// Class ConZ.ThrowableItemTag
// 0x0028 (0x0058 - 0x0030)
class UThrowableItemTag : public UBaseItemTag
{
public:
	struct FMeleeWeaponDesc                            WeaponDesc;                                               // 0x0030(0x0028) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ThrowableItemTag");
		return ptr;
	}

};


// Class ConZ.ThrowingComponent
// 0x0040 (0x01E0 - 0x01A0)
class UThrowingComponent : public UProjectileMovementComponent
{
public:
	EItemThrowingBehavior                              ItemThrowingBehavior;                                     // 0x01A0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01A1(0x0003) MISSED OFFSET
	float                                              PierceMaxDensity;                                         // 0x01A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ThrowSpeedMultiplier;                                     // 0x01A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    InitialRotation;                                          // 0x01AC(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FRotator                                    UpdatedRotation;                                          // 0x01B8(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FRotator                                    MaxRandomImpactRotation;                                  // 0x01C4(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              PenetrationDepth;                                         // 0x01D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x01D4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ThrowingComponent");
		return ptr;
	}


	void OnProjectileStopped(const struct FHitResult& ImpactResult);
	void OnProjectileBounced(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void Multicast_PierceHitObject(const struct FVector& ImpactVelocity, const struct FHitResult& ZeroBasedImpactResult);
};


// Class ConZ.ThrowingDamageType
// 0x0000 (0x0040 - 0x0040)
class UThrowingDamageType : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ThrowingDamageType");
		return ptr;
	}

};


// Class ConZ.ThrowingSkill
// 0x0008 (0x00A0 - 0x0098)
class UThrowingSkill : public UDexteritySkill
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ThrowingSkill");
		return ptr;
	}

};


// Class ConZ.ToggleCamouflageAction
// 0x0010 (0x01C0 - 0x01B0)
class UToggleCamouflageAction : public USkillAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ToggleCamouflageAction");
		return ptr;
	}

};


// Class ConZ.ToothacheSickness
// 0x0008 (0x01B8 - 0x01B0)
class UToothacheSickness : public USickness
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ToothacheSickness");
		return ptr;
	}

};


// Class ConZ.TrackingMarker
// 0x0050 (0x0368 - 0x0318)
class ATrackingMarker : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET
	class UStaticMeshComponent*                        MarkerMesh;                                               // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UArrowComponent*                             DirectionArrow;                                           // 0x0328(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UDecalComponent*                             ConeDecal;                                                // 0x0330(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              TickFrequency;                                            // 0x0338(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	class UClass*                                      AnimalClass;                                              // 0x0340(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // 0x0348(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x034C(0x000C) (CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              Health;                                                   // 0x0358(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x035C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.TrackingMarker");
		return ptr;
	}

};


// Class ConZ.TrackingMarker2
// 0x0068 (0x0380 - 0x0318)
class ATrackingMarker2 : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET
	class USceneComponent*                             SceneComponent;                                           // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UArrowComponent*                             DirectionArrow;                                           // 0x0328(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UDecalComponent*                             ConeDecal;                                                // 0x0330(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    Particles;                                                // 0x0338(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              TickFrequency;                                            // 0x0340(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	class UClass*                                      AnimalClass;                                              // 0x0348(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // 0x0350(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x0354(0x000C) (CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              Health;                                                   // 0x0360(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EBleedingSeverity                                  BleedingSeverity;                                         // 0x0364(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShowBleedingInfo;                                         // 0x0365(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               ShowWoundInfo;                                            // 0x0366(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               ShowBasicWoundInfo;                                       // 0x0367(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxSevereBleedTime;                                       // 0x0368(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxHeavyBleedTime;                                        // 0x036C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxModerateBleedTime;                                     // 0x0370(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxLightBleedTime;                                        // 0x0374(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0378(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.TrackingMarker2");
		return ptr;
	}

};


// Class ConZ.TreatBrokenLimbsAction
// 0x0000 (0x01C0 - 0x01C0)
class UTreatBrokenLimbsAction : public UMedicalAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.TreatBrokenLimbsAction");
		return ptr;
	}

};


// Class ConZ.TreatSicknessAction
// 0x0000 (0x01C0 - 0x01C0)
class UTreatSicknessAction : public UMedicalAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.TreatSicknessAction");
		return ptr;
	}

};


// Class ConZ.TrenchFootDisease
// 0x0010 (0x01C0 - 0x01B0)
class UTrenchFootDisease : public UDisease
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.TrenchFootDisease");
		return ptr;
	}

};


// Class ConZ.UnarmedCombatInputRedirector
// 0x0038 (0x0060 - 0x0028)
class UUnarmedCombatInputRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.UnarmedCombatInputRedirector");
		return ptr;
	}

};


// Class ConZ.VibrioVulnificusInfection
// 0x0008 (0x01B8 - 0x01B0)
class UVibrioVulnificusInfection : public UPoisoning
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.VibrioVulnificusInfection");
		return ptr;
	}

};


// Class ConZ.VicinityItemContainerWidget
// 0x0038 (0x0290 - 0x0258)
class UVicinityItemContainerWidget : public UBaseItemContainerWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0258(0x0008) MISSED OFFSET
	unsigned char                                      MaxWidth;                                                 // 0x0260(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MaxHeight;                                                // 0x0261(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               NeedLayoutLoading;                                        // 0x0262(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	bool                                               SavedLayoutMinimized;                                     // 0x0263(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0264(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDoubleClickedOnHeader;                                  // 0x0268(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	float                                              DefaultWidth;                                             // 0x0278(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DefaultHeight;                                            // 0x027C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   DefaultPosition;                                          // 0x0280(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	float                                              _detectionRadius;                                         // 0x0288(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x028C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.VicinityItemContainerWidget");
		return ptr;
	}


	void SetSavedLayoutMinimized(bool Value);
	void SetNeedLayoutLoading(bool Value);
	void OnVicinityItemPickedUpStateChanged(class AItem* Item, bool PickedUpState);
	void DoubleClickedOnHeaderDelegate__DelegateSignature(class UObjectSelectionContainerWidget* Widget);
	void DeferredLoadLayout();
};


// Class ConZ.VicinityPanelSecondIteration
// 0x0018 (0x0238 - 0x0220)
class UVicinityPanelSecondIteration : public UDesignableUserWidget
{
public:
	bool                                               _isMinimized;                                             // 0x0220(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0221(0x0007) MISSED OFFSET
	TArray<class AItem*>                               _items;                                                   // 0x0228(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.VicinityPanelSecondIteration");
		return ptr;
	}


	void UpdateItemWidgetHighlightings();
	void RemoveItem(class AItem* Item);
	void Minimize();
	void Maximize();
	bool GetIsMinimized();
	void AutoAddItem(class AItem* Item);
};


// Class ConZ.VisionEffectsComponent
// 0x06A0 (0x0790 - 0x00F0)
class UVisionEffectsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	float                                              PostProcessPriority;                                      // 0x00F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	class UMaterialInterface*                          FadeOutMaterial;                                          // 0x0100(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          NightVisionMaterial;                                      // 0x0108(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NightVisionBlendInDuration;                               // 0x0110(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NightVisionBlendOutDuration;                              // 0x0114(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialParameterCollection*                AnimalEyesMaterialParameterCollection;                    // 0x0118(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       AnimalEyesEmissiveMaterialName;                           // 0x0120(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimalEyesEmissiveValueWhenNightVisionIsEnabled;          // 0x0128(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          FlashbangEffectMaterial;                                  // 0x0130(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          TakenDamageMaterial;                                      // 0x0138(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialParameterCollection*                TakenDamageMaterialParameterCollection;                   // 0x0140(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TakenDamageBlurIntensityParameterName;                    // 0x0148(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TakenDamageStainsIntensityParameterName;                  // 0x0150(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TakenDamageVignetteIntensityParameterName;                // 0x0158(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 TakenDamageBlurShapeCurve;                                // 0x0160(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 TakenDamageBlurIntensityCurve;                            // 0x0168(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 TakenDamageBlurDurationCurve;                             // 0x0170(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 TakenDamageStainsShapeCurve;                              // 0x0178(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 TakenDamageStainsIntensityCurve;                          // 0x0180(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 TakenDamageStainsDurationCurve;                           // 0x0188(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 TakenDamageVignetteShapeCurve;                            // 0x0190(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 TakenDamageVignetteIntensityCurve;                        // 0x0198(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 TakenDamageVignetteDurationCurve;                         // 0x01A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TakenDamageMaxChromaticAberration;                        // 0x01A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET
	class UClass*                                      TakenDamageCameraShakeClass;                              // 0x01B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 TakenDamageCameraShakeScaleCurve;                         // 0x01B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShouldDesaturateIfHealthIsLow;                            // 0x01C0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x01C1(0x0003) MISSED OFFSET
	float                                              HealthAtWhichDesaturationIsMinimal;                       // 0x01C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HealthAtWhichDesaturationIsMaximal;                       // 0x01C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x01CC(0x0004) MISSED OFFSET
	class UMaterialInterface*                          TacticsEffectMaterial;                                    // 0x01D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          FocusModeMaterial;                                        // 0x01D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          DrunkennessMaterial;                                      // 0x01E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       DrunkennessIntensityParameterName;                        // 0x01E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FPostProcessSettings                        _postProcessSettings;                                     // 0x01F0(0x0520) (CPF_Edit)
	unsigned char                                      UnknownData06[0x68];                                      // 0x0710(0x0068) MISSED OFFSET
	class UMaterialInstanceDynamic*                    _drunkennessMaterialInstance;                             // 0x0778(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _DOFBlurTime;                                             // 0x0780(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _DOFClearBlurTime;                                        // 0x0784(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _DOFScopingBlurTime;                                      // 0x0788(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x078C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.VisionEffectsComponent");
		return ptr;
	}

};


// Class ConZ.VitaminADeficiency
// 0x0000 (0x01C0 - 0x01C0)
class UVitaminADeficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.VitaminADeficiency");
		return ptr;
	}

};


// Class ConZ.VitaminB12Deficiency
// 0x0000 (0x01C0 - 0x01C0)
class UVitaminB12Deficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.VitaminB12Deficiency");
		return ptr;
	}

};


// Class ConZ.VitaminB1Deficiency
// 0x0000 (0x01C0 - 0x01C0)
class UVitaminB1Deficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.VitaminB1Deficiency");
		return ptr;
	}

};


// Class ConZ.VitaminB2Deficiency
// 0x0000 (0x01C0 - 0x01C0)
class UVitaminB2Deficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.VitaminB2Deficiency");
		return ptr;
	}

};


// Class ConZ.VitaminB3Deficiency
// 0x0000 (0x01C0 - 0x01C0)
class UVitaminB3Deficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.VitaminB3Deficiency");
		return ptr;
	}

};


// Class ConZ.VitaminB4Deficiency
// 0x0000 (0x01C0 - 0x01C0)
class UVitaminB4Deficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.VitaminB4Deficiency");
		return ptr;
	}

};


// Class ConZ.VitaminB5Deficiency
// 0x0000 (0x01C0 - 0x01C0)
class UVitaminB5Deficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.VitaminB5Deficiency");
		return ptr;
	}

};


// Class ConZ.VitaminB6Deficiency
// 0x0000 (0x01C0 - 0x01C0)
class UVitaminB6Deficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.VitaminB6Deficiency");
		return ptr;
	}

};


// Class ConZ.VitaminB9Deficiency
// 0x0000 (0x01C0 - 0x01C0)
class UVitaminB9Deficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.VitaminB9Deficiency");
		return ptr;
	}

};


// Class ConZ.VitaminCDeficiency
// 0x0000 (0x01C0 - 0x01C0)
class UVitaminCDeficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.VitaminCDeficiency");
		return ptr;
	}

};


// Class ConZ.VitaminDDeficiency
// 0x0000 (0x01C0 - 0x01C0)
class UVitaminDDeficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.VitaminDDeficiency");
		return ptr;
	}

};


// Class ConZ.VitaminEDeficiency
// 0x0000 (0x01C0 - 0x01C0)
class UVitaminEDeficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.VitaminEDeficiency");
		return ptr;
	}

};


// Class ConZ.VitaminKDeficiency
// 0x0000 (0x01C0 - 0x01C0)
class UVitaminKDeficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.VitaminKDeficiency");
		return ptr;
	}

};


// Class ConZ.VoiceAudioComponent
// 0x0020 (0x0890 - 0x0870)
class UVoiceAudioComponent : public UAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0870(0x0008) MISSED OFFSET
	class UVoiceDecoder*                               VoiceDecoder;                                             // 0x0878(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0880(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.VoiceAudioComponent");
		return ptr;
	}


	void QueueVoiceData(TArray<unsigned char> CompressedVoiceData);
	void InitializeVoiceAudioComponent();
};


// Class ConZ.VoiceChatComponent
// 0x00A0 (0x0190 - 0x00F0)
class UVoiceChatComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    VoiceDataAvailableEvent;                                  // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    StartedTalkingEvent;                                      // 0x0100(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    StoppedTalkingEvent;                                      // 0x0110(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	float                                              StopTalkingTimeThreshold;                                 // 0x0120(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6C];                                      // 0x0124(0x006C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.VoiceChatComponent");
		return ptr;
	}


	bool GetCompressedVoiceData(TArray<unsigned char>* OutBuffer);
	void GetAllPlayersInRange(float requiredDistance, TArray<class APawn*>* pawnList);
};


// Class ConZ.VoiceDecoder
// 0x0010 (0x0038 - 0x0028)
class UVoiceDecoder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.VoiceDecoder");
		return ptr;
	}


	void DecompressVoiceData(TArray<unsigned char> InCompressedVoiceData, int InCompressedVoiceBytes, TArray<unsigned char>* OutDecompressedVoiceData, int* OutDecompressedVoiceBytes);
	static class UVoiceDecoder* CreateVoiceDecoder(class UObject* Owner);
};


// Class ConZ.VomitingSickness
// 0x0020 (0x01D0 - 0x01B0)
class UVomitingSickness : public USickness
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x01B0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.VomitingSickness");
		return ptr;
	}

};


// Class ConZ.WaypointGroup
// 0x0040 (0x0460 - 0x0420)
class AWaypointGroup : public AAnimalSpawner2
{
public:
	int                                                MaxSpawnInstancesPerWaypoint;                             // 0x0420(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WaypointSpawningResetTime;                                // 0x0424(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FWaypoint>                           Waypoints;                                                // 0x0428(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0438(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WaypointGroup");
		return ptr;
	}


	struct FVector GetWaypointLocation(int waypointIndex);
};


// Class ConZ.WaypointScreenWidget
// 0x0018 (0x0238 - 0x0220)
class UWaypointScreenWidget : public UDesignableUserWidget
{
public:
	class UClass*                                      WaypointClass;                                            // 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0228(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WaypointScreenWidget");
		return ptr;
	}


	void UpdateWaypoints();
	void RemoveWaypointWidgetFromScreen(class UWaypointWidget* Widget);
	void RemoveWaypoint(class UWaypointWidget* Waypoint);
	void RemoveAllWaypoints();
	void AddWaypointWidgetToScreen(class UWaypointWidget* Widget);
	class UWaypointWidget* AddWaypoint();
};


// Class ConZ.WaypointWidget
// 0x0090 (0x02B0 - 0x0220)
class UWaypointWidget : public UDesignableUserWidget
{
public:
	class UTexture2D*                                  IconTexture;                                              // 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  AccentTexture;                                            // 0x0228(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                AccentColor;                                              // 0x0230(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              BarValue;                                                 // 0x0240(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                BarColor;                                                 // 0x0244(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              HeightOffset;                                             // 0x0254(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Emphasized;                                               // 0x0258(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0259(0x0003) MISSED OFFSET
	struct FLinearColor                                EmphasisColor;                                            // 0x025C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
	struct FString                                     LabelText;                                                // 0x0270(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0280(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WaypointWidget");
		return ptr;
	}


	void SetWorldPosition(const struct FVector& Location);
	void SetTargetActor(class AActor* Target);
	bool IsOnScreen();
	bool IsAttached();
	class AActor* GetTargetActor();
	float GetDistance();
	float GetAngle();
};


// Class ConZ.WeaponAccuracyGroup
// 0x0030 (0x0060 - 0x0030)
class UWeaponAccuracyGroup : public UDataAsset
{
public:
	float                                              NormalStandFrom;                                          // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NormalStandTo;                                            // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NormalCrouchFrom;                                         // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NormalCrouchTo;                                           // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NormalProneFrom;                                          // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NormalProneTo;                                            // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScopedStandFrom;                                          // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScopedStandTo;                                            // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScopedCrouchFrom;                                         // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScopedCrouchTo;                                           // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScopedProneFrom;                                          // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScopedProneTo;                                            // 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeaponAccuracyGroup");
		return ptr;
	}

};


// Class ConZ.WeaponAnimInstance
// 0x0010 (0x03D0 - 0x03C0)
class UWeaponAnimInstance : public UAnimInstance
{
public:
	EPrisonerStance                                    _owningPrisonerStance;                                    // 0x03C0(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isChamberOpened;                                         // 0x03C1(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03C2(0x0002) MISSED OFFSET
	int                                                _ammoCount;                                               // 0x03C4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _shouldPlayChamberOpenedIdle;                             // 0x03C8(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isInGameEvent;                                           // 0x03C9(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03CA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeaponAnimInstance");
		return ptr;
	}

};


// Class ConZ.WeaponAttachment
// 0x0000 (0x0780 - 0x0780)
class AWeaponAttachment : public AItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeaponAttachment");
		return ptr;
	}


	void Unequip();
	void Equip(class AWeapon* Weapon);
};


// Class ConZ.WeaponAttachmentMagazine
// 0x0020 (0x07A0 - 0x0780)
class AWeaponAttachmentMagazine : public AWeaponAttachment
{
public:
	class UClass*                                      AmmunitionItemClass;                                      // 0x0780(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               RequiresFullCapacityOnLoad;                               // 0x0788(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0789(0x0003) MISSED OFFSET
	int                                                _ammoCount;                                               // 0x078C(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                _capacity;                                                // 0x0790(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0794(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeaponAttachmentMagazine");
		return ptr;
	}


	void SetAmmoCount(int amount);
	class UClass* GetProjectileClass();
	int GetCapacity();
	int GetAmmoCount();
	void Client_SetLoadedVariables(int ammoCount);
	void AddAmmo(int amount);
};


// Class ConZ.WeaponAttachmentScope
// 0x00D0 (0x0850 - 0x0780)
class AWeaponAttachmentScope : public AWeaponAttachment
{
public:
	TArray<struct FScopeZoomLevelSettings>             ZoomLevelSettings;                                        // 0x0780(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UTexture2D*                                  ReticleTexture;                                           // 0x0790(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTextureRenderTarget2D*                      TextRenderTarget;                                         // 0x0798(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      WeaponScopeWidget;                                        // 0x07A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       GlassCenterSocketName;                                    // 0x07A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     AimingDownTheSightsLocationOffset;                        // 0x07B0(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	int                                                WindageInitialOffset;                                     // 0x07BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               WindageClickAudioEvent;                                   // 0x07C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x88];                                      // 0x07C8(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeaponAttachmentScope");
		return ptr;
	}


	void SetZoomLevelOnServer(int zoomLevel);
	void SetWindageOnServer(int windage);
	void SetLoadedVariablesOnClient(int zoomLevel, int windage);
	void OnDestroyedEvent(class AActor* Self);
};


// Class ConZ.WeaponAttachmentScopeRail
// 0x0010 (0x0790 - 0x0780)
class AWeaponAttachmentScopeRail : public AWeaponAttachment
{
public:
	struct FName                                       ScopeSocketName;                                          // 0x0780(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0788(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeaponAttachmentScopeRail");
		return ptr;
	}

};


// Class ConZ.WeaponDamageGroup
// 0x0020 (0x0050 - 0x0030)
class UWeaponDamageGroup : public UDataAsset
{
public:
	float                                              head;                                                     // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Neck;                                                     // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Torso;                                                    // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ArmUpper;                                                 // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Abdomen;                                                  // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LegUpper;                                                 // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OtherLimbs;                                               // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeaponDamageGroup");
		return ptr;
	}

};


// Class ConZ.WeaponHolsterItem
// 0x0000 (0x07F0 - 0x07F0)
class AWeaponHolsterItem : public AClothesItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeaponHolsterItem");
		return ptr;
	}


	void OnRep_HolsteredWeapon();
	bool HolsterWeapon(class AWeapon* Weapon);
};


// Class ConZ.WeaponItemSpawner
// 0x0020 (0x03B8 - 0x0398)
class AWeaponItemSpawner : public AItemSpawner
{
public:
	TArray<class UClass*>                              Items;                                                    // 0x0398(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class UItemGroup*>                          ItemGroups;                                               // 0x03A8(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeaponItemSpawner");
		return ptr;
	}

};


// Class ConZ.WeaponRecoilGroup
// 0x0010 (0x0040 - 0x0030)
class UWeaponRecoilGroup : public UDataAsset
{
public:
	float                                              Up;                                                       // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Down;                                                     // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Left;                                                     // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Right;                                                    // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeaponRecoilGroup");
		return ptr;
	}

};


// Class ConZ.WeaponScopeWidget
// 0x0018 (0x0238 - 0x0220)
class UWeaponScopeWidget : public UDesignableUserWidget
{
public:
	class UTexture2D*                                  ReticleTexture;                                           // 0x0220(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTextureRenderTarget2D*                      TextRenderTarget;                                         // 0x0228(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FadeFactor;                                               // 0x0230(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0234(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeaponScopeWidget");
		return ptr;
	}


	void OnShowElements();
	void OnHideElements();
	void OnFadeOutComplete();
	void OnFadeInComplete();
	void OnConstructFinished();
	void BeginFadeIn();
};


// Class ConZ.WeaponState
// 0x0008 (0x0030 - 0x0028)
class UWeaponState : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeaponState");
		return ptr;
	}

};


// Class ConZ.WeaponStateActive
// 0x0000 (0x0030 - 0x0030)
class UWeaponStateActive : public UWeaponState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeaponStateActive");
		return ptr;
	}

};


// Class ConZ.WeaponStateChamberBullet
// 0x0008 (0x0038 - 0x0030)
class UWeaponStateChamberBullet : public UWeaponState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeaponStateChamberBullet");
		return ptr;
	}


	void OnMontageEnded(class UAnimMontage* Montage, bool interrupted);
};


// Class ConZ.WeaponStateEquipping
// 0x0000 (0x0030 - 0x0030)
class UWeaponStateEquipping : public UWeaponState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeaponStateEquipping");
		return ptr;
	}

};


// Class ConZ.WeaponStateFiring
// 0x0000 (0x0030 - 0x0030)
class UWeaponStateFiring : public UWeaponState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeaponStateFiring");
		return ptr;
	}

};


// Class ConZ.WeaponStateFiringAutomatic
// 0x0010 (0x0040 - 0x0030)
class UWeaponStateFiringAutomatic : public UWeaponStateFiring
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeaponStateFiringAutomatic");
		return ptr;
	}

};


// Class ConZ.WeaponStateFiringManual
// 0x0000 (0x0040 - 0x0040)
class UWeaponStateFiringManual : public UWeaponStateFiringAutomatic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeaponStateFiringManual");
		return ptr;
	}

};


// Class ConZ.WeaponStateFiringSemiAutomatic
// 0x0008 (0x0048 - 0x0040)
class UWeaponStateFiringSemiAutomatic : public UWeaponStateFiringAutomatic
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeaponStateFiringSemiAutomatic");
		return ptr;
	}

};


// Class ConZ.WeaponStateInactive
// 0x0000 (0x0030 - 0x0030)
class UWeaponStateInactive : public UWeaponState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeaponStateInactive");
		return ptr;
	}

};


// Class ConZ.WeaponStateReload
// 0x0028 (0x0058 - 0x0030)
class UWeaponStateReload : public UWeaponState
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeaponStateReload");
		return ptr;
	}

};


// Class ConZ.WeaponStateUnEquipping
// 0x0000 (0x0030 - 0x0030)
class UWeaponStateUnEquipping : public UWeaponState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeaponStateUnEquipping");
		return ptr;
	}

};


// Class ConZ.WeatherAmbientSounds
// 0x0038 (0x0350 - 0x0318)
class AWeatherAmbientSounds : public AActor
{
public:
	float                                              WeatherRTPCsUpdateInterval;                               // 0x0318(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeOfDayRTPCUpdateInterval;                              // 0x031C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeOfDayRTPCInterpolationSpeed;                          // 0x0320(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0324(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               RainAudioEvent;                                           // 0x0328(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               WindAudioEvent;                                           // 0x0330(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0338(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeatherAmbientSounds");
		return ptr;
	}

};


// Class ConZ.WeatherCapture2D
// 0x0008 (0x0338 - 0x0330)
class AWeatherCapture2D : public ASceneCapture2D
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0330(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeatherCapture2D");
		return ptr;
	}


	void CaptureNextFrame();
};


// Class ConZ.WeatherController
// 0x0068 (0x0380 - 0x0318)
class AWeatherController : public AActor
{
public:
	float                                              TimeOfDay;                                                // 0x0318(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeOfDaySpeed;                                           // 0x031C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Level1_RainStartWhenStormIs;                              // 0x0320(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Level2_RainStartWhenStormIs;                              // 0x0324(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Level3_RainStartWhenStormIs;                              // 0x0328(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WaterTemperature;                                         // 0x032C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WaterTemperature_Storm;                                   // 0x0330(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WaterTemperatureHeightModifier;                           // 0x0334(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AirTemperature;                                           // 0x0338(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AirTemperature_Storm;                                     // 0x033C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AirTemperatureHeightModifier;                             // 0x0340(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AirPressure;                                              // 0x0344(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AirPressure_Storm;                                        // 0x0348(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AirPressureHeightModifier;                                // 0x034C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RelativeHumidity;                                         // 0x0350(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RelativeHumidity_Storm;                                   // 0x0354(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RelativeHumidityHeightModifier;                           // 0x0358(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxHeightAboveSeaLevelMeters;                             // 0x035C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StormIntensity;                                           // 0x0360(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   WindDir;                                                  // 0x0364(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_IsPlainOldData)
	float                                              WindSpeed_Result;                                         // 0x036C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _nightTimeBegin;                                          // 0x0370(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _nightTimeEnd;                                            // 0x0374(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _duskTimeBegin;                                           // 0x0378(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _dawnTimeEnd;                                             // 0x037C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WeatherController");
		return ptr;
	}


	void SetTimeOfDay(float Value);
	struct FVector GetWindVelocity();
	float GetWaterTemperature(const struct FVector& Location);
	float GetTimeOfDaySpeed();
	float GetTimeOfDay();
	float GetStormIntensity();
	float GetRelativeHumidity(const struct FVector& Location);
	float GetRainIntensity();
	EDayPeriod GetDayPeriod();
	float GetAirTemperature(const struct FVector& Location);
	float GetAirPressure(const struct FVector& Location);
};


// Class ConZ.WetnessHelpers
// 0x0000 (0x0028 - 0x0028)
class UWetnessHelpers : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WetnessHelpers");
		return ptr;
	}


	static void SetMaterialsWetness(class UPrimitiveComponent* Component, float wetness);
};


// Class ConZ.WetnessManager
// 0x0048 (0x0360 - 0x0318)
class AWetnessManager : public AActor
{
public:
	int                                                MaxNumberOfActiveWettables;                               // 0x0318(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxWettableLifeTime;                                      // 0x031C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WeatherAndWettableObjectParametersUpdateInterval;         // 0x0320(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0324(0x0004) MISSED OFFSET
	class UCurveFloat*                                 WettingRateFromRainVsRainIntensity;                       // 0x0328(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WettingRateFromWaterImmersion;                            // 0x0330(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DryingRate;                                               // 0x0334(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 DryingRateModifierVsTemperature;                          // 0x0338(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 DryingRateModifierVsRelativeHumidity;                     // 0x0340(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AirTemperatureModifierWhenNotExposedToSunlight;           // 0x0348(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x034C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WetnessManager");
		return ptr;
	}

};


// Class ConZ.Wettable
// 0x0000 (0x0028 - 0x0028)
class UWettable : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Wettable");
		return ptr;
	}


	void SetWaterWeight(float Value);
	float GetWaterWeight();
	float GetMaxWaterWeight();
};


// Class ConZ.WidgetHelpers
// 0x0000 (0x0028 - 0x0028)
class UWidgetHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WidgetHelpers");
		return ptr;
	}


	static struct FVector GetMuscleLeanFatFactorsFromCoordinates(const struct FVector2D& coordinates);
	static struct FVector4 GetAttributesFromMuscularAndFatFactors(float muscular, float Fat);
	static struct FString FilterNonNumbersFromString(struct FString* string);
};


// Class ConZ.Wolf
// 0x0030 (0x0A00 - 0x09D0)
class AWolf : public AAnimal
{
public:
	class UAnimMontage*                                AttackMontage;                                            // 0x09D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundCue*                                   HowlSound;                                                // 0x09D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundCue*                                   BarkSound;                                                // 0x09E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _scale;                                                   // 0x09E8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWolfAttackState                                   _attackState;                                             // 0x09EC(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x09ED(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Wolf");
		return ptr;
	}


	void PlayAttackMontageOnClients();
	void OnRep_Scale();
};


// Class ConZ.WolfAIController
// 0x0010 (0x04B0 - 0x04A0)
class AWolfAIController : public AAnimalAIController
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WolfAIController");
		return ptr;
	}

};


// Class ConZ.WolfAnimInstance
// 0x0000 (0x03E0 - 0x03E0)
class UWolfAnimInstance : public UAnimalAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.WolfAnimInstance");
		return ptr;
	}


	void AnimNotify_Howl();
};


// Class ConZ.Wristwatch
// 0x0010 (0x0328 - 0x0318)
class AWristwatch : public AActor
{
public:
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0320(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Wristwatch");
		return ptr;
	}


	void ToggleDisplayVisibility(bool Visiblity);
	void SyncTime();
	void SetTime(float Value);
};


// Class ConZ.XMLAttributeMap
// 0x0010 (0x0038 - 0x0028)
class UXMLAttributeMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.XMLAttributeMap");
		return ptr;
	}

};


// Class ConZ.ZincDeficiency
// 0x0000 (0x01C0 - 0x01C0)
class UZincDeficiency : public UDeficiency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ZincDeficiency");
		return ptr;
	}

};


// Class ConZ.Zombie2
// 0x02B0 (0x0AE0 - 0x0830)
class AZombie2 : public AConZCharacter
{
public:
	class UNavigationInvokerComponent*                 _navigationInvokerComponent;                              // 0x0830(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UHitReactComponent*                          _hitReactComponent;                                       // 0x0838(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UZombieVariationsDataAsset*                  _zombieVariations;                                        // 0x0840(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FZombieTurnMontageDescription               _turnMontageDescriptions[0x4];                            // 0x0848(0x0040) (CPF_Edit)
	TArray<class UAnimMontage*>                        _intimidateMontages;                                      // 0x0948(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FZombieAttackDescription>            _attacks;                                                 // 0x0958(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FGameplayTag                                _hitReactType;                                            // 0x0968(0x0008) (CPF_Edit)
	float                                              _throwingDamageMultiplier;                                // 0x0970(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _throwingDamageMultiplierPerBodyPart[0xC];                // 0x0974(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _projectileDamageMultiplier;                              // 0x09A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _projectileDamageMultiplierPerBodyPart[0xC];              // 0x09A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _ragdollHitImpulseStrengthPerUnitDamage;                  // 0x09D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _receivedDamageComboCooldown;                             // 0x09DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _receivedMeleeHitComboCooldown;                           // 0x09E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _inflictedMeleeHitComboCooldown;                          // 0x09E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _minRagdollRecoveryTimeAfterKnockout;                     // 0x09E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _maxRagdollRecoveryTimeAfterKnockout;                     // 0x09EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _minLandingImpactSpeedForDamage;                          // 0x09F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _landingDamagePerImpactSpeed;                             // 0x09F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _landingImpactSpeedForRagdoll;                            // 0x09F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _minRagdollRecoveryTimeAfterLanding;                      // 0x09FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _maxRagdollRecoveryTimeAfterLanding;                      // 0x0A00(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A04(0x0004) MISSED OFFSET
	class ULandingEffects*                             _landingEffects;                                          // 0x0A08(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _corpseSearchDuration;                                    // 0x0A10(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _corpseMaxLifeTimeInMinutes;                              // 0x0A14(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _destroyCorpseTimerInterval;                              // 0x0A18(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _minDistanceToPlayerPawnOrSpectatorToDestroyCorpse;       // 0x0A1C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           _packedZombieVariationIndices;                            // 0x0A20(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0A24(0x0028) MISSED OFFSET
	float                                              _health;                                                  // 0x0A4C(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _isSearched;                                              // 0x0A50(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EZombieStance                                      _stance;                                                  // 0x0A51(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0A52(0x0002) MISSED OFFSET
	TWeakObjectPtr<class APawn>                        _foe;                                                     // 0x0A54(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7C];                                      // 0x0A5C(0x007C) MISSED OFFSET
	float                                              _inflictedDamageMultiplierConfig;                         // 0x0AD8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0ADC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.Zombie2");
		return ptr;
	}


	bool StartAttack(class APawn* foe);
	void SetStance(EZombieStance Value);
	void SetFoe(class APawn* Value);
	void Server_StartAttack(int attackDescriptionIndex);
	void Server_SetStance(EZombieStance Value);
	void Server_PlayTurnMontage(EZombieTurnMontage turnMontage, float turnAngle);
	void Server_PlayMontage(class UAnimMontage* Montage);
	void RecoverFromRagdoll();
	void OnRep_Stance(EZombieStance OldValue);
	void OnRep_IsSearched(bool OldValue);
	void OnRep_Health(float OldValue);
	void NetMulticast_StartAttack(int attackDescriptionIndex);
	void NetMulticast_PlayTurnMontage(EZombieTurnMontage turnMontage, float turnAngle);
	void NetMulticast_PlaySound(class UAkAudioEvent* Sound);
	void NetMulticast_PlayMontage(class UAnimMontage* Montage);
	void NetMulticast_HandleLanded(const struct FVector& ImpactVelocity, const struct FHitResult& HitResult);
	bool IsRagdollAtRest();
	bool IsInRagdoll();
	bool IsAttacking();
	void GoToRagdoll(const struct FZombieRagdollAutoRecovery& autoRecovery);
	class UZombieSoundComponent2* GetZombieSoundComponent();
	class UZombieMovementComponent2* GetZombieMovement();
	EZombieStance GetStance();
	float GetMaxHealth();
	class UHitReactComponent* GetHitReactComponent();
	float GetHealthRatio();
	float GetHealth();
	class APawn* GetFoe();
	struct FRotator GetAimOffset();
	bool CanStartAttack();
};


// Class ConZ.ZombieAIController2
// 0x02F8 (0x0708 - 0x0410)
class AZombieAIController2 : public AAIController
{
public:
	float                                              _stateMachineTickIntervalWhenInRelaxedState;              // 0x0410(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _shouldWander;                                            // 0x0414(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _shouldWanderAroundWanderOrigin;                          // 0x0415(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0416(0x0002) MISSED OFFSET
	float                                              _maxWanderingRadius;                                      // 0x0418(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _minTimeToRestBeforeWandering;                            // 0x041C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _maxTimeToRestBeforeWandering;                            // 0x0420(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _shouldBecomeAlertedBySight;                              // 0x0424(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	float                                              _minLineOfSightDurationToBecomeAlerted;                   // 0x0428(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _maxLineOfSightDurationToBecomeAlerted;                   // 0x042C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _shouldBecomeAlertedByHearing;                            // 0x0430(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	float                                              _minDelayBeforeBecomingAlertedByHearing;                  // 0x0434(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _maxDelayBeforeBecomingAlertedByHearing;                  // 0x0438(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	class UAISenseConfig_Sight*                        _relaxedIdleSightSenseConfig;                             // 0x0440(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAISenseConfig_Hearing*                      _relaxedIdleHearingSenseConfig;                           // 0x0448(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAISenseConfig_Sight*                        _relaxedWanderSightSenseConfig;                           // 0x0450(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAISenseConfig_Hearing*                      _relaxedWanderHearingSenseConfig;                         // 0x0458(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              _stateMachineTickIntervalWhenInAlertedState;              // 0x0460(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _minObservingForLineOfSightStartDelay;                    // 0x0464(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _maxObservingForLineOfSightStartDelay;                    // 0x0468(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _minInvestigateStimulusDelay;                             // 0x046C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _maxInvestigateStimulusDelay;                             // 0x0470(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _minEnterCombatModeDelay;                                 // 0x0474(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _maxEnterCombatModeDelay;                                 // 0x0478(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _distanceAtWhichToIgnoreEnterCombatModeDelay;             // 0x047C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveVector*                                _observingCurve;                                          // 0x0480(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _observingCurvePeriod;                                    // 0x0488(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _observingCurveMaxYaw;                                    // 0x048C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _observingCurveMaxPitch;                                  // 0x0490(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0494(0x0004) MISSED OFFSET
	class UAISenseConfig_Sight*                        _alertedSightSenseConfig;                                 // 0x0498(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAISenseConfig_Hearing*                      _alertedHearingSenseConfig;                               // 0x04A0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              _stateMachineTickIntervalWhenInCombatState;               // 0x04A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _shouldAttack;                                            // 0x04AC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _shouldBackOffIfTooCloseToFoe;                            // 0x04AD(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               _shouldPredictFoeLocation;                                // 0x04AE(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x04AF(0x0001) MISSED OFFSET
	class UCurveFloat*                                 _foeLocationPredictionStrengthVsDistanceToFoe;            // 0x04B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _attackDistance;                                          // 0x04B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                _minNumConsecutiveInflictedMeleeHitsToIntimidate;         // 0x04BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                _maxNumConsecutiveInflictedMeleeHitsToIntimidate;         // 0x04C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _minTimeBeforeFoeIsConsideredUnreachable;                 // 0x04C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _maxTimeBeforeFoeIsConsideredUnreachable;                 // 0x04C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _minTimeSinceLastAttackWhileFoeIsInLineOfSightToIntimidate;// 0x04CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _maxTimeSinceLastAttackWhileFoeIsInLineOfSightToIntimidate;// 0x04D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _costOfJumpingInPathLength;                               // 0x04D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _minPathPointDistance;                                    // 0x04D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET
	class AZombie2*                                    _zombie;                                                  // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x220];                                     // 0x04E8(0x0220) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ZombieAIController2");
		return ptr;
	}

};


// Class ConZ.ZombieAnimInstance2
// 0x00A0 (0x0460 - 0x03C0)
class UZombieAnimInstance2 : public UAnimInstance
{
public:
	int                                                NumRelaxedIdleVariations;                                 // 0x03C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RelaxedIdleVariationIndex;                                // 0x03C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Acceleration;                                             // 0x03C8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	bool                                               WantsToMove;                                              // 0x03D4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	struct FVector                                     Velocity;                                                 // 0x03D8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              Speed;                                                    // 0x03E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpeedXY;                                                  // 0x03E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WalkStoppingDistance;                                     // 0x03EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WalkStoppingTime;                                         // 0x03F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsFalling;                                                // 0x03F4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsJumping;                                                // 0x03F5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03F6(0x0002) MISSED OFFSET
	float                                              JumpApex;                                                 // 0x03F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              JumpDuration;                                             // 0x03FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    AimOffset;                                                // 0x0400(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	bool                                               CanStartGoToLoop;                                         // 0x040C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x040D(0x0003) MISSED OFFSET
	class UAnimSequenceBase*                           RelaxedWalkLoopAnimation;                                 // 0x0410(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RelaxedWalkLoopAnimationPlayRate;                         // 0x0418(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x041C(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           CombatRunStartAnimation;                                  // 0x0420(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CombatRunStartAnimationPlayRate;                          // 0x0428(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x042C(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           CombatRunLoopAnimation;                                   // 0x0430(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CombatRunLoopAnimationPlayRate;                           // 0x0438(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           CombatRunStopAnimation;                                   // 0x0440(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CombatRunStopAnimationStartTime;                          // 0x0448(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CombatRunStopAnimationPlayRate;                           // 0x044C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinUpperBodyBlendWeight;                                  // 0x0450(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UpperBodyBlendMaxSpeedXY;                                 // 0x0454(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UpperBodyBlendWeight;                                     // 0x0458(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x045C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ZombieAnimInstance2");
		return ptr;
	}


	void AnimNotify_RFootDown();
	void AnimNotify_LFootDown();
	void AnimNotify_GoToRagdoll();
};


// Class ConZ.ZombieCorpse
// 0x0010 (0x04F0 - 0x04E0)
class AZombieCorpse : public ACorpse
{
public:
	bool                                               _isSearched;                                              // 0x04E0(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x04E1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ZombieCorpse");
		return ptr;
	}

};


// Class ConZ.ZombieMovementComponent2
// 0x0010 (0x07D0 - 0x07C0)
class UZombieMovementComponent2 : public UCharacterMovementComponent
{
public:
	float                                              _maxClimbHeight;                                          // 0x07C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x07C4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ZombieMovementComponent2");
		return ptr;
	}

};


// Class ConZ.ZombieSoundComponent2
// 0x0040 (0x0158 - 0x0118)
class UZombieSoundComponent2 : public UCharacterSoundComponent
{
public:
	class UAkAudioEvent*                               RelaxedStanceEnteredAudioEvent;                           // 0x0118(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               AlertedStanceEnteredAudioEvent;                           // 0x0120(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               CombatStanceEnteredAudioEvent;                            // 0x0128(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               FootstepAudioEvent;                                       // 0x0130(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StopAllAudioEvent;                                        // 0x0138(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               DeathAudioEvent;                                          // 0x0140(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StartSearchCorpseAudioEvent;                              // 0x0148(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StopSearchCorpseAudioEvent;                               // 0x0150(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ZombieSoundComponent2");
		return ptr;
	}

};


// Class ConZ.ZombieVariationsDataAsset
// 0x0040 (0x0070 - 0x0030)
class UZombieVariationsDataAsset : public UDataAsset
{
public:
	struct FZombiesVariations                          ZombieVariations;                                         // 0x0030(0x0040) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ConZ.ZombieVariationsDataAsset");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
