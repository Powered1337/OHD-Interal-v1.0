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
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_ControlPoint.BP_HDRuleset_ControlPoint_C.GetCPSettingsForTeam
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		EHDTeam                                            CPTeam                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FControlPointRulesetSettings                CPSettings                                                 (Parm, OutParm, NoDestructor)
	 */
	void UBP_HDRuleset_ControlPoint_C::GetCPSettingsForTeam(EHDTeam CPTeam, struct FControlPointRulesetSettings* CPSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_ControlPoint.BP_HDRuleset_ControlPoint_C.GetCPSettingsForTeam");
		
		UBP_HDRuleset_ControlPoint_C_GetCPSettingsForTeam_Params params {};
		params.CPTeam = CPTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CPSettings != nullptr)
			*CPSettings = params.CPSettings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_HDRuleset_ControlPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_HDRuleset_ControlPoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HDRuleset_ControlPoint.BP_HDRuleset_ControlPoint_C");
		return ptr;
	}

}


