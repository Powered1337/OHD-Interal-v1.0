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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_OM_AmmoClip_Chauchat_M1915_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OM_AmmoClip_Chauchat_M1915_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OM_AmmoClip_Chauchat_M1915.BP_OM_AmmoClip_Chauchat_M1915_C");
		return ptr;
	}

}


