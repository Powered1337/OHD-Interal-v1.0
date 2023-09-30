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
	 * Function BP_HDProj_SmokeGrenadeBase.BP_HDProj_SmokeGrenadeBase_C.UpdateVisibilityTimeline
	 */
	struct ABP_HDProj_SmokeGrenadeBase_C_UpdateVisibilityTimeline_Params
	{
	public:
		float                                                      InRadius;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InHalfHeight;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             InLocation;                                              // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDProj_SmokeGrenadeBase.BP_HDProj_SmokeGrenadeBase_C.StartVisibilityTimeline
	 */
	struct ABP_HDProj_SmokeGrenadeBase_C_StartVisibilityTimeline_Params
	{	};

	/**
	 * Function BP_HDProj_SmokeGrenadeBase.BP_HDProj_SmokeGrenadeBase_C.VisibilityTimeline__FinishedFunc
	 */
	struct ABP_HDProj_SmokeGrenadeBase_C_VisibilityTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_HDProj_SmokeGrenadeBase.BP_HDProj_SmokeGrenadeBase_C.VisibilityTimeline__UpdateFunc
	 */
	struct ABP_HDProj_SmokeGrenadeBase_C_VisibilityTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_HDProj_SmokeGrenadeBase.BP_HDProj_SmokeGrenadeBase_C.ReceivePayloadActivated
	 */
	struct ABP_HDProj_SmokeGrenadeBase_C_ReceivePayloadActivated_Params
	{
	public:
		struct FHitResult                                          ImpactHitResult;                                         // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_HDProj_SmokeGrenadeBase.BP_HDProj_SmokeGrenadeBase_C.ExecuteUbergraph_BP_HDProj_SmokeGrenadeBase
	 */
	struct ABP_HDProj_SmokeGrenadeBase_C_ExecuteUbergraph_BP_HDProj_SmokeGrenadeBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
