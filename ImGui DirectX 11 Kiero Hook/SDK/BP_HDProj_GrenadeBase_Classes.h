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
	 * BlueprintGeneratedClass BP_HDProj_GrenadeBase.BP_HDProj_GrenadeBase_C
	 * Size -> 0x0038 (FullSize[0x03C8] - InheritedSize[0x0390])
	 */
	class ABP_HDProj_GrenadeBase_C : public AHDProj_Grenade
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0390(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    ProjectileCollision;                                     // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     ExplosionPS;                                             // 0x03A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          ExplosionSnd;                                            // 0x03B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              CameraShake;                                             // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CameraShakeInnerRadius;                                  // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CameraShakeOuterRadius;                                  // 0x03C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceivePayloadActivated(const struct FHitResult& ImpactHitResult);
		void ExecuteUbergraph_BP_HDProj_GrenadeBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
