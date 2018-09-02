#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_VictoryBPLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class VictoryBPLibrary.TKMathFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UTKMathFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class VictoryBPLibrary.TKMathFunctionLibrary");
		return ptr;
	}


	static struct FVector VectorRadiansToDegrees(const struct FVector& RadVector);
	static struct FVector VectorDegreesToRadians(const struct FVector& DegVector);
	static bool SphereBoxIntersection(const struct FVector& SphereOrigin, float SphereRadius, const struct FVector& BoxOrigin, const struct FVector& BoxExtent);
	static float SignedDistancePlanePoint(const struct FVector& PlaneNormal, const struct FVector& planePoint, const struct FVector& Point);
	static struct FVector SetVectorLength(const struct FVector& A, float Size);
	static void SetCenterOfMassOffset(class UPrimitiveComponent* Target, const struct FVector& Offset, const struct FName& BoneName);
	static int RoundToUpperMultiple(int A, int Multiple, bool skipSelf);
	static int RoundToNearestMultiple(int A, int Multiple);
	static int RoundToLowerMultiple(int A, int Multiple, bool skipSelf);
	static struct FVector ProjectPointOnLine(const struct FVector& LineOrigin, const struct FVector& LineDirection, const struct FVector& Point);
	static int PointOnWhichSideOfLineSegment(const struct FVector& LinePoint1, const struct FVector& LinePoint2, const struct FVector& Point);
	static struct FVector2D NegateVector2D(const struct FVector2D& A);
	static int NegateInt(int A);
	static float NegateFloat(float A);
	static bool LineToLineIntersection(const struct FVector& LinePoint1, const struct FVector& LineDir1, const struct FVector& LinePoint2, const struct FVector& LineDir2, struct FVector* IntersectionPoint);
	static bool LineExtentBoxIntersection(const struct FBox& inBox, const struct FVector& Start, const struct FVector& End, const struct FVector& Extent, struct FVector* HitLocation, struct FVector* HitNormal, float* HitTime);
	static bool IsPowerOfTwo(int X);
	static bool IsPointInsideBox(const struct FVector& Point, const struct FVector& BoxOrigin, const struct FVector& BoxExtent);
	static bool IsMultipleOf(int A, int Multiple);
	static bool IsLineInsideSphere(const struct FVector& LineStart, const struct FVector& LineDir, float LineLength, const struct FVector& SphereOrigin, float SphereRadius);
	static bool IsEvenNumber(float A);
	static struct FVector GridSnap(const struct FVector& A, float Grid);
	static struct FVector GetVelocityAtPoint(class UPrimitiveComponent* Target, const struct FVector& Point, const struct FName& BoneName, bool DrawDebugInfo);
	static int GetConsoleVariableInt(const struct FString& VariableName);
	static float GetConsoleVariableFloat(const struct FString& VariableName);
	static float ConvertPhysicsLinearVelocity(const struct FVector& Velocity, TEnumAsByte<ESpeedUnit> SpeedUnit);
	static void ConvertAnchorToAnchor(class UObject* WorldContextObject, const struct FAnchors& CurrentAnchor, const struct FMargin& Offsets, const struct FAnchors& TargetAnchor, struct FMargin* ConvertedOffsets);
	static bool ClosestPointsOnTwoLines(const struct FVector& LinePoint1, const struct FVector& lineVec1, const struct FVector& LinePoint2, const struct FVector& lineVec2, struct FVector* closestPointLine1, struct FVector* closestPointLine2);
	static void ClosestPointsOfLineSegments(const struct FVector& Line1Start, const struct FVector& Line1End, const struct FVector& Line2Start, const struct FVector& Line2End, struct FVector* LinePoint1, struct FVector* LinePoint2);
	static struct FVector ClosestPointOnSphereToLine(const struct FVector& SphereOrigin, float SphereRadius, const struct FVector& LineOrigin, const struct FVector& LineDir);
	static struct FVector ClosestPointOnLineSeqment(const struct FVector& Point, const struct FVector& LineStart, const struct FVector& LineEnd);
	static bool AreLineSegmentsCrossing(const struct FVector& pointA1, const struct FVector& pointA2, const struct FVector& pointB1, const struct FVector& pointB2);
};


// Class VictoryBPLibrary.VictoryBPFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UVictoryBPFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class VictoryBPLibrary.VictoryBPFunctionLibrary");
		return ptr;
	}


	static bool WorldType__InPIEWorld(class UObject* WorldContextObject);
	static bool WorldType__InGameInstanceWorld(class UObject* WorldContextObject);
	static bool WorldType__InEditorWorld(class UObject* WorldContextObject);
	static bool WidgetIsChildOf(class UWidget* ChildWidget, class UWidget* PossibleParent);
	static class UUserWidget* WidgetGetParentOfClass(class UWidget* ChildWidget, class UClass* WidgetClass);
	static void WidgetGetChildrenOfClass(class UWidget* ParentWidget, class UClass* WidgetClass, bool bImmediateOnly, TArray<class UUserWidget*>* ChildWidgets);
	static void Visibility__GetRenderedActors(class UObject* WorldContextObject, float MinRecentTime, TArray<class AActor*>* CurrentlyRenderedActors);
	static void Visibility__GetNotRenderedActors(class UObject* WorldContextObject, float MinRecentTime, TArray<class AActor*>* CurrentlyNotRenderedActors);
	static bool ViewportPositionDeproject(class UObject* WorldContextObject, const struct FVector2D& ViewportPosition, struct FVector* OutWorldOrigin, struct FVector* OutWorldDirection);
	static bool Viewport__SetMousePosition(class APlayerController* ThePC, float PosX, float PosY);
	static bool Viewport__GetMousePosition(class APlayerController* ThePC, float* PosX, float* PosY);
	static bool Viewport__GetCenterOfViewport(class APlayerController* ThePC, float* PosX, float* PosY);
	static bool Viewport__EnableWorldRendering(class APlayerController* ThePC, bool RenderTheWorld);
	static bool VictorySoundVolumeChange(class USoundClass* SoundClassObject, float NewVolume);
	static void VictorySortIntArray(TArray<int>* IntArray, TArray<int>* IntArrayRef);
	static void VictorySortFloatArray(TArray<float>* FloatArray, TArray<float>* FloatArrayRef);
	static void VictorySimulateMouseWheel(float Delta);
	static void VictorySimulateKeyPress(class APlayerController* ThePC, const struct FKey& Key, TEnumAsByte<EInputEvent> EventType);
	static void VictorySetCustomConfigVar_Vector2D(const struct FString& SectionName, const struct FString& VariableName, const struct FVector2D& Value);
	static void VictorySetCustomConfigVar_Vector(const struct FString& SectionName, const struct FString& VariableName, const struct FVector& Value);
	static void VictorySetCustomConfigVar_String(const struct FString& SectionName, const struct FString& VariableName, const struct FString& Value);
	static void VictorySetCustomConfigVar_Rotator(const struct FString& SectionName, const struct FString& VariableName, const struct FRotator& Value);
	static void VictorySetCustomConfigVar_Int(const struct FString& SectionName, const struct FString& VariableName, int Value);
	static void VictorySetCustomConfigVar_Float(const struct FString& SectionName, const struct FString& VariableName, float Value);
	static void VictorySetCustomConfigVar_Color(const struct FString& SectionName, const struct FString& VariableName, const struct FLinearColor& Value);
	static void VictorySetCustomConfigVar_Bool(const struct FString& SectionName, const struct FString& VariableName, bool Value);
	static void VictoryRemoveAxisKeyBind(const struct FVictoryInputAxis& ToRemove);
	static void VictoryRemoveActionKeyBind(const struct FVictoryInput& ToRemove);
	static bool VictoryReBindAxisKey(const struct FVictoryInputAxis& Original, const struct FVictoryInputAxis& NewBinding);
	static bool VictoryReBindActionKey(const struct FVictoryInput& Original, const struct FVictoryInput& NewBinding);
	static bool VictoryPhysics_UpdateAngularDamping(class UPrimitiveComponent* CompToUpdate, float NewAngularDamping);
	static struct FString VictoryPaths__WindowsNoEditorDir();
	static struct FString VictoryPaths__Win64Dir_BinaryLocation();
	static struct FString VictoryPaths__ScreenShotsDir();
	static struct FString VictoryPaths__SavedDir();
	static struct FString VictoryPaths__LogsDir();
	static struct FString VictoryPaths__GameRootDirectory();
	static struct FString VictoryPaths__ConfigDir();
	static class ULevelStreaming* VictoryLoadLevelInstance(class UObject* WorldContextObject, const struct FString& MapFolderOffOfContent, const struct FString& LevelName, int InstanceNumber, const struct FVector& Location, const struct FRotator& Rotation, bool* Success);
	static void VictoryISM_GetAllVictoryISMActors(class UObject* WorldContextObject, TArray<class AVictoryISM*>* Out);
	static void VictoryISM_ConvertToVictoryISMActors(class UObject* WorldContextObject, class UClass* ActorClass, bool DestroyOriginalActors, int MinCountToCreateISM, TArray<class AVictoryISM*>* CreatedISMActors);
	static bool VictoryIsApplicationRunning(int ProcessId);
	static void VictoryIntPlusEquals(int Add, int* Int, int* IntOut);
	static void VictoryIntMinusEquals(int Sub, int* Int, int* IntOut);
	static struct FVictoryInputAxis VictoryGetVictoryInputAxis(const struct FKeyEvent& KeyEvent);
	static struct FVictoryInput VictoryGetVictoryInput(const struct FKeyEvent& KeyEvent);
	static float VictoryGetSoundVolume(class USoundClass* SoundClassObject);
	static struct FVector2D VictoryGetCustomConfigVar_Vector2D(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	static struct FVector VictoryGetCustomConfigVar_Vector(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	static struct FString VictoryGetCustomConfigVar_String(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	static struct FRotator VictoryGetCustomConfigVar_Rotator(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	static int VictoryGetCustomConfigVar_Int(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	static float VictoryGetCustomConfigVar_Float(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	static struct FLinearColor VictoryGetCustomConfigVar_Color(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	static bool VictoryGetCustomConfigVar_Bool(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	static struct FString VictoryGetApplicationName(int ProcessId);
	static void VictoryGetAllAxisKeyBindings(TArray<struct FVictoryInputAxis>* Bindings);
	static void VictoryGetAllAxisAndActionMappingsForKey(const struct FKey& Key, TArray<struct FVictoryInput>* ActionBindings, TArray<struct FVictoryInputAxis>* AxisBindings);
	static void VictoryGetAllActionKeyBindings(TArray<struct FVictoryInput>* Bindings);
	static void VictoryFloatPlusEquals(float Add, float* Float, float* FloatOut);
	static void VictoryFloatMinusEquals(float Sub, float* Float, float* FloatOut);
	static bool VictoryDestructible_DestroyChunk(class UDestructibleComponent* DestructibleComp, int HitItem);
	static void VictoryCreateProc(const struct FString& FullPathOfProgramToRun, TArray<struct FString> CommandlineArgs, bool Detach, bool Hidden, int Priority, const struct FString& OptionalWorkingDirectory, int* ProcessId);
	static void VictoryAppendInline(const struct FString& ToAppend, bool AppendNewline, struct FString* string, struct FString* Result);
	static struct FString Victory_SecondsToHoursMinutesSeconds(float Seconds, bool TrimZeroes);
	static void Victory_SaveStringToOSClipboard(const struct FString& ToClipboard);
	static bool Victory_SavePixels(const struct FString& FullFilePath, int Width, int Height, TArray<struct FLinearColor> ImagePixels, bool SaveAsBMP, bool SRGB, struct FString* errorString);
	static class UTexture2D* Victory_LoadTexture2D_FromFile_Pixels(const struct FString& FullFilePath, EJoyImageFormats ImageFormat, bool* IsValid, int* Width, int* Height, TArray<struct FLinearColor>* OutPixels);
	static class UTexture2D* Victory_LoadTexture2D_FromFile(const struct FString& FullFilePath, EJoyImageFormats ImageFormat, bool* IsValid, int* Width, int* Height);
	static void Victory_GetStringFromOSClipboard(struct FString* FromClipboard);
	static bool Victory_GetPixelsArrayFromT2D(class UTexture2D* T2D, int* TextureWidth, int* TextureHeight, TArray<struct FLinearColor>* PixelArray);
	static bool Victory_GetPixelFromT2D(class UTexture2D* T2D, int X, int Y, struct FLinearColor* PixelColor);
	static struct FString Victory_GetGRHIAdapterName();
	static void Victory_GetGPUInfo(struct FString* DeviceDescription, struct FString* Provider, struct FString* DriverVersion, struct FString* DriverDate);
	static struct FString Victory_GetGPUBrand();
	static bool Victory_Get_Pixel(TArray<struct FLinearColor> Pixels, int ImageHeight, int X, int Y, struct FLinearColor* FoundColor);
	static TEnumAsByte<EPathFollowingRequestResult> Victory_AI_MoveToWithFilter(class APawn* Pawn, const struct FVector& Dest, class UClass* FilterClass, float AcceptanceRadius, bool bProjectDestinationToNavigation, bool bStopOnOverlap, bool bCanStrafe);
	static float VerticalFOV(float HorizontalFOV, float AspectRatio);
	static struct FVector2D Vector2DInterpTo_Constant(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed);
	static struct FVector2D Vector2DInterpTo(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed);
	static void UTCToLocal(const struct FDateTime& UTCTime, struct FDateTime* LocalTime);
	static void UnloadStreamingLevel(class ULevelStreamingKismet* LevelInstance);
	struct FRotator TransformVectorToActorSpaceAngle(class AActor* Actor, const struct FVector& InVector);
	struct FVector TransformVectorToActorSpace(class AActor* Actor, const struct FVector& InVector);
	static class AActor* Traces__CharacterMeshTrace___ClosestSocket(class UObject* WorldContextObject, class AActor* TraceOwner, const struct FVector& TraceStart, const struct FVector& TraceEnd, struct FVector* OutImpactPoint, struct FVector* OutImpactNormal, struct FName* ClosestSocketName, struct FVector* SocketLocation, bool* IsValid);
	static class AActor* Traces__CharacterMeshTrace___ClosestBone(class AActor* TraceOwner, const struct FVector& TraceStart, const struct FVector& TraceEnd, struct FVector* OutImpactPoint, struct FVector* OutImpactNormal, struct FName* ClosestBoneName, struct FVector* ClosestBoneLocation, bool* IsValid);
	static bool TraceData__GetTraceDataFromSkeletalMeshSocket(class USkeletalMeshComponent* Mesh, const struct FRotator& TraceRotation, float TraceLength, const struct FName& Socket, bool DrawTraceData, const struct FLinearColor& TraceDataColor, float TraceDataThickness, struct FVector* TraceStart, struct FVector* TraceEnd);
	static bool TraceData__GetTraceDataFromCharacterSocket(class AActor* TheCharacter, const struct FRotator& TraceRotation, float TraceLength, const struct FName& Socket, bool DrawTraceData, const struct FLinearColor& TraceDataColor, float TraceDataThickness, struct FVector* TraceStart, struct FVector* TraceEnd);
	static int Text_ToInt(const struct FText& Text, bool UseDotForThousands);
	static float Text_ToFloat(const struct FText& Text, bool UseDotForThousands);
	static bool Text_IsNumeric(const struct FText& Text);
	static bool StringIsEmpty(const struct FString& Target);
	static void StringConversion__GetFloatAsStringWithPrecision(float TheFloat, int Precision, bool IncludeLeadingZero, struct FString* TheString);
	static void String__ExplodeString(const struct FString& InputString, const struct FString& Separator, int Limit, bool bTrimElements, TArray<struct FString>* OutputStrings);
	static struct FString String__CombineStrings_Multi(const struct FString& A, const struct FString& B);
	static struct FString String__CombineStrings(const struct FString& StringFirst, const struct FString& StringSecond, const struct FString& Separator, const struct FString& StringFirstLabel, const struct FString& StringSecondLabel);
	static class AActor* SpawnActorIntoLevel(class UObject* WorldContextObject, class UClass* ActorClass, const struct FName& Level, const struct FVector& Location, const struct FRotator& Rotation, bool SpawnEvenIfColliding);
	static void SetGenericTeamId(class AActor* Target, unsigned char NewTeamId);
	static void SetComponentTickRate(class UActorComponent* Component, float Seconds);
	static void SetBloomIntensity(class APostProcessVolume* PostProcessVolume, float Intensity);
	static void ServerTravel(class UObject* WorldContextObject, const struct FString& mapName, bool bNotifyPlayers);
	static void Selection_SelectionBox(class UObject* WorldContextObject, const struct FVector2D& AnchorPoint, const struct FVector2D& DraggedPoint, class UClass* ClassFilter, TArray<class AActor*>* SelectedActors);
	static void seedRandWithTime();
	static void seedRandWithEntropy();
	static void seedRand(int Seed);
	static bool ScreenShots_Rename_Move_Most_Recent(const struct FString& NewName, const struct FString& NewAbsoluteFolderPath, bool HighResolution, struct FString* OriginalFileName);
	static void SaveGameObject_GetAllSaveSlotFileNames(TArray<struct FString>* FileNames);
	static void Rendering__UnFreezeGameRendering();
	static void Rendering__FreezeGameRendering();
	static void RemoveFromStreamingLevels(class UObject* WorldContextObject, const struct FLevelStreamInstanceInfo& LevelInstanceInfo);
	static void RemoveAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass);
	static void RealWorldTime__GetTimePassedSincePreviousTime(const struct FString& PreviousTime, float* Milliseconds, float* Seconds, float* Minutes, float* Hours);
	static void RealWorldTime__GetDifferenceBetweenTimes(const struct FString& PreviousTime1, const struct FString& PreviousTime2, float* Milliseconds, float* Seconds, float* Minutes, float* Hours);
	static struct FString RealWorldTime__GetCurrentOSTime(int* Milliseconds, int* Seconds, int* Minutes, int* Hours12, int* Hours24, int* Day, int* Month, int* Year);
	static int RandInt_uniDis_MT();
	static int RandInt_uniDis();
	static int RandInt_MINMAX_uniDis_MT(int iMin, int iMax);
	static int RandInt_MINMAX_uniDis(int iMin, int iMax);
	static float RandFloat_uniDis_MT();
	static float RandFloat_uniDis();
	static float RandFloat_MINMAX_uniDis_MT(float iMin, float iMax);
	static float RandFloat_MINMAX_uniDis(float iMin, float iMax);
	static bool RandBool_Bernoulli_MT(float fBias);
	static bool RandBool_Bernoulli(float fBias);
	static struct FVector2D ProjectWorldToScreenPosition(const struct FVector& WorldLocation);
	static void PointDistanceToPlane(const struct FPlane& Plane, const struct FVector& Point, float* Distance);
	static class UAudioComponent* PlaySoundAttachedFromFile(const struct FString& FilePath, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	static void PlaySoundAtLocationFromFile(class UObject* WorldContextObject, const struct FString& FilePath, const struct FVector& Location, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	static bool PlayerState_GetPlayerID(class APlayerController* ThePC, int* PlayerId);
	static bool PlayerController_GetControllerID(class APlayerController* ThePC, int* ControllerId);
	static bool Physics__UpdateCharacterCameraToRagdollLocation(class AActor* TheCharacter, float HeightOffset, float InterpSpeed);
	static bool Physics__LeaveRagDoll(class AActor* TheCharacter, bool SetToFallingMovementMode, float HeightAboveRBMesh, const struct FVector& InitLocation, const struct FRotator& InitRotation);
	static bool Physics__IsRagDoll(class AActor* TheCharacter);
	static bool Physics__InitializeVictoryRagDoll(class AActor* TheCharacter, struct FVector* InitLocation, struct FRotator* InitRotation);
	static bool Physics__GetLocationofRagDoll(class AActor* TheCharacter, struct FVector* RagdollLocation);
	static bool Physics__EnterRagDoll(class AActor* TheCharacter);
	static bool OptionsMenu__GetDisplayAdapterScreenResolutions(bool IncludeRefreshRates, TArray<int>* Widths, TArray<int>* Heights, TArray<int>* RefreshRates);
	static void OperatingSystem__GetCurrentPlatform(bool* Windows_, bool* Mac, bool* Linux, bool* iOS, bool* Android, bool* Android_ARM, bool* Android_Vulkan, bool* PS4, bool* XBoxOne, bool* HTML5, bool* Apple);
	static void Open_URL_In_Web_Browser(const struct FString& TheURL);
	static bool NotEqual_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B, float ErrorTolerance);
	static bool Mobility__SetSceneCompMobility(class USceneComponent* SceneComp, TEnumAsByte<EComponentMobility> NewMobility);
	static void MinOfIntArray(TArray<int> IntArray, int* IndexOfMinValue, int* MinValue);
	static void MinOfFloatArray(TArray<float> FloatArray, int* IndexOfMinValue, float* MinValue);
	static void MaxOfIntArray(TArray<int> IntArray, int* IndexOfMaxValue, int* MaxValue);
	static void MaxOfFloatArray(TArray<float> FloatArray, int* IndexOfMaxValue, float* MaxValue);
	static float MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
	static void Loops_ResetBPRunawayCounter();
	static class UTexture2D* LoadTexture2D_FromFileByExtension(const struct FString& ImagePath, bool* IsValid, int* OutWidth, int* OutHeight);
	static class UTexture2D* LoadTexture2D_FromDDSFile(const struct FString& FullFilePath);
	static bool LoadStringFromFile(const struct FString& FullFilePath, struct FString* Result);
	static bool LoadStringArrayFromFile(const struct FString& FullFilePath, bool ExcludeEmptyLines, TArray<struct FString>* StringArray, int* ArraySize);
	static class UObject* LoadObjectFromAssetPath(class UClass* ObjectClass, const struct FName& Path, bool* IsValid);
	static bool LensFlare__GetLensFlareOffsets(class APlayerController* PlayerController, class AActor* LightSource, float* PitchOffset, float* YawOffset, float* RollOffset);
	static void JoyIsKey(const struct FKeyEvent& KeyEvent, const struct FKey& Key, bool* Ctrl, bool* Shift, bool* Alt, bool* Cmd, bool* Match);
	static void JoyGraphicsSettings__FullScreen_Set(TEnumAsByte<EJoyGraphicsFullScreen> NewSetting);
	static TEnumAsByte<EJoyGraphicsFullScreen> JoyGraphicsSettings__FullScreen_Get();
	static bool JoyFileIO_GetFilesInRootAndAllSubFolders(const struct FString& RootFolderFullPath, const struct FString& Ext, TArray<struct FString>* Files);
	static bool JoyFileIO_GetFiles(const struct FString& RootFolderFullPath, const struct FString& Ext, TArray<struct FString>* Files);
	static bool IsWidgetOfClassInViewport(class UObject* WorldContextObject, class UClass* WidgetClass);
	static bool IsStandalone(class UObject* WorldContextObject);
	static bool IsPointOnPlane(const struct FPlane& Plane, const struct FVector& Point, float Tolerance);
	static bool IsAlphaNumeric(const struct FString& string);
	static class UPanelSlot* InsertChildAt(class UWidget* Parent, int Index, class UWidget* Content);
	static float HorizontalFOV(float VerticalFOV, float AspectRatio);
	static void HideStreamingLevel(class ULevelStreamingKismet* LevelInstance);
	static bool HasSubstring(const struct FString& SearchIn, const struct FString& Substring, TEnumAsByte<ESearchCase> SearchCase, TEnumAsByte<ESearchDir> SearchDir);
	static void GraphicsSettings__SetFrameRateToBeUnbound();
	static void GraphicsSettings__SetFrameRateCap(float NewValue);
	static class UWidget* GetWidgetFromName(class UUserWidget* ParentUserWidget, const struct FName& Name);
	static bool GetViewportPositionHitResultByChannel(class UObject* WorldContextObject, const struct FVector2D& ViewportPosition, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, struct FHitResult* OutHitResult);
	static bool GetViewportPosition(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* OutViewportPosition);
	static struct FVector GetVectorRelativeLocation(const struct FVector& ParentLocation, const struct FRotator& ParentRotation, const struct FVector& ChildLocation);
	static void GetUTCFromUnixTimeStamp(int UnixTimeStamp, struct FDateTime* UTCTime);
	static void GetUserDisplayAdapterBrand(bool* IsAMD, bool* IsNvidia, bool* IsIntel, bool* IsUnknown, int* UnknownId);
	static int GetUnixTimeStamp(const struct FDateTime& UTCTime);
	static float GetTimeInPlay(class AActor* Actor);
	static float GetTimeAlive(class AActor* Target);
	static bool GetStaticMeshVertexLocations(class UStaticMeshComponent* Comp, TArray<struct FVector>* VertexPositions);
	static class USoundWave* GetSoundWaveFromFile(const struct FString& FilePath);
	static struct FRotator GetRotatorRelativeRotation(const struct FRotator& ParentRotation, const struct FRotator& ChildRotation);
	static int GetPlayerUniqueNetID();
	static class APlayerStart* GetPlayerStart(class UObject* WorldContextObject, const struct FString& PlayerStartName);
	static struct FName GetObjectPath(class UObject* Obj);
	static void GetNamesOfLoadedLevels(class UObject* WorldContextObject, TArray<struct FString>* NamesOfLoadedLevels);
	static struct FLevelStreamInstanceInfo GetLevelInstanceInfo(class ULevelStreamingKismet* LevelInstance);
	static struct FName GetHeadMountedDisplayDeviceType();
	static unsigned char GetGenericTeamId(class AActor* Target);
	static class UUserWidget* GetFirstWidgetOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly);
	static float GetDistanceToCollision(class UPrimitiveComponent* CollisionComponent, const struct FVector& Point, struct FVector* ClosestPointOnCollision);
	static float GetDistanceBetweenComponentSurfaces(class UPrimitiveComponent* CollisionComponent1, class UPrimitiveComponent* CollisionComponent2, struct FVector* PointOnSurface1, struct FVector* PointOnSurface2);
	static float GetCreationTime(class AActor* Target);
	static struct FRotator GetComponentRelativeRotation(class USceneComponent* ParentComponent, class USceneComponent* ChildComponent);
	static struct FVector GetComponentRelativeLocation(class USceneComponent* ParentComponent, class USceneComponent* ChildComponent);
	static struct FString GetCommandLine();
	static class AActor* GetClosestActorOfClassInRadiusOfLocation(class UObject* WorldContextObject, class UClass* ActorClass, const struct FVector& Center, float Radius, bool* IsValid);
	static class AActor* GetClosestActorOfClassInRadiusOfActor(class UObject* WorldContextObject, class UClass* ActorClass, class AActor* ActorCenter, float Radius, bool* IsValid);
	static void GetBoxContainingWorldPoints(TArray<struct FVector> Points, struct FVector* Center, struct FVector* Extent);
	static void GetAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets);
	static int GetAllBoneNamesBelowBone(class USkeletalMeshComponent* SkeletalMeshComp, const struct FName& StartingBoneName, TArray<struct FName>* BoneNames);
	static struct FRotator GetActorRelativeRotation(class AActor* ParentActor, class AActor* ChildActor);
	static struct FVector GetActorRelativeLocation(class AActor* ParentActor, class AActor* ChildActor);
	static void FlushPressedKeys(class APlayerController* PlayerController);
	static void FlashGameOnTaskBar(class APlayerController* PC, bool FlashContinuous, int MaxFlashCount, int FlashFrequencyMilliseconds);
	static bool FileIO__SaveStringTextToFile(const struct FString& SaveDirectory, const struct FString& JoyfulFileName, const struct FString& SaveText, bool AllowOverWriting);
	static bool FileIO__SaveStringArrayToFile(const struct FString& SaveDirectory, const struct FString& JoyfulFileName, TArray<struct FString> SaveText, bool AllowOverWriting);
	static bool EqualEqual_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B, float ErrorTolerance);
	static void DrawCircle(class UObject* WorldContextObject, const struct FVector& Center, float Radius, int NumPoints, float Thickness, const struct FLinearColor& LineColor, const struct FVector& YAxis, const struct FVector& ZAxis, float Duration, bool PersistentLines);
	static void Draw__Thick3DLineFromSocket(class USkeletalMeshComponent* Mesh, const struct FVector& EndPoint, const struct FName& Socket, const struct FLinearColor& LineColor, float Thickness, float Duration);
	static void Draw__Thick3DLineFromCharacterSocket(class AActor* TheCharacter, const struct FVector& EndPoint, const struct FName& Socket, const struct FLinearColor& LineColor, float Thickness, float Duration);
	static void Draw__Thick3DLineBetweenActors(class AActor* StartActor, class AActor* EndActor, const struct FLinearColor& LineColor, float Thickness, float Duration);
	static bool DoesMaterialHaveParameter(class UMaterialInterface* Mat, const struct FName& Parameter);
	static float DistanceToSurface__DistaceOfPointToMeshSurface(class AStaticMeshActor* TheSMA, const struct FVector& TestPoint, struct FVector* ClosestSurfacePoint);
	static bool Data__GetCharacterBoneLocations(class AActor* TheCharacter, TArray<struct FVector>* BoneLocations);
	static class UTextureRenderTarget2D* CreateTextureRenderTarget2D(int Width, int Height, const struct FLinearColor& ClearColor, float Gamma);
	static class UPrimitiveComponent* CreatePrimitiveComponent(class UObject* WorldContextObject, class UClass* CompClass, const struct FName& Name, const struct FVector& Location, const struct FRotator& Rotation);
	static struct FPlane CreatePlane(const struct FVector& Center, const struct FVector& Normal);
	static class UObject* CreateObject(class UObject* WorldContextObject, class UClass* TheObjectClass);
	static bool CreateMD5Hash(const struct FString& FileToHash, const struct FString& FileToStoreHashTo);
	static int CountOccurrancesOfSubString(const struct FString& Source, const struct FString& Substring, TEnumAsByte<ESearchCase> SearchCase);
	static struct FRotator Conversions__VectorToRotator(const struct FVector& TheVector);
	static void Conversions__StringToVector(const struct FString& string, struct FVector* ConvertedVector, bool* IsValid);
	static void Conversions__StringToRotator(const struct FString& string, struct FRotator* ConvertedRotator, bool* IsValid);
	static void Conversions__StringToColor(const struct FString& string, struct FLinearColor* ConvertedColor, bool* IsValid);
	static struct FVector Conversions__RotatorToVector(const struct FRotator& TheRotator);
	static void Conversions__ColorToString(const struct FLinearColor& Color, struct FString* ColorAsString);
	static int Conversion__FloatToRoundedInteger(float IN_Float);
	static void constructRand();
	static void Component_PrestreamTextures(class UMeshComponent* Target, float Seconds, bool bEnableStreaming, int CinematicTextureGroups);
	static bool CompareMD5Hash(const struct FString& MD5HashFile1, const struct FString& MD5HashFile2);
	static class AStaticMeshActor* Clone__StaticMeshActor(class UObject* WorldContextObject, class AStaticMeshActor* ToClone, const struct FVector& LocationOffset, const struct FRotator& RotationOffset, bool* IsValid);
	static bool ClientWindow__GameWindowIsForeGroundInOS();
	static bool CharacterMovement__SetMaxMoveSpeed(class ACharacter* TheCharacter, float NewMaxMoveSpeed);
	static struct FRotator Character__GetControllerRotation(class AActor* TheCharacter);
	static bool CaptureComponent2D_SaveImage(class USceneCaptureComponent2D* Target, const struct FString& ImagePath, const struct FLinearColor& ClearColour);
	static bool CaptureComponent2D_Project(class USceneCaptureComponent2D* Target, const struct FVector& Location, struct FVector2D* OutPixelLocation);
	static bool Capture2D_SaveImage(class ASceneCapture2D* Target, const struct FString& ImagePath, const struct FLinearColor& ClearColour);
	static bool Capture2D_Project(class ASceneCapture2D* Target, const struct FVector& Location, struct FVector2D* OutPixelLocation);
	static float Calcs__ClosestPointToSourcePoint(const struct FVector& Source, TArray<struct FVector> OtherPoints, struct FVector* ClosestPoint);
	static void Array_Sort(TArray<int> TargetArray, bool bAscendingOrder, const struct FName& VariableName);
	static bool Array_IsValidIndex(TArray<int> TargetArray, int Index);
	static struct FString AppendMultiple(const struct FString& A, const struct FString& B);
	static bool Animation__GetAimOffsetsFromRotation(class AActor* AnimBPOwner, const struct FRotator& TheRotation, float* Pitch, float* Yaw);
	static bool Animation__GetAimOffsets(class AActor* AnimBPOwner, float* Pitch, float* Yaw);
	static void AddToStreamingLevels(class UObject* WorldContextObject, const struct FLevelStreamInstanceInfo& LevelInstanceInfo);
	static void AddToActorRotation(class AActor* TheActor, const struct FRotator& AddRot);
	static void Actor_PrestreamTextures(class AActor* Target, float Seconds, bool bEnableStreaming, int CinematicTextureGroups);
	static bool Actor__TeleportToActor(class AActor* ActorToTeleport, class AActor* DestinationActor);
	static void Actor__GetAttachedActors(class AActor* ParentActor, TArray<class AActor*>* ActorsArray);
	static class APlayerController* Accessor__GetPlayerController(class AActor* TheCharacter, bool* IsValid);
	static struct FString Accessor__GetNameAsString(class UObject* TheObject);
	static class USkeletalMeshComponent* Accessor__GetCharacterSkeletalMesh(class AActor* TheCharacter, bool* IsValid);
};


// Class VictoryBPLibrary.VictoryBPHTML
// 0x0000 (0x0028 - 0x0028)
class UVictoryBPHTML : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class VictoryBPLibrary.VictoryBPHTML");
		return ptr;
	}


	static void VictoryHTML5_SetCursorVisible(bool MakeVisible);
	static bool IsHTML();
};


// Class VictoryBPLibrary.VictoryISM
// 0x0008 (0x0320 - 0x0318)
class AVictoryISM : public AActor
{
public:
	class UInstancedStaticMeshComponent*               Mesh;                                                     // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class VictoryBPLibrary.VictoryISM");
		return ptr;
	}

};


// Class VictoryBPLibrary.VictoryPC
// 0x0000 (0x0670 - 0x0670)
class AVictoryPC : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class VictoryBPLibrary.VictoryPC");
		return ptr;
	}


	class UAudioComponent* VictoryPlaySpeechSound(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime);
	bool VictoryPC_GetMyIP_SendRequest();
	void VictoryPC_GetMyIP_DataReceived(const struct FString& YourIP);
	void Subtitles_CPPDelegate(TArray<struct FSubtitleCue> VictorySubtitles, float CueDuration);
	void OnVictorySubtitlesQueued(TArray<struct FVictorySubtitleCue> VictorySubtitles, float CueDuration);
};


// Class VictoryBPLibrary.VictoryTMapComp
// 0x0230 (0x0320 - 0x00F0)
class UVictoryTMapComp : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x230];                                     // 0x00F0(0x0230) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class VictoryBPLibrary.VictoryTMapComp");
		return ptr;
	}


	void String_Vector__Remove(const struct FString& Key);
	struct FVector String_Vector__Get(const struct FString& Key, bool* IsValid);
	void String_Vector__Clear();
	void String_Vector__AddPair(const struct FString& Key, const struct FVector& Value);
	void String_String__Remove(const struct FString& Key);
	struct FString String_String__Get(const struct FString& Key, bool* IsValid);
	void String_String__Clear();
	void String_String__AddPair(const struct FString& Key, const struct FString& Value);
	void String_Rotator__Remove(const struct FString& Key);
	struct FRotator String_Rotator__Get(const struct FString& Key, bool* IsValid);
	void String_Rotator__Clear();
	void String_Rotator__AddPair(const struct FString& Key, const struct FRotator& Value);
	void String_Int__Remove(const struct FString& Key);
	int String_Int__Get(const struct FString& Key, bool* IsValid);
	void String_Int__Clear();
	void String_Int__AddPair(const struct FString& Key, int Value);
	void String_Actor__Remove(const struct FString& Key);
	class AActor* String_Actor__Get(const struct FString& Key, bool* IsValid);
	void String_Actor__Clear();
	void String_Actor__AddPair(const struct FString& Key, class AActor* Value);
	void Int_Vector__Remove(int Key);
	struct FVector Int_Vector__Get(int Key, bool* IsValid);
	void Int_Vector__Clear();
	void Int_Vector__AddPair(int Key, const struct FVector& Value);
	void Int_Float__Remove(int Key, float Value);
	float Int_Float__Get(int Key, bool* IsValid);
	void Int_Float__Clear();
	void Int_Float__AddPair(int Key, float Value);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
