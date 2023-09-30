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
	 * Function BP_HDRuleset_TeamComms.BP_HDRuleset_TeamComms_C.GetPlayerName
	 */
	struct UBP_HDRuleset_TeamComms_C_GetPlayerName_Params
	{
	public:
		class AController*                                         Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              PlayerName;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDRuleset_TeamComms.BP_HDRuleset_TeamComms_C.HandlePlayerJoinedTeam
	 */
	struct UBP_HDRuleset_TeamComms_C_HandlePlayerJoinedTeam_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDFPlayerCommsComponent*                             PlayerCommsComp;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AHDTeamState*                                        AssignedTS;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDRuleset_TeamComms.BP_HDRuleset_TeamComms_C.OnFailure_C4300E984EC6AE0B0EBC1EA4F402D0FF
	 */
	struct UBP_HDRuleset_TeamComms_C_OnFailure_C4300E984EC6AE0B0EBC1EA4F402D0FF_Params
	{	};

	/**
	 * Function BP_HDRuleset_TeamComms.BP_HDRuleset_TeamComms_C.OnSuccess_C4300E984EC6AE0B0EBC1EA4F402D0FF
	 */
	struct UBP_HDRuleset_TeamComms_C_OnSuccess_C4300E984EC6AE0B0EBC1EA4F402D0FF_Params
	{
	public:
		class UDFCommChannel*                                      CreatedChannel;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDRuleset_TeamComms.BP_HDRuleset_TeamComms_C.OnPerformSetup_C4300E984EC6AE0B0EBC1EA4F402D0FF
	 */
	struct UBP_HDRuleset_TeamComms_C_OnPerformSetup_C4300E984EC6AE0B0EBC1EA4F402D0FF_Params
	{
	public:
		class UDFCommChannel*                                      CreatedChannel;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDRuleset_TeamComms.BP_HDRuleset_TeamComms_C.PlayerJoinedTeam
	 */
	struct UBP_HDRuleset_TeamComms_C_PlayerJoinedTeam_Params
	{
	public:
		class AController*                                         JoiningPlayer;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              TeamNum;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDRuleset_TeamComms.BP_HDRuleset_TeamComms_C.CreateTeamChannel
	 */
	struct UBP_HDRuleset_TeamComms_C_CreateTeamChannel_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NameOverride;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AHDTeamState*                                        PlayerTeam;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDRuleset_TeamComms.BP_HDRuleset_TeamComms_C.ExecuteUbergraph_BP_HDRuleset_TeamComms
	 */
	struct UBP_HDRuleset_TeamComms_C_ExecuteUbergraph_BP_HDRuleset_TeamComms_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
