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
	 * AnimBlueprintGeneratedClass ABP_OM_GERBandage_Weap_1P.ABP_OM_GERBandage_Weap_1P_C
	 * Size -> 0x03C2 (FullSize[0x062A] - InheritedSize[0x0268])
	 */
	class UABP_OM_GERBandage_Weap_1P_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_ZS4T[0x8];                                   // 0x0268(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0278(0x0030)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x02A8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x02F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0318(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0340(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x03B8(0x0030)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x03E8(0x0018)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0400(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0430(0x00B0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x04E0(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x05E8(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0608(0x0020)
		bool                                                       bHideTare;                                               // 0x0628(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bFiringState;                                            // 0x0629(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_EnterIdleState();
		void AnimNotify_HideTare();
		void AnimNotify_ShowTare();
		void ExecuteUbergraph_ABP_OM_GERBandage_Weap_1P(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
