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
	 * BlueprintGeneratedClass BP_HDProj_SmokeGrenadeBase.BP_HDProj_SmokeGrenadeBase_C
	 * Size -> 0x005C (FullSize[0x0424] - InheritedSize[0x03C8])
	 */
	class ABP_HDProj_SmokeGrenadeBase_C : public ABP_HDProj_GrenadeBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCapsuleComponent*                                   VisibilityCapsule;                                       // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            SmokePS;                                                 // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             VisibilityTimeline_Location_D0E2F33E4AF1451ABB7ED786E44EA639; // 0x03E0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VisibilityTimeline_HalfHeight_D0E2F33E4AF1451ABB7ED786E44EA639; // 0x03EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VisibilityTimeline_Radius_D0E2F33E4AF1451ABB7ED786E44EA639; // 0x03F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         VisibilityTimeline__Direction_D0E2F33E4AF1451ABB7ED786E44EA639; // 0x03F4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P295[0x3];                                   // 0x03F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  VisibilityTimeline;                                      // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         VisibilityTimelineRadiusCurve;                           // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         VisibilityTimelineHalfHeightCurve;                       // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveVector*                                        VisibilityTimelineLocationCurve;                         // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            VisibilityCapsuleRotation;                               // 0x0418(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateVisibilityTimeline(float InRadius, float InHalfHeight, const struct FVector& InLocation);
		void StartVisibilityTimeline();
		void VisibilityTimeline__FinishedFunc();
		void VisibilityTimeline__UpdateFunc();
		void ReceivePayloadActivated(const struct FHitResult& ImpactHitResult);
		void ExecuteUbergraph_BP_HDProj_SmokeGrenadeBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
