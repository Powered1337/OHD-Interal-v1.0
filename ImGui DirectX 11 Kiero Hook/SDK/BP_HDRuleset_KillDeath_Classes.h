﻿#pragma once

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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_HDRuleset_KillDeath.BP_HDRuleset_KillDeath_C
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UBP_HDRuleset_KillDeath_C : public UHDRuleset_KillDeath
	{
	public:
		void GetKDSettingsForTeam(EHDTeam CPTeam, struct FKillDeathRulesetSettings* CPSettings);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
