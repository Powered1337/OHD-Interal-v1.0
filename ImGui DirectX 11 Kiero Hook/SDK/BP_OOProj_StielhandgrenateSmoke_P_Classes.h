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
	 * BlueprintGeneratedClass BP_OOProj_StielhandgrenateSmoke_P.BP_OOProj_StielhandgrenateSmoke_P_C
	 * Size -> 0x0014 (FullSize[0x0438] - InheritedSize[0x0424])
	 */
	class ABP_OOProj_StielhandgrenateSmoke_P_C : public ABP_HDProj_SmokeGrenadeBase_C
	{
	public:
		unsigned char                                              UnknownData_U80R[0x4];                                   // 0x0424(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0428(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URotatingMovementComponent*                          RotatingMovement;                                        // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
		void ExecuteUbergraph_BP_OOProj_StielhandgrenateSmoke_P(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
