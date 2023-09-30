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
	 * 		Name   -> Function ABP_OM_GERBag_Weap_1P.ABP_OM_GERBag_Weap_1P_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_OM_GERBag_Weap_1P_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_OM_GERBag_Weap_1P.ABP_OM_GERBag_Weap_1P_C.AnimGraph");
		
		UABP_OM_GERBag_Weap_1P_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function ABP_OM_GERBag_Weap_1P.ABP_OM_GERBag_Weap_1P_C.ExecuteUbergraph_ABP_OM_GERBag_Weap_1P
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_OM_GERBag_Weap_1P_C::ExecuteUbergraph_ABP_OM_GERBag_Weap_1P(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_OM_GERBag_Weap_1P.ABP_OM_GERBag_Weap_1P_C.ExecuteUbergraph_ABP_OM_GERBag_Weap_1P");
		
		UABP_OM_GERBag_Weap_1P_C_ExecuteUbergraph_ABP_OM_GERBag_Weap_1P_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_OM_GERBag_Weap_1P_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_OM_GERBag_Weap_1P_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_OM_GERBag_Weap_1P.ABP_OM_GERBag_Weap_1P_C");
		return ptr;
	}

}


