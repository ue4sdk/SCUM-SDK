// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Weapon_590A11_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Weapon_590A11.BP_Weapon_590A11_C.GetWidgetDisplayInfo
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FWidgetDisplayInfo      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FWidgetDisplayInfo ABP_Weapon_590A11_C::GetWidgetDisplayInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_590A11.BP_Weapon_590A11_C.GetWidgetDisplayInfo");

	struct
	{
		struct FWidgetDisplayInfo      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_Weapon_590A11.BP_Weapon_590A11_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Weapon_590A11_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_590A11.BP_Weapon_590A11_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Weapon_590A11.BP_Weapon_590A11_C.FillUpWithAmmo
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Weapon_590A11_C::FillUpWithAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_590A11.BP_Weapon_590A11_C.FillUpWithAmmo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Weapon_590A11.BP_Weapon_590A11_C.ExecuteUbergraph_BP_Weapon_590A11
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Weapon_590A11_C::ExecuteUbergraph_BP_Weapon_590A11(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_590A11.BP_Weapon_590A11_C.ExecuteUbergraph_BP_Weapon_590A11");

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
