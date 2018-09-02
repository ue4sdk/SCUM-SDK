// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_MediaCompositing_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MediaCompositing.MediaPlaneComponent.SetMediaPlane
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMediaPlaneParameters   Plane                          (CPF_Parm)

void UMediaPlaneComponent::SetMediaPlane(const struct FMediaPlaneParameters& Plane)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaCompositing.MediaPlaneComponent.SetMediaPlane");

	struct
	{
		struct FMediaPlaneParameters   Plane;
	} params;

	params.Plane = Plane;

	UObject::ProcessEvent(fn, &params);
}


// Function MediaCompositing.MediaPlaneComponent.OnMediaTextureChanged
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UMediaPlaneComponent::OnMediaTextureChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaCompositing.MediaPlaneComponent.OnMediaTextureChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MediaCompositing.MediaPlaneComponent.GetPlane
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FMediaPlaneParameters   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FMediaPlaneParameters UMediaPlaneComponent::GetPlane()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaCompositing.MediaPlaneComponent.GetPlane");

	struct
	{
		struct FMediaPlaneParameters   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
