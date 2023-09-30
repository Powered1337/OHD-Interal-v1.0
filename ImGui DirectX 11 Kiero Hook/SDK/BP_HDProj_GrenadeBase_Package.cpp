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
	 * 		Name   -> Function BP_HDProj_GrenadeBase.BP_HDProj_GrenadeBase_C.ReceivePayloadActivated
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactHitResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_HDProj_GrenadeBase_C::ReceivePayloadActivated(const struct FHitResult& ImpactHitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_GrenadeBase.BP_HDProj_GrenadeBase_C.ReceivePayloadActivated");
		
		ABP_HDProj_GrenadeBase_C_ReceivePayloadActivated_Params params {};
		params.ImpactHitResult = ImpactHitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDProj_GrenadeBase.BP_HDProj_GrenadeBase_C.ExecuteUbergraph_BP_HDProj_GrenadeBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDProj_GrenadeBase_C::ExecuteUbergraph_BP_HDProj_GrenadeBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_GrenadeBase.BP_HDProj_GrenadeBase_C.ExecuteUbergraph_BP_HDProj_GrenadeBase");
		
		ABP_HDProj_GrenadeBase_C_ExecuteUbergraph_BP_HDProj_GrenadeBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HDProj_GrenadeBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HDProj_GrenadeBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HDProj_GrenadeBase.BP_HDProj_GrenadeBase_C");
		return ptr;
	}

}


