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
	 * 		Name   -> PredefinedFunction UCS_GrenadeCameraShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCS_GrenadeCameraShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CS_GrenadeCameraShake.CS_GrenadeCameraShake_C");
		return ptr;
	}

}


