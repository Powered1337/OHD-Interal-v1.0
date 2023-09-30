/**
 * Name: Operation__Harsh_Doorstop
 * Version: 4.5.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_OOProj_StielhandgrenateSmoke_P.BP_OOProj_StielhandgrenateSmoke_P_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_OOProj_StielhandgrenateSmoke_P_C::BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OOProj_StielhandgrenateSmoke_P.BP_OOProj_StielhandgrenateSmoke_P_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature");
		
		ABP_OOProj_StielhandgrenateSmoke_P_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Params params {};
		params.ImpactResult = ImpactResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_OOProj_StielhandgrenateSmoke_P.BP_OOProj_StielhandgrenateSmoke_P_C.ExecuteUbergraph_BP_OOProj_StielhandgrenateSmoke_P
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OOProj_StielhandgrenateSmoke_P_C::ExecuteUbergraph_BP_OOProj_StielhandgrenateSmoke_P(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OOProj_StielhandgrenateSmoke_P.BP_OOProj_StielhandgrenateSmoke_P_C.ExecuteUbergraph_BP_OOProj_StielhandgrenateSmoke_P");
		
		ABP_OOProj_StielhandgrenateSmoke_P_C_ExecuteUbergraph_BP_OOProj_StielhandgrenateSmoke_P_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_OOProj_StielhandgrenateSmoke_P_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OOProj_StielhandgrenateSmoke_P_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OOProj_StielhandgrenateSmoke_P.BP_OOProj_StielhandgrenateSmoke_P_C");
		return ptr;
	}

}


