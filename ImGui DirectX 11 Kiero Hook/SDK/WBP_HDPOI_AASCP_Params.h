#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: 4.5.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.GetObjPosByType
	 */
	struct UWBP_HDPOI_AASCP_C_GetObjPosByType_Params
	{
	public:
		EHDControlPointObjectiveType                               ObjType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5197[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           ObjPos;                                                  // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.UpdateSpawnPointSymbol
	 */
	struct UWBP_HDPOI_AASCP_C_UpdateSpawnPointSymbol_Params
	{
	public:
		bool                                                       bSpawnable;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.UpdateRestrictedSymbol
	 */
	struct UWBP_HDPOI_AASCP_C_UpdateRestrictedSymbol_Params
	{
	public:
		bool                                                       bRestricted;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.UpdateObjIconBrush
	 */
	struct UWBP_HDPOI_AASCP_C_UpdateObjIconBrush_Params
	{
	public:
		struct FSlateBrush                                         NewObjBrush;                                             // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.UpdateFlagIconBrush
	 */
	struct UWBP_HDPOI_AASCP_C_UpdateFlagIconBrush_Params
	{
	public:
		struct FSlateBrush                                         NewFlagBrush;                                            // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.GetObjImageByType
	 */
	struct UWBP_HDPOI_AASCP_C_GetObjImageByType_Params
	{
	public:
		EHDControlPointObjectiveType                               ObjType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_38FV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             ObjImg;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.SetBrushImageInPlace
	 */
	struct UWBP_HDPOI_AASCP_C_SetBrushImageInPlace_Params
	{
	public:
		struct FSlateBrush                                         BrushToModify;                                           // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UObject*                                             NewBrushImg;                                             // 0x0088(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.GetFlagImageByTeam
	 */
	struct UWBP_HDPOI_AASCP_C_GetFlagImageByTeam_Params
	{
	public:
		EHDTeam                                                    Team;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q3E1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             TeamFlagImg;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.UpdateObjectiveSymbol
	 */
	struct UWBP_HDPOI_AASCP_C_UpdateObjectiveSymbol_Params
	{
	public:
		EHDControlPointObjectiveType                               ObjectiveType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8V9F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.UpdateFlagSymbol
	 */
	struct UWBP_HDPOI_AASCP_C_UpdateFlagSymbol_Params
	{
	public:
		EHDTeam                                                    OwningTeam;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8VTY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.UpdateToolTipText
	 */
	struct UWBP_HDPOI_AASCP_C_UpdateToolTipText_Params
	{
	public:
		class FText                                                TextToUse;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.GetIconBrush
	 */
	struct UWBP_HDPOI_AASCP_C_GetIconBrush_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.GetOwningPlayerTeam
	 */
	struct UWBP_HDPOI_AASCP_C_GetOwningPlayerTeam_Params
	{
	public:
		EHDTeam                                                    PlayerTeam;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.UpdateWidgetVisuals
	 */
	struct UWBP_HDPOI_AASCP_C_UpdateWidgetVisuals_Params
	{	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.HandlePlayerOrCPTeamUpdate
	 */
	struct UWBP_HDPOI_AASCP_C_HandlePlayerOrCPTeamUpdate_Params
	{	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.InitControlPointListeners
	 */
	struct UWBP_HDPOI_AASCP_C_InitControlPointListeners_Params
	{	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.InitOwningPlayerListeners
	 */
	struct UWBP_HDPOI_AASCP_C_InitOwningPlayerListeners_Params
	{	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.ReceiveCanSelect
	 */
	struct UWBP_HDPOI_AASCP_C_ReceiveCanSelect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.SetOwningPlayerRefs
	 */
	struct UWBP_HDPOI_AASCP_C_SetOwningPlayerRefs_Params
	{	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.OnLoaded_5CAFEAE1478BEEFAA7C958AC31FEFBB2
	 */
	struct UWBP_HDPOI_AASCP_C_OnLoaded_5CAFEAE1478BEEFAA7C958AC31FEFBB2_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.OnLoaded_DA523F1F44AD85D87E676986278348D2
	 */
	struct UWBP_HDPOI_AASCP_C_OnLoaded_DA523F1F44AD85D87E676986278348D2_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.OnLoaded_9607A58E4C66E7AD82487995A3A1E7B7
	 */
	struct UWBP_HDPOI_AASCP_C_OnLoaded_9607A58E4C66E7AD82487995A3A1E7B7_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.Destruct
	 */
	struct UWBP_HDPOI_AASCP_C_Destruct_Params
	{	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.ReceivePOIInitialized
	 */
	struct UWBP_HDPOI_AASCP_C_ReceivePOIInitialized_Params
	{	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.SetIconBrush
	 */
	struct UWBP_HDPOI_AASCP_C_SetIconBrush_Params
	{
	public:
		struct FSlateBrush                                         NewIconBrush;                                            // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.ReceivePOISelected
	 */
	struct UWBP_HDPOI_AASCP_C_ReceivePOISelected_Params
	{	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.ReceivePOIDeselected
	 */
	struct UWBP_HDPOI_AASCP_C_ReceivePOIDeselected_Params
	{	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.Construct
	 */
	struct UWBP_HDPOI_AASCP_C_Construct_Params
	{	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.OnOwningPlayerTeamNumUpdated
	 */
	struct UWBP_HDPOI_AASCP_C_OnOwningPlayerTeamNumUpdated_Params
	{
	public:
		unsigned char                                              LastTeamNum;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewTeamNum;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.OnOwningPlayerRepPlayerState
	 */
	struct UWBP_HDPOI_AASCP_C_OnOwningPlayerRepPlayerState_Params
	{	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.OnControlPointTeamUpdated
	 */
	struct UWBP_HDPOI_AASCP_C_OnControlPointTeamUpdated_Params
	{
	public:
		class AHDBaseCapturePoint*                                 ControlPoint;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHDTeam                                                    PrevTeam;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHDTeam                                                    NewTeam;                                                 // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCaptured;                                               // 0x000A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.OnControlPointCaptureStatusUpdated
	 */
	struct UWBP_HDPOI_AASCP_C_OnControlPointCaptureStatusUpdated_Params
	{
	public:
		class AHDBaseCapturePoint*                                 ControlPoint;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.LoadFlagImgs
	 */
	struct UWBP_HDPOI_AASCP_C_LoadFlagImgs_Params
	{	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.Tick
	 */
	struct UWBP_HDPOI_AASCP_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.PreConstruct
	 */
	struct UWBP_HDPOI_AASCP_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C.ExecuteUbergraph_WBP_HDPOI_AASCP
	 */
	struct UWBP_HDPOI_AASCP_C_ExecuteUbergraph_WBP_HDPOI_AASCP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DISV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
