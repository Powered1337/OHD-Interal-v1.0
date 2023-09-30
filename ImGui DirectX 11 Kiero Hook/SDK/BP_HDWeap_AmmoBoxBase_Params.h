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
	 * Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.SetIconVisibilityOverlappingPawns
	 */
	struct ABP_HDWeap_AmmoBoxBase_C_SetIconVisibilityOverlappingPawns_Params
	{
	public:
		bool                                                       bVisibility;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N20M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.SetIconVisibility
	 */
	struct ABP_HDWeap_AmmoBoxBase_C_SetIconVisibility_Params
	{
	public:
		class ADFBaseCharacter*                                    Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Visibility;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.ReplenishAmmo
	 */
	struct ABP_HDWeap_AmmoBoxBase_C_ReplenishAmmo_Params
	{
	public:
		class ADFBaseCharacter*                                    Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Ammo;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ClipsRestored;                                           // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.AmmoAuraEffect
	 */
	struct ABP_HDWeap_AmmoBoxBase_C_AmmoAuraEffect_Params
	{	};

	/**
	 * Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.UserConstructionScript
	 */
	struct ABP_HDWeap_AmmoBoxBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.DoAuraEffect
	 */
	struct ABP_HDWeap_AmmoBoxBase_C_DoAuraEffect_Params
	{	};

	/**
	 * Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.BndEvt__AreaOfEffectCollisionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_HDWeap_AmmoBoxBase_C_BndEvt__AreaOfEffectCollisionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MOAV[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.BndEvt__AreaOfEffectCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_HDWeap_AmmoBoxBase_C_BndEvt__AreaOfEffectCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.OnAuraEffectBegin
	 */
	struct ABP_HDWeap_AmmoBoxBase_C_OnAuraEffectBegin_Params
	{	};

	/**
	 * Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.OnAuraEffectEnd
	 */
	struct ABP_HDWeap_AmmoBoxBase_C_OnAuraEffectEnd_Params
	{	};

	/**
	 * Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.ExecuteUbergraph_BP_HDWeap_AmmoBoxBase
	 */
	struct ABP_HDWeap_AmmoBoxBase_C_ExecuteUbergraph_BP_HDWeap_AmmoBoxBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
