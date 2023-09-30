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
	 * AnimBlueprintGeneratedClass ABP_HDWeapon.ABP_HDWeapon_C
	 * Size -> 0x0230 (FullSize[0x04B0] - InheritedSize[0x0280])
	 */
	class UABP_HDWeapon_C : public UHDWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0288(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x02B8(0x00A0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0358(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x03A0(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0418(0x0078)
		bool                                                       bEmpty;                                                  // 0x0490(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GE7U[0x7];                                   // 0x0491(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       BasePoseAnim;                                            // 0x0498(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       EmptyBasePoseAnim;                                       // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_HDWeaponBase_C*                                  OwningWeapon;                                            // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		float PlayEquipMontage(class UAnimMontage* MontageToPlay);
		float PlayFireMontage(class UAnimMontage* MontageToPlay, bool bFireLast, bool bAiming);
		float PlayReloadMontage(class UAnimMontage* MontageToPlay, bool bFullReload);
		float PlayUnEquipMontage(class UAnimMontage* MontageToPlay);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void PlayWeaponFPPMontage(class UAnimMontage* MontageToPlay, bool bForceDisableAutoBlendOut, float* PlayDuration);
		void AnimNotify_HideMag();
		void AnimNotify_ShowMag();
		void AnimNotify_HideBullet();
		void AnimNotify_ShowBullet();
		void WeaponFire(bool bLastFire);
		void WeaponReloadFinished(class ADFBaseGun* Gun);
		void BlueprintUpdateWeaponOwnerRefs(class ADFBaseWeapon* NewWeap);
		void BlueprintInitializeAnimation();
		void BlueprintBeginPlay();
		void ExecuteUbergraph_ABP_HDWeapon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
