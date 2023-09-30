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
	 * 		Name   -> Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Time of Day using Time Code
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimecode                                   TimeCode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_BP_C::SetTimeofDayusingTimeCode(const struct FTimecode& TimeCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Time of Day using Time Code");
		
		AUltra_Dynamic_Sky_BP_C_SetTimeofDayusingTimeCode_Params params {};
		params.TimeCode = TimeCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Get Time of Day in Real Time Format
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimecode                                   Time                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_BP_C::GetTimeofDayinRealTimeFormat(struct FTimecode* Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Get Time of Day in Real Time Format");
		
		AUltra_Dynamic_Sky_BP_C_GetTimeofDayinRealTimeFormat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Time != nullptr)
			*Time = params.Time;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Material Variables
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_BP_C::SetMaterialVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Material Variables");
		
		AUltra_Dynamic_Sky_BP_C_SetMaterialVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Sun and Moon Rotation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               MoveStaticLights                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AUltra_Dynamic_Sky_BP_C::SetSunandMoonRotation(bool MoveStaticLights)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Sun and Moon Rotation");
		
		AUltra_Dynamic_Sky_BP_C_SetSunandMoonRotation_Params params {};
		params.MoveStaticLights = MoveStaticLights;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UserConstructionScript");
		
		AUltra_Dynamic_Sky_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveTick");
		
		AUltra_Dynamic_Sky_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveBeginPlay");
		
		AUltra_Dynamic_Sky_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Midnight
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_BP_C::Midnight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Midnight");
		
		AUltra_Dynamic_Sky_BP_C_Midnight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ExecuteUbergraph_Ultra_Dynamic_Sky_BP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_BP_C::ExecuteUbergraph_Ultra_Dynamic_Sky_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ExecuteUbergraph_Ultra_Dynamic_Sky_BP");
		
		AUltra_Dynamic_Sky_BP_C_ExecuteUbergraph_Ultra_Dynamic_Sky_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Sunrise__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_BP_C::Sunrise__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Sunrise__DelegateSignature");
		
		AUltra_Dynamic_Sky_BP_C_Sunrise__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Sunset__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_BP_C::Sunset__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Sunset__DelegateSignature");
		
		AUltra_Dynamic_Sky_BP_C_Sunset__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Stop_Raining__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_BP_C::Stop_Raining__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Stop_Raining__DelegateSignature");
		
		AUltra_Dynamic_Sky_BP_C_Stop_Raining__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Start_Raining__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_BP_C::Start_Raining__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Start_Raining__DelegateSignature");
		
		AUltra_Dynamic_Sky_BP_C_Start_Raining__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUltra_Dynamic_Sky_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUltra_Dynamic_Sky_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C");
		return ptr;
	}

}


