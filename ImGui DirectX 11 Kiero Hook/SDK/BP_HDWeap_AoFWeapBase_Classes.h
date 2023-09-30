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
	 * BlueprintGeneratedClass BP_HDWeap_AoFWeapBase.BP_HDWeap_AoFWeapBase_C
	 * Size -> 0x003C (FullSize[0x0A90] - InheritedSize[0x0A54])
	 */
	class ABP_HDWeap_AoFWeapBase_C : public ABP_HDWeaponBase_C
	{
	public:
		unsigned char                                              UnknownData_F2JF[0x4];                                   // 0x0A54(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A58(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USphereComponent*                                    AreaOfEffectCollisionSphere;                             // 0x0A60(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      AuraRadius;                                              // 0x0A68(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AuraEffectTimerInterval;                                 // 0x0A6C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        AuraEffectTimerHandle;                                   // 0x0A70(0x0008) Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsTimerSet;                                             // 0x0A78(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LSJU[0x7];                                   // 0x0A79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ADFBaseCharacter*>                            AffectedPawns;                                           // 0x0A80(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash

	public:
		bool CanFire();
		void InitAffectedPawns();
		void UserConstructionScript();
		void ReceiveTick(float DeltaSeconds);
		void DoAuraEffect();
		void OnAuraEffectBegin();
		void OnAuraEffectEnd();
		void ExecuteUbergraph_BP_HDWeap_AoFWeapBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
