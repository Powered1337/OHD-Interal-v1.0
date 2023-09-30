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
	 * 		Name   -> PredefinedFunction UCS_FiringCameraShake_Madsun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCS_FiringCameraShake_Madsun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CS_FiringCameraShake_Madsun.CS_FiringCameraShake_Madsun_C");
		return ptr;
	}

}


