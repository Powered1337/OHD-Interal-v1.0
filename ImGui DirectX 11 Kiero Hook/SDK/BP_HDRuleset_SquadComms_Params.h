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
	 * Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.UpdateSquadChannelForPlayer
	 */
	struct UBP_HDRuleset_SquadComms_C_UpdateSquadChannelForPlayer_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDFPlayerCommsComponent*                             PlayerCommsComp;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AHDSquadState*                                       PlayerSquad;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bRemoveChannel;                                          // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.OnFailure_EF6FE6634798C45922DA3F8796D99226
	 */
	struct UBP_HDRuleset_SquadComms_C_OnFailure_EF6FE6634798C45922DA3F8796D99226_Params
	{	};

	/**
	 * Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.OnSuccess_EF6FE6634798C45922DA3F8796D99226
	 */
	struct UBP_HDRuleset_SquadComms_C_OnSuccess_EF6FE6634798C45922DA3F8796D99226_Params
	{
	public:
		class UDFCommChannel*                                      CreatedChannel;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.OnPerformSetup_EF6FE6634798C45922DA3F8796D99226
	 */
	struct UBP_HDRuleset_SquadComms_C_OnPerformSetup_EF6FE6634798C45922DA3F8796D99226_Params
	{
	public:
		class UDFCommChannel*                                      CreatedChannel;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.RegisterActor
	 */
	struct UBP_HDRuleset_SquadComms_C_RegisterActor_Params
	{
	public:
		class AActor*                                              RegisteredActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.PlayerJoinedSquad
	 */
	struct UBP_HDRuleset_SquadComms_C_PlayerJoinedSquad_Params
	{
	public:
		class AHDSquadState*                                       Squad;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AHDPlayerState*                                      MemberPS;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.PlayerLeftSquad
	 */
	struct UBP_HDRuleset_SquadComms_C_PlayerLeftSquad_Params
	{
	public:
		class AHDSquadState*                                       Squad;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AHDPlayerState*                                      MemberPS;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.CreateSquadChannel
	 */
	struct UBP_HDRuleset_SquadComms_C_CreateSquadChannel_Params
	{
	public:
		class APlayerController*                                   Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NameOverride;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AHDSquadState*                                       PlayerSquad;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.SquadRenamed
	 */
	struct UBP_HDRuleset_SquadComms_C_SquadRenamed_Params
	{
	public:
		class AHDSquadState*                                       Squad;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                NewName;                                                 // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                PrevName;                                                // 0x0020(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.ExecuteUbergraph_BP_HDRuleset_SquadComms
	 */
	struct UBP_HDRuleset_SquadComms_C_ExecuteUbergraph_BP_HDRuleset_SquadComms_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
