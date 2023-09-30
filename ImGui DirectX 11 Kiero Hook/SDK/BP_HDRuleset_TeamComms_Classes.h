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
	 * BlueprintGeneratedClass BP_HDRuleset_TeamComms.BP_HDRuleset_TeamComms_C
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UBP_HDRuleset_TeamComms_C : public UHDGameRulesetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0060(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDFCommChannelDefinition*                            TeamChannelDef;                                          // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetPlayerName(class AController* Player, class FString* PlayerName);
		void HandlePlayerJoinedTeam(class APlayerController* Player, class UDFPlayerCommsComponent* PlayerCommsComp, class AHDTeamState* AssignedTS);
		void OnFailure_C4300E984EC6AE0B0EBC1EA4F402D0FF();
		void OnSuccess_C4300E984EC6AE0B0EBC1EA4F402D0FF(class UDFCommChannel* CreatedChannel);
		void OnPerformSetup_C4300E984EC6AE0B0EBC1EA4F402D0FF(class UDFCommChannel* CreatedChannel);
		void PlayerJoinedTeam(class AController* JoiningPlayer, unsigned char TeamNum);
		void CreateTeamChannel(class APlayerController* Player, const class FName& NameOverride, class AHDTeamState* PlayerTeam);
		void ExecuteUbergraph_BP_HDRuleset_TeamComms(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
