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
	 * 		Name   -> PredefinedFunction UBP_HDRuleset_TicketBleed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_HDRuleset_TicketBleed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HDRuleset_TicketBleed.BP_HDRuleset_TicketBleed_C");
		return ptr;
	}

}


