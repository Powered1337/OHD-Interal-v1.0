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
	 * 		Name   -> Function BP_OMWeap_Kar98_Scoped.BP_OMWeap_Kar98_Scoped_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_OMWeap_Kar98_Scoped_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OMWeap_Kar98_Scoped.BP_OMWeap_Kar98_Scoped_C.UserConstructionScript");
		
		ABP_OMWeap_Kar98_Scoped_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_OMWeap_Kar98_Scoped_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OMWeap_Kar98_Scoped_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OMWeap_Kar98_Scoped.BP_OMWeap_Kar98_Scoped_C");
		return ptr;
	}

}


