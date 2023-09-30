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
	 * 		Name   -> Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.SetIconVisibilityOverlappingPawns
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisibility                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDWeap_AmmoBoxBase_C::SetIconVisibilityOverlappingPawns(bool bVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.SetIconVisibilityOverlappingPawns");
		
		ABP_HDWeap_AmmoBoxBase_C_SetIconVisibilityOverlappingPawns_Params params {};
		params.bVisibility = bVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.SetIconVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADFBaseCharacter*                            Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDWeap_AmmoBoxBase_C::SetIconVisibility(class ADFBaseCharacter* Pawn, bool Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.SetIconVisibility");
		
		ABP_HDWeap_AmmoBoxBase_C_SetIconVisibility_Params params {};
		params.Pawn = Pawn;
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.ReplenishAmmo
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADFBaseCharacter*                            Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Ammo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ClipsRestored                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDWeap_AmmoBoxBase_C::ReplenishAmmo(class ADFBaseCharacter* Pawn, int32_t Ammo, int32_t* ClipsRestored)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.ReplenishAmmo");
		
		ABP_HDWeap_AmmoBoxBase_C_ReplenishAmmo_Params params {};
		params.Pawn = Pawn;
		params.Ammo = Ammo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClipsRestored != nullptr)
			*ClipsRestored = params.ClipsRestored;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.AmmoAuraEffect
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDWeap_AmmoBoxBase_C::AmmoAuraEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.AmmoAuraEffect");
		
		ABP_HDWeap_AmmoBoxBase_C_AmmoAuraEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDWeap_AmmoBoxBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.UserConstructionScript");
		
		ABP_HDWeap_AmmoBoxBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.DoAuraEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDWeap_AmmoBoxBase_C::DoAuraEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.DoAuraEffect");
		
		ABP_HDWeap_AmmoBoxBase_C_DoAuraEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.BndEvt__AreaOfEffectCollisionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_HDWeap_AmmoBoxBase_C::BndEvt__AreaOfEffectCollisionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.BndEvt__AreaOfEffectCollisionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_HDWeap_AmmoBoxBase_C_BndEvt__AreaOfEffectCollisionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.BndEvt__AreaOfEffectCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDWeap_AmmoBoxBase_C::BndEvt__AreaOfEffectCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.BndEvt__AreaOfEffectCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
		
		ABP_HDWeap_AmmoBoxBase_C_BndEvt__AreaOfEffectCollisionSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.OnAuraEffectBegin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDWeap_AmmoBoxBase_C::OnAuraEffectBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.OnAuraEffectBegin");
		
		ABP_HDWeap_AmmoBoxBase_C_OnAuraEffectBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.OnAuraEffectEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDWeap_AmmoBoxBase_C::OnAuraEffectEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.OnAuraEffectEnd");
		
		ABP_HDWeap_AmmoBoxBase_C_OnAuraEffectEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.ExecuteUbergraph_BP_HDWeap_AmmoBoxBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDWeap_AmmoBoxBase_C::ExecuteUbergraph_BP_HDWeap_AmmoBoxBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C.ExecuteUbergraph_BP_HDWeap_AmmoBoxBase");
		
		ABP_HDWeap_AmmoBoxBase_C_ExecuteUbergraph_BP_HDWeap_AmmoBoxBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HDWeap_AmmoBoxBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HDWeap_AmmoBoxBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HDWeap_AmmoBoxBase.BP_HDWeap_AmmoBoxBase_C");
		return ptr;
	}

}


