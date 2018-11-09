// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_AppleImageUtils_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTexture*                SourceImage                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bWantColor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bUseGpu                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToTIFF(class UTexture* SourceImage, bool bWantColor, bool bUseGpu)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF");

	struct
	{
		class UTexture*                SourceImage;
		bool                           bWantColor;
		bool                           bUseGpu;
		class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;
	} params;

	params.SourceImage = SourceImage;
	params.bWantColor = bWantColor;
	params.bUseGpu = bUseGpu;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTexture*                SourceImage                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bWantColor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bUseGpu                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToPNG(class UTexture* SourceImage, bool bWantColor, bool bUseGpu)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG");

	struct
	{
		class UTexture*                SourceImage;
		bool                           bWantColor;
		bool                           bUseGpu;
		class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;
	} params;

	params.SourceImage = SourceImage;
	params.bWantColor = bWantColor;
	params.bUseGpu = bUseGpu;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTexture*                SourceImage                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Quality                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bWantColor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bUseGpu                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToJPEG(class UTexture* SourceImage, int Quality, bool bWantColor, bool bUseGpu)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG");

	struct
	{
		class UTexture*                SourceImage;
		int                            Quality;
		bool                           bWantColor;
		bool                           bUseGpu;
		class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;
	} params;

	params.SourceImage = SourceImage;
	params.Quality = Quality;
	params.bWantColor = bWantColor;
	params.bUseGpu = bUseGpu;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTexture*                SourceImage                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Quality                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bWantColor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bUseGpu                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToHEIF(class UTexture* SourceImage, int Quality, bool bWantColor, bool bUseGpu)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF");

	struct
	{
		class UTexture*                SourceImage;
		int                            Quality;
		bool                           bWantColor;
		bool                           bUseGpu;
		class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;
	} params;

	params.SourceImage = SourceImage;
	params.Quality = Quality;
	params.bWantColor = bWantColor;
	params.bUseGpu = bUseGpu;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
