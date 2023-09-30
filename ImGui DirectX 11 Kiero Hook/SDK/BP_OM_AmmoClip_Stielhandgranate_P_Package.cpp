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
	 * 		Name   -> PredefinedFunction ABP_OM_AmmoClip_Stielhandgranate_P_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OM_AmmoClip_Stielhandgranate_P_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OM_AmmoClip_Stielhandgranate_P.BP_OM_AmmoClip_Stielhandgranate_P_C");
		return ptr;
	}

}


