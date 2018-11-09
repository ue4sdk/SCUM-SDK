// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_AppleVision_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AppleVision.AppleVisionDetectFacesAsyncTaskBlueprintProxy.CreateProxyObjectForDetectFaces
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTexture*                SourceImage                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAppleVisionDetectFacesAsyncTaskBlueprintProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAppleVisionDetectFacesAsyncTaskBlueprintProxy* UAppleVisionDetectFacesAsyncTaskBlueprintProxy::CreateProxyObjectForDetectFaces(class UTexture* SourceImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleVision.AppleVisionDetectFacesAsyncTaskBlueprintProxy.CreateProxyObjectForDetectFaces");

	struct
	{
		class UTexture*                SourceImage;
		class UAppleVisionDetectFacesAsyncTaskBlueprintProxy* ReturnValue;
	} params;

	params.SourceImage = SourceImage;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
