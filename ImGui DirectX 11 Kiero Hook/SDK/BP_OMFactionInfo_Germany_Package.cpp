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
	 * 		Name   -> PredefinedFunction UBP_OMFactionInfo_Germany_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_OMFactionInfo_Germany_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OMFactionInfo_Germany.BP_OMFactionInfo_Germany_C");
		return ptr;
	}

}


