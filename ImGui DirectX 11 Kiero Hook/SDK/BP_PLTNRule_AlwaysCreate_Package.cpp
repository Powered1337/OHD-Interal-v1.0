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
	 * 		Name   -> Function BP_PLTNRule_AlwaysCreate.BP_PLTNRule_AlwaysCreate_C.SatisfiesRule
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UHDTeamDefinition*                           TeamDef                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_PLTNRule_AlwaysCreate_C::SatisfiesRule(class UHDTeamDefinition* TeamDef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PLTNRule_AlwaysCreate.BP_PLTNRule_AlwaysCreate_C.SatisfiesRule");
		
		UBP_PLTNRule_AlwaysCreate_C_SatisfiesRule_Params params {};
		params.TeamDef = TeamDef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PLTNRule_AlwaysCreate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PLTNRule_AlwaysCreate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PLTNRule_AlwaysCreate.BP_PLTNRule_AlwaysCreate_C");
		return ptr;
	}

}


