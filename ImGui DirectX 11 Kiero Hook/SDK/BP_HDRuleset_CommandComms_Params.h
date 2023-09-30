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
	 * Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.RetrieveSQMemberData
	 */
	struct UBP_HDRuleset_CommandComms_C_RetrieveSQMemberData_Params
	{
	public:
		class AHDSquadState*                                       Squad;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AHDPlayerState*                                      SQMemberPS;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bValidData;                                              // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0GXE[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerController*                                   MemberPC;                                                // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AHDTeamState*                                        MemberTS;                                                // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDFPlayerCommsComponent*                             MemberCommsComp;                                         // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.HandleAssignedHumanSquadLead
	 */
	struct UBP_HDRuleset_CommandComms_C_HandleAssignedHumanSquadLead_Params
	{
	public:
		class AHDSquadState*                                       Squad;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AHDPlayerState*                                      NewLeaderPS;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.HandleUnassignedHumanSquadLead
	 */
	struct UBP_HDRuleset_CommandComms_C_HandleUnassignedHumanSquadLead_Params
	{
	public:
		class AHDSquadState*                                       Squad;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AHDPlayerState*                                      FormerLeaderPS;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.OnFailure_4BAA1D2044B2D5D3BCF77D9C80E373A3
	 */
	struct UBP_HDRuleset_CommandComms_C_OnFailure_4BAA1D2044B2D5D3BCF77D9C80E373A3_Params
	{	};

	/**
	 * Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.OnSuccess_4BAA1D2044B2D5D3BCF77D9C80E373A3
	 */
	struct UBP_HDRuleset_CommandComms_C_OnSuccess_4BAA1D2044B2D5D3BCF77D9C80E373A3_Params
	{
	public:
		class UDFCommChannel*                                      CreatedChannel;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.OnPerformSetup_4BAA1D2044B2D5D3BCF77D9C80E373A3
	 */
	struct UBP_HDRuleset_CommandComms_C_OnPerformSetup_4BAA1D2044B2D5D3BCF77D9C80E373A3_Params
	{
	public:
		class UDFCommChannel*                                      CreatedChannel;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.RegisterActor
	 */
	struct UBP_HDRuleset_CommandComms_C_RegisterActor_Params
	{
	public:
		class AActor*                                              RegisteredActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.SquadStateLeaderAssigned
	 */
	struct UBP_HDRuleset_CommandComms_C_SquadStateLeaderAssigned_Params
	{
	public:
		class AHDSquadState*                                       Squad;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AHDPlayerState*                                      NewLeaderPS;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AHDPlayerState*                                      PrevLeaderPS;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.CreateCmdChannel
	 */
	struct UBP_HDRuleset_CommandComms_C_CreateCmdChannel_Params
	{
	public:
		class APlayerController*                                   SQLeaderPC;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AHDSquadState*                                       SQState;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NameOverride;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AHDTeamState*                                        SQTeam;                                                  // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.ExecuteUbergraph_BP_HDRuleset_CommandComms
	 */
	struct UBP_HDRuleset_CommandComms_C_ExecuteUbergraph_BP_HDRuleset_CommandComms_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7X58[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
