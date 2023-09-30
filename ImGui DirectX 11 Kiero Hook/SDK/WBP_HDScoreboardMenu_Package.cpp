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
	 * 		Name   -> Function WBP_HDScoreboardMenu.WBP_HDScoreboardMenu_C.SetupFactionInfoForTeam
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AHDTeamState*                                TeamState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDScoreboardMenu_C::SetupFactionInfoForTeam(class AHDTeamState* TeamState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDScoreboardMenu.WBP_HDScoreboardMenu_C.SetupFactionInfoForTeam");
		
		UWBP_HDScoreboardMenu_C_SetupFactionInfoForTeam_Params params {};
		params.TeamState = TeamState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDScoreboardMenu.WBP_HDScoreboardMenu_C.GetRowWidgetIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UHDScoreboardListingRowBase*                 ListEntry                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            EntryIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDScoreboardMenu_C::GetRowWidgetIndex(class UHDScoreboardListingRowBase* ListEntry, int32_t* EntryIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDScoreboardMenu.WBP_HDScoreboardMenu_C.GetRowWidgetIndex");
		
		UWBP_HDScoreboardMenu_C_GetRowWidgetIndex_Params params {};
		params.ListEntry = ListEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EntryIndex != nullptr)
			*EntryIndex = params.EntryIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDScoreboardMenu.WBP_HDScoreboardMenu_C.OnMouseButtonDoubleClick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   InMyGeometry                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               InMouseEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_HDScoreboardMenu_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDScoreboardMenu.WBP_HDScoreboardMenu_C.OnMouseButtonDoubleClick");
		
		UWBP_HDScoreboardMenu_C_OnMouseButtonDoubleClick_Params params {};
		params.InMyGeometry = InMyGeometry;
		params.InMouseEvent = InMouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDScoreboardMenu.WBP_HDScoreboardMenu_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_HDScoreboardMenu_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDScoreboardMenu.WBP_HDScoreboardMenu_C.OnMouseButtonDown");
		
		UWBP_HDScoreboardMenu_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDScoreboardMenu.WBP_HDScoreboardMenu_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_HDScoreboardMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDScoreboardMenu.WBP_HDScoreboardMenu_C.PreConstruct");
		
		UWBP_HDScoreboardMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDScoreboardMenu.WBP_HDScoreboardMenu_C.ReceiveScoreboardListRowAdded
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UHDScoreboardListingRowBase*                 NewListEntry                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDScoreboardMenu_C::ReceiveScoreboardListRowAdded(class UHDScoreboardListingRowBase* NewListEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDScoreboardMenu.WBP_HDScoreboardMenu_C.ReceiveScoreboardListRowAdded");
		
		UWBP_HDScoreboardMenu_C_ReceiveScoreboardListRowAdded_Params params {};
		params.NewListEntry = NewListEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDScoreboardMenu.WBP_HDScoreboardMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_HDScoreboardMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDScoreboardMenu.WBP_HDScoreboardMenu_C.Construct");
		
		UWBP_HDScoreboardMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDScoreboardMenu.WBP_HDScoreboardMenu_C.ExecuteUbergraph_WBP_HDScoreboardMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDScoreboardMenu_C::ExecuteUbergraph_WBP_HDScoreboardMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDScoreboardMenu.WBP_HDScoreboardMenu_C.ExecuteUbergraph_WBP_HDScoreboardMenu");
		
		UWBP_HDScoreboardMenu_C_ExecuteUbergraph_WBP_HDScoreboardMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_HDScoreboardMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_HDScoreboardMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HDScoreboardMenu.WBP_HDScoreboardMenu_C");
		return ptr;
	}

}


