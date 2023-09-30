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
	 * 		Name   -> PredefinedFunction UABP_OM_USBag_Weap_3P_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_OM_USBag_Weap_3P_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_OM_USBag_Weap_3P.ABP_OM_USBag_Weap_3P_C");
		return ptr;
	}

}


