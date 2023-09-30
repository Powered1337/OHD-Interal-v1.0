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
	 * BlueprintGeneratedClass BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UBP_HDRuleset_CommandComms_C : public UHDGameRulesetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0060(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDFCommChannelDefinition*                            CommandChannelDef;                                       // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RetrieveSQMemberData(class AHDSquadState* Squad, class AHDPlayerState* SQMemberPS, bool* bValidData, class APlayerController** MemberPC, class AHDTeamState** MemberTS, class UDFPlayerCommsComponent** MemberCommsComp);
		void HandleAssignedHumanSquadLead(class AHDSquadState* Squad, class AHDPlayerState* NewLeaderPS);
		void HandleUnassignedHumanSquadLead(class AHDSquadState* Squad, class AHDPlayerState* FormerLeaderPS);
		void OnFailure_4BAA1D2044B2D5D3BCF77D9C80E373A3();
		void OnSuccess_4BAA1D2044B2D5D3BCF77D9C80E373A3(class UDFCommChannel* CreatedChannel);
		void OnPerformSetup_4BAA1D2044B2D5D3BCF77D9C80E373A3(class UDFCommChannel* CreatedChannel);
		void RegisterActor(class AActor* RegisteredActor);
		void SquadStateLeaderAssigned(class AHDSquadState* Squad, class AHDPlayerState* NewLeaderPS, class AHDPlayerState* PrevLeaderPS);
		void CreateCmdChannel(class APlayerController* SQLeaderPC, class AHDSquadState* SQState, const class FName& NameOverride, class AHDTeamState* SQTeam);
		void ExecuteUbergraph_BP_HDRuleset_CommandComms(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
