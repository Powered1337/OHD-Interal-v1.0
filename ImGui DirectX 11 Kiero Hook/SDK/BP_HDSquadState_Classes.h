#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: 4.5.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_HDSquadState.BP_HDSquadState_C
	 * Size -> 0x0010 (FullSize[0x0470] - InheritedSize[0x0460])
	 */
	class ABP_HDSquadState_C : public AHDSquadState
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDFCommChannelDefinition*                            SquadCommChannelDef;                                     // 0x0468(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
