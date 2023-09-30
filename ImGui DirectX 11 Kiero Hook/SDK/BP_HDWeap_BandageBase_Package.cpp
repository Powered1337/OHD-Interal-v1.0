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
	 * 		Name   -> Function BP_HDWeap_BandageBase.BP_HDWeap_BandageBase_C.CanFire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool ABP_HDWeap_BandageBase_C::CanFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeap_BandageBase.BP_HDWeap_BandageBase_C.CanFire");
		
		ABP_HDWeap_BandageBase_C_CanFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDWeap_BandageBase.BP_HDWeap_BandageBase_C.ReceiveFire
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_HDWeap_BandageBase_C::ReceiveFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeap_BandageBase.BP_HDWeap_BandageBase_C.ReceiveFire");
		
		ABP_HDWeap_BandageBase_C_ReceiveFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDWeap_BandageBase.BP_HDWeap_BandageBase_C.ExecuteUbergraph_BP_HDWeap_BandageBase
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDWeap_BandageBase_C::ExecuteUbergraph_BP_HDWeap_BandageBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeap_BandageBase.BP_HDWeap_BandageBase_C.ExecuteUbergraph_BP_HDWeap_BandageBase");
		
		ABP_HDWeap_BandageBase_C_ExecuteUbergraph_BP_HDWeap_BandageBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HDWeap_BandageBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HDWeap_BandageBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HDWeap_BandageBase.BP_HDWeap_BandageBase_C");
		return ptr;
	}

}


