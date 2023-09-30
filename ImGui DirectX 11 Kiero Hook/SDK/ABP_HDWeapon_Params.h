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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ABP_HDWeapon.ABP_HDWeapon_C.PlayEquipMontage
	 */
	struct UABP_HDWeapon_C_PlayEquipMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDWeapon.ABP_HDWeapon_C.PlayFireMontage
	 */
	struct UABP_HDWeapon_C_PlayFireMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFireLast;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAiming;                                                 // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EJG1[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDWeapon.ABP_HDWeapon_C.PlayReloadMontage
	 */
	struct UABP_HDWeapon_C_PlayReloadMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFullReload;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M963[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDWeapon.ABP_HDWeapon_C.PlayUnEquipMontage
	 */
	struct UABP_HDWeapon_C_PlayUnEquipMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDWeapon.ABP_HDWeapon_C.AnimGraph
	 */
	struct UABP_HDWeapon_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_HDWeapon.ABP_HDWeapon_C.PlayWeaponFPPMontage
	 */
	struct UABP_HDWeapon_C_PlayWeaponFPPMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bForceDisableAutoBlendOut;                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_684H[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PlayDuration;                                            // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDWeapon.ABP_HDWeapon_C.AnimNotify_HideMag
	 */
	struct UABP_HDWeapon_C_AnimNotify_HideMag_Params
	{	};

	/**
	 * Function ABP_HDWeapon.ABP_HDWeapon_C.AnimNotify_ShowMag
	 */
	struct UABP_HDWeapon_C_AnimNotify_ShowMag_Params
	{	};

	/**
	 * Function ABP_HDWeapon.ABP_HDWeapon_C.AnimNotify_HideBullet
	 */
	struct UABP_HDWeapon_C_AnimNotify_HideBullet_Params
	{	};

	/**
	 * Function ABP_HDWeapon.ABP_HDWeapon_C.AnimNotify_ShowBullet
	 */
	struct UABP_HDWeapon_C_AnimNotify_ShowBullet_Params
	{	};

	/**
	 * Function ABP_HDWeapon.ABP_HDWeapon_C.WeaponFire
	 */
	struct UABP_HDWeapon_C_WeaponFire_Params
	{
	public:
		bool                                                       bLastFire;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_HDWeapon.ABP_HDWeapon_C.WeaponReloadFinished
	 */
	struct UABP_HDWeapon_C_WeaponReloadFinished_Params
	{
	public:
		class ADFBaseGun*                                          Gun;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDWeapon.ABP_HDWeapon_C.BlueprintUpdateWeaponOwnerRefs
	 */
	struct UABP_HDWeapon_C_BlueprintUpdateWeaponOwnerRefs_Params
	{
	public:
		class ADFBaseWeapon*                                       NewWeap;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDWeapon.ABP_HDWeapon_C.BlueprintInitializeAnimation
	 */
	struct UABP_HDWeapon_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function ABP_HDWeapon.ABP_HDWeapon_C.BlueprintBeginPlay
	 */
	struct UABP_HDWeapon_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function ABP_HDWeapon.ABP_HDWeapon_C.ExecuteUbergraph_ABP_HDWeapon
	 */
	struct UABP_HDWeapon_C_ExecuteUbergraph_ABP_HDWeapon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
