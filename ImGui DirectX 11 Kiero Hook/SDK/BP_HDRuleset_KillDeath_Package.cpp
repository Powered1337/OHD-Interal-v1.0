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
	 * 		Name   -> Function BP_HDRuleset_KillDeath.BP_HDRuleset_KillDeath_C.GetKDSettingsForTeam
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		EHDTeam                                            CPTeam                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKillDeathRulesetSettings                   CPSettings                                                 (Parm, OutParm, NoDestructor)
	 */
	void UBP_HDRuleset_KillDeath_C::GetKDSettingsForTeam(EHDTeam CPTeam, struct FKillDeathRulesetSettings* CPSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_KillDeath.BP_HDRuleset_KillDeath_C.GetKDSettingsForTeam");
		
		UBP_HDRuleset_KillDeath_C_GetKDSettingsForTeam_Params params {};
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
	 * 		Name   -> PredefinedFunction UBP_HDRuleset_KillDeath_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_HDRuleset_KillDeath_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HDRuleset_KillDeath.BP_HDRuleset_KillDeath_C");
		return ptr;
	}

}


