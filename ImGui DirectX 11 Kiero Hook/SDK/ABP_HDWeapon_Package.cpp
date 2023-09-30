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
	 * 		Name   -> Function ABP_HDWeapon.ABP_HDWeapon_C.PlayEquipMontage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UABP_HDWeapon_C::PlayEquipMontage(class UAnimMontage* MontageToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDWeapon.ABP_HDWeapon_C.PlayEquipMontage");
		
		UABP_HDWeapon_C_PlayEquipMontage_Params params {};
		params.MontageToPlay = MontageToPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function ABP_HDWeapon.ABP_HDWeapon_C.PlayFireMontage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFireLast                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAiming                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float UABP_HDWeapon_C::PlayFireMontage(class UAnimMontage* MontageToPlay, bool bFireLast, bool bAiming)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDWeapon.ABP_HDWeapon_C.PlayFireMontage");
		
		UABP_HDWeapon_C_PlayFireMontage_Params params {};
		params.MontageToPlay = MontageToPlay;
		params.bFireLast = bFireLast;
		params.bAiming = bAiming;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function ABP_HDWeapon.ABP_HDWeapon_C.PlayReloadMontage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFullReload                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float UABP_HDWeapon_C::PlayReloadMontage(class UAnimMontage* MontageToPlay, bool bFullReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDWeapon.ABP_HDWeapon_C.PlayReloadMontage");
		
		UABP_HDWeapon_C_PlayReloadMontage_Params params {};
		params.MontageToPlay = MontageToPlay;
		params.bFullReload = bFullReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function ABP_HDWeapon.ABP_HDWeapon_C.PlayUnEquipMontage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UABP_HDWeapon_C::PlayUnEquipMontage(class UAnimMontage* MontageToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDWeapon.ABP_HDWeapon_C.PlayUnEquipMontage");
		
		UABP_HDWeapon_C_PlayUnEquipMontage_Params params {};
		params.MontageToPlay = MontageToPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function ABP_HDWeapon.ABP_HDWeapon_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_HDWeapon_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDWeapon.ABP_HDWeapon_C.AnimGraph");
		
		UABP_HDWeapon_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function ABP_HDWeapon.ABP_HDWeapon_C.PlayWeaponFPPMontage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageToPlay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bForceDisableAutoBlendOut                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayDuration                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDWeapon_C::PlayWeaponFPPMontage(class UAnimMontage* MontageToPlay, bool bForceDisableAutoBlendOut, float* PlayDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDWeapon.ABP_HDWeapon_C.PlayWeaponFPPMontage");
		
		UABP_HDWeapon_C_PlayWeaponFPPMontage_Params params {};
		params.MontageToPlay = MontageToPlay;
		params.bForceDisableAutoBlendOut = bForceDisableAutoBlendOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayDuration != nullptr)
			*PlayDuration = params.PlayDuration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function ABP_HDWeapon.ABP_HDWeapon_C.AnimNotify_HideMag
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UABP_HDWeapon_C::AnimNotify_HideMag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDWeapon.ABP_HDWeapon_C.AnimNotify_HideMag");
		
		UABP_HDWeapon_C_AnimNotify_HideMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function ABP_HDWeapon.ABP_HDWeapon_C.AnimNotify_ShowMag
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UABP_HDWeapon_C::AnimNotify_ShowMag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDWeapon.ABP_HDWeapon_C.AnimNotify_ShowMag");
		
		UABP_HDWeapon_C_AnimNotify_ShowMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function ABP_HDWeapon.ABP_HDWeapon_C.AnimNotify_HideBullet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UABP_HDWeapon_C::AnimNotify_HideBullet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDWeapon.ABP_HDWeapon_C.AnimNotify_HideBullet");
		
		UABP_HDWeapon_C_AnimNotify_HideBullet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function ABP_HDWeapon.ABP_HDWeapon_C.AnimNotify_ShowBullet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UABP_HDWeapon_C::AnimNotify_ShowBullet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDWeapon.ABP_HDWeapon_C.AnimNotify_ShowBullet");
		
		UABP_HDWeapon_C_AnimNotify_ShowBullet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function ABP_HDWeapon.ABP_HDWeapon_C.WeaponFire
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bLastFire                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_HDWeapon_C::WeaponFire(bool bLastFire)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDWeapon.ABP_HDWeapon_C.WeaponFire");
		
		UABP_HDWeapon_C_WeaponFire_Params params {};
		params.bLastFire = bLastFire;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function ABP_HDWeapon.ABP_HDWeapon_C.WeaponReloadFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADFBaseGun*                                  Gun                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDWeapon_C::WeaponReloadFinished(class ADFBaseGun* Gun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDWeapon.ABP_HDWeapon_C.WeaponReloadFinished");
		
		UABP_HDWeapon_C_WeaponReloadFinished_Params params {};
		params.Gun = Gun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function ABP_HDWeapon.ABP_HDWeapon_C.BlueprintUpdateWeaponOwnerRefs
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADFBaseWeapon*                               NewWeap                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDWeapon_C::BlueprintUpdateWeaponOwnerRefs(class ADFBaseWeapon* NewWeap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDWeapon.ABP_HDWeapon_C.BlueprintUpdateWeaponOwnerRefs");
		
		UABP_HDWeapon_C_BlueprintUpdateWeaponOwnerRefs_Params params {};
		params.NewWeap = NewWeap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function ABP_HDWeapon.ABP_HDWeapon_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UABP_HDWeapon_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDWeapon.ABP_HDWeapon_C.BlueprintInitializeAnimation");
		
		UABP_HDWeapon_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function ABP_HDWeapon.ABP_HDWeapon_C.BlueprintBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UABP_HDWeapon_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDWeapon.ABP_HDWeapon_C.BlueprintBeginPlay");
		
		UABP_HDWeapon_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EC6180
	 * 		Name   -> Function ABP_HDWeapon.ABP_HDWeapon_C.ExecuteUbergraph_ABP_HDWeapon
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_HDWeapon_C::ExecuteUbergraph_ABP_HDWeapon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_HDWeapon.ABP_HDWeapon_C.ExecuteUbergraph_ABP_HDWeapon");
		
		UABP_HDWeapon_C_ExecuteUbergraph_ABP_HDWeapon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_HDWeapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_HDWeapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_HDWeapon.ABP_HDWeapon_C");
		return ptr;
	}

}


