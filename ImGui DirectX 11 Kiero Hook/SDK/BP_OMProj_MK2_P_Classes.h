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
	 * BlueprintGeneratedClass BP_OMProj_MK2_P.BP_OMProj_MK2_P_C
	 * Size -> 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
	 */
	class ABP_OMProj_MK2_P_C : public ABP_HDProj_GrenadeBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URotatingMovementComponent*                          RotatingMovement;                                        // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
		void ExecuteUbergraph_BP_OMProj_MK2_P(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
