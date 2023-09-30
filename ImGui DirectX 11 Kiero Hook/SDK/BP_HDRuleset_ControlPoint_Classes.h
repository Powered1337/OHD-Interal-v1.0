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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_HDRuleset_ControlPoint.BP_HDRuleset_ControlPoint_C
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UBP_HDRuleset_ControlPoint_C : public UHDRuleset_ControlPoint
	{
	public:
		void GetCPSettingsForTeam(EHDTeam CPTeam, struct FControlPointRulesetSettings* CPSettings);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
