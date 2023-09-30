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
	 * WidgetBlueprintGeneratedClass WBP_HDPOI_AASCP.WBP_HDPOI_AASCP_C
	 * Size -> 0x0303 (FullSize[0x06A3] - InheritedSize[0x03A0])
	 */
	class UWBP_HDPOI_AASCP_C : public UDFPOIWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              FlagIcon;                                                // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              FlagPoleIcon;                                            // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            IconOverlay;                                             // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ObjIcon;                                                 // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RecaptureIcon;                                           // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SpawnPointIcon;                                          // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       POIWidgetInitialized;                                    // 0x03D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bClearSelectionOnWidgetDestruct;                         // 0x03D9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TZE0[0x6];                                   // 0x03DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_HDPlayerControllerBase_C*                        OwningPC;                                                // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AHDPlayerState*                                      OwningPlayerState;                                       // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_HDCapturePointBase_C*                            POIActorCP;                                              // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              POISelectionIndicatorClass;                              // 0x03F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWBP_SpawnMap_POISelectionIndicator_C*               POISelectionIndicator;                                   // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateBrush                                         IndicatorSelectedBrush;                                  // 0x0408(0x0088) Edit, BlueprintVisible
		struct FSlateBrush                                         IndicatorDeselectedBrush;                                // 0x0490(0x0088) Edit, BlueprintVisible
		struct FSlateBrush                                         FlagIconBrush;                                           // 0x0518(0x0088) Edit, BlueprintVisible, Transient, DisableEditOnInstance
		struct FSlateBrush                                         ObjIconBrush;                                            // 0x05A0(0x0088) Edit, BlueprintVisible, Transient, DisableEditOnInstance
		class UTexture2D*                                          FlagTexBlufor;                                           // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          FlagTexOpfor;                                            // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          FlagTexNeutral;                                          // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              NeutralFlagTex[0x28];                                    // 0x0640(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UWBP_DeployMenu_C*                                   OwningDeployMenu;                                        // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_HDFactionInfoBase_C*                             BluforFactionInfo;                                       // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_HDFactionInfoBase_C*                             OpforFactionInfo;                                        // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMargin                                             IndicatorPadding;                                        // 0x0680(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           OffensiveObjIconPos;                                     // 0x0690(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           DefensiveObjIconPos;                                     // 0x0698(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EHDControlPointObjectiveType                               PreviewObjectiveType;                                    // 0x06A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPreviewRestricted;                                      // 0x06A1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bPreviewSpawnable;                                       // 0x06A2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void GetObjPosByType(EHDControlPointObjectiveType ObjType, struct FVector2D* ObjPos);
		void UpdateSpawnPointSymbol(bool bSpawnable);
		void UpdateRestrictedSymbol(bool bRestricted);
		void UpdateObjIconBrush(struct FSlateBrush* NewObjBrush);
		void UpdateFlagIconBrush(struct FSlateBrush* NewFlagBrush);
		void GetObjImageByType(EHDControlPointObjectiveType ObjType, class UObject** ObjImg);
		void SetBrushImageInPlace(struct FSlateBrush* BrushToModify, class UObject* NewBrushImg);
		void GetFlagImageByTeam(EHDTeam Team, class UObject** TeamFlagImg);
		void UpdateObjectiveSymbol(EHDControlPointObjectiveType ObjectiveType);
		void UpdateFlagSymbol(EHDTeam OwningTeam);
		void UpdateToolTipText(const class FText& TextToUse);
		struct FSlateBrush GetIconBrush();
		void GetOwningPlayerTeam(EHDTeam* PlayerTeam);
		void UpdateWidgetVisuals();
		void HandlePlayerOrCPTeamUpdate();
		void InitControlPointListeners();
		void InitOwningPlayerListeners();
		bool ReceiveCanSelect();
		void SetOwningPlayerRefs();
		void OnLoaded_5CAFEAE1478BEEFAA7C958AC31FEFBB2(class UObject* Loaded);
		void OnLoaded_DA523F1F44AD85D87E676986278348D2(class UObject* Loaded);
		void OnLoaded_9607A58E4C66E7AD82487995A3A1E7B7(class UObject* Loaded);
		void Destruct();
		void ReceivePOIInitialized();
		void SetIconBrush(const struct FSlateBrush& NewIconBrush);
		void ReceivePOISelected();
		void ReceivePOIDeselected();
		void Construct();
		void OnOwningPlayerTeamNumUpdated(unsigned char LastTeamNum, unsigned char NewTeamNum);
		void OnOwningPlayerRepPlayerState();
		void OnControlPointTeamUpdated(class AHDBaseCapturePoint* ControlPoint, EHDTeam PrevTeam, EHDTeam NewTeam, bool bCaptured);
		void OnControlPointCaptureStatusUpdated(class AHDBaseCapturePoint* ControlPoint);
		void LoadFlagImgs();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_HDPOI_AASCP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
