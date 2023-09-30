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
	 * BlueprintGeneratedClass BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C
	 * Size -> 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
	 */
	class UBP_HDRuleset_SquadComms_C : public UHDGameRulesetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0060(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class APlayerController*>                           AddChannelPlayers;                                       // 0x0068(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void UpdateSquadChannelForPlayer(class APlayerController* Player, class UDFPlayerCommsComponent* PlayerCommsComp, class AHDSquadState* PlayerSquad, bool bRemoveChannel);
		void OnFailure_EF6FE6634798C45922DA3F8796D99226();
		void OnSuccess_EF6FE6634798C45922DA3F8796D99226(class UDFCommChannel* CreatedChannel);
		void OnPerformSetup_EF6FE6634798C45922DA3F8796D99226(class UDFCommChannel* CreatedChannel);
		void RegisterActor(class AActor* RegisteredActor);
		void PlayerJoinedSquad(class AHDSquadState* Squad, class AHDPlayerState* MemberPS);
		void PlayerLeftSquad(class AHDSquadState* Squad, class AHDPlayerState* MemberPS);
		void CreateSquadChannel(class APlayerController* Player, const class FName& NameOverride, class AHDSquadState* PlayerSquad);
		void SquadRenamed(class AHDSquadState* Squad, const class FText& NewName, const class FText& PrevName);
		void ExecuteUbergraph_BP_HDRuleset_SquadComms(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
