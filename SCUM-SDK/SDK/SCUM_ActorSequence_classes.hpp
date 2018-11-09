#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ActorSequence_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ActorSequence.ActorSequence
// 0x0028 (0x0370 - 0x0348)
class UActorSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0348(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FActorSequenceObjectReferenceMap            ObjectReferences;                                         // 0x0350(0x0020)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ActorSequence.ActorSequence");
		return ptr;
	}

};


// Class ActorSequence.ActorSequenceComponent
// 0x0058 (0x0148 - 0x00F0)
class UActorSequenceComponent : public UActorComponent
{
public:
	bool                                               bAutoPlay;                                                // 0x00F0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x00F8(0x0040) (CPF_Edit)
	class UActorSequence*                              Sequence;                                                 // 0x0138(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UActorSequencePlayer*                        SequencePlayer;                                           // 0x0140(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ActorSequence.ActorSequenceComponent");
		return ptr;
	}

};


// Class ActorSequence.ActorSequencePlayer
// 0x0000 (0x07E0 - 0x07E0)
class UActorSequencePlayer : public UMovieSceneSequencePlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ActorSequence.ActorSequencePlayer");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
