// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_PrisonerLifeIndicatorsSprite_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetImageVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EBodyPart                      bodyPart                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UImage*                  Image                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::SetImageVisibility(EBodyPart bodyPart, class UImage* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetImageVisibility");

	struct
	{
		EBodyPart                      bodyPart;
		class UImage*                  Image;
	} params;

	params.bodyPart = bodyPart;
	params.Image = Image;

	UObject::ProcessEvent(fn, &params);
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetDefaultPrisoner
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APrisoner*               Prisoner                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::GetDefaultPrisoner(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetDefaultPrisoner");

	struct
	{
		class APrisoner*               Prisoner;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Prisoner != nullptr)
		*Prisoner = params.Prisoner;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetProgressBar
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCircularProgressBarSprites_C* circularProgresBar             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::GetProgressBar(int Index, class UCircularProgressBarSprites_C** circularProgresBar)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetProgressBar");

	struct
	{
		int                            Index;
		class UCircularProgressBarSprites_C* circularProgresBar;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	if (circularProgresBar != nullptr)
		*circularProgresBar = params.circularProgresBar;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetDefaultPrisonerToMonitor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::SetDefaultPrisonerToMonitor(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetDefaultPrisonerToMonitor");

	struct
	{
		bool                           Success;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Success != nullptr)
		*Success = params.Success;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.UpdateIndicators
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPrisonerLifeIndicatorsSprite_C::UpdateIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.UpdateIndicators");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetPrisonerToMonitor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::SetPrisonerToMonitor(class APrisoner* Prisoner, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetPrisonerToMonitor");

	struct
	{
		class APrisoner*               Prisoner;
		bool                           Success;
	} params;

	params.Prisoner = Prisoner;

	UObject::ProcessEvent(fn, &params);

	if (Success != nullptr)
		*Success = params.Success;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPrisonerLifeIndicatorsSprite_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.UpdateLifeIndicatorsEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPrisonerLifeIndicatorsSprite_C::UpdateLifeIndicatorsEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.UpdateLifeIndicatorsEvent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.OnPrisonerSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPrisonerLifeIndicatorsSprite_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.OnPrisonerSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.ExecuteUbergraph_PrisonerLifeIndicatorsSprite
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::ExecuteUbergraph_PrisonerLifeIndicatorsSprite(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.ExecuteUbergraph_PrisonerLifeIndicatorsSprite");

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
