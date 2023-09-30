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
	 * BlueprintGeneratedClass BP_HDWeap_BandageBase.BP_HDWeap_BandageBase_C
	 * Size -> 0x0010 (FullSize[0x0A64] - InheritedSize[0x0A54])
	 */
	class ABP_HDWeap_BandageBase_C : public ABP_HDWeaponBase_C
	{
	public:
		unsigned char                                              UnknownData_FOOD[0x4];                                   // 0x0A54(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A58(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      HealthRestoreAmount;                                     // 0x0A60(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool CanFire();
		void ReceiveFire();
		void ExecuteUbergraph_BP_HDWeap_BandageBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
