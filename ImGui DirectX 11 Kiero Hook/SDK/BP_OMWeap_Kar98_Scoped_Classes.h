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
	 * BlueprintGeneratedClass BP_OMWeap_Kar98_Scoped.BP_OMWeap_Kar98_Scoped_C
	 * Size -> 0x000C (FullSize[0x0A60] - InheritedSize[0x0A54])
	 */
	class ABP_OMWeap_Kar98_Scoped_C : public ABP_HDWeaponBase_C
	{
	public:
		unsigned char                                              UnknownData_B859[0x4];                                   // 0x0A54(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_HDScopeComponentBase_C*                          BP_HDScopeComponentBase;                                 // 0x0A58(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
