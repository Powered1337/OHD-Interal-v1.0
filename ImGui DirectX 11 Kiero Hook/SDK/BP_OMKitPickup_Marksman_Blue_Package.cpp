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
	 * 		Name   -> PredefinedFunction ABP_OMKitPickup_Marksman_Blue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OMKitPickup_Marksman_Blue_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OMKitPickup_Marksman_Blue.BP_OMKitPickup_Marksman_Blue_C");
		return ptr;
	}

}


