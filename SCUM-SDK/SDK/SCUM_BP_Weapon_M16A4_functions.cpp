// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Weapon_M16A4_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Weapon_M16A4.BP_Weapon_M16A4_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Weapon_M16A4_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M16A4.BP_Weapon_M16A4_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Weapon_M16A4.BP_Weapon_M16A4_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Weapon_M16A4_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M16A4.BP_Weapon_M16A4_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Weapon_M16A4.BP_Weapon_M16A4_C.OnAttachmentAdded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWeapon*                 sender                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AWeaponAttachment*       Attachment                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Weapon_M16A4_C::OnAttachmentAdded(class AWeapon* sender, class AWeaponAttachment* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M16A4.BP_Weapon_M16A4_C.OnAttachmentAdded");

	struct
	{
		class AWeapon*                 sender;
		class AWeaponAttachment*       Attachment;
	} params;

	params.sender = sender;
	params.Attachment = Attachment;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Weapon_M16A4.BP_Weapon_M16A4_C.OnAttachmentRemoved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWeapon*                 sender                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AWeaponAttachment*       Attachment                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Weapon_M16A4_C::OnAttachmentRemoved(class AWeapon* sender, class AWeaponAttachment* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M16A4.BP_Weapon_M16A4_C.OnAttachmentRemoved");

	struct
	{
		class AWeapon*                 sender;
		class AWeaponAttachment*       Attachment;
	} params;

	params.sender = sender;
	params.Attachment = Attachment;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Weapon_M16A4.BP_Weapon_M16A4_C.ExecuteUbergraph_BP_Weapon_M16A4
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Weapon_M16A4_C::ExecuteUbergraph_BP_Weapon_M16A4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M16A4.BP_Weapon_M16A4_C.ExecuteUbergraph_BP_Weapon_M16A4");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
