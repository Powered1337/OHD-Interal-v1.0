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
	 * 		Name   -> Function BP_HDWeap_AoFWeapBase.BP_HDWeap_AoFWeapBase_C.CanFire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool ABP_HDWeap_AoFWeapBase_C::CanFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeap_AoFWeapBase.BP_HDWeap_AoFWeapBase_C.CanFire");
		
		ABP_HDWeap_AoFWeapBase_C_CanFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDWeap_AoFWeapBase.BP_HDWeap_AoFWeapBase_C.InitAffectedPawns
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDWeap_AoFWeapBase_C::InitAffectedPawns()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeap_AoFWeapBase.BP_HDWeap_AoFWeapBase_C.InitAffectedPawns");
		
		ABP_HDWeap_AoFWeapBase_C_InitAffectedPawns_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDWeap_AoFWeapBase.BP_HDWeap_AoFWeapBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDWeap_AoFWeapBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeap_AoFWeapBase.BP_HDWeap_AoFWeapBase_C.UserConstructionScript");
		
		ABP_HDWeap_AoFWeapBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDWeap_AoFWeapBase.BP_HDWeap_AoFWeapBase_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDWeap_AoFWeapBase_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeap_AoFWeapBase.BP_HDWeap_AoFWeapBase_C.ReceiveTick");
		
		ABP_HDWeap_AoFWeapBase_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDWeap_AoFWeapBase.BP_HDWeap_AoFWeapBase_C.DoAuraEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDWeap_AoFWeapBase_C::DoAuraEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeap_AoFWeapBase.BP_HDWeap_AoFWeapBase_C.DoAuraEffect");
		
		ABP_HDWeap_AoFWeapBase_C_DoAuraEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDWeap_AoFWeapBase.BP_HDWeap_AoFWeapBase_C.OnAuraEffectBegin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDWeap_AoFWeapBase_C::OnAuraEffectBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeap_AoFWeapBase.BP_HDWeap_AoFWeapBase_C.OnAuraEffectBegin");
		
		ABP_HDWeap_AoFWeapBase_C_OnAuraEffectBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDWeap_AoFWeapBase.BP_HDWeap_AoFWeapBase_C.OnAuraEffectEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDWeap_AoFWeapBase_C::OnAuraEffectEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeap_AoFWeapBase.BP_HDWeap_AoFWeapBase_C.OnAuraEffectEnd");
		
		ABP_HDWeap_AoFWeapBase_C_OnAuraEffectEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDWeap_AoFWeapBase.BP_HDWeap_AoFWeapBase_C.ExecuteUbergraph_BP_HDWeap_AoFWeapBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDWeap_AoFWeapBase_C::ExecuteUbergraph_BP_HDWeap_AoFWeapBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeap_AoFWeapBase.BP_HDWeap_AoFWeapBase_C.ExecuteUbergraph_BP_HDWeap_AoFWeapBase");
		
		ABP_HDWeap_AoFWeapBase_C_ExecuteUbergraph_BP_HDWeap_AoFWeapBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HDWeap_AoFWeapBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HDWeap_AoFWeapBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HDWeap_AoFWeapBase.BP_HDWeap_AoFWeapBase_C");
		return ptr;
	}

}


