#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_UMG_enums.hpp"
#include "SCUM_Engine_classes.hpp"
#include "SCUM_CoreUObject_classes.hpp"
#include "SCUM_MovieScene_classes.hpp"
#include "SCUM_PropertyPath_classes.hpp"
#include "SCUM_Slate_classes.hpp"
#include "SCUM_SlateCore_classes.hpp"
#include "SCUM_InputCore_classes.hpp"
#include "SCUM_MovieSceneTracks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UMG.WidgetTransform
// 0x001C
struct FWidgetTransform
{
	struct FVector2D                                   Translation;                                              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector2D                                   Scale;                                                    // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector2D                                   Shear;                                                    // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              Angle;                                                    // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct UMG.EventReply
// 0x00B8
struct FEventReply
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
};

// ScriptStruct UMG.NamedSlotBinding
// 0x0010
struct FNamedSlotBinding
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     Content;                                                  // 0x0008(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct UMG.PaintContext
// 0x0030
struct FPaintContext
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct UMG.ShapedTextOptions
// 0x0003
struct FShapedTextOptions
{
	unsigned char                                      bOverride_TextShapingMethod : 1;                          // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bOverride_TextFlowDirection : 1;                          // 0x0000(0x0001) (CPF_Edit)
	ETextShapingMethod                                 TextShapingMethod;                                        // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	ETextFlowDirection                                 TextFlowDirection;                                        // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct UMG.DynamicPropertyPath
// 0x0000 (0x0028 - 0x0028)
struct FDynamicPropertyPath : public FCachedPropertyPath
{

};

// ScriptStruct UMG.AnchorData
// 0x0028
struct FAnchorData
{
	struct FMargin                                     Offsets;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FAnchors                                    Anchors;                                                  // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FVector2D                                   Alignment;                                                // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
};

// ScriptStruct UMG.SlateChildSize
// 0x0008
struct FSlateChildSize
{
	float                                              Value;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ESlateSizeRule>                        SizeRule;                                                 // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct UMG.MovieScene2DTransformMask
// 0x0004
struct FMovieScene2DTransformMask
{
	uint32_t                                           Mask;                                                     // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct UMG.SlateMeshVertex
// 0x003C
struct FSlateMeshVertex
{
	struct FVector2D                                   Position;                                                 // 0x0000(0x0008) (CPF_IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0008(0x0004) (CPF_IsPlainOldData)
	struct FVector2D                                   UV0;                                                      // 0x000C(0x0008) (CPF_IsPlainOldData)
	struct FVector2D                                   UV1;                                                      // 0x0014(0x0008) (CPF_IsPlainOldData)
	struct FVector2D                                   UV2;                                                      // 0x001C(0x0008) (CPF_IsPlainOldData)
	struct FVector2D                                   UV3;                                                      // 0x0024(0x0008) (CPF_IsPlainOldData)
	struct FVector2D                                   UV4;                                                      // 0x002C(0x0008) (CPF_IsPlainOldData)
	struct FVector2D                                   UV5;                                                      // 0x0034(0x0008) (CPF_IsPlainOldData)
};

// ScriptStruct UMG.WidgetAnimationBinding
// 0x0028
struct FWidgetAnimationBinding
{
	struct FName                                       WidgetName;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SlotWidgetName;                                           // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       AnimationGuid;                                            // 0x0010(0x0010) (CPF_IsPlainOldData)
	bool                                               bIsRootWidget;                                            // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct UMG.DelegateRuntimeBinding
// 0x0050
struct FDelegateRuntimeBinding
{
	struct FString                                     ObjectName;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FName                                       PropertyName;                                             // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       FunctionName;                                             // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDynamicPropertyPath                        SourcePath;                                               // 0x0020(0x0028)
	EBindingKind                                       Kind;                                                     // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct UMG.WidgetNavigationData
// 0x0028
struct FWidgetNavigationData
{
	EUINavigationRule                                  Rule;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       WidgetToFocus;                                            // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UWidget>                      Widget;                                                   // 0x0010(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FScriptDelegate                             CustomDelegate;                                           // 0x0018(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
};

// ScriptStruct UMG.MovieScene2DTransformSectionTemplate
// 0x0468 (0x04B0 - 0x0048)
struct FMovieScene2DTransformSectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel                     Translation[0x2];                                         // 0x0048(0x00A0)
	struct FMovieSceneFloatChannel                     Rotation;                                                 // 0x0188(0x00A0)
	struct FMovieSceneFloatChannel                     Scale[0x2];                                               // 0x0228(0x00A0)
	struct FMovieSceneFloatChannel                     Shear[0x2];                                               // 0x0368(0x00A0)
	EMovieSceneBlendType                               BlendType;                                                // 0x04A8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04A9(0x0003) MISSED OFFSET
	struct FMovieScene2DTransformMask                  Mask;                                                     // 0x04AC(0x0004)
};

// ScriptStruct UMG.MovieSceneMarginSectionTemplate
// 0x0288 (0x02D0 - 0x0048)
struct FMovieSceneMarginSectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel                     TopCurve;                                                 // 0x0048(0x00A0)
	struct FMovieSceneFloatChannel                     LeftCurve;                                                // 0x00E8(0x00A0)
	struct FMovieSceneFloatChannel                     RightCurve;                                               // 0x0188(0x00A0)
	struct FMovieSceneFloatChannel                     BottomCurve;                                              // 0x0228(0x00A0)
	EMovieSceneBlendType                               BlendType;                                                // 0x02C8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
};

// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// 0x0010 (0x0060 - 0x0050)
struct FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
	TArray<struct FName>                               BrushPropertyNamePath;                                    // 0x0050(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct UMG.RichTextStyleRow
// 0x01E0 (0x01E8 - 0x0008)
struct FRichTextStyleRow : public FTableRowBase
{
	struct FTextBlockStyle                             TextStyle;                                                // 0x0008(0x01E0) (CPF_Edit)
};

// ScriptStruct UMG.RichImageRow
// 0x0088 (0x0090 - 0x0008)
struct FRichImageRow : public FTableRowBase
{
	struct FSlateBrush                                 Brush;                                                    // 0x0008(0x0088) (CPF_Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
