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
	 * 		Name   -> PredefinedFunction UABP_OM_M1903_P_Scoped_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_OM_M1903_P_Scoped_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_OM_M1903_P_Scoped.ABP_OM_M1903_P_Scoped_C");
		return ptr;
	}

}


