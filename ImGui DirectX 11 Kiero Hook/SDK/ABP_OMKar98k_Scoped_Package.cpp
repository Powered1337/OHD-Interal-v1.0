﻿/**
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
	 * 		Name   -> PredefinedFunction UABP_OMKar98k_Scoped_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_OMKar98k_Scoped_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_OMKar98k_Scoped.ABP_OMKar98k_Scoped_C");
		return ptr;
	}

}


