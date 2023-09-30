/**
 * Name: Operation__Harsh_Doorstop
 * Version: 4.5.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_TeamComms.BP_HDRuleset_TeamComms_C.GetPlayerName
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AController*                                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      PlayerName                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_HDRuleset_TeamComms_C::GetPlayerName(class AController* Player, class FString* PlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_TeamComms.BP_HDRuleset_TeamComms_C.GetPlayerName");
		
		UBP_HDRuleset_TeamComms_C_GetPlayerName_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerName != nullptr)
			*PlayerName = params.PlayerName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_TeamComms.BP_HDRuleset_TeamComms_C.HandlePlayerJoinedTeam
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDFPlayerCommsComponent*                     PlayerCommsComp                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDTeamState*                                AssignedTS                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDRuleset_TeamComms_C::HandlePlayerJoinedTeam(class APlayerController* Player, class UDFPlayerCommsComponent* PlayerCommsComp, class AHDTeamState* AssignedTS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_TeamComms.BP_HDRuleset_TeamComms_C.HandlePlayerJoinedTeam");
		
		UBP_HDRuleset_TeamComms_C_HandlePlayerJoinedTeam_Params params {};
		params.Player = Player;
		params.PlayerCommsComp = PlayerCommsComp;
		params.AssignedTS = AssignedTS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_TeamComms.BP_HDRuleset_TeamComms_C.OnFailure_C4300E984EC6AE0B0EBC1EA4F402D0FF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_HDRuleset_TeamComms_C::OnFailure_C4300E984EC6AE0B0EBC1EA4F402D0FF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_TeamComms.BP_HDRuleset_TeamComms_C.OnFailure_C4300E984EC6AE0B0EBC1EA4F402D0FF");
		
		UBP_HDRuleset_TeamComms_C_OnFailure_C4300E984EC6AE0B0EBC1EA4F402D0FF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_TeamComms.BP_HDRuleset_TeamComms_C.OnSuccess_C4300E984EC6AE0B0EBC1EA4F402D0FF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDFCommChannel*                              CreatedChannel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDRuleset_TeamComms_C::OnSuccess_C4300E984EC6AE0B0EBC1EA4F402D0FF(class UDFCommChannel* CreatedChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_TeamComms.BP_HDRuleset_TeamComms_C.OnSuccess_C4300E984EC6AE0B0EBC1EA4F402D0FF");
		
		UBP_HDRuleset_TeamComms_C_OnSuccess_C4300E984EC6AE0B0EBC1EA4F402D0FF_Params params {};
		params.CreatedChannel = CreatedChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_TeamComms.BP_HDRuleset_TeamComms_C.OnPerformSetup_C4300E984EC6AE0B0EBC1EA4F402D0FF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDFCommChannel*                              CreatedChannel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDRuleset_TeamComms_C::OnPerformSetup_C4300E984EC6AE0B0EBC1EA4F402D0FF(class UDFCommChannel* CreatedChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_TeamComms.BP_HDRuleset_TeamComms_C.OnPerformSetup_C4300E984EC6AE0B0EBC1EA4F402D0FF");
		
		UBP_HDRuleset_TeamComms_C_OnPerformSetup_C4300E984EC6AE0B0EBC1EA4F402D0FF_Params params {};
		params.CreatedChannel = CreatedChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_TeamComms.BP_HDRuleset_TeamComms_C.PlayerJoinedTeam
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 JoiningPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      TeamNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDRuleset_TeamComms_C::PlayerJoinedTeam(class AController* JoiningPlayer, unsigned char TeamNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_TeamComms.BP_HDRuleset_TeamComms_C.PlayerJoinedTeam");
		
		UBP_HDRuleset_TeamComms_C_PlayerJoinedTeam_Params params {};
		params.JoiningPlayer = JoiningPlayer;
		params.TeamNum = TeamNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_TeamComms.BP_HDRuleset_TeamComms_C.CreateTeamChannel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NameOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDTeamState*                                PlayerTeam                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDRuleset_TeamComms_C::CreateTeamChannel(class APlayerController* Player, const class FName& NameOverride, class AHDTeamState* PlayerTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_TeamComms.BP_HDRuleset_TeamComms_C.CreateTeamChannel");
		
		UBP_HDRuleset_TeamComms_C_CreateTeamChannel_Params params {};
		params.Player = Player;
		params.NameOverride = NameOverride;
		params.PlayerTeam = PlayerTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_TeamComms.BP_HDRuleset_TeamComms_C.ExecuteUbergraph_BP_HDRuleset_TeamComms
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDRuleset_TeamComms_C::ExecuteUbergraph_BP_HDRuleset_TeamComms(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_TeamComms.BP_HDRuleset_TeamComms_C.ExecuteUbergraph_BP_HDRuleset_TeamComms");
		
		UBP_HDRuleset_TeamComms_C_ExecuteUbergraph_BP_HDRuleset_TeamComms_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_HDRuleset_TeamComms_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_HDRuleset_TeamComms_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HDRuleset_TeamComms.BP_HDRuleset_TeamComms_C");
		return ptr;
	}

}


