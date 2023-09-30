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
	 * BlueprintGeneratedClass BP_HDWeap_MedicBoxBase.BP_HDWeap_MedicBoxBase_C
	 * Size -> 0x0019 (FullSize[0x0AA9] - InheritedSize[0x0A90])
	 */
	class ABP_HDWeap_MedicBoxBase_C : public ABP_HDWeap_AoFWeapBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A90(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bInfiniteRestore;                                        // 0x0A98(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K6HJ[0x3];                                   // 0x0A99(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HealthRestoreRate;                                       // 0x0A9C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TotalRestoreAmount;                                      // 0x0AA0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HealthRestoreRemaining;                                  // 0x0AA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              AuraTeam;                                                // 0x0AA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetIconVisibilityOverlappingPawns(bool bVisibility);
		void SetIconVisibility(class ADFBaseCharacter* Pawn, bool Visibility);
		void HealPawn(float Heal, class ADFBaseCharacter* Pawn);
		void HealingAuraEffect();
		void UserConstructionScript();
		void DoAuraEffect();
		void BndEvt__AreaOfEffectCollisionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__AreaOfEffectCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnAuraEffectBegin();
		void OnAuraEffectEnd();
		void ExecuteUbergraph_BP_HDWeap_MedicBoxBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
