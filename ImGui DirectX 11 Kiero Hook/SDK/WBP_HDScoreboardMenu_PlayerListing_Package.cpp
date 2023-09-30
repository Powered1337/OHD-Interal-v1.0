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
	 * 		Name   -> PredefinedFunction UWBP_HDScoreboardMenu_PlayerListing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_HDScoreboardMenu_PlayerListing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HDScoreboardMenu_PlayerListing.WBP_HDScoreboardMenu_PlayerListing_C");
		return ptr;
	}

}


