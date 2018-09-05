// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_VictoryBPLibrary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VictoryBPLibrary.TKMathFunctionLibrary.VectorRadiansToDegrees
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 RadVector                      (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UTKMathFunctionLibrary::VectorRadiansToDegrees(const struct FVector& RadVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.VectorRadiansToDegrees");

	struct
	{
		struct FVector                 RadVector;
		struct FVector                 ReturnValue;
	} params;

	params.RadVector = RadVector;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.VectorDegreesToRadians
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 DegVector                      (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UTKMathFunctionLibrary::VectorDegreesToRadians(const struct FVector& DegVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.VectorDegreesToRadians");

	struct
	{
		struct FVector                 DegVector;
		struct FVector                 ReturnValue;
	} params;

	params.DegVector = DegVector;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.SphereBoxIntersection
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 SphereOrigin                   (CPF_Parm, CPF_IsPlainOldData)
// float                          SphereRadius                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 BoxOrigin                      (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 BoxExtent                      (CPF_Parm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTKMathFunctionLibrary::SphereBoxIntersection(const struct FVector& SphereOrigin, float SphereRadius, const struct FVector& BoxOrigin, const struct FVector& BoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.SphereBoxIntersection");

	struct
	{
		struct FVector                 SphereOrigin;
		float                          SphereRadius;
		struct FVector                 BoxOrigin;
		struct FVector                 BoxExtent;
		bool                           ReturnValue;
	} params;

	params.SphereOrigin = SphereOrigin;
	params.SphereRadius = SphereRadius;
	params.BoxOrigin = BoxOrigin;
	params.BoxExtent = BoxExtent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.SignedDistancePlanePoint
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 PlaneNormal                    (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 planePoint                     (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 Point                          (CPF_Parm, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTKMathFunctionLibrary::SignedDistancePlanePoint(const struct FVector& PlaneNormal, const struct FVector& planePoint, const struct FVector& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.SignedDistancePlanePoint");

	struct
	{
		struct FVector                 PlaneNormal;
		struct FVector                 planePoint;
		struct FVector                 Point;
		float                          ReturnValue;
	} params;

	params.PlaneNormal = PlaneNormal;
	params.planePoint = planePoint;
	params.Point = Point;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.SetVectorLength
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 A                              (CPF_Parm, CPF_IsPlainOldData)
// float                          Size                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UTKMathFunctionLibrary::SetVectorLength(const struct FVector& A, float Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.SetVectorLength");

	struct
	{
		struct FVector                 A;
		float                          Size;
		struct FVector                 ReturnValue;
	} params;

	params.A = A;
	params.Size = Size;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.SetCenterOfMassOffset
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FVector                 Offset                         (CPF_Parm, CPF_IsPlainOldData)
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTKMathFunctionLibrary::SetCenterOfMassOffset(class UPrimitiveComponent* Target, const struct FVector& Offset, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.SetCenterOfMassOffset");

	struct
	{
		class UPrimitiveComponent*     Target;
		struct FVector                 Offset;
		struct FName                   BoneName;
	} params;

	params.Target = Target;
	params.Offset = Offset;
	params.BoneName = BoneName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToUpperMultiple
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            A                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Multiple                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           skipSelf                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UTKMathFunctionLibrary::RoundToUpperMultiple(int A, int Multiple, bool skipSelf)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToUpperMultiple");

	struct
	{
		int                            A;
		int                            Multiple;
		bool                           skipSelf;
		int                            ReturnValue;
	} params;

	params.A = A;
	params.Multiple = Multiple;
	params.skipSelf = skipSelf;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToNearestMultiple
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            A                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Multiple                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UTKMathFunctionLibrary::RoundToNearestMultiple(int A, int Multiple)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToNearestMultiple");

	struct
	{
		int                            A;
		int                            Multiple;
		int                            ReturnValue;
	} params;

	params.A = A;
	params.Multiple = Multiple;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToLowerMultiple
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            A                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Multiple                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           skipSelf                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UTKMathFunctionLibrary::RoundToLowerMultiple(int A, int Multiple, bool skipSelf)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToLowerMultiple");

	struct
	{
		int                            A;
		int                            Multiple;
		bool                           skipSelf;
		int                            ReturnValue;
	} params;

	params.A = A;
	params.Multiple = Multiple;
	params.skipSelf = skipSelf;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.ProjectPointOnLine
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 LineOrigin                     (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 LineDirection                  (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 Point                          (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UTKMathFunctionLibrary::ProjectPointOnLine(const struct FVector& LineOrigin, const struct FVector& LineDirection, const struct FVector& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.ProjectPointOnLine");

	struct
	{
		struct FVector                 LineOrigin;
		struct FVector                 LineDirection;
		struct FVector                 Point;
		struct FVector                 ReturnValue;
	} params;

	params.LineOrigin = LineOrigin;
	params.LineDirection = LineDirection;
	params.Point = Point;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.PointOnWhichSideOfLineSegment
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 LinePoint1                     (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 LinePoint2                     (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 Point                          (CPF_Parm, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UTKMathFunctionLibrary::PointOnWhichSideOfLineSegment(const struct FVector& LinePoint1, const struct FVector& LinePoint2, const struct FVector& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.PointOnWhichSideOfLineSegment");

	struct
	{
		struct FVector                 LinePoint1;
		struct FVector                 LinePoint2;
		struct FVector                 Point;
		int                            ReturnValue;
	} params;

	params.LinePoint1 = LinePoint1;
	params.LinePoint2 = LinePoint2;
	params.Point = Point;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.NegateVector2D
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               A                              (CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UTKMathFunctionLibrary::NegateVector2D(const struct FVector2D& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.NegateVector2D");

	struct
	{
		struct FVector2D               A;
		struct FVector2D               ReturnValue;
	} params;

	params.A = A;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.NegateInt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            A                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UTKMathFunctionLibrary::NegateInt(int A)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.NegateInt");

	struct
	{
		int                            A;
		int                            ReturnValue;
	} params;

	params.A = A;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.NegateFloat
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          A                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTKMathFunctionLibrary::NegateFloat(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.NegateFloat");

	struct
	{
		float                          A;
		float                          ReturnValue;
	} params;

	params.A = A;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.LineToLineIntersection
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 IntersectionPoint              (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FVector                 LinePoint1                     (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 LineDir1                       (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 LinePoint2                     (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 LineDir2                       (CPF_Parm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTKMathFunctionLibrary::LineToLineIntersection(const struct FVector& LinePoint1, const struct FVector& LineDir1, const struct FVector& LinePoint2, const struct FVector& LineDir2, struct FVector* IntersectionPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.LineToLineIntersection");

	struct
	{
		struct FVector                 IntersectionPoint;
		struct FVector                 LinePoint1;
		struct FVector                 LineDir1;
		struct FVector                 LinePoint2;
		struct FVector                 LineDir2;
		bool                           ReturnValue;
	} params;

	params.LinePoint1 = LinePoint1;
	params.LineDir1 = LineDir1;
	params.LinePoint2 = LinePoint2;
	params.LineDir2 = LineDir2;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IntersectionPoint != nullptr)
		*IntersectionPoint = params.IntersectionPoint;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.LineExtentBoxIntersection
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FBox                    inBox                          (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 Start                          (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 End                            (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 Extent                         (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 HitLocation                    (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FVector                 HitNormal                      (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// float                          HitTime                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTKMathFunctionLibrary::LineExtentBoxIntersection(const struct FBox& inBox, const struct FVector& Start, const struct FVector& End, const struct FVector& Extent, struct FVector* HitLocation, struct FVector* HitNormal, float* HitTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.LineExtentBoxIntersection");

	struct
	{
		struct FBox                    inBox;
		struct FVector                 Start;
		struct FVector                 End;
		struct FVector                 Extent;
		struct FVector                 HitLocation;
		struct FVector                 HitNormal;
		float                          HitTime;
		bool                           ReturnValue;
	} params;

	params.inBox = inBox;
	params.Start = Start;
	params.End = End;
	params.Extent = Extent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (HitTime != nullptr)
		*HitTime = params.HitTime;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.IsPowerOfTwo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            X                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTKMathFunctionLibrary::IsPowerOfTwo(int X)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.IsPowerOfTwo");

	struct
	{
		int                            X;
		bool                           ReturnValue;
	} params;

	params.X = X;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.IsPointInsideBox
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Point                          (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 BoxOrigin                      (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 BoxExtent                      (CPF_Parm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTKMathFunctionLibrary::IsPointInsideBox(const struct FVector& Point, const struct FVector& BoxOrigin, const struct FVector& BoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.IsPointInsideBox");

	struct
	{
		struct FVector                 Point;
		struct FVector                 BoxOrigin;
		struct FVector                 BoxExtent;
		bool                           ReturnValue;
	} params;

	params.Point = Point;
	params.BoxOrigin = BoxOrigin;
	params.BoxExtent = BoxExtent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.IsMultipleOf
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            A                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Multiple                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTKMathFunctionLibrary::IsMultipleOf(int A, int Multiple)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.IsMultipleOf");

	struct
	{
		int                            A;
		int                            Multiple;
		bool                           ReturnValue;
	} params;

	params.A = A;
	params.Multiple = Multiple;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.IsLineInsideSphere
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 LineStart                      (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 LineDir                        (CPF_Parm, CPF_IsPlainOldData)
// float                          LineLength                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 SphereOrigin                   (CPF_Parm, CPF_IsPlainOldData)
// float                          SphereRadius                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTKMathFunctionLibrary::IsLineInsideSphere(const struct FVector& LineStart, const struct FVector& LineDir, float LineLength, const struct FVector& SphereOrigin, float SphereRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.IsLineInsideSphere");

	struct
	{
		struct FVector                 LineStart;
		struct FVector                 LineDir;
		float                          LineLength;
		struct FVector                 SphereOrigin;
		float                          SphereRadius;
		bool                           ReturnValue;
	} params;

	params.LineStart = LineStart;
	params.LineDir = LineDir;
	params.LineLength = LineLength;
	params.SphereOrigin = SphereOrigin;
	params.SphereRadius = SphereRadius;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.IsEvenNumber
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          A                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTKMathFunctionLibrary::IsEvenNumber(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.IsEvenNumber");

	struct
	{
		float                          A;
		bool                           ReturnValue;
	} params;

	params.A = A;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.GridSnap
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 A                              (CPF_Parm, CPF_IsPlainOldData)
// float                          Grid                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UTKMathFunctionLibrary::GridSnap(const struct FVector& A, float Grid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.GridSnap");

	struct
	{
		struct FVector                 A;
		float                          Grid;
		struct FVector                 ReturnValue;
	} params;

	params.A = A;
	params.Grid = Grid;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.GetVelocityAtPoint
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FVector                 Point                          (CPF_Parm, CPF_IsPlainOldData)
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           DrawDebugInfo                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UTKMathFunctionLibrary::GetVelocityAtPoint(class UPrimitiveComponent* Target, const struct FVector& Point, const struct FName& BoneName, bool DrawDebugInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.GetVelocityAtPoint");

	struct
	{
		class UPrimitiveComponent*     Target;
		struct FVector                 Point;
		struct FName                   BoneName;
		bool                           DrawDebugInfo;
		struct FVector                 ReturnValue;
	} params;

	params.Target = Target;
	params.Point = Point;
	params.BoneName = BoneName;
	params.DrawDebugInfo = DrawDebugInfo;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.GetConsoleVariableInt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 VariableName                   (CPF_Parm, CPF_ZeroConstructor)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UTKMathFunctionLibrary::GetConsoleVariableInt(const struct FString& VariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.GetConsoleVariableInt");

	struct
	{
		struct FString                 VariableName;
		int                            ReturnValue;
	} params;

	params.VariableName = VariableName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.GetConsoleVariableFloat
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 VariableName                   (CPF_Parm, CPF_ZeroConstructor)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTKMathFunctionLibrary::GetConsoleVariableFloat(const struct FString& VariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.GetConsoleVariableFloat");

	struct
	{
		struct FString                 VariableName;
		float                          ReturnValue;
	} params;

	params.VariableName = VariableName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.ConvertPhysicsLinearVelocity
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Velocity                       (CPF_Parm, CPF_IsPlainOldData)
// TEnumAsByte<ESpeedUnit>        SpeedUnit                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTKMathFunctionLibrary::ConvertPhysicsLinearVelocity(const struct FVector& Velocity, TEnumAsByte<ESpeedUnit> SpeedUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.ConvertPhysicsLinearVelocity");

	struct
	{
		struct FVector                 Velocity;
		TEnumAsByte<ESpeedUnit>        SpeedUnit;
		float                          ReturnValue;
	} params;

	params.Velocity = Velocity;
	params.SpeedUnit = SpeedUnit;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.ConvertAnchorToAnchor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FAnchors                CurrentAnchor                  (CPF_Parm)
// struct FMargin                 Offsets                        (CPF_Parm)
// struct FAnchors                TargetAnchor                   (CPF_Parm)
// struct FMargin                 ConvertedOffsets               (CPF_Parm, CPF_OutParm)

void UTKMathFunctionLibrary::ConvertAnchorToAnchor(class UObject* WorldContextObject, const struct FAnchors& CurrentAnchor, const struct FMargin& Offsets, const struct FAnchors& TargetAnchor, struct FMargin* ConvertedOffsets)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.ConvertAnchorToAnchor");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FAnchors                CurrentAnchor;
		struct FMargin                 Offsets;
		struct FAnchors                TargetAnchor;
		struct FMargin                 ConvertedOffsets;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.CurrentAnchor = CurrentAnchor;
	params.Offsets = Offsets;
	params.TargetAnchor = TargetAnchor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ConvertedOffsets != nullptr)
		*ConvertedOffsets = params.ConvertedOffsets;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointsOnTwoLines
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 closestPointLine1              (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FVector                 closestPointLine2              (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FVector                 LinePoint1                     (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 lineVec1                       (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 LinePoint2                     (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 lineVec2                       (CPF_Parm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTKMathFunctionLibrary::ClosestPointsOnTwoLines(const struct FVector& LinePoint1, const struct FVector& lineVec1, const struct FVector& LinePoint2, const struct FVector& lineVec2, struct FVector* closestPointLine1, struct FVector* closestPointLine2)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointsOnTwoLines");

	struct
	{
		struct FVector                 closestPointLine1;
		struct FVector                 closestPointLine2;
		struct FVector                 LinePoint1;
		struct FVector                 lineVec1;
		struct FVector                 LinePoint2;
		struct FVector                 lineVec2;
		bool                           ReturnValue;
	} params;

	params.LinePoint1 = LinePoint1;
	params.lineVec1 = lineVec1;
	params.LinePoint2 = LinePoint2;
	params.lineVec2 = lineVec2;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (closestPointLine1 != nullptr)
		*closestPointLine1 = params.closestPointLine1;
	if (closestPointLine2 != nullptr)
		*closestPointLine2 = params.closestPointLine2;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointsOfLineSegments
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Line1Start                     (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 Line1End                       (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 Line2Start                     (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 Line2End                       (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 LinePoint1                     (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FVector                 LinePoint2                     (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UTKMathFunctionLibrary::ClosestPointsOfLineSegments(const struct FVector& Line1Start, const struct FVector& Line1End, const struct FVector& Line2Start, const struct FVector& Line2End, struct FVector* LinePoint1, struct FVector* LinePoint2)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointsOfLineSegments");

	struct
	{
		struct FVector                 Line1Start;
		struct FVector                 Line1End;
		struct FVector                 Line2Start;
		struct FVector                 Line2End;
		struct FVector                 LinePoint1;
		struct FVector                 LinePoint2;
	} params;

	params.Line1Start = Line1Start;
	params.Line1End = Line1End;
	params.Line2Start = Line2Start;
	params.Line2End = Line2End;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LinePoint1 != nullptr)
		*LinePoint1 = params.LinePoint1;
	if (LinePoint2 != nullptr)
		*LinePoint2 = params.LinePoint2;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointOnSphereToLine
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 SphereOrigin                   (CPF_Parm, CPF_IsPlainOldData)
// float                          SphereRadius                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 LineOrigin                     (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 LineDir                        (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UTKMathFunctionLibrary::ClosestPointOnSphereToLine(const struct FVector& SphereOrigin, float SphereRadius, const struct FVector& LineOrigin, const struct FVector& LineDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointOnSphereToLine");

	struct
	{
		struct FVector                 SphereOrigin;
		float                          SphereRadius;
		struct FVector                 LineOrigin;
		struct FVector                 LineDir;
		struct FVector                 ReturnValue;
	} params;

	params.SphereOrigin = SphereOrigin;
	params.SphereRadius = SphereRadius;
	params.LineOrigin = LineOrigin;
	params.LineDir = LineDir;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointOnLineSeqment
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Point                          (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 LineStart                      (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 LineEnd                        (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UTKMathFunctionLibrary::ClosestPointOnLineSeqment(const struct FVector& Point, const struct FVector& LineStart, const struct FVector& LineEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointOnLineSeqment");

	struct
	{
		struct FVector                 Point;
		struct FVector                 LineStart;
		struct FVector                 LineEnd;
		struct FVector                 ReturnValue;
	} params;

	params.Point = Point;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.AreLineSegmentsCrossing
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 pointA1                        (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 pointA2                        (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 pointB1                        (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 pointB2                        (CPF_Parm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTKMathFunctionLibrary::AreLineSegmentsCrossing(const struct FVector& pointA1, const struct FVector& pointA2, const struct FVector& pointB1, const struct FVector& pointB2)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.AreLineSegmentsCrossing");

	struct
	{
		struct FVector                 pointA1;
		struct FVector                 pointA2;
		struct FVector                 pointB1;
		struct FVector                 pointB2;
		bool                           ReturnValue;
	} params;

	params.pointA1 = pointA1;
	params.pointA2 = pointA2;
	params.pointB1 = pointB1;
	params.pointB2 = pointB2;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InPIEWorld
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::WorldType__InPIEWorld(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InPIEWorld");

	struct
	{
		class UObject*                 WorldContextObject;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InGameInstanceWorld
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::WorldType__InGameInstanceWorld(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InGameInstanceWorld");

	struct
	{
		class UObject*                 WorldContextObject;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InEditorWorld
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::WorldType__InEditorWorld(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InEditorWorld");

	struct
	{
		class UObject*                 WorldContextObject;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetIsChildOf
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 ChildWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UWidget*                 PossibleParent                 (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::WidgetIsChildOf(class UWidget* ChildWidget, class UWidget* PossibleParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetIsChildOf");

	struct
	{
		class UWidget*                 ChildWidget;
		class UWidget*                 PossibleParent;
		bool                           ReturnValue;
	} params;

	params.ChildWidget = ChildWidget;
	params.PossibleParent = PossibleParent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetParentOfClass
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 ChildWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UClass*                  WidgetClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UUserWidget*             ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UUserWidget* UVictoryBPFunctionLibrary::WidgetGetParentOfClass(class UWidget* ChildWidget, class UClass* WidgetClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetParentOfClass");

	struct
	{
		class UWidget*                 ChildWidget;
		class UClass*                  WidgetClass;
		class UUserWidget*             ReturnValue;
	} params;

	params.ChildWidget = ChildWidget;
	params.WidgetClass = WidgetClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetChildrenOfClass
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 ParentWidget                   (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TArray<class UUserWidget*>     ChildWidgets                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// class UClass*                  WidgetClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bImmediateOnly                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::WidgetGetChildrenOfClass(class UWidget* ParentWidget, class UClass* WidgetClass, bool bImmediateOnly, TArray<class UUserWidget*>* ChildWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetChildrenOfClass");

	struct
	{
		class UWidget*                 ParentWidget;
		TArray<class UUserWidget*>     ChildWidgets;
		class UClass*                  WidgetClass;
		bool                           bImmediateOnly;
	} params;

	params.ParentWidget = ParentWidget;
	params.WidgetClass = WidgetClass;
	params.bImmediateOnly = bImmediateOnly;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ChildWidgets != nullptr)
		*ChildWidgets = params.ChildWidgets;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Visibility__GetRenderedActors
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class AActor*>          CurrentlyRenderedActors        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// float                          MinRecentTime                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::Visibility__GetRenderedActors(class UObject* WorldContextObject, float MinRecentTime, TArray<class AActor*>* CurrentlyRenderedActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Visibility__GetRenderedActors");

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<class AActor*>          CurrentlyRenderedActors;
		float                          MinRecentTime;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.MinRecentTime = MinRecentTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (CurrentlyRenderedActors != nullptr)
		*CurrentlyRenderedActors = params.CurrentlyRenderedActors;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Visibility__GetNotRenderedActors
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class AActor*>          CurrentlyNotRenderedActors     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// float                          MinRecentTime                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::Visibility__GetNotRenderedActors(class UObject* WorldContextObject, float MinRecentTime, TArray<class AActor*>* CurrentlyNotRenderedActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Visibility__GetNotRenderedActors");

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<class AActor*>          CurrentlyNotRenderedActors;
		float                          MinRecentTime;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.MinRecentTime = MinRecentTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (CurrentlyNotRenderedActors != nullptr)
		*CurrentlyNotRenderedActors = params.CurrentlyNotRenderedActors;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ViewportPositionDeproject
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               ViewportPosition               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 OutWorldOrigin                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FVector                 OutWorldDirection              (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::ViewportPositionDeproject(class UObject* WorldContextObject, const struct FVector2D& ViewportPosition, struct FVector* OutWorldOrigin, struct FVector* OutWorldDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.ViewportPositionDeproject");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector2D               ViewportPosition;
		struct FVector                 OutWorldOrigin;
		struct FVector                 OutWorldDirection;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.ViewportPosition = ViewportPosition;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutWorldOrigin != nullptr)
		*OutWorldOrigin = params.OutWorldOrigin;
	if (OutWorldDirection != nullptr)
		*OutWorldDirection = params.OutWorldDirection;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__SetMousePosition
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       ThePC                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PosX                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          PosY                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::Viewport__SetMousePosition(class APlayerController* ThePC, float PosX, float PosY)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__SetMousePosition");

	struct
	{
		class APlayerController*       ThePC;
		float                          PosX;
		float                          PosY;
		bool                           ReturnValue;
	} params;

	params.ThePC = ThePC;
	params.PosX = PosX;
	params.PosY = PosY;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetMousePosition
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       ThePC                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PosX                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PosY                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::Viewport__GetMousePosition(class APlayerController* ThePC, float* PosX, float* PosY)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetMousePosition");

	struct
	{
		class APlayerController*       ThePC;
		float                          PosX;
		float                          PosY;
		bool                           ReturnValue;
	} params;

	params.ThePC = ThePC;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PosX != nullptr)
		*PosX = params.PosX;
	if (PosY != nullptr)
		*PosY = params.PosY;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetCenterOfViewport
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       ThePC                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PosX                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PosY                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::Viewport__GetCenterOfViewport(class APlayerController* ThePC, float* PosX, float* PosY)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetCenterOfViewport");

	struct
	{
		class APlayerController*       ThePC;
		float                          PosX;
		float                          PosY;
		bool                           ReturnValue;
	} params;

	params.ThePC = ThePC;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PosX != nullptr)
		*PosX = params.PosX;
	if (PosY != nullptr)
		*PosY = params.PosY;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__EnableWorldRendering
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       ThePC                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           RenderTheWorld                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::Viewport__EnableWorldRendering(class APlayerController* ThePC, bool RenderTheWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__EnableWorldRendering");

	struct
	{
		class APlayerController*       ThePC;
		bool                           RenderTheWorld;
		bool                           ReturnValue;
	} params;

	params.ThePC = ThePC;
	params.RenderTheWorld = RenderTheWorld;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySoundVolumeChange
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USoundClass*             SoundClassObject               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          NewVolume                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::VictorySoundVolumeChange(class USoundClass* SoundClassObject, float NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySoundVolumeChange");

	struct
	{
		class USoundClass*             SoundClassObject;
		float                          NewVolume;
		bool                           ReturnValue;
	} params;

	params.SoundClassObject = SoundClassObject;
	params.NewVolume = NewVolume;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortIntArray
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<int>                    IntArray                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<int>                    IntArrayRef                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UVictoryBPFunctionLibrary::VictorySortIntArray(TArray<int>* IntArray, TArray<int>* IntArrayRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortIntArray");

	struct
	{
		TArray<int>                    IntArray;
		TArray<int>                    IntArrayRef;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IntArray != nullptr)
		*IntArray = params.IntArray;
	if (IntArrayRef != nullptr)
		*IntArrayRef = params.IntArrayRef;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortFloatArray
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<float>                  FloatArray                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<float>                  FloatArrayRef                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UVictoryBPFunctionLibrary::VictorySortFloatArray(TArray<float>* FloatArray, TArray<float>* FloatArrayRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortFloatArray");

	struct
	{
		TArray<float>                  FloatArray;
		TArray<float>                  FloatArrayRef;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (FloatArray != nullptr)
		*FloatArray = params.FloatArray;
	if (FloatArrayRef != nullptr)
		*FloatArrayRef = params.FloatArrayRef;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateMouseWheel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// float                          Delta                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::VictorySimulateMouseWheel(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateMouseWheel");

	struct
	{
		float                          Delta;
	} params;

	params.Delta = Delta;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateKeyPress
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       ThePC                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FKey                    Key                            (CPF_Parm)
// TEnumAsByte<EInputEvent>       EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::VictorySimulateKeyPress(class APlayerController* ThePC, const struct FKey& Key, TEnumAsByte<EInputEvent> EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateKeyPress");

	struct
	{
		class APlayerController*       ThePC;
		struct FKey                    Key;
		TEnumAsByte<EInputEvent>       EventType;
	} params;

	params.ThePC = ThePC;
	params.Key = Key;
	params.EventType = EventType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector2D
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 SectionName                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 VariableName                   (CPF_Parm, CPF_ZeroConstructor)
// struct FVector2D               Value                          (CPF_Parm, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Vector2D(const struct FString& SectionName, const struct FString& VariableName, const struct FVector2D& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector2D");

	struct
	{
		struct FString                 SectionName;
		struct FString                 VariableName;
		struct FVector2D               Value;
	} params;

	params.SectionName = SectionName;
	params.VariableName = VariableName;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 SectionName                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 VariableName                   (CPF_Parm, CPF_ZeroConstructor)
// struct FVector                 Value                          (CPF_Parm, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Vector(const struct FString& SectionName, const struct FString& VariableName, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector");

	struct
	{
		struct FString                 SectionName;
		struct FString                 VariableName;
		struct FVector                 Value;
	} params;

	params.SectionName = SectionName;
	params.VariableName = VariableName;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_String
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 SectionName                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 VariableName                   (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Value                          (CPF_Parm, CPF_ZeroConstructor)

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_String(const struct FString& SectionName, const struct FString& VariableName, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_String");

	struct
	{
		struct FString                 SectionName;
		struct FString                 VariableName;
		struct FString                 Value;
	} params;

	params.SectionName = SectionName;
	params.VariableName = VariableName;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Rotator
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 SectionName                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 VariableName                   (CPF_Parm, CPF_ZeroConstructor)
// struct FRotator                Value                          (CPF_Parm, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Rotator(const struct FString& SectionName, const struct FString& VariableName, const struct FRotator& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Rotator");

	struct
	{
		struct FString                 SectionName;
		struct FString                 VariableName;
		struct FRotator                Value;
	} params;

	params.SectionName = SectionName;
	params.VariableName = VariableName;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Int
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 SectionName                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 VariableName                   (CPF_Parm, CPF_ZeroConstructor)
// int                            Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Int(const struct FString& SectionName, const struct FString& VariableName, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Int");

	struct
	{
		struct FString                 SectionName;
		struct FString                 VariableName;
		int                            Value;
	} params;

	params.SectionName = SectionName;
	params.VariableName = VariableName;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Float
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 SectionName                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 VariableName                   (CPF_Parm, CPF_ZeroConstructor)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Float(const struct FString& SectionName, const struct FString& VariableName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Float");

	struct
	{
		struct FString                 SectionName;
		struct FString                 VariableName;
		float                          Value;
	} params;

	params.SectionName = SectionName;
	params.VariableName = VariableName;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Color
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 SectionName                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 VariableName                   (CPF_Parm, CPF_ZeroConstructor)
// struct FLinearColor            Value                          (CPF_Parm, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Color(const struct FString& SectionName, const struct FString& VariableName, const struct FLinearColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Color");

	struct
	{
		struct FString                 SectionName;
		struct FString                 VariableName;
		struct FLinearColor            Value;
	} params;

	params.SectionName = SectionName;
	params.VariableName = VariableName;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Bool
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 SectionName                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 VariableName                   (CPF_Parm, CPF_ZeroConstructor)
// bool                           Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Bool(const struct FString& SectionName, const struct FString& VariableName, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Bool");

	struct
	{
		struct FString                 SectionName;
		struct FString                 VariableName;
		bool                           Value;
	} params;

	params.SectionName = SectionName;
	params.VariableName = VariableName;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryRemoveAxisKeyBind
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FVictoryInputAxis       ToRemove                       (CPF_Parm)

void UVictoryBPFunctionLibrary::VictoryRemoveAxisKeyBind(const struct FVictoryInputAxis& ToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryRemoveAxisKeyBind");

	struct
	{
		struct FVictoryInputAxis       ToRemove;
	} params;

	params.ToRemove = ToRemove;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryRemoveActionKeyBind
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FVictoryInput           ToRemove                       (CPF_Parm)

void UVictoryBPFunctionLibrary::VictoryRemoveActionKeyBind(const struct FVictoryInput& ToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryRemoveActionKeyBind");

	struct
	{
		struct FVictoryInput           ToRemove;
	} params;

	params.ToRemove = ToRemove;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryReBindAxisKey
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FVictoryInputAxis       Original                       (CPF_Parm)
// struct FVictoryInputAxis       NewBinding                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::VictoryReBindAxisKey(const struct FVictoryInputAxis& Original, const struct FVictoryInputAxis& NewBinding)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryReBindAxisKey");

	struct
	{
		struct FVictoryInputAxis       Original;
		struct FVictoryInputAxis       NewBinding;
		bool                           ReturnValue;
	} params;

	params.Original = Original;
	params.NewBinding = NewBinding;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryReBindActionKey
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FVictoryInput           Original                       (CPF_Parm)
// struct FVictoryInput           NewBinding                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::VictoryReBindActionKey(const struct FVictoryInput& Original, const struct FVictoryInput& NewBinding)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryReBindActionKey");

	struct
	{
		struct FVictoryInput           Original;
		struct FVictoryInput           NewBinding;
		bool                           ReturnValue;
	} params;

	params.Original = Original;
	params.NewBinding = NewBinding;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPhysics_UpdateAngularDamping
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     CompToUpdate                   (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// float                          NewAngularDamping              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::VictoryPhysics_UpdateAngularDamping(class UPrimitiveComponent* CompToUpdate, float NewAngularDamping)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPhysics_UpdateAngularDamping");

	struct
	{
		class UPrimitiveComponent*     CompToUpdate;
		float                          NewAngularDamping;
		bool                           ReturnValue;
	} params;

	params.CompToUpdate = CompToUpdate;
	params.NewAngularDamping = NewAngularDamping;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__WindowsNoEditorDir
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UVictoryBPFunctionLibrary::VictoryPaths__WindowsNoEditorDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__WindowsNoEditorDir");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__Win64Dir_BinaryLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UVictoryBPFunctionLibrary::VictoryPaths__Win64Dir_BinaryLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__Win64Dir_BinaryLocation");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__ScreenShotsDir
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UVictoryBPFunctionLibrary::VictoryPaths__ScreenShotsDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__ScreenShotsDir");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__SavedDir
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UVictoryBPFunctionLibrary::VictoryPaths__SavedDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__SavedDir");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__LogsDir
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UVictoryBPFunctionLibrary::VictoryPaths__LogsDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__LogsDir");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__GameRootDirectory
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UVictoryBPFunctionLibrary::VictoryPaths__GameRootDirectory()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__GameRootDirectory");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__ConfigDir
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UVictoryBPFunctionLibrary::VictoryPaths__ConfigDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__ConfigDir");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryLoadLevelInstance
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 MapFolderOffOfContent          (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 LevelName                      (CPF_Parm, CPF_ZeroConstructor)
// int                            InstanceNumber                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                Rotation                       (CPF_Parm, CPF_IsPlainOldData)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ULevelStreaming*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ULevelStreaming* UVictoryBPFunctionLibrary::VictoryLoadLevelInstance(class UObject* WorldContextObject, const struct FString& MapFolderOffOfContent, const struct FString& LevelName, int InstanceNumber, const struct FVector& Location, const struct FRotator& Rotation, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryLoadLevelInstance");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FString                 MapFolderOffOfContent;
		struct FString                 LevelName;
		int                            InstanceNumber;
		struct FVector                 Location;
		struct FRotator                Rotation;
		bool                           Success;
		class ULevelStreaming*         ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.MapFolderOffOfContent = MapFolderOffOfContent;
	params.LevelName = LevelName;
	params.InstanceNumber = InstanceNumber;
	params.Location = Location;
	params.Rotation = Rotation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Success != nullptr)
		*Success = params.Success;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryISM_GetAllVictoryISMActors
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class AVictoryISM*>     Out                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UVictoryBPFunctionLibrary::VictoryISM_GetAllVictoryISMActors(class UObject* WorldContextObject, TArray<class AVictoryISM*>* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryISM_GetAllVictoryISMActors");

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<class AVictoryISM*>     Out;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Out != nullptr)
		*Out = params.Out;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryISM_ConvertToVictoryISMActors
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  ActorClass                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class AVictoryISM*>     CreatedISMActors               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           DestroyOriginalActors          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            MinCountToCreateISM            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::VictoryISM_ConvertToVictoryISMActors(class UObject* WorldContextObject, class UClass* ActorClass, bool DestroyOriginalActors, int MinCountToCreateISM, TArray<class AVictoryISM*>* CreatedISMActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryISM_ConvertToVictoryISMActors");

	struct
	{
		class UObject*                 WorldContextObject;
		class UClass*                  ActorClass;
		TArray<class AVictoryISM*>     CreatedISMActors;
		bool                           DestroyOriginalActors;
		int                            MinCountToCreateISM;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;
	params.DestroyOriginalActors = DestroyOriginalActors;
	params.MinCountToCreateISM = MinCountToCreateISM;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (CreatedISMActors != nullptr)
		*CreatedISMActors = params.CreatedISMActors;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIsApplicationRunning
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ProcessId                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::VictoryIsApplicationRunning(int ProcessId)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIsApplicationRunning");

	struct
	{
		int                            ProcessId;
		bool                           ReturnValue;
	} params;

	params.ProcessId = ProcessId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntPlusEquals
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            Int                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// int                            Add                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            IntOut                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::VictoryIntPlusEquals(int Add, int* Int, int* IntOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntPlusEquals");

	struct
	{
		int                            Int;
		int                            Add;
		int                            IntOut;
	} params;

	params.Add = Add;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Int != nullptr)
		*Int = params.Int;
	if (IntOut != nullptr)
		*IntOut = params.IntOut;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntMinusEquals
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            Int                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// int                            Sub                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            IntOut                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::VictoryIntMinusEquals(int Sub, int* Int, int* IntOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntMinusEquals");

	struct
	{
		int                            Int;
		int                            Sub;
		int                            IntOut;
	} params;

	params.Sub = Sub;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Int != nullptr)
		*Int = params.Int;
	if (IntOut != nullptr)
		*IntOut = params.IntOut;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetVictoryInputAxis
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FKeyEvent               KeyEvent                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FVictoryInputAxis       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVictoryInputAxis UVictoryBPFunctionLibrary::VictoryGetVictoryInputAxis(const struct FKeyEvent& KeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetVictoryInputAxis");

	struct
	{
		struct FKeyEvent               KeyEvent;
		struct FVictoryInputAxis       ReturnValue;
	} params;

	params.KeyEvent = KeyEvent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetVictoryInput
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FKeyEvent               KeyEvent                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FVictoryInput           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVictoryInput UVictoryBPFunctionLibrary::VictoryGetVictoryInput(const struct FKeyEvent& KeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetVictoryInput");

	struct
	{
		struct FKeyEvent               KeyEvent;
		struct FVictoryInput           ReturnValue;
	} params;

	params.KeyEvent = KeyEvent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetSoundVolume
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class USoundClass*             SoundClassObject               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVictoryBPFunctionLibrary::VictoryGetSoundVolume(class USoundClass* SoundClassObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetSoundVolume");

	struct
	{
		class USoundClass*             SoundClassObject;
		float                          ReturnValue;
	} params;

	params.SoundClassObject = SoundClassObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector2D
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 SectionName                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 VariableName                   (CPF_Parm, CPF_ZeroConstructor)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Vector2D(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector2D");

	struct
	{
		struct FString                 SectionName;
		struct FString                 VariableName;
		bool                           IsValid;
		struct FVector2D               ReturnValue;
	} params;

	params.SectionName = SectionName;
	params.VariableName = VariableName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 SectionName                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 VariableName                   (CPF_Parm, CPF_ZeroConstructor)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Vector(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector");

	struct
	{
		struct FString                 SectionName;
		struct FString                 VariableName;
		bool                           IsValid;
		struct FVector                 ReturnValue;
	} params;

	params.SectionName = SectionName;
	params.VariableName = VariableName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_String
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 SectionName                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 VariableName                   (CPF_Parm, CPF_ZeroConstructor)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_String(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_String");

	struct
	{
		struct FString                 SectionName;
		struct FString                 VariableName;
		bool                           IsValid;
		struct FString                 ReturnValue;
	} params;

	params.SectionName = SectionName;
	params.VariableName = VariableName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Rotator
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 SectionName                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 VariableName                   (CPF_Parm, CPF_ZeroConstructor)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Rotator(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Rotator");

	struct
	{
		struct FString                 SectionName;
		struct FString                 VariableName;
		bool                           IsValid;
		struct FRotator                ReturnValue;
	} params;

	params.SectionName = SectionName;
	params.VariableName = VariableName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Int
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 SectionName                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 VariableName                   (CPF_Parm, CPF_ZeroConstructor)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Int(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Int");

	struct
	{
		struct FString                 SectionName;
		struct FString                 VariableName;
		bool                           IsValid;
		int                            ReturnValue;
	} params;

	params.SectionName = SectionName;
	params.VariableName = VariableName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Float
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 SectionName                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 VariableName                   (CPF_Parm, CPF_ZeroConstructor)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Float(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Float");

	struct
	{
		struct FString                 SectionName;
		struct FString                 VariableName;
		bool                           IsValid;
		float                          ReturnValue;
	} params;

	params.SectionName = SectionName;
	params.VariableName = VariableName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Color
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 SectionName                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 VariableName                   (CPF_Parm, CPF_ZeroConstructor)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Color(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Color");

	struct
	{
		struct FString                 SectionName;
		struct FString                 VariableName;
		bool                           IsValid;
		struct FLinearColor            ReturnValue;
	} params;

	params.SectionName = SectionName;
	params.VariableName = VariableName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Bool
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 SectionName                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 VariableName                   (CPF_Parm, CPF_ZeroConstructor)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Bool(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Bool");

	struct
	{
		struct FString                 SectionName;
		struct FString                 VariableName;
		bool                           IsValid;
		bool                           ReturnValue;
	} params;

	params.SectionName = SectionName;
	params.VariableName = VariableName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetApplicationName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ProcessId                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UVictoryBPFunctionLibrary::VictoryGetApplicationName(int ProcessId)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetApplicationName");

	struct
	{
		int                            ProcessId;
		struct FString                 ReturnValue;
	} params;

	params.ProcessId = ProcessId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllAxisKeyBindings
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FVictoryInputAxis> Bindings                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UVictoryBPFunctionLibrary::VictoryGetAllAxisKeyBindings(TArray<struct FVictoryInputAxis>* Bindings)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllAxisKeyBindings");

	struct
	{
		TArray<struct FVictoryInputAxis> Bindings;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Bindings != nullptr)
		*Bindings = params.Bindings;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllAxisAndActionMappingsForKey
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)
// TArray<struct FVictoryInput>   ActionBindings                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<struct FVictoryInputAxis> AxisBindings                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UVictoryBPFunctionLibrary::VictoryGetAllAxisAndActionMappingsForKey(const struct FKey& Key, TArray<struct FVictoryInput>* ActionBindings, TArray<struct FVictoryInputAxis>* AxisBindings)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllAxisAndActionMappingsForKey");

	struct
	{
		struct FKey                    Key;
		TArray<struct FVictoryInput>   ActionBindings;
		TArray<struct FVictoryInputAxis> AxisBindings;
	} params;

	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ActionBindings != nullptr)
		*ActionBindings = params.ActionBindings;
	if (AxisBindings != nullptr)
		*AxisBindings = params.AxisBindings;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllActionKeyBindings
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FVictoryInput>   Bindings                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UVictoryBPFunctionLibrary::VictoryGetAllActionKeyBindings(TArray<struct FVictoryInput>* Bindings)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllActionKeyBindings");

	struct
	{
		TArray<struct FVictoryInput>   Bindings;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Bindings != nullptr)
		*Bindings = params.Bindings;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatPlusEquals
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// float                          Float                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          Add                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          FloatOut                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::VictoryFloatPlusEquals(float Add, float* Float, float* FloatOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatPlusEquals");

	struct
	{
		float                          Float;
		float                          Add;
		float                          FloatOut;
	} params;

	params.Add = Add;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Float != nullptr)
		*Float = params.Float;
	if (FloatOut != nullptr)
		*FloatOut = params.FloatOut;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatMinusEquals
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// float                          Float                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          Sub                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          FloatOut                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::VictoryFloatMinusEquals(float Sub, float* Float, float* FloatOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatMinusEquals");

	struct
	{
		float                          Float;
		float                          Sub;
		float                          FloatOut;
	} params;

	params.Sub = Sub;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Float != nullptr)
		*Float = params.Float;
	if (FloatOut != nullptr)
		*FloatOut = params.FloatOut;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryDestructible_DestroyChunk
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UDestructibleComponent*  DestructibleComp               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            HitItem                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::VictoryDestructible_DestroyChunk(class UDestructibleComponent* DestructibleComp, int HitItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryDestructible_DestroyChunk");

	struct
	{
		class UDestructibleComponent*  DestructibleComp;
		int                            HitItem;
		bool                           ReturnValue;
	} params;

	params.DestructibleComp = DestructibleComp;
	params.HitItem = HitItem;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryCreateProc
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            ProcessId                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 FullPathOfProgramToRun         (CPF_Parm, CPF_ZeroConstructor)
// TArray<struct FString>         CommandlineArgs                (CPF_Parm, CPF_ZeroConstructor)
// bool                           Detach                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Hidden                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Priority                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 OptionalWorkingDirectory       (CPF_Parm, CPF_ZeroConstructor)

void UVictoryBPFunctionLibrary::VictoryCreateProc(const struct FString& FullPathOfProgramToRun, TArray<struct FString> CommandlineArgs, bool Detach, bool Hidden, int Priority, const struct FString& OptionalWorkingDirectory, int* ProcessId)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryCreateProc");

	struct
	{
		int                            ProcessId;
		struct FString                 FullPathOfProgramToRun;
		TArray<struct FString>         CommandlineArgs;
		bool                           Detach;
		bool                           Hidden;
		int                            Priority;
		struct FString                 OptionalWorkingDirectory;
	} params;

	params.FullPathOfProgramToRun = FullPathOfProgramToRun;
	params.CommandlineArgs = CommandlineArgs;
	params.Detach = Detach;
	params.Hidden = Hidden;
	params.Priority = Priority;
	params.OptionalWorkingDirectory = OptionalWorkingDirectory;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ProcessId != nullptr)
		*ProcessId = params.ProcessId;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryAppendInline
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 string                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FString                 ToAppend                       (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           AppendNewline                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::VictoryAppendInline(const struct FString& ToAppend, bool AppendNewline, struct FString* string, struct FString* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryAppendInline");

	struct
	{
		struct FString                 string;
		struct FString                 ToAppend;
		struct FString                 Result;
		bool                           AppendNewline;
	} params;

	params.ToAppend = ToAppend;
	params.AppendNewline = AppendNewline;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (string != nullptr)
		*string = params.string;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SecondsToHoursMinutesSeconds
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          Seconds                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           TrimZeroes                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UVictoryBPFunctionLibrary::Victory_SecondsToHoursMinutesSeconds(float Seconds, bool TrimZeroes)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SecondsToHoursMinutesSeconds");

	struct
	{
		float                          Seconds;
		bool                           TrimZeroes;
		struct FString                 ReturnValue;
	} params;

	params.Seconds = Seconds;
	params.TrimZeroes = TrimZeroes;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SaveStringToOSClipboard
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ToClipboard                    (CPF_Parm, CPF_ZeroConstructor)

void UVictoryBPFunctionLibrary::Victory_SaveStringToOSClipboard(const struct FString& ToClipboard)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SaveStringToOSClipboard");

	struct
	{
		struct FString                 ToClipboard;
	} params;

	params.ToClipboard = ToClipboard;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SavePixels
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FullFilePath                   (CPF_Parm, CPF_ZeroConstructor)
// int                            Width                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Height                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FLinearColor>    ImagePixels                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           SaveAsBMP                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           SRGB                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 errorString                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::Victory_SavePixels(const struct FString& FullFilePath, int Width, int Height, TArray<struct FLinearColor> ImagePixels, bool SaveAsBMP, bool SRGB, struct FString* errorString)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SavePixels");

	struct
	{
		struct FString                 FullFilePath;
		int                            Width;
		int                            Height;
		TArray<struct FLinearColor>    ImagePixels;
		bool                           SaveAsBMP;
		bool                           SRGB;
		struct FString                 errorString;
		bool                           ReturnValue;
	} params;

	params.FullFilePath = FullFilePath;
	params.Width = Width;
	params.Height = Height;
	params.ImagePixels = ImagePixels;
	params.SaveAsBMP = SaveAsBMP;
	params.SRGB = SRGB;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (errorString != nullptr)
		*errorString = params.errorString;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile_Pixels
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 FullFilePath                   (CPF_Parm, CPF_ZeroConstructor)
// EJoyImageFormats               ImageFormat                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Width                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Height                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FLinearColor>    OutPixels                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// class UTexture2D*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UTexture2D* UVictoryBPFunctionLibrary::Victory_LoadTexture2D_FromFile_Pixels(const struct FString& FullFilePath, EJoyImageFormats ImageFormat, bool* IsValid, int* Width, int* Height, TArray<struct FLinearColor>* OutPixels)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile_Pixels");

	struct
	{
		struct FString                 FullFilePath;
		EJoyImageFormats               ImageFormat;
		bool                           IsValid;
		int                            Width;
		int                            Height;
		TArray<struct FLinearColor>    OutPixels;
		class UTexture2D*              ReturnValue;
	} params;

	params.FullFilePath = FullFilePath;
	params.ImageFormat = ImageFormat;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;
	if (OutPixels != nullptr)
		*OutPixels = params.OutPixels;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 FullFilePath                   (CPF_Parm, CPF_ZeroConstructor)
// EJoyImageFormats               ImageFormat                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Width                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Height                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTexture2D*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UTexture2D* UVictoryBPFunctionLibrary::Victory_LoadTexture2D_FromFile(const struct FString& FullFilePath, EJoyImageFormats ImageFormat, bool* IsValid, int* Width, int* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile");

	struct
	{
		struct FString                 FullFilePath;
		EJoyImageFormats               ImageFormat;
		bool                           IsValid;
		int                            Width;
		int                            Height;
		class UTexture2D*              ReturnValue;
	} params;

	params.FullFilePath = FullFilePath;
	params.ImageFormat = ImageFormat;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetStringFromOSClipboard
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 FromClipboard                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UVictoryBPFunctionLibrary::Victory_GetStringFromOSClipboard(struct FString* FromClipboard)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetStringFromOSClipboard");

	struct
	{
		struct FString                 FromClipboard;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (FromClipboard != nullptr)
		*FromClipboard = params.FromClipboard;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelsArrayFromT2D
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UTexture2D*              T2D                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TextureWidth                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TextureHeight                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FLinearColor>    PixelArray                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::Victory_GetPixelsArrayFromT2D(class UTexture2D* T2D, int* TextureWidth, int* TextureHeight, TArray<struct FLinearColor>* PixelArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelsArrayFromT2D");

	struct
	{
		class UTexture2D*              T2D;
		int                            TextureWidth;
		int                            TextureHeight;
		TArray<struct FLinearColor>    PixelArray;
		bool                           ReturnValue;
	} params;

	params.T2D = T2D;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (TextureWidth != nullptr)
		*TextureWidth = params.TextureWidth;
	if (TextureHeight != nullptr)
		*TextureHeight = params.TextureHeight;
	if (PixelArray != nullptr)
		*PixelArray = params.PixelArray;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelFromT2D
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UTexture2D*              T2D                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            X                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Y                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            PixelColor                     (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::Victory_GetPixelFromT2D(class UTexture2D* T2D, int X, int Y, struct FLinearColor* PixelColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelFromT2D");

	struct
	{
		class UTexture2D*              T2D;
		int                            X;
		int                            Y;
		struct FLinearColor            PixelColor;
		bool                           ReturnValue;
	} params;

	params.T2D = T2D;
	params.X = X;
	params.Y = Y;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PixelColor != nullptr)
		*PixelColor = params.PixelColor;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGRHIAdapterName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UVictoryBPFunctionLibrary::Victory_GetGRHIAdapterName()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGRHIAdapterName");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGPUInfo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 DeviceDescription              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// struct FString                 Provider                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// struct FString                 DriverVersion                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// struct FString                 DriverDate                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UVictoryBPFunctionLibrary::Victory_GetGPUInfo(struct FString* DeviceDescription, struct FString* Provider, struct FString* DriverVersion, struct FString* DriverDate)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGPUInfo");

	struct
	{
		struct FString                 DeviceDescription;
		struct FString                 Provider;
		struct FString                 DriverVersion;
		struct FString                 DriverDate;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (DeviceDescription != nullptr)
		*DeviceDescription = params.DeviceDescription;
	if (Provider != nullptr)
		*Provider = params.Provider;
	if (DriverVersion != nullptr)
		*DriverVersion = params.DriverVersion;
	if (DriverDate != nullptr)
		*DriverDate = params.DriverDate;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGPUBrand
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UVictoryBPFunctionLibrary::Victory_GetGPUBrand()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGPUBrand");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_Get_Pixel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FLinearColor>    Pixels                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            ImageHeight                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            X                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Y                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            FoundColor                     (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::Victory_Get_Pixel(TArray<struct FLinearColor> Pixels, int ImageHeight, int X, int Y, struct FLinearColor* FoundColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_Get_Pixel");

	struct
	{
		TArray<struct FLinearColor>    Pixels;
		int                            ImageHeight;
		int                            X;
		int                            Y;
		struct FLinearColor            FoundColor;
		bool                           ReturnValue;
	} params;

	params.Pixels = Pixels;
	params.ImageHeight = ImageHeight;
	params.X = X;
	params.Y = Y;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (FoundColor != nullptr)
		*FoundColor = params.FoundColor;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_AI_MoveToWithFilter
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class APawn*                   Pawn                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Dest                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UClass*                  FilterClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          AcceptanceRadius               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bProjectDestinationToNavigation (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bStopOnOverlap                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bCanStrafe                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EPathFollowingRequestResult> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EPathFollowingRequestResult> UVictoryBPFunctionLibrary::Victory_AI_MoveToWithFilter(class APawn* Pawn, const struct FVector& Dest, class UClass* FilterClass, float AcceptanceRadius, bool bProjectDestinationToNavigation, bool bStopOnOverlap, bool bCanStrafe)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_AI_MoveToWithFilter");

	struct
	{
		class APawn*                   Pawn;
		struct FVector                 Dest;
		class UClass*                  FilterClass;
		float                          AcceptanceRadius;
		bool                           bProjectDestinationToNavigation;
		bool                           bStopOnOverlap;
		bool                           bCanStrafe;
		TEnumAsByte<EPathFollowingRequestResult> ReturnValue;
	} params;

	params.Pawn = Pawn;
	params.Dest = Dest;
	params.FilterClass = FilterClass;
	params.AcceptanceRadius = AcceptanceRadius;
	params.bProjectDestinationToNavigation = bProjectDestinationToNavigation;
	params.bStopOnOverlap = bStopOnOverlap;
	params.bCanStrafe = bCanStrafe;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VerticalFOV
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          HorizontalFOV                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          AspectRatio                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVictoryBPFunctionLibrary::VerticalFOV(float HorizontalFOV, float AspectRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VerticalFOV");

	struct
	{
		float                          HorizontalFOV;
		float                          AspectRatio;
		float                          ReturnValue;
	} params;

	params.HorizontalFOV = HorizontalFOV;
	params.AspectRatio = AspectRatio;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Vector2DInterpTo_Constant
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               Current                        (CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               Target                         (CPF_Parm, CPF_IsPlainOldData)
// float                          DeltaTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InterpSpeed                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UVictoryBPFunctionLibrary::Vector2DInterpTo_Constant(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Vector2DInterpTo_Constant");

	struct
	{
		struct FVector2D               Current;
		struct FVector2D               Target;
		float                          DeltaTime;
		float                          InterpSpeed;
		struct FVector2D               ReturnValue;
	} params;

	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Vector2DInterpTo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               Current                        (CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               Target                         (CPF_Parm, CPF_IsPlainOldData)
// float                          DeltaTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InterpSpeed                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UVictoryBPFunctionLibrary::Vector2DInterpTo(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Vector2DInterpTo");

	struct
	{
		struct FVector2D               Current;
		struct FVector2D               Target;
		float                          DeltaTime;
		float                          InterpSpeed;
		struct FVector2D               ReturnValue;
	} params;

	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.UTCToLocal
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FDateTime               UTCTime                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FDateTime               LocalTime                      (CPF_Parm, CPF_OutParm)

void UVictoryBPFunctionLibrary::UTCToLocal(const struct FDateTime& UTCTime, struct FDateTime* LocalTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.UTCToLocal");

	struct
	{
		struct FDateTime               UTCTime;
		struct FDateTime               LocalTime;
	} params;

	params.UTCTime = UTCTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LocalTime != nullptr)
		*LocalTime = params.LocalTime;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.UnloadStreamingLevel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ULevelStreamingKismet*   LevelInstance                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::UnloadStreamingLevel(class ULevelStreamingKismet* LevelInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.UnloadStreamingLevel");

	struct
	{
		class ULevelStreamingKismet*   LevelInstance;
	} params;

	params.LevelInstance = LevelInstance;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.TransformVectorToActorSpaceAngle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 InVector                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator UVictoryBPFunctionLibrary::TransformVectorToActorSpaceAngle(class AActor* Actor, const struct FVector& InVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.TransformVectorToActorSpaceAngle");

	struct
	{
		class AActor*                  Actor;
		struct FVector                 InVector;
		struct FRotator                ReturnValue;
	} params;

	params.Actor = Actor;
	params.InVector = InVector;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.TransformVectorToActorSpace
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 InVector                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UVictoryBPFunctionLibrary::TransformVectorToActorSpace(class AActor* Actor, const struct FVector& InVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.TransformVectorToActorSpace");

	struct
	{
		class AActor*                  Actor;
		struct FVector                 InVector;
		struct FVector                 ReturnValue;
	} params;

	params.Actor = Actor;
	params.InVector = InVector;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Traces__CharacterMeshTrace___ClosestSocket
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  TraceOwner                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 TraceStart                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 TraceEnd                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 OutImpactPoint                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FVector                 OutImpactNormal                (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FName                   ClosestSocketName              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 SocketLocation                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* UVictoryBPFunctionLibrary::Traces__CharacterMeshTrace___ClosestSocket(class UObject* WorldContextObject, class AActor* TraceOwner, const struct FVector& TraceStart, const struct FVector& TraceEnd, struct FVector* OutImpactPoint, struct FVector* OutImpactNormal, struct FName* ClosestSocketName, struct FVector* SocketLocation, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Traces__CharacterMeshTrace___ClosestSocket");

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  TraceOwner;
		struct FVector                 TraceStart;
		struct FVector                 TraceEnd;
		struct FVector                 OutImpactPoint;
		struct FVector                 OutImpactNormal;
		struct FName                   ClosestSocketName;
		struct FVector                 SocketLocation;
		bool                           IsValid;
		class AActor*                  ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.TraceOwner = TraceOwner;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutImpactPoint != nullptr)
		*OutImpactPoint = params.OutImpactPoint;
	if (OutImpactNormal != nullptr)
		*OutImpactNormal = params.OutImpactNormal;
	if (ClosestSocketName != nullptr)
		*ClosestSocketName = params.ClosestSocketName;
	if (SocketLocation != nullptr)
		*SocketLocation = params.SocketLocation;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Traces__CharacterMeshTrace___ClosestBone
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  TraceOwner                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 TraceStart                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 TraceEnd                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 OutImpactPoint                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FVector                 OutImpactNormal                (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FName                   ClosestBoneName                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ClosestBoneLocation            (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* UVictoryBPFunctionLibrary::Traces__CharacterMeshTrace___ClosestBone(class AActor* TraceOwner, const struct FVector& TraceStart, const struct FVector& TraceEnd, struct FVector* OutImpactPoint, struct FVector* OutImpactNormal, struct FName* ClosestBoneName, struct FVector* ClosestBoneLocation, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Traces__CharacterMeshTrace___ClosestBone");

	struct
	{
		class AActor*                  TraceOwner;
		struct FVector                 TraceStart;
		struct FVector                 TraceEnd;
		struct FVector                 OutImpactPoint;
		struct FVector                 OutImpactNormal;
		struct FName                   ClosestBoneName;
		struct FVector                 ClosestBoneLocation;
		bool                           IsValid;
		class AActor*                  ReturnValue;
	} params;

	params.TraceOwner = TraceOwner;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutImpactPoint != nullptr)
		*OutImpactPoint = params.OutImpactPoint;
	if (OutImpactNormal != nullptr)
		*OutImpactNormal = params.OutImpactNormal;
	if (ClosestBoneName != nullptr)
		*ClosestBoneName = params.ClosestBoneName;
	if (ClosestBoneLocation != nullptr)
		*ClosestBoneLocation = params.ClosestBoneLocation;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.TraceData__GetTraceDataFromSkeletalMeshSocket
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 TraceStart                     (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FVector                 TraceEnd                       (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// class USkeletalMeshComponent*  Mesh                           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FRotator                TraceRotation                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          TraceLength                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Socket                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           DrawTraceData                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            TraceDataColor                 (CPF_Parm, CPF_IsPlainOldData)
// float                          TraceDataThickness             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::TraceData__GetTraceDataFromSkeletalMeshSocket(class USkeletalMeshComponent* Mesh, const struct FRotator& TraceRotation, float TraceLength, const struct FName& Socket, bool DrawTraceData, const struct FLinearColor& TraceDataColor, float TraceDataThickness, struct FVector* TraceStart, struct FVector* TraceEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.TraceData__GetTraceDataFromSkeletalMeshSocket");

	struct
	{
		struct FVector                 TraceStart;
		struct FVector                 TraceEnd;
		class USkeletalMeshComponent*  Mesh;
		struct FRotator                TraceRotation;
		float                          TraceLength;
		struct FName                   Socket;
		bool                           DrawTraceData;
		struct FLinearColor            TraceDataColor;
		float                          TraceDataThickness;
		bool                           ReturnValue;
	} params;

	params.Mesh = Mesh;
	params.TraceRotation = TraceRotation;
	params.TraceLength = TraceLength;
	params.Socket = Socket;
	params.DrawTraceData = DrawTraceData;
	params.TraceDataColor = TraceDataColor;
	params.TraceDataThickness = TraceDataThickness;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (TraceStart != nullptr)
		*TraceStart = params.TraceStart;
	if (TraceEnd != nullptr)
		*TraceEnd = params.TraceEnd;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.TraceData__GetTraceDataFromCharacterSocket
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 TraceStart                     (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FVector                 TraceEnd                       (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// class AActor*                  TheCharacter                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                TraceRotation                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          TraceLength                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Socket                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           DrawTraceData                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            TraceDataColor                 (CPF_Parm, CPF_IsPlainOldData)
// float                          TraceDataThickness             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::TraceData__GetTraceDataFromCharacterSocket(class AActor* TheCharacter, const struct FRotator& TraceRotation, float TraceLength, const struct FName& Socket, bool DrawTraceData, const struct FLinearColor& TraceDataColor, float TraceDataThickness, struct FVector* TraceStart, struct FVector* TraceEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.TraceData__GetTraceDataFromCharacterSocket");

	struct
	{
		struct FVector                 TraceStart;
		struct FVector                 TraceEnd;
		class AActor*                  TheCharacter;
		struct FRotator                TraceRotation;
		float                          TraceLength;
		struct FName                   Socket;
		bool                           DrawTraceData;
		struct FLinearColor            TraceDataColor;
		float                          TraceDataThickness;
		bool                           ReturnValue;
	} params;

	params.TheCharacter = TheCharacter;
	params.TraceRotation = TraceRotation;
	params.TraceLength = TraceLength;
	params.Socket = Socket;
	params.DrawTraceData = DrawTraceData;
	params.TraceDataColor = TraceDataColor;
	params.TraceDataThickness = TraceDataThickness;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (TraceStart != nullptr)
		*TraceStart = params.TraceStart;
	if (TraceEnd != nullptr)
		*TraceEnd = params.TraceEnd;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToInt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           UseDotForThousands             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UVictoryBPFunctionLibrary::Text_ToInt(const struct FText& Text, bool UseDotForThousands)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToInt");

	struct
	{
		struct FText                   Text;
		bool                           UseDotForThousands;
		int                            ReturnValue;
	} params;

	params.Text = Text;
	params.UseDotForThousands = UseDotForThousands;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToFloat
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           UseDotForThousands             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVictoryBPFunctionLibrary::Text_ToFloat(const struct FText& Text, bool UseDotForThousands)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToFloat");

	struct
	{
		struct FText                   Text;
		bool                           UseDotForThousands;
		float                          ReturnValue;
	} params;

	params.Text = Text;
	params.UseDotForThousands = UseDotForThousands;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_IsNumeric
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::Text_IsNumeric(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_IsNumeric");

	struct
	{
		struct FText                   Text;
		bool                           ReturnValue;
	} params;

	params.Text = Text;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.StringIsEmpty
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 Target                         (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::StringIsEmpty(const struct FString& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.StringIsEmpty");

	struct
	{
		struct FString                 Target;
		bool                           ReturnValue;
	} params;

	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.StringConversion__GetFloatAsStringWithPrecision
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          TheFloat                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 TheString                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// int                            Precision                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IncludeLeadingZero             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::StringConversion__GetFloatAsStringWithPrecision(float TheFloat, int Precision, bool IncludeLeadingZero, struct FString* TheString)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.StringConversion__GetFloatAsStringWithPrecision");

	struct
	{
		float                          TheFloat;
		struct FString                 TheString;
		int                            Precision;
		bool                           IncludeLeadingZero;
	} params;

	params.TheFloat = TheFloat;
	params.Precision = Precision;
	params.IncludeLeadingZero = IncludeLeadingZero;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (TheString != nullptr)
		*TheString = params.TheString;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__ExplodeString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FString>         OutputStrings                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// struct FString                 InputString                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Separator                      (CPF_Parm, CPF_ZeroConstructor)
// int                            Limit                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bTrimElements                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::String__ExplodeString(const struct FString& InputString, const struct FString& Separator, int Limit, bool bTrimElements, TArray<struct FString>* OutputStrings)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__ExplodeString");

	struct
	{
		TArray<struct FString>         OutputStrings;
		struct FString                 InputString;
		struct FString                 Separator;
		int                            Limit;
		bool                           bTrimElements;
	} params;

	params.InputString = InputString;
	params.Separator = Separator;
	params.Limit = Limit;
	params.bTrimElements = bTrimElements;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutputStrings != nullptr)
		*OutputStrings = params.OutputStrings;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings_Multi
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 A                              (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 B                              (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UVictoryBPFunctionLibrary::String__CombineStrings_Multi(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings_Multi");

	struct
	{
		struct FString                 A;
		struct FString                 B;
		struct FString                 ReturnValue;
	} params;

	params.A = A;
	params.B = B;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 StringFirst                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 StringSecond                   (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Separator                      (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 StringFirstLabel               (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 StringSecondLabel              (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UVictoryBPFunctionLibrary::String__CombineStrings(const struct FString& StringFirst, const struct FString& StringSecond, const struct FString& Separator, const struct FString& StringFirstLabel, const struct FString& StringSecondLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings");

	struct
	{
		struct FString                 StringFirst;
		struct FString                 StringSecond;
		struct FString                 Separator;
		struct FString                 StringFirstLabel;
		struct FString                 StringSecondLabel;
		struct FString                 ReturnValue;
	} params;

	params.StringFirst = StringFirst;
	params.StringSecond = StringSecond;
	params.Separator = Separator;
	params.StringFirstLabel = StringFirstLabel;
	params.StringSecondLabel = StringSecondLabel;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.SpawnActorIntoLevel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  ActorClass                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Level                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                Rotation                       (CPF_Parm, CPF_IsPlainOldData)
// bool                           SpawnEvenIfColliding           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* UVictoryBPFunctionLibrary::SpawnActorIntoLevel(class UObject* WorldContextObject, class UClass* ActorClass, const struct FName& Level, const struct FVector& Location, const struct FRotator& Rotation, bool SpawnEvenIfColliding)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.SpawnActorIntoLevel");

	struct
	{
		class UObject*                 WorldContextObject;
		class UClass*                  ActorClass;
		struct FName                   Level;
		struct FVector                 Location;
		struct FRotator                Rotation;
		bool                           SpawnEvenIfColliding;
		class AActor*                  ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;
	params.Level = Level;
	params.Location = Location;
	params.Rotation = Rotation;
	params.SpawnEvenIfColliding = SpawnEvenIfColliding;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetGenericTeamId
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// unsigned char                  NewTeamId                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::SetGenericTeamId(class AActor* Target, unsigned char NewTeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetGenericTeamId");

	struct
	{
		class AActor*                  Target;
		unsigned char                  NewTeamId;
	} params;

	params.Target = Target;
	params.NewTeamId = NewTeamId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetComponentTickRate
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UActorComponent*         Component                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// float                          Seconds                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::SetComponentTickRate(class UActorComponent* Component, float Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetComponentTickRate");

	struct
	{
		class UActorComponent*         Component;
		float                          Seconds;
	} params;

	params.Component = Component;
	params.Seconds = Seconds;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetBloomIntensity
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APostProcessVolume*      PostProcessVolume              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Intensity                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::SetBloomIntensity(class APostProcessVolume* PostProcessVolume, float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetBloomIntensity");

	struct
	{
		class APostProcessVolume*      PostProcessVolume;
		float                          Intensity;
	} params;

	params.PostProcessVolume = PostProcessVolume;
	params.Intensity = Intensity;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ServerTravel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 mapName                        (CPF_Parm, CPF_ZeroConstructor)
// bool                           bNotifyPlayers                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::ServerTravel(class UObject* WorldContextObject, const struct FString& mapName, bool bNotifyPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.ServerTravel");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FString                 mapName;
		bool                           bNotifyPlayers;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.mapName = mapName;
	params.bNotifyPlayers = bNotifyPlayers;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Selection_SelectionBox
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class AActor*>          SelectedActors                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// struct FVector2D               AnchorPoint                    (CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               DraggedPoint                   (CPF_Parm, CPF_IsPlainOldData)
// class UClass*                  ClassFilter                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::Selection_SelectionBox(class UObject* WorldContextObject, const struct FVector2D& AnchorPoint, const struct FVector2D& DraggedPoint, class UClass* ClassFilter, TArray<class AActor*>* SelectedActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Selection_SelectionBox");

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<class AActor*>          SelectedActors;
		struct FVector2D               AnchorPoint;
		struct FVector2D               DraggedPoint;
		class UClass*                  ClassFilter;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.AnchorPoint = AnchorPoint;
	params.DraggedPoint = DraggedPoint;
	params.ClassFilter = ClassFilter;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (SelectedActors != nullptr)
		*SelectedActors = params.SelectedActors;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRandWithTime
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UVictoryBPFunctionLibrary::seedRandWithTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRandWithTime");

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRandWithEntropy
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UVictoryBPFunctionLibrary::seedRandWithEntropy()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRandWithEntropy");

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRand
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Seed                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::seedRand(int Seed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRand");

	struct
	{
		int                            Seed;
	} params;

	params.Seed = Seed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ScreenShots_Rename_Move_Most_Recent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 OriginalFileName               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// struct FString                 NewName                        (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 NewAbsoluteFolderPath          (CPF_Parm, CPF_ZeroConstructor)
// bool                           HighResolution                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::ScreenShots_Rename_Move_Most_Recent(const struct FString& NewName, const struct FString& NewAbsoluteFolderPath, bool HighResolution, struct FString* OriginalFileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.ScreenShots_Rename_Move_Most_Recent");

	struct
	{
		struct FString                 OriginalFileName;
		struct FString                 NewName;
		struct FString                 NewAbsoluteFolderPath;
		bool                           HighResolution;
		bool                           ReturnValue;
	} params;

	params.NewName = NewName;
	params.NewAbsoluteFolderPath = NewAbsoluteFolderPath;
	params.HighResolution = HighResolution;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OriginalFileName != nullptr)
		*OriginalFileName = params.OriginalFileName;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.SaveGameObject_GetAllSaveSlotFileNames
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FString>         FileNames                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UVictoryBPFunctionLibrary::SaveGameObject_GetAllSaveSlotFileNames(TArray<struct FString>* FileNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.SaveGameObject_GetAllSaveSlotFileNames");

	struct
	{
		TArray<struct FString>         FileNames;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (FileNames != nullptr)
		*FileNames = params.FileNames;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Rendering__UnFreezeGameRendering
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UVictoryBPFunctionLibrary::Rendering__UnFreezeGameRendering()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Rendering__UnFreezeGameRendering");

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Rendering__FreezeGameRendering
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UVictoryBPFunctionLibrary::Rendering__FreezeGameRendering()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Rendering__FreezeGameRendering");

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveFromStreamingLevels
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLevelStreamInstanceInfo LevelInstanceInfo              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UVictoryBPFunctionLibrary::RemoveFromStreamingLevels(class UObject* WorldContextObject, const struct FLevelStreamInstanceInfo& LevelInstanceInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveFromStreamingLevels");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLevelStreamInstanceInfo LevelInstanceInfo;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.LevelInstanceInfo = LevelInstanceInfo;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveAllWidgetsOfClass
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  WidgetClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::RemoveAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveAllWidgetsOfClass");

	struct
	{
		class UObject*                 WorldContextObject;
		class UClass*                  WidgetClass;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.WidgetClass = WidgetClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetTimePassedSincePreviousTime
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 PreviousTime                   (CPF_Parm, CPF_ZeroConstructor)
// float                          Milliseconds                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Seconds                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Minutes                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Hours                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::RealWorldTime__GetTimePassedSincePreviousTime(const struct FString& PreviousTime, float* Milliseconds, float* Seconds, float* Minutes, float* Hours)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetTimePassedSincePreviousTime");

	struct
	{
		struct FString                 PreviousTime;
		float                          Milliseconds;
		float                          Seconds;
		float                          Minutes;
		float                          Hours;
	} params;

	params.PreviousTime = PreviousTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Milliseconds != nullptr)
		*Milliseconds = params.Milliseconds;
	if (Seconds != nullptr)
		*Seconds = params.Seconds;
	if (Minutes != nullptr)
		*Minutes = params.Minutes;
	if (Hours != nullptr)
		*Hours = params.Hours;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetDifferenceBetweenTimes
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 PreviousTime1                  (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 PreviousTime2                  (CPF_Parm, CPF_ZeroConstructor)
// float                          Milliseconds                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Seconds                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Minutes                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Hours                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::RealWorldTime__GetDifferenceBetweenTimes(const struct FString& PreviousTime1, const struct FString& PreviousTime2, float* Milliseconds, float* Seconds, float* Minutes, float* Hours)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetDifferenceBetweenTimes");

	struct
	{
		struct FString                 PreviousTime1;
		struct FString                 PreviousTime2;
		float                          Milliseconds;
		float                          Seconds;
		float                          Minutes;
		float                          Hours;
	} params;

	params.PreviousTime1 = PreviousTime1;
	params.PreviousTime2 = PreviousTime2;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Milliseconds != nullptr)
		*Milliseconds = params.Milliseconds;
	if (Seconds != nullptr)
		*Seconds = params.Seconds;
	if (Minutes != nullptr)
		*Minutes = params.Minutes;
	if (Hours != nullptr)
		*Hours = params.Hours;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetCurrentOSTime
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            Milliseconds                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Seconds                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Minutes                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Hours12                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Hours24                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Day                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Month                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Year                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UVictoryBPFunctionLibrary::RealWorldTime__GetCurrentOSTime(int* Milliseconds, int* Seconds, int* Minutes, int* Hours12, int* Hours24, int* Day, int* Month, int* Year)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetCurrentOSTime");

	struct
	{
		int                            Milliseconds;
		int                            Seconds;
		int                            Minutes;
		int                            Hours12;
		int                            Hours24;
		int                            Day;
		int                            Month;
		int                            Year;
		struct FString                 ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Milliseconds != nullptr)
		*Milliseconds = params.Milliseconds;
	if (Seconds != nullptr)
		*Seconds = params.Seconds;
	if (Minutes != nullptr)
		*Minutes = params.Minutes;
	if (Hours12 != nullptr)
		*Hours12 = params.Hours12;
	if (Hours24 != nullptr)
		*Hours24 = params.Hours24;
	if (Day != nullptr)
		*Day = params.Day;
	if (Month != nullptr)
		*Month = params.Month;
	if (Year != nullptr)
		*Year = params.Year;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_uniDis_MT
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UVictoryBPFunctionLibrary::RandInt_uniDis_MT()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_uniDis_MT");

	struct
	{
		int                            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_uniDis
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UVictoryBPFunctionLibrary::RandInt_uniDis()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_uniDis");

	struct
	{
		int                            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_MINMAX_uniDis_MT
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            iMin                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            iMax                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UVictoryBPFunctionLibrary::RandInt_MINMAX_uniDis_MT(int iMin, int iMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_MINMAX_uniDis_MT");

	struct
	{
		int                            iMin;
		int                            iMax;
		int                            ReturnValue;
	} params;

	params.iMin = iMin;
	params.iMax = iMax;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_MINMAX_uniDis
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            iMin                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            iMax                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UVictoryBPFunctionLibrary::RandInt_MINMAX_uniDis(int iMin, int iMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_MINMAX_uniDis");

	struct
	{
		int                            iMin;
		int                            iMax;
		int                            ReturnValue;
	} params;

	params.iMin = iMin;
	params.iMax = iMax;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_uniDis_MT
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVictoryBPFunctionLibrary::RandFloat_uniDis_MT()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_uniDis_MT");

	struct
	{
		float                          ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_uniDis
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVictoryBPFunctionLibrary::RandFloat_uniDis()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_uniDis");

	struct
	{
		float                          ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_MINMAX_uniDis_MT
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          iMin                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          iMax                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVictoryBPFunctionLibrary::RandFloat_MINMAX_uniDis_MT(float iMin, float iMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_MINMAX_uniDis_MT");

	struct
	{
		float                          iMin;
		float                          iMax;
		float                          ReturnValue;
	} params;

	params.iMin = iMin;
	params.iMax = iMax;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_MINMAX_uniDis
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          iMin                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          iMax                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVictoryBPFunctionLibrary::RandFloat_MINMAX_uniDis(float iMin, float iMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_MINMAX_uniDis");

	struct
	{
		float                          iMin;
		float                          iMax;
		float                          ReturnValue;
	} params;

	params.iMin = iMin;
	params.iMax = iMax;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandBool_Bernoulli_MT
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          fBias                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::RandBool_Bernoulli_MT(float fBias)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandBool_Bernoulli_MT");

	struct
	{
		float                          fBias;
		bool                           ReturnValue;
	} params;

	params.fBias = fBias;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandBool_Bernoulli
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          fBias                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::RandBool_Bernoulli(float fBias)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandBool_Bernoulli");

	struct
	{
		float                          fBias;
		bool                           ReturnValue;
	} params;

	params.fBias = fBias;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ProjectWorldToScreenPosition
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 WorldLocation                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UVictoryBPFunctionLibrary::ProjectWorldToScreenPosition(const struct FVector& WorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.ProjectWorldToScreenPosition");

	struct
	{
		struct FVector                 WorldLocation;
		struct FVector2D               ReturnValue;
	} params;

	params.WorldLocation = WorldLocation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.PointDistanceToPlane
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FPlane                  Plane                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 Point                          (CPF_Parm, CPF_IsPlainOldData)
// float                          Distance                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::PointDistanceToPlane(const struct FPlane& Plane, const struct FVector& Point, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.PointDistanceToPlane");

	struct
	{
		struct FPlane                  Plane;
		struct FVector                 Point;
		float                          Distance;
	} params;

	params.Plane = Plane;
	params.Point = Point;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlaySoundAttachedFromFile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FilePath                       (CPF_Parm, CPF_ZeroConstructor)
// class USceneComponent*         AttachToComponent              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FName                   AttachPointName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// TEnumAsByte<EAttachLocation>   LocationType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bStopWhenAttachedToDestroyed   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          VolumeMultiplier               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PitchMultiplier                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          StartTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USoundAttenuation*       AttenuationSettings            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAudioComponent*         ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UAudioComponent* UVictoryBPFunctionLibrary::PlaySoundAttachedFromFile(const struct FString& FilePath, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlaySoundAttachedFromFile");

	struct
	{
		struct FString                 FilePath;
		class USceneComponent*         AttachToComponent;
		struct FName                   AttachPointName;
		struct FVector                 Location;
		TEnumAsByte<EAttachLocation>   LocationType;
		bool                           bStopWhenAttachedToDestroyed;
		float                          VolumeMultiplier;
		float                          PitchMultiplier;
		float                          StartTime;
		class USoundAttenuation*       AttenuationSettings;
		class UAudioComponent*         ReturnValue;
	} params;

	params.FilePath = FilePath;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.LocationType = LocationType;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlaySoundAtLocationFromFile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 FilePath                       (CPF_Parm, CPF_ZeroConstructor)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// float                          VolumeMultiplier               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PitchMultiplier                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          StartTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USoundAttenuation*       AttenuationSettings            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::PlaySoundAtLocationFromFile(class UObject* WorldContextObject, const struct FString& FilePath, const struct FVector& Location, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlaySoundAtLocationFromFile");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FString                 FilePath;
		struct FVector                 Location;
		float                          VolumeMultiplier;
		float                          PitchMultiplier;
		float                          StartTime;
		class USoundAttenuation*       AttenuationSettings;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.FilePath = FilePath;
	params.Location = Location;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlayerState_GetPlayerID
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       ThePC                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            PlayerId                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::PlayerState_GetPlayerID(class APlayerController* ThePC, int* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlayerState_GetPlayerID");

	struct
	{
		class APlayerController*       ThePC;
		int                            PlayerId;
		bool                           ReturnValue;
	} params;

	params.ThePC = ThePC;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlayerController_GetControllerID
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       ThePC                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ControllerId                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::PlayerController_GetControllerID(class APlayerController* ThePC, int* ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlayerController_GetControllerID");

	struct
	{
		class APlayerController*       ThePC;
		int                            ControllerId;
		bool                           ReturnValue;
	} params;

	params.ThePC = ThePC;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ControllerId != nullptr)
		*ControllerId = params.ControllerId;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__UpdateCharacterCameraToRagdollLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  TheCharacter                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          HeightOffset                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InterpSpeed                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::Physics__UpdateCharacterCameraToRagdollLocation(class AActor* TheCharacter, float HeightOffset, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__UpdateCharacterCameraToRagdollLocation");

	struct
	{
		class AActor*                  TheCharacter;
		float                          HeightOffset;
		float                          InterpSpeed;
		bool                           ReturnValue;
	} params;

	params.TheCharacter = TheCharacter;
	params.HeightOffset = HeightOffset;
	params.InterpSpeed = InterpSpeed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__LeaveRagDoll
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  TheCharacter                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           SetToFallingMovementMode       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          HeightAboveRBMesh              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 InitLocation                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FRotator                InitRotation                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::Physics__LeaveRagDoll(class AActor* TheCharacter, bool SetToFallingMovementMode, float HeightAboveRBMesh, const struct FVector& InitLocation, const struct FRotator& InitRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__LeaveRagDoll");

	struct
	{
		class AActor*                  TheCharacter;
		bool                           SetToFallingMovementMode;
		float                          HeightAboveRBMesh;
		struct FVector                 InitLocation;
		struct FRotator                InitRotation;
		bool                           ReturnValue;
	} params;

	params.TheCharacter = TheCharacter;
	params.SetToFallingMovementMode = SetToFallingMovementMode;
	params.HeightAboveRBMesh = HeightAboveRBMesh;
	params.InitLocation = InitLocation;
	params.InitRotation = InitRotation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__IsRagDoll
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  TheCharacter                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::Physics__IsRagDoll(class AActor* TheCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__IsRagDoll");

	struct
	{
		class AActor*                  TheCharacter;
		bool                           ReturnValue;
	} params;

	params.TheCharacter = TheCharacter;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__InitializeVictoryRagDoll
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  TheCharacter                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 InitLocation                   (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FRotator                InitRotation                   (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::Physics__InitializeVictoryRagDoll(class AActor* TheCharacter, struct FVector* InitLocation, struct FRotator* InitRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__InitializeVictoryRagDoll");

	struct
	{
		class AActor*                  TheCharacter;
		struct FVector                 InitLocation;
		struct FRotator                InitRotation;
		bool                           ReturnValue;
	} params;

	params.TheCharacter = TheCharacter;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (InitLocation != nullptr)
		*InitLocation = params.InitLocation;
	if (InitRotation != nullptr)
		*InitRotation = params.InitRotation;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__GetLocationofRagDoll
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  TheCharacter                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 RagdollLocation                (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::Physics__GetLocationofRagDoll(class AActor* TheCharacter, struct FVector* RagdollLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__GetLocationofRagDoll");

	struct
	{
		class AActor*                  TheCharacter;
		struct FVector                 RagdollLocation;
		bool                           ReturnValue;
	} params;

	params.TheCharacter = TheCharacter;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (RagdollLocation != nullptr)
		*RagdollLocation = params.RagdollLocation;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__EnterRagDoll
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  TheCharacter                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::Physics__EnterRagDoll(class AActor* TheCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__EnterRagDoll");

	struct
	{
		class AActor*                  TheCharacter;
		bool                           ReturnValue;
	} params;

	params.TheCharacter = TheCharacter;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.OptionsMenu__GetDisplayAdapterScreenResolutions
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<int>                    Widths                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<int>                    Heights                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<int>                    RefreshRates                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           IncludeRefreshRates            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::OptionsMenu__GetDisplayAdapterScreenResolutions(bool IncludeRefreshRates, TArray<int>* Widths, TArray<int>* Heights, TArray<int>* RefreshRates)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.OptionsMenu__GetDisplayAdapterScreenResolutions");

	struct
	{
		TArray<int>                    Widths;
		TArray<int>                    Heights;
		TArray<int>                    RefreshRates;
		bool                           IncludeRefreshRates;
		bool                           ReturnValue;
	} params;

	params.IncludeRefreshRates = IncludeRefreshRates;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Widths != nullptr)
		*Widths = params.Widths;
	if (Heights != nullptr)
		*Heights = params.Heights;
	if (RefreshRates != nullptr)
		*RefreshRates = params.RefreshRates;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.OperatingSystem__GetCurrentPlatform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           Windows_                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Mac                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Linux                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           iOS                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Android                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Android_ARM                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Android_Vulkan                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           PS4                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           XBoxOne                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           HTML5                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Apple                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::OperatingSystem__GetCurrentPlatform(bool* Windows_, bool* Mac, bool* Linux, bool* iOS, bool* Android, bool* Android_ARM, bool* Android_Vulkan, bool* PS4, bool* XBoxOne, bool* HTML5, bool* Apple)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.OperatingSystem__GetCurrentPlatform");

	struct
	{
		bool                           Windows_;
		bool                           Mac;
		bool                           Linux;
		bool                           iOS;
		bool                           Android;
		bool                           Android_ARM;
		bool                           Android_Vulkan;
		bool                           PS4;
		bool                           XBoxOne;
		bool                           HTML5;
		bool                           Apple;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Windows_ != nullptr)
		*Windows_ = params.Windows_;
	if (Mac != nullptr)
		*Mac = params.Mac;
	if (Linux != nullptr)
		*Linux = params.Linux;
	if (iOS != nullptr)
		*iOS = params.iOS;
	if (Android != nullptr)
		*Android = params.Android;
	if (Android_ARM != nullptr)
		*Android_ARM = params.Android_ARM;
	if (Android_Vulkan != nullptr)
		*Android_Vulkan = params.Android_Vulkan;
	if (PS4 != nullptr)
		*PS4 = params.PS4;
	if (XBoxOne != nullptr)
		*XBoxOne = params.XBoxOne;
	if (HTML5 != nullptr)
		*HTML5 = params.HTML5;
	if (Apple != nullptr)
		*Apple = params.Apple;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Open_URL_In_Web_Browser
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 TheURL                         (CPF_Parm, CPF_ZeroConstructor)

void UVictoryBPFunctionLibrary::Open_URL_In_Web_Browser(const struct FString& TheURL)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Open_URL_In_Web_Browser");

	struct
	{
		struct FString                 TheURL;
	} params;

	params.TheURL = TheURL;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.NotEqual_Vector2DVector2D
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               A                              (CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               B                              (CPF_Parm, CPF_IsPlainOldData)
// float                          ErrorTolerance                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::NotEqual_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B, float ErrorTolerance)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.NotEqual_Vector2DVector2D");

	struct
	{
		struct FVector2D               A;
		struct FVector2D               B;
		float                          ErrorTolerance;
		bool                           ReturnValue;
	} params;

	params.A = A;
	params.B = B;
	params.ErrorTolerance = ErrorTolerance;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Mobility__SetSceneCompMobility
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USceneComponent*         SceneComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TEnumAsByte<EComponentMobility> NewMobility                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::Mobility__SetSceneCompMobility(class USceneComponent* SceneComp, TEnumAsByte<EComponentMobility> NewMobility)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Mobility__SetSceneCompMobility");

	struct
	{
		class USceneComponent*         SceneComp;
		TEnumAsByte<EComponentMobility> NewMobility;
		bool                           ReturnValue;
	} params;

	params.SceneComp = SceneComp;
	params.NewMobility = NewMobility;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.MinOfIntArray
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<int>                    IntArray                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            IndexOfMinValue                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            MinValue                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::MinOfIntArray(TArray<int> IntArray, int* IndexOfMinValue, int* MinValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.MinOfIntArray");

	struct
	{
		TArray<int>                    IntArray;
		int                            IndexOfMinValue;
		int                            MinValue;
	} params;

	params.IntArray = IntArray;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IndexOfMinValue != nullptr)
		*IndexOfMinValue = params.IndexOfMinValue;
	if (MinValue != nullptr)
		*MinValue = params.MinValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.MinOfFloatArray
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<float>                  FloatArray                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            IndexOfMinValue                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MinValue                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::MinOfFloatArray(TArray<float> FloatArray, int* IndexOfMinValue, float* MinValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.MinOfFloatArray");

	struct
	{
		TArray<float>                  FloatArray;
		int                            IndexOfMinValue;
		float                          MinValue;
	} params;

	params.FloatArray = FloatArray;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IndexOfMinValue != nullptr)
		*IndexOfMinValue = params.IndexOfMinValue;
	if (MinValue != nullptr)
		*MinValue = params.MinValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.MaxOfIntArray
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<int>                    IntArray                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            IndexOfMaxValue                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            MaxValue                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::MaxOfIntArray(TArray<int> IntArray, int* IndexOfMaxValue, int* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.MaxOfIntArray");

	struct
	{
		TArray<int>                    IntArray;
		int                            IndexOfMaxValue;
		int                            MaxValue;
	} params;

	params.IntArray = IntArray;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IndexOfMaxValue != nullptr)
		*IndexOfMaxValue = params.IndexOfMaxValue;
	if (MaxValue != nullptr)
		*MaxValue = params.MaxValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.MaxOfFloatArray
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<float>                  FloatArray                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            IndexOfMaxValue                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MaxValue                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::MaxOfFloatArray(TArray<float> FloatArray, int* IndexOfMaxValue, float* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.MaxOfFloatArray");

	struct
	{
		TArray<float>                  FloatArray;
		int                            IndexOfMaxValue;
		float                          MaxValue;
	} params;

	params.FloatArray = FloatArray;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IndexOfMaxValue != nullptr)
		*IndexOfMaxValue = params.IndexOfMaxValue;
	if (MaxValue != nullptr)
		*MaxValue = params.MaxValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.MapRangeClamped
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InRangeA                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InRangeB                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          OutRangeA                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          OutRangeB                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVictoryBPFunctionLibrary::MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.MapRangeClamped");

	struct
	{
		float                          Value;
		float                          InRangeA;
		float                          InRangeB;
		float                          OutRangeA;
		float                          OutRangeB;
		float                          ReturnValue;
	} params;

	params.Value = Value;
	params.InRangeA = InRangeA;
	params.InRangeB = InRangeB;
	params.OutRangeA = OutRangeA;
	params.OutRangeB = OutRangeB;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Loops_ResetBPRunawayCounter
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UVictoryBPFunctionLibrary::Loops_ResetBPRunawayCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Loops_ResetBPRunawayCounter");

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadTexture2D_FromFileByExtension
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ImagePath                      (CPF_Parm, CPF_ZeroConstructor)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OutWidth                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OutHeight                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTexture2D*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UTexture2D* UVictoryBPFunctionLibrary::LoadTexture2D_FromFileByExtension(const struct FString& ImagePath, bool* IsValid, int* OutWidth, int* OutHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadTexture2D_FromFileByExtension");

	struct
	{
		struct FString                 ImagePath;
		bool                           IsValid;
		int                            OutWidth;
		int                            OutHeight;
		class UTexture2D*              ReturnValue;
	} params;

	params.ImagePath = ImagePath;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (OutWidth != nullptr)
		*OutWidth = params.OutWidth;
	if (OutHeight != nullptr)
		*OutHeight = params.OutHeight;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadTexture2D_FromDDSFile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FullFilePath                   (CPF_Parm, CPF_ZeroConstructor)
// class UTexture2D*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UTexture2D* UVictoryBPFunctionLibrary::LoadTexture2D_FromDDSFile(const struct FString& FullFilePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadTexture2D_FromDDSFile");

	struct
	{
		struct FString                 FullFilePath;
		class UTexture2D*              ReturnValue;
	} params;

	params.FullFilePath = FullFilePath;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringFromFile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// struct FString                 FullFilePath                   (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::LoadStringFromFile(const struct FString& FullFilePath, struct FString* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringFromFile");

	struct
	{
		struct FString                 Result;
		struct FString                 FullFilePath;
		bool                           ReturnValue;
	} params;

	params.FullFilePath = FullFilePath;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringArrayFromFile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FString>         StringArray                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// int                            ArraySize                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 FullFilePath                   (CPF_Parm, CPF_ZeroConstructor)
// bool                           ExcludeEmptyLines              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::LoadStringArrayFromFile(const struct FString& FullFilePath, bool ExcludeEmptyLines, TArray<struct FString>* StringArray, int* ArraySize)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringArrayFromFile");

	struct
	{
		TArray<struct FString>         StringArray;
		int                            ArraySize;
		struct FString                 FullFilePath;
		bool                           ExcludeEmptyLines;
		bool                           ReturnValue;
	} params;

	params.FullFilePath = FullFilePath;
	params.ExcludeEmptyLines = ExcludeEmptyLines;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (StringArray != nullptr)
		*StringArray = params.StringArray;
	if (ArraySize != nullptr)
		*ArraySize = params.ArraySize;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadObjectFromAssetPath
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  ObjectClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Path                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UObject* UVictoryBPFunctionLibrary::LoadObjectFromAssetPath(class UClass* ObjectClass, const struct FName& Path, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadObjectFromAssetPath");

	struct
	{
		class UClass*                  ObjectClass;
		struct FName                   Path;
		bool                           IsValid;
		class UObject*                 ReturnValue;
	} params;

	params.ObjectClass = ObjectClass;
	params.Path = Path;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LensFlare__GetLensFlareOffsets
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  LightSource                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PitchOffset                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          YawOffset                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          RollOffset                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::LensFlare__GetLensFlareOffsets(class APlayerController* PlayerController, class AActor* LightSource, float* PitchOffset, float* YawOffset, float* RollOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.LensFlare__GetLensFlareOffsets");

	struct
	{
		class APlayerController*       PlayerController;
		class AActor*                  LightSource;
		float                          PitchOffset;
		float                          YawOffset;
		float                          RollOffset;
		bool                           ReturnValue;
	} params;

	params.PlayerController = PlayerController;
	params.LightSource = LightSource;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PitchOffset != nullptr)
		*PitchOffset = params.PitchOffset;
	if (YawOffset != nullptr)
		*YawOffset = params.YawOffset;
	if (RollOffset != nullptr)
		*RollOffset = params.RollOffset;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyIsKey
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FKeyEvent               KeyEvent                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FKey                    Key                            (CPF_Parm)
// bool                           Ctrl                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Shift                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Alt                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Cmd                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Match                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::JoyIsKey(const struct FKeyEvent& KeyEvent, const struct FKey& Key, bool* Ctrl, bool* Shift, bool* Alt, bool* Cmd, bool* Match)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyIsKey");

	struct
	{
		struct FKeyEvent               KeyEvent;
		struct FKey                    Key;
		bool                           Ctrl;
		bool                           Shift;
		bool                           Alt;
		bool                           Cmd;
		bool                           Match;
	} params;

	params.KeyEvent = KeyEvent;
	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Ctrl != nullptr)
		*Ctrl = params.Ctrl;
	if (Shift != nullptr)
		*Shift = params.Shift;
	if (Alt != nullptr)
		*Alt = params.Alt;
	if (Cmd != nullptr)
		*Cmd = params.Cmd;
	if (Match != nullptr)
		*Match = params.Match;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyGraphicsSettings__FullScreen_Set
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EJoyGraphicsFullScreen> NewSetting                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::JoyGraphicsSettings__FullScreen_Set(TEnumAsByte<EJoyGraphicsFullScreen> NewSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyGraphicsSettings__FullScreen_Set");

	struct
	{
		TEnumAsByte<EJoyGraphicsFullScreen> NewSetting;
	} params;

	params.NewSetting = NewSetting;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyGraphicsSettings__FullScreen_Get
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<EJoyGraphicsFullScreen> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EJoyGraphicsFullScreen> UVictoryBPFunctionLibrary::JoyGraphicsSettings__FullScreen_Get()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyGraphicsSettings__FullScreen_Get");

	struct
	{
		TEnumAsByte<EJoyGraphicsFullScreen> ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyFileIO_GetFilesInRootAndAllSubFolders
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FString>         Files                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// struct FString                 RootFolderFullPath             (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Ext                            (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::JoyFileIO_GetFilesInRootAndAllSubFolders(const struct FString& RootFolderFullPath, const struct FString& Ext, TArray<struct FString>* Files)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyFileIO_GetFilesInRootAndAllSubFolders");

	struct
	{
		TArray<struct FString>         Files;
		struct FString                 RootFolderFullPath;
		struct FString                 Ext;
		bool                           ReturnValue;
	} params;

	params.RootFolderFullPath = RootFolderFullPath;
	params.Ext = Ext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Files != nullptr)
		*Files = params.Files;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyFileIO_GetFiles
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FString>         Files                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// struct FString                 RootFolderFullPath             (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Ext                            (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::JoyFileIO_GetFiles(const struct FString& RootFolderFullPath, const struct FString& Ext, TArray<struct FString>* Files)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyFileIO_GetFiles");

	struct
	{
		TArray<struct FString>         Files;
		struct FString                 RootFolderFullPath;
		struct FString                 Ext;
		bool                           ReturnValue;
	} params;

	params.RootFolderFullPath = RootFolderFullPath;
	params.Ext = Ext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Files != nullptr)
		*Files = params.Files;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsWidgetOfClassInViewport
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  WidgetClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::IsWidgetOfClassInViewport(class UObject* WorldContextObject, class UClass* WidgetClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsWidgetOfClassInViewport");

	struct
	{
		class UObject*                 WorldContextObject;
		class UClass*                  WidgetClass;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.WidgetClass = WidgetClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsStandalone
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::IsStandalone(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsStandalone");

	struct
	{
		class UObject*                 WorldContextObject;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsPointOnPlane
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FPlane                  Plane                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 Point                          (CPF_Parm, CPF_IsPlainOldData)
// float                          Tolerance                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::IsPointOnPlane(const struct FPlane& Plane, const struct FVector& Point, float Tolerance)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsPointOnPlane");

	struct
	{
		struct FPlane                  Plane;
		struct FVector                 Point;
		float                          Tolerance;
		bool                           ReturnValue;
	} params;

	params.Plane = Plane;
	params.Point = Point;
	params.Tolerance = Tolerance;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsAlphaNumeric
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 string                         (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::IsAlphaNumeric(const struct FString& string)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsAlphaNumeric");

	struct
	{
		struct FString                 string;
		bool                           ReturnValue;
	} params;

	params.string = string;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.InsertChildAt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 Parent                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWidget*                 Content                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UPanelSlot*              ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UPanelSlot* UVictoryBPFunctionLibrary::InsertChildAt(class UWidget* Parent, int Index, class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.InsertChildAt");

	struct
	{
		class UWidget*                 Parent;
		int                            Index;
		class UWidget*                 Content;
		class UPanelSlot*              ReturnValue;
	} params;

	params.Parent = Parent;
	params.Index = Index;
	params.Content = Content;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.HorizontalFOV
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          VerticalFOV                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          AspectRatio                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVictoryBPFunctionLibrary::HorizontalFOV(float VerticalFOV, float AspectRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.HorizontalFOV");

	struct
	{
		float                          VerticalFOV;
		float                          AspectRatio;
		float                          ReturnValue;
	} params;

	params.VerticalFOV = VerticalFOV;
	params.AspectRatio = AspectRatio;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.HideStreamingLevel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ULevelStreamingKismet*   LevelInstance                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::HideStreamingLevel(class ULevelStreamingKismet* LevelInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.HideStreamingLevel");

	struct
	{
		class ULevelStreamingKismet*   LevelInstance;
	} params;

	params.LevelInstance = LevelInstance;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.HasSubstring
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 SearchIn                       (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Substring                      (CPF_Parm, CPF_ZeroConstructor)
// TEnumAsByte<ESearchCase>       SearchCase                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<ESearchDir>        SearchDir                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::HasSubstring(const struct FString& SearchIn, const struct FString& Substring, TEnumAsByte<ESearchCase> SearchCase, TEnumAsByte<ESearchDir> SearchDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.HasSubstring");

	struct
	{
		struct FString                 SearchIn;
		struct FString                 Substring;
		TEnumAsByte<ESearchCase>       SearchCase;
		TEnumAsByte<ESearchDir>        SearchDir;
		bool                           ReturnValue;
	} params;

	params.SearchIn = SearchIn;
	params.Substring = Substring;
	params.SearchCase = SearchCase;
	params.SearchDir = SearchDir;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GraphicsSettings__SetFrameRateToBeUnbound
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UVictoryBPFunctionLibrary::GraphicsSettings__SetFrameRateToBeUnbound()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GraphicsSettings__SetFrameRateToBeUnbound");

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GraphicsSettings__SetFrameRateCap
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          NewValue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::GraphicsSettings__SetFrameRateCap(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GraphicsSettings__SetFrameRateCap");

	struct
	{
		float                          NewValue;
	} params;

	params.NewValue = NewValue;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetWidgetFromName
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UUserWidget*             ParentUserWidget               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FName                   Name                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UWidget*                 ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UWidget* UVictoryBPFunctionLibrary::GetWidgetFromName(class UUserWidget* ParentUserWidget, const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetWidgetFromName");

	struct
	{
		class UUserWidget*             ParentUserWidget;
		struct FName                   Name;
		class UWidget*                 ReturnValue;
	} params;

	params.ParentUserWidget = ParentUserWidget;
	params.Name = Name;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetViewportPositionHitResultByChannel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               ViewportPosition               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// TEnumAsByte<ECollisionChannel> TraceChannel                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              OutHitResult                   (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::GetViewportPositionHitResultByChannel(class UObject* WorldContextObject, const struct FVector2D& ViewportPosition, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, struct FHitResult* OutHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetViewportPositionHitResultByChannel");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector2D               ViewportPosition;
		TEnumAsByte<ECollisionChannel> TraceChannel;
		bool                           bTraceComplex;
		struct FHitResult              OutHitResult;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.ViewportPosition = ViewportPosition;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutHitResult != nullptr)
		*OutHitResult = params.OutHitResult;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetViewportPosition
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               ScreenPosition                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector2D               OutViewportPosition            (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::GetViewportPosition(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* OutViewportPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetViewportPosition");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector2D               ScreenPosition;
		struct FVector2D               OutViewportPosition;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.ScreenPosition = ScreenPosition;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutViewportPosition != nullptr)
		*OutViewportPosition = params.OutViewportPosition;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetVectorRelativeLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 ParentLocation                 (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                ParentRotation                 (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 ChildLocation                  (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UVictoryBPFunctionLibrary::GetVectorRelativeLocation(const struct FVector& ParentLocation, const struct FRotator& ParentRotation, const struct FVector& ChildLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetVectorRelativeLocation");

	struct
	{
		struct FVector                 ParentLocation;
		struct FRotator                ParentRotation;
		struct FVector                 ChildLocation;
		struct FVector                 ReturnValue;
	} params;

	params.ParentLocation = ParentLocation;
	params.ParentRotation = ParentRotation;
	params.ChildLocation = ChildLocation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUTCFromUnixTimeStamp
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            UnixTimeStamp                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FDateTime               UTCTime                        (CPF_Parm, CPF_OutParm)

void UVictoryBPFunctionLibrary::GetUTCFromUnixTimeStamp(int UnixTimeStamp, struct FDateTime* UTCTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUTCFromUnixTimeStamp");

	struct
	{
		int                            UnixTimeStamp;
		struct FDateTime               UTCTime;
	} params;

	params.UnixTimeStamp = UnixTimeStamp;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (UTCTime != nullptr)
		*UTCTime = params.UTCTime;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUserDisplayAdapterBrand
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           IsAMD                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsNvidia                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsIntel                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsUnknown                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            UnknownId                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::GetUserDisplayAdapterBrand(bool* IsAMD, bool* IsNvidia, bool* IsIntel, bool* IsUnknown, int* UnknownId)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUserDisplayAdapterBrand");

	struct
	{
		bool                           IsAMD;
		bool                           IsNvidia;
		bool                           IsIntel;
		bool                           IsUnknown;
		int                            UnknownId;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IsAMD != nullptr)
		*IsAMD = params.IsAMD;
	if (IsNvidia != nullptr)
		*IsNvidia = params.IsNvidia;
	if (IsIntel != nullptr)
		*IsIntel = params.IsIntel;
	if (IsUnknown != nullptr)
		*IsUnknown = params.IsUnknown;
	if (UnknownId != nullptr)
		*UnknownId = params.UnknownId;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUnixTimeStamp
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FDateTime               UTCTime                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UVictoryBPFunctionLibrary::GetUnixTimeStamp(const struct FDateTime& UTCTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUnixTimeStamp");

	struct
	{
		struct FDateTime               UTCTime;
		int                            ReturnValue;
	} params;

	params.UTCTime = UTCTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetTimeInPlay
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVictoryBPFunctionLibrary::GetTimeInPlay(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetTimeInPlay");

	struct
	{
		class AActor*                  Actor;
		float                          ReturnValue;
	} params;

	params.Actor = Actor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetTimeAlive
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Target                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVictoryBPFunctionLibrary::GetTimeAlive(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetTimeAlive");

	struct
	{
		class AActor*                  Target;
		float                          ReturnValue;
	} params;

	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetStaticMeshVertexLocations
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UStaticMeshComponent*    Comp                           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TArray<struct FVector>         VertexPositions                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::GetStaticMeshVertexLocations(class UStaticMeshComponent* Comp, TArray<struct FVector>* VertexPositions)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetStaticMeshVertexLocations");

	struct
	{
		class UStaticMeshComponent*    Comp;
		TArray<struct FVector>         VertexPositions;
		bool                           ReturnValue;
	} params;

	params.Comp = Comp;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (VertexPositions != nullptr)
		*VertexPositions = params.VertexPositions;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetSoundWaveFromFile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FilePath                       (CPF_Parm, CPF_ZeroConstructor)
// class USoundWave*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class USoundWave* UVictoryBPFunctionLibrary::GetSoundWaveFromFile(const struct FString& FilePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetSoundWaveFromFile");

	struct
	{
		struct FString                 FilePath;
		class USoundWave*              ReturnValue;
	} params;

	params.FilePath = FilePath;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetRotatorRelativeRotation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FRotator                ParentRotation                 (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                ChildRotation                  (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator UVictoryBPFunctionLibrary::GetRotatorRelativeRotation(const struct FRotator& ParentRotation, const struct FRotator& ChildRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetRotatorRelativeRotation");

	struct
	{
		struct FRotator                ParentRotation;
		struct FRotator                ChildRotation;
		struct FRotator                ReturnValue;
	} params;

	params.ParentRotation = ParentRotation;
	params.ChildRotation = ChildRotation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetPlayerUniqueNetID
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UVictoryBPFunctionLibrary::GetPlayerUniqueNetID()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetPlayerUniqueNetID");

	struct
	{
		int                            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetPlayerStart
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 PlayerStartName                (CPF_Parm, CPF_ZeroConstructor)
// class APlayerStart*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class APlayerStart* UVictoryBPFunctionLibrary::GetPlayerStart(class UObject* WorldContextObject, const struct FString& PlayerStartName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetPlayerStart");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FString                 PlayerStartName;
		class APlayerStart*            ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerStartName = PlayerStartName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetObjectPath
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 Obj                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName UVictoryBPFunctionLibrary::GetObjectPath(class UObject* Obj)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetObjectPath");

	struct
	{
		class UObject*                 Obj;
		struct FName                   ReturnValue;
	} params;

	params.Obj = Obj;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetNamesOfLoadedLevels
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FString>         NamesOfLoadedLevels            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UVictoryBPFunctionLibrary::GetNamesOfLoadedLevels(class UObject* WorldContextObject, TArray<struct FString>* NamesOfLoadedLevels)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetNamesOfLoadedLevels");

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<struct FString>         NamesOfLoadedLevels;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (NamesOfLoadedLevels != nullptr)
		*NamesOfLoadedLevels = params.NamesOfLoadedLevels;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetLevelInstanceInfo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ULevelStreamingKismet*   LevelInstance                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLevelStreamInstanceInfo ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FLevelStreamInstanceInfo UVictoryBPFunctionLibrary::GetLevelInstanceInfo(class ULevelStreamingKismet* LevelInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetLevelInstanceInfo");

	struct
	{
		class ULevelStreamingKismet*   LevelInstance;
		struct FLevelStreamInstanceInfo ReturnValue;
	} params;

	params.LevelInstance = LevelInstance;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetHeadMountedDisplayDeviceType
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName UVictoryBPFunctionLibrary::GetHeadMountedDisplayDeviceType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetHeadMountedDisplayDeviceType");

	struct
	{
		struct FName                   ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetGenericTeamId
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// unsigned char                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

unsigned char UVictoryBPFunctionLibrary::GetGenericTeamId(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetGenericTeamId");

	struct
	{
		class AActor*                  Target;
		unsigned char                  ReturnValue;
	} params;

	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetFirstWidgetOfClass
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  WidgetClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           TopLevelOnly                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UUserWidget*             ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UUserWidget* UVictoryBPFunctionLibrary::GetFirstWidgetOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetFirstWidgetOfClass");

	struct
	{
		class UObject*                 WorldContextObject;
		class UClass*                  WidgetClass;
		bool                           TopLevelOnly;
		class UUserWidget*             ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.WidgetClass = WidgetClass;
	params.TopLevelOnly = TopLevelOnly;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetDistanceToCollision
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     CollisionComponent             (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FVector                 Point                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 ClosestPointOnCollision        (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVictoryBPFunctionLibrary::GetDistanceToCollision(class UPrimitiveComponent* CollisionComponent, const struct FVector& Point, struct FVector* ClosestPointOnCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetDistanceToCollision");

	struct
	{
		class UPrimitiveComponent*     CollisionComponent;
		struct FVector                 Point;
		struct FVector                 ClosestPointOnCollision;
		float                          ReturnValue;
	} params;

	params.CollisionComponent = CollisionComponent;
	params.Point = Point;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ClosestPointOnCollision != nullptr)
		*ClosestPointOnCollision = params.ClosestPointOnCollision;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetDistanceBetweenComponentSurfaces
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     CollisionComponent1            (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UPrimitiveComponent*     CollisionComponent2            (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FVector                 PointOnSurface1                (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FVector                 PointOnSurface2                (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVictoryBPFunctionLibrary::GetDistanceBetweenComponentSurfaces(class UPrimitiveComponent* CollisionComponent1, class UPrimitiveComponent* CollisionComponent2, struct FVector* PointOnSurface1, struct FVector* PointOnSurface2)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetDistanceBetweenComponentSurfaces");

	struct
	{
		class UPrimitiveComponent*     CollisionComponent1;
		class UPrimitiveComponent*     CollisionComponent2;
		struct FVector                 PointOnSurface1;
		struct FVector                 PointOnSurface2;
		float                          ReturnValue;
	} params;

	params.CollisionComponent1 = CollisionComponent1;
	params.CollisionComponent2 = CollisionComponent2;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PointOnSurface1 != nullptr)
		*PointOnSurface1 = params.PointOnSurface1;
	if (PointOnSurface2 != nullptr)
		*PointOnSurface2 = params.PointOnSurface2;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetCreationTime
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Target                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVictoryBPFunctionLibrary::GetCreationTime(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetCreationTime");

	struct
	{
		class AActor*                  Target;
		float                          ReturnValue;
	} params;

	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetComponentRelativeRotation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class USceneComponent*         ParentComponent                (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class USceneComponent*         ChildComponent                 (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator UVictoryBPFunctionLibrary::GetComponentRelativeRotation(class USceneComponent* ParentComponent, class USceneComponent* ChildComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetComponentRelativeRotation");

	struct
	{
		class USceneComponent*         ParentComponent;
		class USceneComponent*         ChildComponent;
		struct FRotator                ReturnValue;
	} params;

	params.ParentComponent = ParentComponent;
	params.ChildComponent = ChildComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetComponentRelativeLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class USceneComponent*         ParentComponent                (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class USceneComponent*         ChildComponent                 (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UVictoryBPFunctionLibrary::GetComponentRelativeLocation(class USceneComponent* ParentComponent, class USceneComponent* ChildComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetComponentRelativeLocation");

	struct
	{
		class USceneComponent*         ParentComponent;
		class USceneComponent*         ChildComponent;
		struct FVector                 ReturnValue;
	} params;

	params.ParentComponent = ParentComponent;
	params.ChildComponent = ChildComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetCommandLine
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UVictoryBPFunctionLibrary::GetCommandLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetCommandLine");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  ActorClass                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Center                         (CPF_Parm, CPF_IsPlainOldData)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* UVictoryBPFunctionLibrary::GetClosestActorOfClassInRadiusOfLocation(class UObject* WorldContextObject, class UClass* ActorClass, const struct FVector& Center, float Radius, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfLocation");

	struct
	{
		class UObject*                 WorldContextObject;
		class UClass*                  ActorClass;
		struct FVector                 Center;
		float                          Radius;
		bool                           IsValid;
		class AActor*                  ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;
	params.Center = Center;
	params.Radius = Radius;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  ActorClass                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  ActorCenter                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* UVictoryBPFunctionLibrary::GetClosestActorOfClassInRadiusOfActor(class UObject* WorldContextObject, class UClass* ActorClass, class AActor* ActorCenter, float Radius, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfActor");

	struct
	{
		class UObject*                 WorldContextObject;
		class UClass*                  ActorClass;
		class AActor*                  ActorCenter;
		float                          Radius;
		bool                           IsValid;
		class AActor*                  ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;
	params.ActorCenter = ActorCenter;
	params.Radius = Radius;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetBoxContainingWorldPoints
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FVector>         Points                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FVector                 Center                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FVector                 Extent                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::GetBoxContainingWorldPoints(TArray<struct FVector> Points, struct FVector* Center, struct FVector* Extent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetBoxContainingWorldPoints");

	struct
	{
		TArray<struct FVector>         Points;
		struct FVector                 Center;
		struct FVector                 Extent;
	} params;

	params.Points = Points;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Center != nullptr)
		*Center = params.Center;
	if (Extent != nullptr)
		*Extent = params.Extent;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetAllWidgetsOfClass
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  WidgetClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UUserWidget*>     FoundWidgets                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           TopLevelOnly                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::GetAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetAllWidgetsOfClass");

	struct
	{
		class UObject*                 WorldContextObject;
		class UClass*                  WidgetClass;
		TArray<class UUserWidget*>     FoundWidgets;
		bool                           TopLevelOnly;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.WidgetClass = WidgetClass;
	params.TopLevelOnly = TopLevelOnly;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (FoundWidgets != nullptr)
		*FoundWidgets = params.FoundWidgets;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetAllBoneNamesBelowBone
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComp               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FName                   StartingBoneName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FName>           BoneNames                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UVictoryBPFunctionLibrary::GetAllBoneNamesBelowBone(class USkeletalMeshComponent* SkeletalMeshComp, const struct FName& StartingBoneName, TArray<struct FName>* BoneNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetAllBoneNamesBelowBone");

	struct
	{
		class USkeletalMeshComponent*  SkeletalMeshComp;
		struct FName                   StartingBoneName;
		TArray<struct FName>           BoneNames;
		int                            ReturnValue;
	} params;

	params.SkeletalMeshComp = SkeletalMeshComp;
	params.StartingBoneName = StartingBoneName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (BoneNames != nullptr)
		*BoneNames = params.BoneNames;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetActorRelativeRotation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  ParentActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  ChildActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator UVictoryBPFunctionLibrary::GetActorRelativeRotation(class AActor* ParentActor, class AActor* ChildActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetActorRelativeRotation");

	struct
	{
		class AActor*                  ParentActor;
		class AActor*                  ChildActor;
		struct FRotator                ReturnValue;
	} params;

	params.ParentActor = ParentActor;
	params.ChildActor = ChildActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetActorRelativeLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  ParentActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  ChildActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UVictoryBPFunctionLibrary::GetActorRelativeLocation(class AActor* ParentActor, class AActor* ChildActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetActorRelativeLocation");

	struct
	{
		class AActor*                  ParentActor;
		class AActor*                  ChildActor;
		struct FVector                 ReturnValue;
	} params;

	params.ParentActor = ParentActor;
	params.ChildActor = ChildActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.FlushPressedKeys
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::FlushPressedKeys(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.FlushPressedKeys");

	struct
	{
		class APlayerController*       PlayerController;
	} params;

	params.PlayerController = PlayerController;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.FlashGameOnTaskBar
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PC                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           FlashContinuous                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            MaxFlashCount                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            FlashFrequencyMilliseconds     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::FlashGameOnTaskBar(class APlayerController* PC, bool FlashContinuous, int MaxFlashCount, int FlashFrequencyMilliseconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.FlashGameOnTaskBar");

	struct
	{
		class APlayerController*       PC;
		bool                           FlashContinuous;
		int                            MaxFlashCount;
		int                            FlashFrequencyMilliseconds;
	} params;

	params.PC = PC;
	params.FlashContinuous = FlashContinuous;
	params.MaxFlashCount = MaxFlashCount;
	params.FlashFrequencyMilliseconds = FlashFrequencyMilliseconds;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringTextToFile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 SaveDirectory                  (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 JoyfulFileName                 (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 SaveText                       (CPF_Parm, CPF_ZeroConstructor)
// bool                           AllowOverWriting               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::FileIO__SaveStringTextToFile(const struct FString& SaveDirectory, const struct FString& JoyfulFileName, const struct FString& SaveText, bool AllowOverWriting)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringTextToFile");

	struct
	{
		struct FString                 SaveDirectory;
		struct FString                 JoyfulFileName;
		struct FString                 SaveText;
		bool                           AllowOverWriting;
		bool                           ReturnValue;
	} params;

	params.SaveDirectory = SaveDirectory;
	params.JoyfulFileName = JoyfulFileName;
	params.SaveText = SaveText;
	params.AllowOverWriting = AllowOverWriting;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringArrayToFile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 SaveDirectory                  (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 JoyfulFileName                 (CPF_Parm, CPF_ZeroConstructor)
// TArray<struct FString>         SaveText                       (CPF_Parm, CPF_ZeroConstructor)
// bool                           AllowOverWriting               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::FileIO__SaveStringArrayToFile(const struct FString& SaveDirectory, const struct FString& JoyfulFileName, TArray<struct FString> SaveText, bool AllowOverWriting)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringArrayToFile");

	struct
	{
		struct FString                 SaveDirectory;
		struct FString                 JoyfulFileName;
		TArray<struct FString>         SaveText;
		bool                           AllowOverWriting;
		bool                           ReturnValue;
	} params;

	params.SaveDirectory = SaveDirectory;
	params.JoyfulFileName = JoyfulFileName;
	params.SaveText = SaveText;
	params.AllowOverWriting = AllowOverWriting;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.EqualEqual_Vector2DVector2D
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               A                              (CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               B                              (CPF_Parm, CPF_IsPlainOldData)
// float                          ErrorTolerance                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::EqualEqual_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B, float ErrorTolerance)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.EqualEqual_Vector2DVector2D");

	struct
	{
		struct FVector2D               A;
		struct FVector2D               B;
		float                          ErrorTolerance;
		bool                           ReturnValue;
	} params;

	params.A = A;
	params.B = B;
	params.ErrorTolerance = ErrorTolerance;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.DrawCircle
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Center                         (CPF_Parm, CPF_IsPlainOldData)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            NumPoints                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Thickness                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            LineColor                      (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 YAxis                          (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 ZAxis                          (CPF_Parm, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           PersistentLines                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::DrawCircle(class UObject* WorldContextObject, const struct FVector& Center, float Radius, int NumPoints, float Thickness, const struct FLinearColor& LineColor, const struct FVector& YAxis, const struct FVector& ZAxis, float Duration, bool PersistentLines)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.DrawCircle");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 Center;
		float                          Radius;
		int                            NumPoints;
		float                          Thickness;
		struct FLinearColor            LineColor;
		struct FVector                 YAxis;
		struct FVector                 ZAxis;
		float                          Duration;
		bool                           PersistentLines;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Center = Center;
	params.Radius = Radius;
	params.NumPoints = NumPoints;
	params.Thickness = Thickness;
	params.LineColor = LineColor;
	params.YAxis = YAxis;
	params.ZAxis = ZAxis;
	params.Duration = Duration;
	params.PersistentLines = PersistentLines;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineFromSocket
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  Mesh                           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FVector                 EndPoint                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FName                   Socket                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            LineColor                      (CPF_Parm, CPF_IsPlainOldData)
// float                          Thickness                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::Draw__Thick3DLineFromSocket(class USkeletalMeshComponent* Mesh, const struct FVector& EndPoint, const struct FName& Socket, const struct FLinearColor& LineColor, float Thickness, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineFromSocket");

	struct
	{
		class USkeletalMeshComponent*  Mesh;
		struct FVector                 EndPoint;
		struct FName                   Socket;
		struct FLinearColor            LineColor;
		float                          Thickness;
		float                          Duration;
	} params;

	params.Mesh = Mesh;
	params.EndPoint = EndPoint;
	params.Socket = Socket;
	params.LineColor = LineColor;
	params.Thickness = Thickness;
	params.Duration = Duration;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineFromCharacterSocket
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  TheCharacter                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 EndPoint                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FName                   Socket                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            LineColor                      (CPF_Parm, CPF_IsPlainOldData)
// float                          Thickness                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::Draw__Thick3DLineFromCharacterSocket(class AActor* TheCharacter, const struct FVector& EndPoint, const struct FName& Socket, const struct FLinearColor& LineColor, float Thickness, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineFromCharacterSocket");

	struct
	{
		class AActor*                  TheCharacter;
		struct FVector                 EndPoint;
		struct FName                   Socket;
		struct FLinearColor            LineColor;
		float                          Thickness;
		float                          Duration;
	} params;

	params.TheCharacter = TheCharacter;
	params.EndPoint = EndPoint;
	params.Socket = Socket;
	params.LineColor = LineColor;
	params.Thickness = Thickness;
	params.Duration = Duration;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineBetweenActors
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  StartActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  EndActor                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            LineColor                      (CPF_Parm, CPF_IsPlainOldData)
// float                          Thickness                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::Draw__Thick3DLineBetweenActors(class AActor* StartActor, class AActor* EndActor, const struct FLinearColor& LineColor, float Thickness, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineBetweenActors");

	struct
	{
		class AActor*                  StartActor;
		class AActor*                  EndActor;
		struct FLinearColor            LineColor;
		float                          Thickness;
		float                          Duration;
	} params;

	params.StartActor = StartActor;
	params.EndActor = EndActor;
	params.LineColor = LineColor;
	params.Thickness = Thickness;
	params.Duration = Duration;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.DoesMaterialHaveParameter
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UMaterialInterface*      Mat                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Parameter                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::DoesMaterialHaveParameter(class UMaterialInterface* Mat, const struct FName& Parameter)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.DoesMaterialHaveParameter");

	struct
	{
		class UMaterialInterface*      Mat;
		struct FName                   Parameter;
		bool                           ReturnValue;
	} params;

	params.Mat = Mat;
	params.Parameter = Parameter;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.DistanceToSurface__DistaceOfPointToMeshSurface
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AStaticMeshActor*        TheSMA                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 TestPoint                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 ClosestSurfacePoint            (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVictoryBPFunctionLibrary::DistanceToSurface__DistaceOfPointToMeshSurface(class AStaticMeshActor* TheSMA, const struct FVector& TestPoint, struct FVector* ClosestSurfacePoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.DistanceToSurface__DistaceOfPointToMeshSurface");

	struct
	{
		class AStaticMeshActor*        TheSMA;
		struct FVector                 TestPoint;
		struct FVector                 ClosestSurfacePoint;
		float                          ReturnValue;
	} params;

	params.TheSMA = TheSMA;
	params.TestPoint = TestPoint;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ClosestSurfacePoint != nullptr)
		*ClosestSurfacePoint = params.ClosestSurfacePoint;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Data__GetCharacterBoneLocations
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  TheCharacter                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FVector>         BoneLocations                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::Data__GetCharacterBoneLocations(class AActor* TheCharacter, TArray<struct FVector>* BoneLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Data__GetCharacterBoneLocations");

	struct
	{
		class AActor*                  TheCharacter;
		TArray<struct FVector>         BoneLocations;
		bool                           ReturnValue;
	} params;

	params.TheCharacter = TheCharacter;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (BoneLocations != nullptr)
		*BoneLocations = params.BoneLocations;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateTextureRenderTarget2D
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// int                            Width                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Height                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            ClearColor                     (CPF_Parm, CPF_IsPlainOldData)
// float                          Gamma                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTextureRenderTarget2D*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UTextureRenderTarget2D* UVictoryBPFunctionLibrary::CreateTextureRenderTarget2D(int Width, int Height, const struct FLinearColor& ClearColor, float Gamma)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateTextureRenderTarget2D");

	struct
	{
		int                            Width;
		int                            Height;
		struct FLinearColor            ClearColor;
		float                          Gamma;
		class UTextureRenderTarget2D*  ReturnValue;
	} params;

	params.Width = Width;
	params.Height = Height;
	params.ClearColor = ClearColor;
	params.Gamma = Gamma;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreatePrimitiveComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  CompClass                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                Rotation                       (CPF_Parm, CPF_IsPlainOldData)
// class UPrimitiveComponent*     ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UPrimitiveComponent* UVictoryBPFunctionLibrary::CreatePrimitiveComponent(class UObject* WorldContextObject, class UClass* CompClass, const struct FName& Name, const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreatePrimitiveComponent");

	struct
	{
		class UObject*                 WorldContextObject;
		class UClass*                  CompClass;
		struct FName                   Name;
		struct FVector                 Location;
		struct FRotator                Rotation;
		class UPrimitiveComponent*     ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.CompClass = CompClass;
	params.Name = Name;
	params.Location = Location;
	params.Rotation = Rotation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreatePlane
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Center                         (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 Normal                         (CPF_Parm, CPF_IsPlainOldData)
// struct FPlane                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FPlane UVictoryBPFunctionLibrary::CreatePlane(const struct FVector& Center, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreatePlane");

	struct
	{
		struct FVector                 Center;
		struct FVector                 Normal;
		struct FPlane                  ReturnValue;
	} params;

	params.Center = Center;
	params.Normal = Normal;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateObject
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  TheObjectClass                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UObject* UVictoryBPFunctionLibrary::CreateObject(class UObject* WorldContextObject, class UClass* TheObjectClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateObject");

	struct
	{
		class UObject*                 WorldContextObject;
		class UClass*                  TheObjectClass;
		class UObject*                 ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.TheObjectClass = TheObjectClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateMD5Hash
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FileToHash                     (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 FileToStoreHashTo              (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::CreateMD5Hash(const struct FString& FileToHash, const struct FString& FileToStoreHashTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateMD5Hash");

	struct
	{
		struct FString                 FileToHash;
		struct FString                 FileToStoreHashTo;
		bool                           ReturnValue;
	} params;

	params.FileToHash = FileToHash;
	params.FileToStoreHashTo = FileToStoreHashTo;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CountOccurrancesOfSubString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 Source                         (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Substring                      (CPF_Parm, CPF_ZeroConstructor)
// TEnumAsByte<ESearchCase>       SearchCase                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UVictoryBPFunctionLibrary::CountOccurrancesOfSubString(const struct FString& Source, const struct FString& Substring, TEnumAsByte<ESearchCase> SearchCase)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CountOccurrancesOfSubString");

	struct
	{
		struct FString                 Source;
		struct FString                 Substring;
		TEnumAsByte<ESearchCase>       SearchCase;
		int                            ReturnValue;
	} params;

	params.Source = Source;
	params.Substring = Substring;
	params.SearchCase = SearchCase;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__VectorToRotator
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 TheVector                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator UVictoryBPFunctionLibrary::Conversions__VectorToRotator(const struct FVector& TheVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__VectorToRotator");

	struct
	{
		struct FVector                 TheVector;
		struct FRotator                ReturnValue;
	} params;

	params.TheVector = TheVector;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToVector
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 string                         (CPF_Parm, CPF_ZeroConstructor)
// struct FVector                 ConvertedVector                (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::Conversions__StringToVector(const struct FString& string, struct FVector* ConvertedVector, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToVector");

	struct
	{
		struct FString                 string;
		struct FVector                 ConvertedVector;
		bool                           IsValid;
	} params;

	params.string = string;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ConvertedVector != nullptr)
		*ConvertedVector = params.ConvertedVector;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToRotator
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 string                         (CPF_Parm, CPF_ZeroConstructor)
// struct FRotator                ConvertedRotator               (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::Conversions__StringToRotator(const struct FString& string, struct FRotator* ConvertedRotator, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToRotator");

	struct
	{
		struct FString                 string;
		struct FRotator                ConvertedRotator;
		bool                           IsValid;
	} params;

	params.string = string;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ConvertedRotator != nullptr)
		*ConvertedRotator = params.ConvertedRotator;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToColor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 string                         (CPF_Parm, CPF_ZeroConstructor)
// struct FLinearColor            ConvertedColor                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::Conversions__StringToColor(const struct FString& string, struct FLinearColor* ConvertedColor, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToColor");

	struct
	{
		struct FString                 string;
		struct FLinearColor            ConvertedColor;
		bool                           IsValid;
	} params;

	params.string = string;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ConvertedColor != nullptr)
		*ConvertedColor = params.ConvertedColor;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__RotatorToVector
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FRotator                TheRotator                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UVictoryBPFunctionLibrary::Conversions__RotatorToVector(const struct FRotator& TheRotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__RotatorToVector");

	struct
	{
		struct FRotator                TheRotator;
		struct FVector                 ReturnValue;
	} params;

	params.TheRotator = TheRotator;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__ColorToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            Color                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FString                 ColorAsString                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UVictoryBPFunctionLibrary::Conversions__ColorToString(const struct FLinearColor& Color, struct FString* ColorAsString)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__ColorToString");

	struct
	{
		struct FLinearColor            Color;
		struct FString                 ColorAsString;
	} params;

	params.Color = Color;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ColorAsString != nullptr)
		*ColorAsString = params.ColorAsString;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversion__FloatToRoundedInteger
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          IN_Float                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UVictoryBPFunctionLibrary::Conversion__FloatToRoundedInteger(float IN_Float)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversion__FloatToRoundedInteger");

	struct
	{
		float                          IN_Float;
		int                            ReturnValue;
	} params;

	params.IN_Float = IN_Float;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.constructRand
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UVictoryBPFunctionLibrary::constructRand()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.constructRand");

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Component_PrestreamTextures
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMeshComponent*          Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// float                          Seconds                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bEnableStreaming               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            CinematicTextureGroups         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::Component_PrestreamTextures(class UMeshComponent* Target, float Seconds, bool bEnableStreaming, int CinematicTextureGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Component_PrestreamTextures");

	struct
	{
		class UMeshComponent*          Target;
		float                          Seconds;
		bool                           bEnableStreaming;
		int                            CinematicTextureGroups;
	} params;

	params.Target = Target;
	params.Seconds = Seconds;
	params.bEnableStreaming = bEnableStreaming;
	params.CinematicTextureGroups = CinematicTextureGroups;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CompareMD5Hash
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 MD5HashFile1                   (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 MD5HashFile2                   (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::CompareMD5Hash(const struct FString& MD5HashFile1, const struct FString& MD5HashFile2)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CompareMD5Hash");

	struct
	{
		struct FString                 MD5HashFile1;
		struct FString                 MD5HashFile2;
		bool                           ReturnValue;
	} params;

	params.MD5HashFile1 = MD5HashFile1;
	params.MD5HashFile2 = MD5HashFile2;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Clone__StaticMeshActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AStaticMeshActor*        ToClone                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 LocationOffset                 (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                RotationOffset                 (CPF_Parm, CPF_IsPlainOldData)
// class AStaticMeshActor*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AStaticMeshActor* UVictoryBPFunctionLibrary::Clone__StaticMeshActor(class UObject* WorldContextObject, class AStaticMeshActor* ToClone, const struct FVector& LocationOffset, const struct FRotator& RotationOffset, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Clone__StaticMeshActor");

	struct
	{
		class UObject*                 WorldContextObject;
		bool                           IsValid;
		class AStaticMeshActor*        ToClone;
		struct FVector                 LocationOffset;
		struct FRotator                RotationOffset;
		class AStaticMeshActor*        ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.ToClone = ToClone;
	params.LocationOffset = LocationOffset;
	params.RotationOffset = RotationOffset;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ClientWindow__GameWindowIsForeGroundInOS
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::ClientWindow__GameWindowIsForeGroundInOS()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.ClientWindow__GameWindowIsForeGroundInOS");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CharacterMovement__SetMaxMoveSpeed
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ACharacter*              TheCharacter                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          NewMaxMoveSpeed                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::CharacterMovement__SetMaxMoveSpeed(class ACharacter* TheCharacter, float NewMaxMoveSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CharacterMovement__SetMaxMoveSpeed");

	struct
	{
		class ACharacter*              TheCharacter;
		float                          NewMaxMoveSpeed;
		bool                           ReturnValue;
	} params;

	params.TheCharacter = TheCharacter;
	params.NewMaxMoveSpeed = NewMaxMoveSpeed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Character__GetControllerRotation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  TheCharacter                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator UVictoryBPFunctionLibrary::Character__GetControllerRotation(class AActor* TheCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Character__GetControllerRotation");

	struct
	{
		class AActor*                  TheCharacter;
		struct FRotator                ReturnValue;
	} params;

	params.TheCharacter = TheCharacter;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_SaveImage
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class USceneCaptureComponent2D* Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FString                 ImagePath                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)
// struct FLinearColor            ClearColour                    (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::CaptureComponent2D_SaveImage(class USceneCaptureComponent2D* Target, const struct FString& ImagePath, const struct FLinearColor& ClearColour)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_SaveImage");

	struct
	{
		class USceneCaptureComponent2D* Target;
		struct FString                 ImagePath;
		struct FLinearColor            ClearColour;
		bool                           ReturnValue;
	} params;

	params.Target = Target;
	params.ImagePath = ImagePath;
	params.ClearColour = ClearColour;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_Project
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class USceneCaptureComponent2D* Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               OutPixelLocation               (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::CaptureComponent2D_Project(class USceneCaptureComponent2D* Target, const struct FVector& Location, struct FVector2D* OutPixelLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_Project");

	struct
	{
		class USceneCaptureComponent2D* Target;
		struct FVector                 Location;
		struct FVector2D               OutPixelLocation;
		bool                           ReturnValue;
	} params;

	params.Target = Target;
	params.Location = Location;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutPixelLocation != nullptr)
		*OutPixelLocation = params.OutPixelLocation;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_SaveImage
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class ASceneCapture2D*         Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ImagePath                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)
// struct FLinearColor            ClearColour                    (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::Capture2D_SaveImage(class ASceneCapture2D* Target, const struct FString& ImagePath, const struct FLinearColor& ClearColour)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_SaveImage");

	struct
	{
		class ASceneCapture2D*         Target;
		struct FString                 ImagePath;
		struct FLinearColor            ClearColour;
		bool                           ReturnValue;
	} params;

	params.Target = Target;
	params.ImagePath = ImagePath;
	params.ClearColour = ClearColour;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_Project
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class ASceneCapture2D*         Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               OutPixelLocation               (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::Capture2D_Project(class ASceneCapture2D* Target, const struct FVector& Location, struct FVector2D* OutPixelLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_Project");

	struct
	{
		class ASceneCapture2D*         Target;
		struct FVector                 Location;
		struct FVector2D               OutPixelLocation;
		bool                           ReturnValue;
	} params;

	params.Target = Target;
	params.Location = Location;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutPixelLocation != nullptr)
		*OutPixelLocation = params.OutPixelLocation;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Calcs__ClosestPointToSourcePoint
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 Source                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// TArray<struct FVector>         OtherPoints                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FVector                 ClosestPoint                   (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVictoryBPFunctionLibrary::Calcs__ClosestPointToSourcePoint(const struct FVector& Source, TArray<struct FVector> OtherPoints, struct FVector* ClosestPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Calcs__ClosestPointToSourcePoint");

	struct
	{
		struct FVector                 Source;
		TArray<struct FVector>         OtherPoints;
		struct FVector                 ClosestPoint;
		float                          ReturnValue;
	} params;

	params.Source = Source;
	params.OtherPoints = OtherPoints;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ClosestPoint != nullptr)
		*ClosestPoint = params.ClosestPoint;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Array_Sort
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<int>                    TargetArray                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           bAscendingOrder                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   VariableName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::Array_Sort(TArray<int> TargetArray, bool bAscendingOrder, const struct FName& VariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Array_Sort");

	struct
	{
		TArray<int>                    TargetArray;
		bool                           bAscendingOrder;
		struct FName                   VariableName;
	} params;

	params.TargetArray = TargetArray;
	params.bAscendingOrder = bAscendingOrder;
	params.VariableName = VariableName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Array_IsValidIndex
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<int>                    TargetArray                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::Array_IsValidIndex(TArray<int> TargetArray, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Array_IsValidIndex");

	struct
	{
		TArray<int>                    TargetArray;
		int                            Index;
		bool                           ReturnValue;
	} params;

	params.TargetArray = TargetArray;
	params.Index = Index;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.AppendMultiple
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 A                              (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 B                              (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UVictoryBPFunctionLibrary::AppendMultiple(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.AppendMultiple");

	struct
	{
		struct FString                 A;
		struct FString                 B;
		struct FString                 ReturnValue;
	} params;

	params.A = A;
	params.B = B;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsetsFromRotation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  AnimBPOwner                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                TheRotation                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          Pitch                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Yaw                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::Animation__GetAimOffsetsFromRotation(class AActor* AnimBPOwner, const struct FRotator& TheRotation, float* Pitch, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsetsFromRotation");

	struct
	{
		class AActor*                  AnimBPOwner;
		struct FRotator                TheRotation;
		float                          Pitch;
		float                          Yaw;
		bool                           ReturnValue;
	} params;

	params.AnimBPOwner = AnimBPOwner;
	params.TheRotation = TheRotation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Pitch != nullptr)
		*Pitch = params.Pitch;
	if (Yaw != nullptr)
		*Yaw = params.Yaw;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsets
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  AnimBPOwner                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Pitch                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Yaw                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::Animation__GetAimOffsets(class AActor* AnimBPOwner, float* Pitch, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsets");

	struct
	{
		class AActor*                  AnimBPOwner;
		float                          Pitch;
		float                          Yaw;
		bool                           ReturnValue;
	} params;

	params.AnimBPOwner = AnimBPOwner;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Pitch != nullptr)
		*Pitch = params.Pitch;
	if (Yaw != nullptr)
		*Yaw = params.Yaw;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.AddToStreamingLevels
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLevelStreamInstanceInfo LevelInstanceInfo              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UVictoryBPFunctionLibrary::AddToStreamingLevels(class UObject* WorldContextObject, const struct FLevelStreamInstanceInfo& LevelInstanceInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.AddToStreamingLevels");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLevelStreamInstanceInfo LevelInstanceInfo;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.LevelInstanceInfo = LevelInstanceInfo;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.AddToActorRotation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  TheActor                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                AddRot                         (CPF_Parm, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::AddToActorRotation(class AActor* TheActor, const struct FRotator& AddRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.AddToActorRotation");

	struct
	{
		class AActor*                  TheActor;
		struct FRotator                AddRot;
	} params;

	params.TheActor = TheActor;
	params.AddRot = AddRot;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor_PrestreamTextures
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Seconds                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bEnableStreaming               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            CinematicTextureGroups         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPFunctionLibrary::Actor_PrestreamTextures(class AActor* Target, float Seconds, bool bEnableStreaming, int CinematicTextureGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor_PrestreamTextures");

	struct
	{
		class AActor*                  Target;
		float                          Seconds;
		bool                           bEnableStreaming;
		int                            CinematicTextureGroups;
	} params;

	params.Target = Target;
	params.Seconds = Seconds;
	params.bEnableStreaming = bEnableStreaming;
	params.CinematicTextureGroups = CinematicTextureGroups;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor__TeleportToActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  ActorToTeleport                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  DestinationActor               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPFunctionLibrary::Actor__TeleportToActor(class AActor* ActorToTeleport, class AActor* DestinationActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor__TeleportToActor");

	struct
	{
		class AActor*                  ActorToTeleport;
		class AActor*                  DestinationActor;
		bool                           ReturnValue;
	} params;

	params.ActorToTeleport = ActorToTeleport;
	params.DestinationActor = DestinationActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor__GetAttachedActors
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  ParentActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class AActor*>          ActorsArray                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UVictoryBPFunctionLibrary::Actor__GetAttachedActors(class AActor* ParentActor, TArray<class AActor*>* ActorsArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor__GetAttachedActors");

	struct
	{
		class AActor*                  ParentActor;
		TArray<class AActor*>          ActorsArray;
	} params;

	params.ParentActor = ParentActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ActorsArray != nullptr)
		*ActorsArray = params.ActorsArray;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetPlayerController
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  TheCharacter                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerController*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class APlayerController* UVictoryBPFunctionLibrary::Accessor__GetPlayerController(class AActor* TheCharacter, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetPlayerController");

	struct
	{
		class AActor*                  TheCharacter;
		bool                           IsValid;
		class APlayerController*       ReturnValue;
	} params;

	params.TheCharacter = TheCharacter;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetNameAsString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 TheObject                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UVictoryBPFunctionLibrary::Accessor__GetNameAsString(class UObject* TheObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetNameAsString");

	struct
	{
		class UObject*                 TheObject;
		struct FString                 ReturnValue;
	} params;

	params.TheObject = TheObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetCharacterSkeletalMesh
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  TheCharacter                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USkeletalMeshComponent*  ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class USkeletalMeshComponent* UVictoryBPFunctionLibrary::Accessor__GetCharacterSkeletalMesh(class AActor* TheCharacter, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetCharacterSkeletalMesh");

	struct
	{
		class AActor*                  TheCharacter;
		bool                           IsValid;
		class USkeletalMeshComponent*  ReturnValue;
	} params;

	params.TheCharacter = TheCharacter;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPHTML.VictoryHTML5_SetCursorVisible
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           MakeVisible                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryBPHTML::VictoryHTML5_SetCursorVisible(bool MakeVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPHTML.VictoryHTML5_SetCursorVisible");

	struct
	{
		bool                           MakeVisible;
	} params;

	params.MakeVisible = MakeVisible;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryBPHTML.IsHTML
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVictoryBPHTML::IsHTML()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPHTML.IsHTML");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryPC.VictoryPlaySpeechSound
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USoundBase*              Sound                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          VolumeMultiplier               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PitchMultiplier                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          StartTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAudioComponent*         ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UAudioComponent* AVictoryPC::VictoryPlaySpeechSound(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryPC.VictoryPlaySpeechSound");

	struct
	{
		class USoundBase*              Sound;
		float                          VolumeMultiplier;
		float                          PitchMultiplier;
		float                          StartTime;
		class UAudioComponent*         ReturnValue;
	} params;

	params.Sound = Sound;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryPC.VictoryPC_GetMyIP_SendRequest
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AVictoryPC::VictoryPC_GetMyIP_SendRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryPC.VictoryPC_GetMyIP_SendRequest");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryPC.VictoryPC_GetMyIP_DataReceived
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 YourIP                         (CPF_Parm, CPF_ZeroConstructor)

void AVictoryPC::VictoryPC_GetMyIP_DataReceived(const struct FString& YourIP)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryPC.VictoryPC_GetMyIP_DataReceived");

	struct
	{
		struct FString                 YourIP;
	} params;

	params.YourIP = YourIP;

	UObject::ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryPC.Subtitles_CPPDelegate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<struct FSubtitleCue>    VictorySubtitles               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// float                          CueDuration                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AVictoryPC::Subtitles_CPPDelegate(TArray<struct FSubtitleCue> VictorySubtitles, float CueDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryPC.Subtitles_CPPDelegate");

	struct
	{
		TArray<struct FSubtitleCue>    VictorySubtitles;
		float                          CueDuration;
	} params;

	params.VictorySubtitles = VictorySubtitles;
	params.CueDuration = CueDuration;

	UObject::ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryPC.OnVictorySubtitlesQueued
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FVictorySubtitleCue> VictorySubtitles               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// float                          CueDuration                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AVictoryPC::OnVictorySubtitlesQueued(TArray<struct FVictorySubtitleCue> VictorySubtitles, float CueDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryPC.OnVictorySubtitlesQueued");

	struct
	{
		TArray<struct FVictorySubtitleCue> VictorySubtitles;
		float                          CueDuration;
	} params;

	params.VictorySubtitles = VictorySubtitles;
	params.CueDuration = CueDuration;

	UObject::ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Vector__Remove
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor)

void UVictoryTMapComp::String_Vector__Remove(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Vector__Remove");

	struct
	{
		struct FString                 Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Vector__Get
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UVictoryTMapComp::String_Vector__Get(const struct FString& Key, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Vector__Get");

	struct
	{
		struct FString                 Key;
		bool                           IsValid;
		struct FVector                 ReturnValue;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Vector__Clear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UVictoryTMapComp::String_Vector__Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Vector__Clear");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Vector__AddPair
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor)
// struct FVector                 Value                          (CPF_Parm, CPF_IsPlainOldData)

void UVictoryTMapComp::String_Vector__AddPair(const struct FString& Key, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Vector__AddPair");

	struct
	{
		struct FString                 Key;
		struct FVector                 Value;
	} params;

	params.Key = Key;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryTMapComp.String_String__Remove
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor)

void UVictoryTMapComp::String_String__Remove(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_String__Remove");

	struct
	{
		struct FString                 Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryTMapComp.String_String__Get
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UVictoryTMapComp::String_String__Get(const struct FString& Key, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_String__Get");

	struct
	{
		struct FString                 Key;
		bool                           IsValid;
		struct FString                 ReturnValue;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryTMapComp.String_String__Clear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UVictoryTMapComp::String_String__Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_String__Clear");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryTMapComp.String_String__AddPair
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Value                          (CPF_Parm, CPF_ZeroConstructor)

void UVictoryTMapComp::String_String__AddPair(const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_String__AddPair");

	struct
	{
		struct FString                 Key;
		struct FString                 Value;
	} params;

	params.Key = Key;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Rotator__Remove
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor)

void UVictoryTMapComp::String_Rotator__Remove(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Rotator__Remove");

	struct
	{
		struct FString                 Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Rotator__Get
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator UVictoryTMapComp::String_Rotator__Get(const struct FString& Key, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Rotator__Get");

	struct
	{
		struct FString                 Key;
		bool                           IsValid;
		struct FRotator                ReturnValue;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Rotator__Clear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UVictoryTMapComp::String_Rotator__Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Rotator__Clear");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Rotator__AddPair
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor)
// struct FRotator                Value                          (CPF_Parm, CPF_IsPlainOldData)

void UVictoryTMapComp::String_Rotator__AddPair(const struct FString& Key, const struct FRotator& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Rotator__AddPair");

	struct
	{
		struct FString                 Key;
		struct FRotator                Value;
	} params;

	params.Key = Key;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Int__Remove
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor)

void UVictoryTMapComp::String_Int__Remove(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Int__Remove");

	struct
	{
		struct FString                 Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Int__Get
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UVictoryTMapComp::String_Int__Get(const struct FString& Key, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Int__Get");

	struct
	{
		struct FString                 Key;
		bool                           IsValid;
		int                            ReturnValue;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Int__Clear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UVictoryTMapComp::String_Int__Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Int__Clear");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Int__AddPair
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor)
// int                            Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryTMapComp::String_Int__AddPair(const struct FString& Key, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Int__AddPair");

	struct
	{
		struct FString                 Key;
		int                            Value;
	} params;

	params.Key = Key;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Actor__Remove
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor)

void UVictoryTMapComp::String_Actor__Remove(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Actor__Remove");

	struct
	{
		struct FString                 Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Actor__Get
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* UVictoryTMapComp::String_Actor__Get(const struct FString& Key, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Actor__Get");

	struct
	{
		struct FString                 Key;
		bool                           IsValid;
		class AActor*                  ReturnValue;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Actor__Clear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UVictoryTMapComp::String_Actor__Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Actor__Clear");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Actor__AddPair
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor)
// class AActor*                  Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryTMapComp::String_Actor__AddPair(const struct FString& Key, class AActor* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Actor__AddPair");

	struct
	{
		struct FString                 Key;
		class AActor*                  Value;
	} params;

	params.Key = Key;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryTMapComp.Int_Vector__Remove
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryTMapComp::Int_Vector__Remove(int Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.Int_Vector__Remove");

	struct
	{
		int                            Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryTMapComp.Int_Vector__Get
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UVictoryTMapComp::Int_Vector__Get(int Key, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.Int_Vector__Get");

	struct
	{
		int                            Key;
		bool                           IsValid;
		struct FVector                 ReturnValue;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryTMapComp.Int_Vector__Clear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UVictoryTMapComp::Int_Vector__Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.Int_Vector__Clear");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryTMapComp.Int_Vector__AddPair
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// int                            Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Value                          (CPF_Parm, CPF_IsPlainOldData)

void UVictoryTMapComp::Int_Vector__AddPair(int Key, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.Int_Vector__AddPair");

	struct
	{
		int                            Key;
		struct FVector                 Value;
	} params;

	params.Key = Key;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryTMapComp.Int_Float__Remove
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryTMapComp::Int_Float__Remove(int Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.Int_Float__Remove");

	struct
	{
		int                            Key;
		float                          Value;
	} params;

	params.Key = Key;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryTMapComp.Int_Float__Get
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVictoryTMapComp::Int_Float__Get(int Key, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.Int_Float__Get");

	struct
	{
		int                            Key;
		bool                           IsValid;
		float                          ReturnValue;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryTMapComp.Int_Float__Clear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UVictoryTMapComp::Int_Float__Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.Int_Float__Clear");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VictoryBPLibrary.VictoryTMapComp.Int_Float__AddPair
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVictoryTMapComp::Int_Float__AddPair(int Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.Int_Float__AddPair");

	struct
	{
		int                            Key;
		float                          Value;
	} params;

	params.Key = Key;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
