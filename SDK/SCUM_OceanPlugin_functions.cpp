// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_OceanPlugin_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OceanPlugin.AdvancedBuoyancyComponent.TriangleArea
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 A                              (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 B                              (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 C                              (CPF_Parm, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAdvancedBuoyancyComponent::TriangleArea(const struct FVector& A, const struct FVector& B, const struct FVector& C)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.TriangleArea");

	struct
	{
		struct FVector                 A;
		struct FVector                 B;
		struct FVector                 C;
		float                          ReturnValue;
	} params;

	params.A = A;
	params.B = B;
	params.C = C;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.SplitTriangle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FBuoyancyVertex         H                              (CPF_Parm)
// struct FBuoyancyVertex         M                              (CPF_Parm)
// struct FBuoyancyVertex         L                              (CPF_Parm)
// struct FVector                 InArrow                        (CPF_Parm, CPF_IsPlainOldData)
// TArray<struct FForceTriangle>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FForceTriangle> UAdvancedBuoyancyComponent::SplitTriangle(const struct FBuoyancyVertex& H, const struct FBuoyancyVertex& M, const struct FBuoyancyVertex& L, const struct FVector& InArrow)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.SplitTriangle");

	struct
	{
		struct FBuoyancyVertex         H;
		struct FBuoyancyVertex         M;
		struct FBuoyancyVertex         L;
		struct FVector                 InArrow;
		TArray<struct FForceTriangle>  ReturnValue;
	} params;

	params.H = H;
	params.M = M;
	params.L = L;
	params.InArrow = InArrow;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.SetMeshDensity
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          NewDensity                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          NewWaterDensity                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAdvancedBuoyancyComponent::SetMeshDensity(float NewDensity, float NewWaterDensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.SetMeshDensity");

	struct
	{
		float                          NewDensity;
		float                          NewWaterDensity;
	} params;

	params.NewDensity = NewDensity;
	params.NewWaterDensity = NewWaterDensity;

	UObject::ProcessEvent(fn, &params);
}


// Function OceanPlugin.AdvancedBuoyancyComponent.GetOceanDepthFromGrid
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 Position                       (CPF_Parm, CPF_IsPlainOldData)
// bool                           bJustGetHeightAtLocation       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAdvancedBuoyancyComponent::GetOceanDepthFromGrid(const struct FVector& Position, bool bJustGetHeightAtLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.GetOceanDepthFromGrid");

	struct
	{
		struct FVector                 Position;
		bool                           bJustGetHeightAtLocation;
		float                          ReturnValue;
	} params;

	params.Position = Position;
	params.bJustGetHeightAtLocation = bJustGetHeightAtLocation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.GetOcean
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAdvancedBuoyancyComponent::GetOcean()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.GetOcean");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OceanPlugin.AdvancedBuoyancyComponent.DrawDebugStuff
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FForceTriangle          TriForce                       (CPF_Parm)
// struct FColor                  DebugColor                     (CPF_Parm, CPF_IsPlainOldData)

void UAdvancedBuoyancyComponent::DrawDebugStuff(const struct FForceTriangle& TriForce, const struct FColor& DebugColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.DrawDebugStuff");

	struct
	{
		struct FForceTriangle          TriForce;
		struct FColor                  DebugColor;
	} params;

	params.TriForce = TriForce;
	params.DebugColor = DebugColor;

	UObject::ProcessEvent(fn, &params);
}


// Function OceanPlugin.AdvancedBuoyancyComponent.ApplySlamForce
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 SlamForce                      (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 TriCenter                      (CPF_Parm, CPF_IsPlainOldData)

void UAdvancedBuoyancyComponent::ApplySlamForce(const struct FVector& SlamForce, const struct FVector& TriCenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.ApplySlamForce");

	struct
	{
		struct FVector                 SlamForce;
		struct FVector                 TriCenter;
	} params;

	params.SlamForce = SlamForce;
	params.TriCenter = TriCenter;

	UObject::ProcessEvent(fn, &params);
}


// Function OceanPlugin.AdvancedBuoyancyComponent.ApplyForce
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FForceTriangle          TriForce                       (CPF_Parm)

void UAdvancedBuoyancyComponent::ApplyForce(const struct FForceTriangle& TriForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.ApplyForce");

	struct
	{
		struct FForceTriangle          TriForce;
	} params;

	params.TriForce = TriForce;

	UObject::ProcessEvent(fn, &params);
}


// Function OceanPlugin.CustomVehicleController.GetIsDriving
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ACustomVehicleController::GetIsDriving()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.CustomVehicleController.GetIsDriving");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OceanPlugin.CustomVehicleController.ExitVehicle
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ACustomVehicleController::ExitVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.CustomVehicleController.ExitVehicle");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OceanPlugin.CustomVehicleController.EnterVehicle
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APawn*                   Vehicle                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACustomVehicleController::EnterVehicle(class APawn* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.CustomVehicleController.EnterVehicle");

	struct
	{
		class APawn*                   Vehicle;
	} params;

	params.Vehicle = Vehicle;

	UObject::ProcessEvent(fn, &params);
}


// Function OceanPlugin.CustomVehicleController.EnableBuoyancy
// (FUNC_Exec, FUNC_Native, FUNC_Public)

void ACustomVehicleController::EnableBuoyancy()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.CustomVehicleController.EnableBuoyancy");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OceanPlugin.CustomVehicleController.DrawBuoyancyPoints
// (FUNC_Exec, FUNC_Native, FUNC_Public)

void ACustomVehicleController::DrawBuoyancyPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.CustomVehicleController.DrawBuoyancyPoints");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OceanPlugin.FlockFish.OnEndOverlap
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UPrimitiveComponent*     activatedComp                  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AFlockFish::OnEndOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.FlockFish.OnEndOverlap");

	struct
	{
		class UPrimitiveComponent*     activatedComp;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
	} params;

	params.activatedComp = activatedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function OceanPlugin.FlockFish.OnBeginOverlap
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// class UPrimitiveComponent*     activatedComp                  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFromSweep                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void AFlockFish::OnBeginOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.FlockFish.OnBeginOverlap");

	struct
	{
		class UPrimitiveComponent*     activatedComp;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params;

	params.activatedComp = activatedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	UObject::ProcessEvent(fn, &params);
}


// Function OceanPlugin.OceanManager.MySetNetworkOffset
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Offset                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AOceanManager::MySetNetworkOffset(float Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.OceanManager.MySetNetworkOffset");

	struct
	{
		float                          Offset;
	} params;

	params.Offset = Offset;

	UObject::ProcessEvent(fn, &params);
}


// Function OceanPlugin.OceanManager.LoadLandscapeHeightmap
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTexture2D*              Tex2D                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AOceanManager::LoadLandscapeHeightmap(class UTexture2D* Tex2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.OceanManager.LoadLandscapeHeightmap");

	struct
	{
		class UTexture2D*              Tex2D;
	} params;

	params.Tex2D = Tex2D;

	UObject::ProcessEvent(fn, &params);
}


// Function OceanPlugin.OceanManager.GetWaveHeightValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UWorld*                  World                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           HeightOnly                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           TwoIterations                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector AOceanManager::GetWaveHeightValue(const struct FVector& Location, class UWorld* World, bool HeightOnly, bool TwoIterations)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.OceanManager.GetWaveHeightValue");

	struct
	{
		struct FVector                 Location;
		class UWorld*                  World;
		bool                           HeightOnly;
		bool                           TwoIterations;
		struct FVector                 ReturnValue;
	} params;

	params.Location = Location;
	params.World = World;
	params.HeightOnly = HeightOnly;
	params.TwoIterations = TwoIterations;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OceanPlugin.OceanManager.GetHeightmapPixel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          U                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          V                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor AOceanManager::GetHeightmapPixel(float U, float V)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.OceanManager.GetHeightmapPixel");

	struct
	{
		float                          U;
		float                          V;
		struct FLinearColor            ReturnValue;
	} params;

	params.U = U;
	params.V = V;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.SetCurrentLocalTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Time                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATimeManager::SetCurrentLocalTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.SetCurrentLocalTime");

	struct
	{
		float                          Time;
	} params;

	params.Time = Time;

	UObject::ProcessEvent(fn, &params);
}


// Function OceanPlugin.TimeManager.IsLeapYear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Year                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATimeManager::IsLeapYear(int Year)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.IsLeapYear");

	struct
	{
		int                            Year;
		bool                           ReturnValue;
	} params;

	params.Year = Year;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.InitializeCalendar
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FTimeDate               Time                           (CPF_Parm)

void ATimeManager::InitializeCalendar(const struct FTimeDate& Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.InitializeCalendar");

	struct
	{
		struct FTimeDate               Time;
	} params;

	params.Time = Time;

	UObject::ProcessEvent(fn, &params);
}


// Function OceanPlugin.TimeManager.IncrementTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATimeManager::IncrementTime(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.IncrementTime");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function OceanPlugin.TimeManager.GetYearPhase
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATimeManager::GetYearPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.GetYearPhase");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetElapsedDayInMinutes
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATimeManager::GetElapsedDayInMinutes()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.GetElapsedDayInMinutes");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDaysInYear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Year                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ATimeManager::GetDaysInYear(int Year)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.GetDaysInYear");

	struct
	{
		int                            Year;
		int                            ReturnValue;
	} params;

	params.Year = Year;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDaysInMonth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Year                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Month                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ATimeManager::GetDaysInMonth(int Year, int Month)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.GetDaysInMonth");

	struct
	{
		int                            Year;
		int                            Month;
		int                            ReturnValue;
	} params;

	params.Year = Year;
	params.Month = Month;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDayPhase
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATimeManager::GetDayPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.GetDayPhase");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDayOfYear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FTimeDate               Time                           (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ATimeManager::GetDayOfYear(const struct FTimeDate& Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.GetDayOfYear");

	struct
	{
		struct FTimeDate               Time;
		int                            ReturnValue;
	} params;

	params.Time = Time;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.CalculateSunAngle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator ATimeManager::CalculateSunAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.CalculateSunAngle");

	struct
	{
		struct FRotator                ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.CalculateMoonPhase
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATimeManager::CalculateMoonPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.CalculateMoonPhase");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.CalculateMoonAngle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator ATimeManager::CalculateMoonAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.CalculateMoonAngle");

	struct
	{
		struct FRotator                ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
