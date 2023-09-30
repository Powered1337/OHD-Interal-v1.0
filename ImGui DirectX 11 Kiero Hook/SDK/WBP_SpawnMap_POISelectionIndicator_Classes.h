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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass WBP_SpawnMap_POISelectionIndicator.WBP_SpawnMap_POISelectionIndicator_C
	 * Size -> 0x0128 (FullSize[0x0358] - InheritedSize[0x0230])
	 */
	class UWBP_SpawnMap_POISelectionIndicator_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              SelectionIcon;                                           // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDFPOIWidget*                                        ParentPOI;                                               // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateBrush                                         SelectionBrush;                                          // 0x0248(0x0088) Edit, BlueprintVisible, Transient, DisableEditOnInstance
		struct FSlateBrush                                         DeselectionBrush;                                        // 0x02D0(0x0088) Edit, BlueprintVisible, Transient, DisableEditOnInstance

	public:
		void SetDeselectionBrush(struct FSlateBrush* NewDeselectionBrush);
		void Init(class UDFPOIWidget* ParentPOI, struct FSlateBrush* SelectionBrush, struct FSlateBrush* DeselectionBrush, bool bSelectable);
		void POISelected();
		void POIDeselected(bool bSelectable);
		void ExecuteUbergraph_WBP_SpawnMap_POISelectionIndicator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
