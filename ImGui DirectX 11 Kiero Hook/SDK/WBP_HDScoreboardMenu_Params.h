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
	 * Function WBP_HDScoreboardMenu.WBP_HDScoreboardMenu_C.SetupFactionInfoForTeam
	 */
	struct UWBP_HDScoreboardMenu_C_SetupFactionInfoForTeam_Params
	{
	public:
		class AHDTeamState*                                        TeamState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDScoreboardMenu.WBP_HDScoreboardMenu_C.GetRowWidgetIndex
	 */
	struct UWBP_HDScoreboardMenu_C_GetRowWidgetIndex_Params
	{
	public:
		class UHDScoreboardListingRowBase*                         ListEntry;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    EntryIndex;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDScoreboardMenu.WBP_HDScoreboardMenu_C.OnMouseButtonDoubleClick
	 */
	struct UWBP_HDScoreboardMenu_C_OnMouseButtonDoubleClick_Params
	{
	public:
		struct FGeometry                                           InMyGeometry;                                            // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       InMouseEvent;                                            // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_HDScoreboardMenu.WBP_HDScoreboardMenu_C.OnMouseButtonDown
	 */
	struct UWBP_HDScoreboardMenu_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_HDScoreboardMenu.WBP_HDScoreboardMenu_C.PreConstruct
	 */
	struct UWBP_HDScoreboardMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_HDScoreboardMenu.WBP_HDScoreboardMenu_C.ReceiveScoreboardListRowAdded
	 */
	struct UWBP_HDScoreboardMenu_C_ReceiveScoreboardListRowAdded_Params
	{
	public:
		class UHDScoreboardListingRowBase*                         NewListEntry;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDScoreboardMenu.WBP_HDScoreboardMenu_C.Construct
	 */
	struct UWBP_HDScoreboardMenu_C_Construct_Params
	{	};

	/**
	 * Function WBP_HDScoreboardMenu.WBP_HDScoreboardMenu_C.ExecuteUbergraph_WBP_HDScoreboardMenu
	 */
	struct UWBP_HDScoreboardMenu_C_ExecuteUbergraph_WBP_HDScoreboardMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OWMG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
