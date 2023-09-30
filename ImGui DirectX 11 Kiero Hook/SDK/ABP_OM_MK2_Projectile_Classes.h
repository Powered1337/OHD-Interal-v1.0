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
	 * AnimBlueprintGeneratedClass ABP_OM_MK2_Projectile.ABP_OM_MK2_Projectile_C
	 * Size -> 0x0040 (FullSize[0x02A8] - InheritedSize[0x0268])
	 */
	class UABP_OM_MK2_Projectile_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_4EKN[0x8];                                   // 0x0268(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0278(0x0030)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_ABP_OM_MK2_Projectile(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
