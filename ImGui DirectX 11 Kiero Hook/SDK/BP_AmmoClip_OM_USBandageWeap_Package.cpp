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
	 * 		Name   -> PredefinedFunction ABP_AmmoClip_OM_USBandageWeap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_AmmoClip_OM_USBandageWeap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmmoClip_OM_USBandageWeap.BP_AmmoClip_OM_USBandageWeap_C");
		return ptr;
	}

}


