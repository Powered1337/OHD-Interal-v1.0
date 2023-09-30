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
	 * BlueprintGeneratedClass Argonne.Argonne_C
	 * Size -> 0x0018 (FullSize[0x0240] - InheritedSize[0x0228])
	 */
	class AArgonne_C : public ATBLevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class FName>                                        LightingLevels;                                          // 0x0230(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Argonne(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
