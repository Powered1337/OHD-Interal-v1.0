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
	 * 		Name   -> Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.UpdateSquadChannelForPlayer
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDFPlayerCommsComponent*                     PlayerCommsComp                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDSquadState*                               PlayerSquad                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bRemoveChannel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HDRuleset_SquadComms_C::UpdateSquadChannelForPlayer(class APlayerController* Player, class UDFPlayerCommsComponent* PlayerCommsComp, class AHDSquadState* PlayerSquad, bool bRemoveChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.UpdateSquadChannelForPlayer");
		
		UBP_HDRuleset_SquadComms_C_UpdateSquadChannelForPlayer_Params params {};
		params.Player = Player;
		params.PlayerCommsComp = PlayerCommsComp;
		params.PlayerSquad = PlayerSquad;
		params.bRemoveChannel = bRemoveChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.OnFailure_EF6FE6634798C45922DA3F8796D99226
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_HDRuleset_SquadComms_C::OnFailure_EF6FE6634798C45922DA3F8796D99226()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.OnFailure_EF6FE6634798C45922DA3F8796D99226");
		
		UBP_HDRuleset_SquadComms_C_OnFailure_EF6FE6634798C45922DA3F8796D99226_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.OnSuccess_EF6FE6634798C45922DA3F8796D99226
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDFCommChannel*                              CreatedChannel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDRuleset_SquadComms_C::OnSuccess_EF6FE6634798C45922DA3F8796D99226(class UDFCommChannel* CreatedChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.OnSuccess_EF6FE6634798C45922DA3F8796D99226");
		
		UBP_HDRuleset_SquadComms_C_OnSuccess_EF6FE6634798C45922DA3F8796D99226_Params params {};
		params.CreatedChannel = CreatedChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.OnPerformSetup_EF6FE6634798C45922DA3F8796D99226
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDFCommChannel*                              CreatedChannel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDRuleset_SquadComms_C::OnPerformSetup_EF6FE6634798C45922DA3F8796D99226(class UDFCommChannel* CreatedChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.OnPerformSetup_EF6FE6634798C45922DA3F8796D99226");
		
		UBP_HDRuleset_SquadComms_C_OnPerformSetup_EF6FE6634798C45922DA3F8796D99226_Params params {};
		params.CreatedChannel = CreatedChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.RegisterActor
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      RegisteredActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDRuleset_SquadComms_C::RegisterActor(class AActor* RegisteredActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.RegisterActor");
		
		UBP_HDRuleset_SquadComms_C_RegisterActor_Params params {};
		params.RegisteredActor = RegisteredActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.PlayerJoinedSquad
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AHDSquadState*                               Squad                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDPlayerState*                              MemberPS                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDRuleset_SquadComms_C::PlayerJoinedSquad(class AHDSquadState* Squad, class AHDPlayerState* MemberPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.PlayerJoinedSquad");
		
		UBP_HDRuleset_SquadComms_C_PlayerJoinedSquad_Params params {};
		params.Squad = Squad;
		params.MemberPS = MemberPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.PlayerLeftSquad
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AHDSquadState*                               Squad                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDPlayerState*                              MemberPS                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDRuleset_SquadComms_C::PlayerLeftSquad(class AHDSquadState* Squad, class AHDPlayerState* MemberPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.PlayerLeftSquad");
		
		UBP_HDRuleset_SquadComms_C_PlayerLeftSquad_Params params {};
		params.Squad = Squad;
		params.MemberPS = MemberPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.CreateSquadChannel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NameOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDSquadState*                               PlayerSquad                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDRuleset_SquadComms_C::CreateSquadChannel(class APlayerController* Player, const class FName& NameOverride, class AHDSquadState* PlayerSquad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.CreateSquadChannel");
		
		UBP_HDRuleset_SquadComms_C_CreateSquadChannel_Params params {};
		params.Player = Player;
		params.NameOverride = NameOverride;
		params.PlayerSquad = PlayerSquad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.SquadRenamed
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AHDSquadState*                               Squad                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        NewName                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        PrevName                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_HDRuleset_SquadComms_C::SquadRenamed(class AHDSquadState* Squad, const class FText& NewName, const class FText& PrevName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.SquadRenamed");
		
		UBP_HDRuleset_SquadComms_C_SquadRenamed_Params params {};
		params.Squad = Squad;
		params.NewName = NewName;
		params.PrevName = PrevName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.ExecuteUbergraph_BP_HDRuleset_SquadComms
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDRuleset_SquadComms_C::ExecuteUbergraph_BP_HDRuleset_SquadComms(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C.ExecuteUbergraph_BP_HDRuleset_SquadComms");
		
		UBP_HDRuleset_SquadComms_C_ExecuteUbergraph_BP_HDRuleset_SquadComms_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_HDRuleset_SquadComms_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_HDRuleset_SquadComms_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HDRuleset_SquadComms.BP_HDRuleset_SquadComms_C");
		return ptr;
	}

}


