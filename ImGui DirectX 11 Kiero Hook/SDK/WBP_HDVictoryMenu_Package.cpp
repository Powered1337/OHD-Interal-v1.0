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
	 * 		Name   -> PredefinedFunction UWBP_HDVictoryMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_HDVictoryMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HDVictoryMenu.WBP_HDVictoryMenu_C");
		return ptr;
	}

}


