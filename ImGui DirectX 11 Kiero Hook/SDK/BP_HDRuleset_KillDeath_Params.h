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
	 * Function BP_HDRuleset_KillDeath.BP_HDRuleset_KillDeath_C.GetKDSettingsForTeam
	 */
	struct UBP_HDRuleset_KillDeath_C_GetKDSettingsForTeam_Params
	{
	public:
		EHDTeam                                                    CPTeam;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X3JU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FKillDeathRulesetSettings                           CPSettings;                                              // 0x0004(0x0028)  (Parm, OutParm, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
