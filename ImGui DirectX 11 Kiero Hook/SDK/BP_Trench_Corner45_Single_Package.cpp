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
	 * 		Name   -> PredefinedFunction ABP_Trench_Corner45_Single_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Trench_Corner45_Single_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Trench_Corner45_Single.BP_Trench_Corner45_Single_C");
		return ptr;
	}

}


