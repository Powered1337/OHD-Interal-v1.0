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
	 * Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Time of Day using Time Code
	 */
	struct AUltra_Dynamic_Sky_BP_C_SetTimeofDayusingTimeCode_Params
	{
	public:
		struct FTimecode                                           TimeCode;                                                // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Get Time of Day in Real Time Format
	 */
	struct AUltra_Dynamic_Sky_BP_C_GetTimeofDayinRealTimeFormat_Params
	{
	public:
		struct FTimecode                                           Time;                                                    // 0x0000(0x0014)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Material Variables
	 */
	struct AUltra_Dynamic_Sky_BP_C_SetMaterialVariables_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Sun and Moon Rotation
	 */
	struct AUltra_Dynamic_Sky_BP_C_SetSunandMoonRotation_Params
	{
	public:
		bool                                                       MoveStaticLights;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NWM3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UserConstructionScript
	 */
	struct AUltra_Dynamic_Sky_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveTick
	 */
	struct AUltra_Dynamic_Sky_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveBeginPlay
	 */
	struct AUltra_Dynamic_Sky_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Midnight
	 */
	struct AUltra_Dynamic_Sky_BP_C_Midnight_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ExecuteUbergraph_Ultra_Dynamic_Sky_BP
	 */
	struct AUltra_Dynamic_Sky_BP_C_ExecuteUbergraph_Ultra_Dynamic_Sky_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Sunrise__DelegateSignature
	 */
	struct AUltra_Dynamic_Sky_BP_C_Sunrise__DelegateSignature_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Sunset__DelegateSignature
	 */
	struct AUltra_Dynamic_Sky_BP_C_Sunset__DelegateSignature_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Stop_Raining__DelegateSignature
	 */
	struct AUltra_Dynamic_Sky_BP_C_Stop_Raining__DelegateSignature_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Start_Raining__DelegateSignature
	 */
	struct AUltra_Dynamic_Sky_BP_C_Start_Raining__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
