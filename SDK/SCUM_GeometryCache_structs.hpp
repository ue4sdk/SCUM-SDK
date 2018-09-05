#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_CoreUObject_classes.hpp"
#include "SCUM_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GeometryCache.GeometryCacheMeshData
// 0x0050
struct FGeometryCacheMeshData
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct GeometryCache.TrackRenderData
// 0x0050
struct FTrackRenderData
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct GeometryCache.GeometryCacheMeshBatchInfo
// 0x000C
struct FGeometryCacheMeshBatchInfo
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
