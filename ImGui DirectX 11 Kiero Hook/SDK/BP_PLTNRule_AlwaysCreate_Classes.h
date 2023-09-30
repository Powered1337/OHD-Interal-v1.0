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
	 * BlueprintGeneratedClass BP_PLTNRule_AlwaysCreate.BP_PLTNRule_AlwaysCreate_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_PLTNRule_AlwaysCreate_C : public UHDPlatoonCreationRuleBase
	{
	public:
		bool SatisfiesRule(class UHDTeamDefinition* TeamDef);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
