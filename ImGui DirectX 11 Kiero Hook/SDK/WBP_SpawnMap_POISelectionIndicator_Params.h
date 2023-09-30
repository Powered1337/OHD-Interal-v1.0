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
	 * Function WBP_SpawnMap_POISelectionIndicator.WBP_SpawnMap_POISelectionIndicator_C.SetDeselectionBrush
	 */
	struct UWBP_SpawnMap_POISelectionIndicator_C_SetDeselectionBrush_Params
	{
	public:
		struct FSlateBrush                                         NewDeselectionBrush;                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_SpawnMap_POISelectionIndicator.WBP_SpawnMap_POISelectionIndicator_C.Init
	 */
	struct UWBP_SpawnMap_POISelectionIndicator_C_Init_Params
	{
	public:
		class UDFPOIWidget*                                        ParentPOI;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateBrush                                         SelectionBrush;                                          // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSlateBrush                                         DeselectionBrush;                                        // 0x0090(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bSelectable;                                             // 0x0118(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SpawnMap_POISelectionIndicator.WBP_SpawnMap_POISelectionIndicator_C.POI Selected
	 */
	struct UWBP_SpawnMap_POISelectionIndicator_C_POISelected_Params
	{	};

	/**
	 * Function WBP_SpawnMap_POISelectionIndicator.WBP_SpawnMap_POISelectionIndicator_C.POI Deselected
	 */
	struct UWBP_SpawnMap_POISelectionIndicator_C_POIDeselected_Params
	{
	public:
		bool                                                       bSelectable;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SpawnMap_POISelectionIndicator.WBP_SpawnMap_POISelectionIndicator_C.ExecuteUbergraph_WBP_SpawnMap_POISelectionIndicator
	 */
	struct UWBP_SpawnMap_POISelectionIndicator_C_ExecuteUbergraph_WBP_SpawnMap_POISelectionIndicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
