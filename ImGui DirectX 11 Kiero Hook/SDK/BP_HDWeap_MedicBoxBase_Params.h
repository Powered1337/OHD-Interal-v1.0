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
	 * Function BP_HDWeap_MedicBoxBase.BP_HDWeap_MedicBoxBase_C.SetIconVisibilityOverlappingPawns
	 */
	struct ABP_HDWeap_MedicBoxBase_C_SetIconVisibilityOverlappingPawns_Params
	{
	public:
		bool                                                       bVisibility;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SH4N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDWeap_MedicBoxBase.BP_HDWeap_MedicBoxBase_C.SetIconVisibility
	 */
	struct ABP_HDWeap_MedicBoxBase_C_SetIconVisibility_Params
	{
	public:
		class ADFBaseCharacter*                                    Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Visibility;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDWeap_MedicBoxBase.BP_HDWeap_MedicBoxBase_C.HealPawn
	 */
	struct ABP_HDWeap_MedicBoxBase_C_HealPawn_Params
	{
	public:
		float                                                      Heal;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4Y58[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADFBaseCharacter*                                    Pawn;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDWeap_MedicBoxBase.BP_HDWeap_MedicBoxBase_C.HealingAuraEffect
	 */
	struct ABP_HDWeap_MedicBoxBase_C_HealingAuraEffect_Params
	{	};

	/**
	 * Function BP_HDWeap_MedicBoxBase.BP_HDWeap_MedicBoxBase_C.UserConstructionScript
	 */
	struct ABP_HDWeap_MedicBoxBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_HDWeap_MedicBoxBase.BP_HDWeap_MedicBoxBase_C.DoAuraEffect
	 */
	struct ABP_HDWeap_MedicBoxBase_C_DoAuraEffect_Params
	{	};

	/**
	 * Function BP_HDWeap_MedicBoxBase.BP_HDWeap_MedicBoxBase_C.BndEvt__AreaOfEffectCollisionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_HDWeap_MedicBoxBase_C_BndEvt__AreaOfEffectCollisionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J9J7[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_HDWeap_MedicBoxBase.BP_HDWeap_MedicBoxBase_C.BndEvt__AreaOfEffectCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_HDWeap_MedicBoxBase_C_BndEvt__AreaOfEffectCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDWeap_MedicBoxBase.BP_HDWeap_MedicBoxBase_C.OnAuraEffectBegin
	 */
	struct ABP_HDWeap_MedicBoxBase_C_OnAuraEffectBegin_Params
	{	};

	/**
	 * Function BP_HDWeap_MedicBoxBase.BP_HDWeap_MedicBoxBase_C.OnAuraEffectEnd
	 */
	struct ABP_HDWeap_MedicBoxBase_C_OnAuraEffectEnd_Params
	{	};

	/**
	 * Function BP_HDWeap_MedicBoxBase.BP_HDWeap_MedicBoxBase_C.ExecuteUbergraph_BP_HDWeap_MedicBoxBase
	 */
	struct ABP_HDWeap_MedicBoxBase_C_ExecuteUbergraph_BP_HDWeap_MedicBoxBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
