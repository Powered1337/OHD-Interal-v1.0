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
	 * AnimBlueprintGeneratedClass ABP_OM_USBag_Weap_1P.ABP_OM_USBag_Weap_1P_C
	 * Size -> 0x0180 (FullSize[0x03E8] - InheritedSize[0x0268])
	 */
	class UABP_OM_USBag_Weap_1P_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_2W5E[0x8];                                   // 0x0268(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0278(0x0030)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x02A8(0x0048)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x02F0(0x0018)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0308(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0338(0x00B0)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_ABP_OM_USBag_Weap_1P(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
