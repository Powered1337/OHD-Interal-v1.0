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
	 * 		Name   -> Function WBP_SpawnMap_POISelectionIndicator.WBP_SpawnMap_POISelectionIndicator_C.SetDeselectionBrush
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSlateBrush                                 NewDeselectionBrush                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_SpawnMap_POISelectionIndicator_C::SetDeselectionBrush(struct FSlateBrush* NewDeselectionBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpawnMap_POISelectionIndicator.WBP_SpawnMap_POISelectionIndicator_C.SetDeselectionBrush");
		
		UWBP_SpawnMap_POISelectionIndicator_C_SetDeselectionBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewDeselectionBrush != nullptr)
			*NewDeselectionBrush = params.NewDeselectionBrush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_SpawnMap_POISelectionIndicator.WBP_SpawnMap_POISelectionIndicator_C.Init
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDFPOIWidget*                                ParentPOI                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 SelectionBrush                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSlateBrush                                 DeselectionBrush                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bSelectable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SpawnMap_POISelectionIndicator_C::Init(class UDFPOIWidget* ParentPOI, struct FSlateBrush* SelectionBrush, struct FSlateBrush* DeselectionBrush, bool bSelectable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpawnMap_POISelectionIndicator.WBP_SpawnMap_POISelectionIndicator_C.Init");
		
		UWBP_SpawnMap_POISelectionIndicator_C_Init_Params params {};
		params.ParentPOI = ParentPOI;
		params.bSelectable = bSelectable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectionBrush != nullptr)
			*SelectionBrush = params.SelectionBrush;
		if (DeselectionBrush != nullptr)
			*DeselectionBrush = params.DeselectionBrush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_SpawnMap_POISelectionIndicator.WBP_SpawnMap_POISelectionIndicator_C.POI Selected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_SpawnMap_POISelectionIndicator_C::POISelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpawnMap_POISelectionIndicator.WBP_SpawnMap_POISelectionIndicator_C.POI Selected");
		
		UWBP_SpawnMap_POISelectionIndicator_C_POISelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_SpawnMap_POISelectionIndicator.WBP_SpawnMap_POISelectionIndicator_C.POI Deselected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSelectable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SpawnMap_POISelectionIndicator_C::POIDeselected(bool bSelectable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpawnMap_POISelectionIndicator.WBP_SpawnMap_POISelectionIndicator_C.POI Deselected");
		
		UWBP_SpawnMap_POISelectionIndicator_C_POIDeselected_Params params {};
		params.bSelectable = bSelectable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_SpawnMap_POISelectionIndicator.WBP_SpawnMap_POISelectionIndicator_C.ExecuteUbergraph_WBP_SpawnMap_POISelectionIndicator
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SpawnMap_POISelectionIndicator_C::ExecuteUbergraph_WBP_SpawnMap_POISelectionIndicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SpawnMap_POISelectionIndicator.WBP_SpawnMap_POISelectionIndicator_C.ExecuteUbergraph_WBP_SpawnMap_POISelectionIndicator");
		
		UWBP_SpawnMap_POISelectionIndicator_C_ExecuteUbergraph_WBP_SpawnMap_POISelectionIndicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SpawnMap_POISelectionIndicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SpawnMap_POISelectionIndicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SpawnMap_POISelectionIndicator.WBP_SpawnMap_POISelectionIndicator_C");
		return ptr;
	}

}


