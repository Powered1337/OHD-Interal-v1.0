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
	 * WidgetBlueprintGeneratedClass WBP_HDScoreboardMenu.WBP_HDScoreboardMenu_C
	 * Size -> 0x0028 (FullSize[0x0278] - InheritedSize[0x0250])
	 */
	class UWBP_HDScoreboardMenu_C : public UHDScoreboardBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0250(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          BluforFactionText;                                       // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          OpforFactionText;                                        // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLinearColor                                        EvenRowEntryColor;                                       // 0x0268(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetupFactionInfoForTeam(class AHDTeamState* TeamState);
		void GetRowWidgetIndex(class UHDScoreboardListingRowBase* ListEntry, int32_t* EntryIndex);
		struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void PreConstruct(bool IsDesignTime);
		void ReceiveScoreboardListRowAdded(class UHDScoreboardListingRowBase* NewListEntry);
		void Construct();
		void ExecuteUbergraph_WBP_HDScoreboardMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
