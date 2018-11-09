// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Sign_post_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sign_post.Sign_post_C.setBracketMaterial
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASign_post_C::setBracketMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_post.Sign_post_C.setBracketMaterial");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Sign_post.Sign_post_C.setPole
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASign_post_C::setPole()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_post.Sign_post_C.setPole");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Sign_post.Sign_post_C.setBracketPositions
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    Sign                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UStaticMeshComponent*    top_bracket                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UStaticMeshComponent*    bottom_Bracket                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ASign_post_C::setBracketPositions(class UStaticMeshComponent* Sign, class UStaticMeshComponent* top_bracket, class UStaticMeshComponent* bottom_Bracket)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_post.Sign_post_C.setBracketPositions");

	struct
	{
		class UStaticMeshComponent*    Sign;
		class UStaticMeshComponent*    top_bracket;
		class UStaticMeshComponent*    bottom_Bracket;
	} params;

	params.Sign = Sign;
	params.top_bracket = top_bracket;
	params.bottom_Bracket = bottom_Bracket;

	UObject::ProcessEvent(fn, &params);
}


// Function Sign_post.Sign_post_C.setSignPositions
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASign_post_C::setSignPositions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_post.Sign_post_C.setSignPositions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Sign_post.Sign_post_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASign_post_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_post.Sign_post_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
