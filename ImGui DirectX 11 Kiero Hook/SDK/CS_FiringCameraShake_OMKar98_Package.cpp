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
	 * 		Name   -> PredefinedFunction UCS_FiringCameraShake_OMKar98_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCS_FiringCameraShake_OMKar98_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CS_FiringCameraShake_OMKar98.CS_FiringCameraShake_OMKar98_C");
		return ptr;
	}

}


