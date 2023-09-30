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
	 * 		Name   -> PredefinedFunction ABP_WoodenCanopy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WoodenCanopy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WoodenCanopy.BP_WoodenCanopy_C");
		return ptr;
	}

}


