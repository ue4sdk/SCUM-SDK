// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_FootstepTracker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FootstepTracker.BP_FootstepTracker_C.DrawToTexture
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCanvasRenderTarget2D*   RenderTarget                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               DrawSize                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// class UMaterialInstanceDynamic* Material                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Rotation                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          AccuracyDivider                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void ABP_FootstepTracker_C::DrawToTexture(class UCanvasRenderTarget2D* RenderTarget, const struct FVector2D& DrawSize, class UMaterialInstanceDynamic* Material, float Rotation, float AccuracyDivider, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FootstepTracker.BP_FootstepTracker_C.DrawToTexture");

	struct
	{
		class UCanvasRenderTarget2D*   RenderTarget;
		struct FVector2D               DrawSize;
		class UMaterialInstanceDynamic* Material;
		float                          Rotation;
		float                          AccuracyDivider;
		struct FVector                 Location;
	} params;

	params.RenderTarget = RenderTarget;
	params.DrawSize = DrawSize;
	params.Material = Material;
	params.Rotation = Rotation;
	params.AccuracyDivider = AccuracyDivider;
	params.Location = Location;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FootstepTracker.BP_FootstepTracker_C.Blitzkrieg Boom
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_FootstepTracker_C::Blitzkrieg_Boom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FootstepTracker.BP_FootstepTracker_C.Blitzkrieg Boom");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FootstepTracker.BP_FootstepTracker_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_FootstepTracker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FootstepTracker.BP_FootstepTracker_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FootstepTracker.BP_FootstepTracker_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_FootstepTracker_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FootstepTracker.BP_FootstepTracker_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FootstepTracker.BP_FootstepTracker_C.DrawFootstep
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// bool                           flip                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Rotation                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          footstepNumber                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_FootstepTracker_C::DrawFootstep(const struct FVector& Location, bool flip, float Rotation, float footstepNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FootstepTracker.BP_FootstepTracker_C.DrawFootstep");

	struct
	{
		struct FVector                 Location;
		bool                           flip;
		float                          Rotation;
		float                          footstepNumber;
	} params;

	params.Location = Location;
	params.flip = flip;
	params.Rotation = Rotation;
	params.footstepNumber = footstepNumber;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FootstepTracker.BP_FootstepTracker_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_FootstepTracker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FootstepTracker.BP_FootstepTracker_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FootstepTracker.BP_FootstepTracker_C.ExecuteUbergraph_BP_FootstepTracker
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_FootstepTracker_C::ExecuteUbergraph_BP_FootstepTracker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FootstepTracker.BP_FootstepTracker_C.ExecuteUbergraph_BP_FootstepTracker");

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
