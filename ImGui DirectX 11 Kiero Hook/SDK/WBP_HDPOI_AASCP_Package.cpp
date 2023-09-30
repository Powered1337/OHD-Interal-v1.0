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
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.GetObjPosByType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		EHDControlPointObjectiveType                       ObjType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   ObjPos                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDPOI_AASCP_C::GetObjPosByType(EHDControlPointObjectiveType ObjType, struct FVector2D* ObjPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.GetObjPosByType");
		
		UWBP_HDPOI_AASCP_C_GetObjPosByType_Params params {};
		params.ObjType = ObjType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ObjPos != nullptr)
			*ObjPos = params.ObjPos;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.UpdateSpawnPointSymbol
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSpawnable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_HDPOI_AASCP_C::UpdateSpawnPointSymbol(bool bSpawnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.UpdateSpawnPointSymbol");
		
		UWBP_HDPOI_AASCP_C_UpdateSpawnPointSymbol_Params params {};
		params.bSpawnable = bSpawnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.UpdateRestrictedSymbol
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bRestricted                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_HDPOI_AASCP_C::UpdateRestrictedSymbol(bool bRestricted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.UpdateRestrictedSymbol");
		
		UWBP_HDPOI_AASCP_C_UpdateRestrictedSymbol_Params params {};
		params.bRestricted = bRestricted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.UpdateObjIconBrush
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSlateBrush                                 NewObjBrush                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_HDPOI_AASCP_C::UpdateObjIconBrush(struct FSlateBrush* NewObjBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.UpdateObjIconBrush");
		
		UWBP_HDPOI_AASCP_C_UpdateObjIconBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewObjBrush != nullptr)
			*NewObjBrush = params.NewObjBrush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.UpdateFlagIconBrush
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSlateBrush                                 NewFlagBrush                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_HDPOI_AASCP_C::UpdateFlagIconBrush(struct FSlateBrush* NewFlagBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.UpdateFlagIconBrush");
		
		UWBP_HDPOI_AASCP_C_UpdateFlagIconBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewFlagBrush != nullptr)
			*NewFlagBrush = params.NewFlagBrush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.GetObjImageByType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		EHDControlPointObjectiveType                       ObjType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ObjImg                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDPOI_AASCP_C::GetObjImageByType(EHDControlPointObjectiveType ObjType, class UObject** ObjImg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.GetObjImageByType");
		
		UWBP_HDPOI_AASCP_C_GetObjImageByType_Params params {};
		params.ObjType = ObjType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ObjImg != nullptr)
			*ObjImg = params.ObjImg;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.SetBrushImageInPlace
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSlateBrush                                 BrushToModify                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     NewBrushImg                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDPOI_AASCP_C::SetBrushImageInPlace(struct FSlateBrush* BrushToModify, class UObject* NewBrushImg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.SetBrushImageInPlace");
		
		UWBP_HDPOI_AASCP_C_SetBrushImageInPlace_Params params {};
		params.NewBrushImg = NewBrushImg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BrushToModify != nullptr)
			*BrushToModify = params.BrushToModify;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.GetFlagImageByTeam
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		EHDTeam                                            Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     TeamFlagImg                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDPOI_AASCP_C::GetFlagImageByTeam(EHDTeam Team, class UObject** TeamFlagImg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.GetFlagImageByTeam");
		
		UWBP_HDPOI_AASCP_C_GetFlagImageByTeam_Params params {};
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TeamFlagImg != nullptr)
			*TeamFlagImg = params.TeamFlagImg;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.UpdateObjectiveSymbol
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHDControlPointObjectiveType                       ObjectiveType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDPOI_AASCP_C::UpdateObjectiveSymbol(EHDControlPointObjectiveType ObjectiveType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.UpdateObjectiveSymbol");
		
		UWBP_HDPOI_AASCP_C_UpdateObjectiveSymbol_Params params {};
		params.ObjectiveType = ObjectiveType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.UpdateFlagSymbol
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHDTeam                                            OwningTeam                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDPOI_AASCP_C::UpdateFlagSymbol(EHDTeam OwningTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.UpdateFlagSymbol");
		
		UWBP_HDPOI_AASCP_C_UpdateFlagSymbol_Params params {};
		params.OwningTeam = OwningTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.UpdateToolTipText
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        TextToUse                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_HDPOI_AASCP_C::UpdateToolTipText(const class FText& TextToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.UpdateToolTipText");
		
		UWBP_HDPOI_AASCP_C_UpdateToolTipText_Params params {};
		params.TextToUse = TextToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.GetIconBrush
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	struct FSlateBrush UWBP_HDPOI_AASCP_C::GetIconBrush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.GetIconBrush");
		
		UWBP_HDPOI_AASCP_C_GetIconBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.GetOwningPlayerTeam
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		EHDTeam                                            PlayerTeam                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDPOI_AASCP_C::GetOwningPlayerTeam(EHDTeam* PlayerTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.GetOwningPlayerTeam");
		
		UWBP_HDPOI_AASCP_C_GetOwningPlayerTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerTeam != nullptr)
			*PlayerTeam = params.PlayerTeam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.UpdateWidgetVisuals
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HDPOI_AASCP_C::UpdateWidgetVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.UpdateWidgetVisuals");
		
		UWBP_HDPOI_AASCP_C_UpdateWidgetVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.HandlePlayerOrCPTeamUpdate
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HDPOI_AASCP_C::HandlePlayerOrCPTeamUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.HandlePlayerOrCPTeamUpdate");
		
		UWBP_HDPOI_AASCP_C_HandlePlayerOrCPTeamUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.InitControlPointListeners
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HDPOI_AASCP_C::InitControlPointListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.InitControlPointListeners");
		
		UWBP_HDPOI_AASCP_C_InitControlPointListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.InitOwningPlayerListeners
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HDPOI_AASCP_C::InitOwningPlayerListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.InitOwningPlayerListeners");
		
		UWBP_HDPOI_AASCP_C_InitOwningPlayerListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.ReceiveCanSelect
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool UWBP_HDPOI_AASCP_C::ReceiveCanSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.ReceiveCanSelect");
		
		UWBP_HDPOI_AASCP_C_ReceiveCanSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.SetOwningPlayerRefs
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HDPOI_AASCP_C::SetOwningPlayerRefs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.SetOwningPlayerRefs");
		
		UWBP_HDPOI_AASCP_C_SetOwningPlayerRefs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.OnLoaded_5CAFEAE1478BEEFAA7C958AC31FEFBB2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDPOI_AASCP_C::OnLoaded_5CAFEAE1478BEEFAA7C958AC31FEFBB2(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.OnLoaded_5CAFEAE1478BEEFAA7C958AC31FEFBB2");
		
		UWBP_HDPOI_AASCP_C_OnLoaded_5CAFEAE1478BEEFAA7C958AC31FEFBB2_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.OnLoaded_DA523F1F44AD85D87E676986278348D2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDPOI_AASCP_C::OnLoaded_DA523F1F44AD85D87E676986278348D2(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.OnLoaded_DA523F1F44AD85D87E676986278348D2");
		
		UWBP_HDPOI_AASCP_C_OnLoaded_DA523F1F44AD85D87E676986278348D2_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.OnLoaded_9607A58E4C66E7AD82487995A3A1E7B7
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDPOI_AASCP_C::OnLoaded_9607A58E4C66E7AD82487995A3A1E7B7(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.OnLoaded_9607A58E4C66E7AD82487995A3A1E7B7");
		
		UWBP_HDPOI_AASCP_C_OnLoaded_9607A58E4C66E7AD82487995A3A1E7B7_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_HDPOI_AASCP_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.Destruct");
		
		UWBP_HDPOI_AASCP_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.ReceivePOIInitialized
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWBP_HDPOI_AASCP_C::ReceivePOIInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.ReceivePOIInitialized");
		
		UWBP_HDPOI_AASCP_C_ReceivePOIInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.SetIconBrush
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSlateBrush                                 NewIconBrush                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_HDPOI_AASCP_C::SetIconBrush(const struct FSlateBrush& NewIconBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.SetIconBrush");
		
		UWBP_HDPOI_AASCP_C_SetIconBrush_Params params {};
		params.NewIconBrush = NewIconBrush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.ReceivePOISelected
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWBP_HDPOI_AASCP_C::ReceivePOISelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.ReceivePOISelected");
		
		UWBP_HDPOI_AASCP_C_ReceivePOISelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.ReceivePOIDeselected
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWBP_HDPOI_AASCP_C::ReceivePOIDeselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.ReceivePOIDeselected");
		
		UWBP_HDPOI_AASCP_C_ReceivePOIDeselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_HDPOI_AASCP_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.Construct");
		
		UWBP_HDPOI_AASCP_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.OnOwningPlayerTeamNumUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      LastTeamNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewTeamNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDPOI_AASCP_C::OnOwningPlayerTeamNumUpdated(unsigned char LastTeamNum, unsigned char NewTeamNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.OnOwningPlayerTeamNumUpdated");
		
		UWBP_HDPOI_AASCP_C_OnOwningPlayerTeamNumUpdated_Params params {};
		params.LastTeamNum = LastTeamNum;
		params.NewTeamNum = NewTeamNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.OnOwningPlayerRepPlayerState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HDPOI_AASCP_C::OnOwningPlayerRepPlayerState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.OnOwningPlayerRepPlayerState");
		
		UWBP_HDPOI_AASCP_C_OnOwningPlayerRepPlayerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.OnControlPointTeamUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AHDBaseCapturePoint*                         ControlPoint                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHDTeam                                            PrevTeam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHDTeam                                            NewTeam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCaptured                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_HDPOI_AASCP_C::OnControlPointTeamUpdated(class AHDBaseCapturePoint* ControlPoint, EHDTeam PrevTeam, EHDTeam NewTeam, bool bCaptured)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.OnControlPointTeamUpdated");
		
		UWBP_HDPOI_AASCP_C_OnControlPointTeamUpdated_Params params {};
		params.ControlPoint = ControlPoint;
		params.PrevTeam = PrevTeam;
		params.NewTeam = NewTeam;
		params.bCaptured = bCaptured;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.OnControlPointCaptureStatusUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AHDBaseCapturePoint*                         ControlPoint                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDPOI_AASCP_C::OnControlPointCaptureStatusUpdated(class AHDBaseCapturePoint* ControlPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.OnControlPointCaptureStatusUpdated");
		
		UWBP_HDPOI_AASCP_C_OnControlPointCaptureStatusUpdated_Params params {};
		params.ControlPoint = ControlPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.LoadFlagImgs
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_HDPOI_AASCP_C::LoadFlagImgs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.LoadFlagImgs");
		
		UWBP_HDPOI_AASCP_C_LoadFlagImgs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDPOI_AASCP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.Tick");
		
		UWBP_HDPOI_AASCP_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_HDPOI_AASCP_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.PreConstruct");
		
		UWBP_HDPOI_AASCP_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.ExecuteUbergraph_WBP_HDPOI_AASCP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HDPOI_AASCP_C::ExecuteUbergraph_WBP_HDPOI_AASCP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.ExecuteUbergraph_WBP_HDPOI_AASCP");
		
		UWBP_HDPOI_AASCP_C_ExecuteUbergraph_WBP_HDPOI_AASCP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_HDPOI_AASCP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_HDPOI_AASCP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C");
		return ptr;
	}

}


