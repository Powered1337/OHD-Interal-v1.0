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
	 * Function BP_HDWeap_BandageBase.BP_HDWeap_BandageBase_C.CanFire
	 */
	struct ABP_HDWeap_BandageBase_C_CanFire_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JYXA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDWeap_BandageBase.BP_HDWeap_BandageBase_C.ReceiveFire
	 */
	struct ABP_HDWeap_BandageBase_C_ReceiveFire_Params
	{	};

	/**
	 * Function BP_HDWeap_BandageBase.BP_HDWeap_BandageBase_C.ExecuteUbergraph_BP_HDWeap_BandageBase
	 */
	struct ABP_HDWeap_BandageBase_C_ExecuteUbergraph_BP_HDWeap_BandageBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FZ5O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
