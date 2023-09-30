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
	 * 		Name   -> Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.RetrieveSQMemberData
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AHDSquadState*                               Squad                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDPlayerState*                              SQMemberPS                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bValidData                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APlayerController*                           MemberPC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDTeamState*                                MemberTS                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDFPlayerCommsComponent*                     MemberCommsComp                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDRuleset_CommandComms_C::RetrieveSQMemberData(class AHDSquadState* Squad, class AHDPlayerState* SQMemberPS, bool* bValidData, class APlayerController** MemberPC, class AHDTeamState** MemberTS, class UDFPlayerCommsComponent** MemberCommsComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.RetrieveSQMemberData");
		
		UBP_HDRuleset_CommandComms_C_RetrieveSQMemberData_Params params {};
		params.Squad = Squad;
		params.SQMemberPS = SQMemberPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValidData != nullptr)
			*bValidData = params.bValidData;
		if (MemberPC != nullptr)
			*MemberPC = params.MemberPC;
		if (MemberTS != nullptr)
			*MemberTS = params.MemberTS;
		if (MemberCommsComp != nullptr)
			*MemberCommsComp = params.MemberCommsComp;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.HandleAssignedHumanSquadLead
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AHDSquadState*                               Squad                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDPlayerState*                              NewLeaderPS                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDRuleset_CommandComms_C::HandleAssignedHumanSquadLead(class AHDSquadState* Squad, class AHDPlayerState* NewLeaderPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.HandleAssignedHumanSquadLead");
		
		UBP_HDRuleset_CommandComms_C_HandleAssignedHumanSquadLead_Params params {};
		params.Squad = Squad;
		params.NewLeaderPS = NewLeaderPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.HandleUnassignedHumanSquadLead
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AHDSquadState*                               Squad                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDPlayerState*                              FormerLeaderPS                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDRuleset_CommandComms_C::HandleUnassignedHumanSquadLead(class AHDSquadState* Squad, class AHDPlayerState* FormerLeaderPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.HandleUnassignedHumanSquadLead");
		
		UBP_HDRuleset_CommandComms_C_HandleUnassignedHumanSquadLead_Params params {};
		params.Squad = Squad;
		params.FormerLeaderPS = FormerLeaderPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.OnFailure_4BAA1D2044B2D5D3BCF77D9C80E373A3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_HDRuleset_CommandComms_C::OnFailure_4BAA1D2044B2D5D3BCF77D9C80E373A3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.OnFailure_4BAA1D2044B2D5D3BCF77D9C80E373A3");
		
		UBP_HDRuleset_CommandComms_C_OnFailure_4BAA1D2044B2D5D3BCF77D9C80E373A3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.OnSuccess_4BAA1D2044B2D5D3BCF77D9C80E373A3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDFCommChannel*                              CreatedChannel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDRuleset_CommandComms_C::OnSuccess_4BAA1D2044B2D5D3BCF77D9C80E373A3(class UDFCommChannel* CreatedChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.OnSuccess_4BAA1D2044B2D5D3BCF77D9C80E373A3");
		
		UBP_HDRuleset_CommandComms_C_OnSuccess_4BAA1D2044B2D5D3BCF77D9C80E373A3_Params params {};
		params.CreatedChannel = CreatedChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.OnPerformSetup_4BAA1D2044B2D5D3BCF77D9C80E373A3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDFCommChannel*                              CreatedChannel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDRuleset_CommandComms_C::OnPerformSetup_4BAA1D2044B2D5D3BCF77D9C80E373A3(class UDFCommChannel* CreatedChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.OnPerformSetup_4BAA1D2044B2D5D3BCF77D9C80E373A3");
		
		UBP_HDRuleset_CommandComms_C_OnPerformSetup_4BAA1D2044B2D5D3BCF77D9C80E373A3_Params params {};
		params.CreatedChannel = CreatedChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.RegisterActor
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      RegisteredActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDRuleset_CommandComms_C::RegisterActor(class AActor* RegisteredActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.RegisterActor");
		
		UBP_HDRuleset_CommandComms_C_RegisterActor_Params params {};
		params.RegisteredActor = RegisteredActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.SquadStateLeaderAssigned
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AHDSquadState*                               Squad                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDPlayerState*                              NewLeaderPS                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDPlayerState*                              PrevLeaderPS                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDRuleset_CommandComms_C::SquadStateLeaderAssigned(class AHDSquadState* Squad, class AHDPlayerState* NewLeaderPS, class AHDPlayerState* PrevLeaderPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.SquadStateLeaderAssigned");
		
		UBP_HDRuleset_CommandComms_C_SquadStateLeaderAssigned_Params params {};
		params.Squad = Squad;
		params.NewLeaderPS = NewLeaderPS;
		params.PrevLeaderPS = PrevLeaderPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.CreateCmdChannel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           SQLeaderPC                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDSquadState*                               SQState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NameOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDTeamState*                                SQTeam                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDRuleset_CommandComms_C::CreateCmdChannel(class APlayerController* SQLeaderPC, class AHDSquadState* SQState, const class FName& NameOverride, class AHDTeamState* SQTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.CreateCmdChannel");
		
		UBP_HDRuleset_CommandComms_C_CreateCmdChannel_Params params {};
		params.SQLeaderPC = SQLeaderPC;
		params.SQState = SQState;
		params.NameOverride = NameOverride;
		params.SQTeam = SQTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.ExecuteUbergraph_BP_HDRuleset_CommandComms
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HDRuleset_CommandComms_C::ExecuteUbergraph_BP_HDRuleset_CommandComms(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C.ExecuteUbergraph_BP_HDRuleset_CommandComms");
		
		UBP_HDRuleset_CommandComms_C_ExecuteUbergraph_BP_HDRuleset_CommandComms_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_HDRuleset_CommandComms_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_HDRuleset_CommandComms_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HDRuleset_CommandComms.BP_HDRuleset_CommandComms_C");
		return ptr;
	}

}


