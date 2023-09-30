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
	 * 		Name   -> Function BP_HDProj_SmokeGrenadeBase.BP_HDProj_SmokeGrenadeBase_C.UpdateVisibilityTimeline
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InRadius                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InHalfHeight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDProj_SmokeGrenadeBase_C::UpdateVisibilityTimeline(float InRadius, float InHalfHeight, const struct FVector& InLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SmokeGrenadeBase.BP_HDProj_SmokeGrenadeBase_C.UpdateVisibilityTimeline");
		
		ABP_HDProj_SmokeGrenadeBase_C_UpdateVisibilityTimeline_Params params {};
		params.InRadius = InRadius;
		params.InHalfHeight = InHalfHeight;
		params.InLocation = InLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDProj_SmokeGrenadeBase.BP_HDProj_SmokeGrenadeBase_C.StartVisibilityTimeline
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDProj_SmokeGrenadeBase_C::StartVisibilityTimeline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SmokeGrenadeBase.BP_HDProj_SmokeGrenadeBase_C.StartVisibilityTimeline");
		
		ABP_HDProj_SmokeGrenadeBase_C_StartVisibilityTimeline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDProj_SmokeGrenadeBase.BP_HDProj_SmokeGrenadeBase_C.VisibilityTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_HDProj_SmokeGrenadeBase_C::VisibilityTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SmokeGrenadeBase.BP_HDProj_SmokeGrenadeBase_C.VisibilityTimeline__FinishedFunc");
		
		ABP_HDProj_SmokeGrenadeBase_C_VisibilityTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDProj_SmokeGrenadeBase.BP_HDProj_SmokeGrenadeBase_C.VisibilityTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_HDProj_SmokeGrenadeBase_C::VisibilityTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SmokeGrenadeBase.BP_HDProj_SmokeGrenadeBase_C.VisibilityTimeline__UpdateFunc");
		
		ABP_HDProj_SmokeGrenadeBase_C_VisibilityTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDProj_SmokeGrenadeBase.BP_HDProj_SmokeGrenadeBase_C.ReceivePayloadActivated
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactHitResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_HDProj_SmokeGrenadeBase_C::ReceivePayloadActivated(const struct FHitResult& ImpactHitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SmokeGrenadeBase.BP_HDProj_SmokeGrenadeBase_C.ReceivePayloadActivated");
		
		ABP_HDProj_SmokeGrenadeBase_C_ReceivePayloadActivated_Params params {};
		params.ImpactHitResult = ImpactHitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDProj_SmokeGrenadeBase.BP_HDProj_SmokeGrenadeBase_C.ExecuteUbergraph_BP_HDProj_SmokeGrenadeBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDProj_SmokeGrenadeBase_C::ExecuteUbergraph_BP_HDProj_SmokeGrenadeBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SmokeGrenadeBase.BP_HDProj_SmokeGrenadeBase_C.ExecuteUbergraph_BP_HDProj_SmokeGrenadeBase");
		
		ABP_HDProj_SmokeGrenadeBase_C_ExecuteUbergraph_BP_HDProj_SmokeGrenadeBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HDProj_SmokeGrenadeBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HDProj_SmokeGrenadeBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HDProj_SmokeGrenadeBase.BP_HDProj_SmokeGrenadeBase_C");
		return ptr;
	}

}


