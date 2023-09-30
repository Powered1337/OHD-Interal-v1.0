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
	// # Enums
	// --------------------------------------------------
	/**
	 * BoneSkeletalMesh SK_SoldierUS.SK_SoldierUS
	 */
	enum class EBone_SK_SoldierUS : uint8_t
	{
		Root                    = 0,
		pelvis                  = 1,
		spine_01                = 2,
		spine_02                = 3,
		spine_03                = 4,
		clavicle_l              = 5,
		UpperArm_L              = 6,
		lowerarm_l              = 7,
		Hand_L                  = 8,
		index_01_l              = 9,
		index_02_l              = 10,
		index_03_l              = 11,
		middle_01_l             = 12,
		middle_02_l             = 13,
		middle_03_l             = 14,
		pinky_01_l              = 15,
		pinky_02_l              = 16,
		pinky_03_l              = 17,
		ring_01_l               = 18,
		ring_02_l               = 19,
		ring_03_l               = 20,
		thumb_01_l              = 21,
		thumb_02_l              = 22,
		thumb_03_l              = 23,
		lowerarm_twist_01_l     = 24,
		upperarm_twist_01_l     = 25,
		clavicle_r              = 26,
		UpperArm_R              = 27,
		lowerarm_r              = 28,
		Hand_R                  = 29,
		index_01_r              = 30,
		index_02_r              = 31,
		index_03_r              = 32,
		middle_01_r             = 33,
		middle_02_r             = 34,
		middle_03_r             = 35,
		pinky_01_r              = 36,
		pinky_02_r              = 37,
		pinky_03_r              = 38,
		ring_01_r               = 39,
		ring_02_r               = 40,
		ring_03_r               = 41,
		thumb_01_r              = 42,
		thumb_02_r              = 43,
		thumb_03_r              = 44,
		lowerarm_twist_01_r     = 45,
		upperarm_twist_01_r     = 46,
		neck_01                 = 47,
		head                    = 48,
		Thigh_L                 = 49,
		calf_l                  = 50,
		calf_twist_01_l         = 51,
		Foot_L                  = 52,
		ball_l                  = 53,
		thigh_twist_01_l        = 54,
		Thigh_R                 = 55,
		calf_r                  = 56,
		calf_twist_01_r         = 57,
		Foot_R                  = 58,
		ball_r                  = 59,
		thigh_twist_01_r        = 60,
		ik_foot_root            = 61,
		ik_foot_l               = 62,
		ik_foot_r               = 63,
		ik_hand_root            = 64,
		ik_hand_gun             = 65,
		ik_hand_l               = 66,
		ik_hand_r               = 67,
		VBWeaponBeforeIK        = 68,
		VBik_hint_hand_l        = 69,
		VBik_hint_hand_r        = 70,
		VBWeaponBeforeMount     = 71,
		VBWeapon                = 72,
		VBGunPIvot              = 73,
		VBfoot_l_beforeIK       = 74,
		VBfoot_r_beforeIK       = 75,
		VBik_foot_l_pole_vector = 76,
		VBik_foot_r_pole_vector = 77,
		VBik_hint_foot_l        = 78,
		VBik_hint_foot_r        = 79,
		VBik_hand_l_pole_vector = 80,
		VBik_hand_r_pole_vector = 81
	};

	/**
	 * BoneSkeletalMesh SK_OM_M1903_P_Scoped.SK_OM_M1903_P_Scoped
	 */
	enum class EBone_SK_OM_M1903_P_Scoped : uint8_t
	{
		RootBone     = 0,
		Trigger      = 1,
		Bolt         = 2,
		Sling_Part   = 3,
		Muzzle       = 4,
		Bullet3      = 5,
		Bullet1      = 6,
		Bullet2      = 7,
		Clip         = 8,
		Clip_Bullet5 = 9,
		Clip_Bullet4 = 10,
		Clip_Bullet3 = 11,
		Clip_Bullet2 = 12,
		Clip_Bullet1 = 13,
		Ejector      = 14,
		FiringGroup  = 15,
		FiringPin    = 16,
		Scope        = 17
	};

	/**
	 * BoneSkeletalMesh SK_OMKar98k.SK_OMKar98k
	 */
	enum class EBone_SK_OMKar98k : uint8_t
	{
		RootBone     = 0,
		Ejector      = 1,
		Clip         = 2,
		Clip_Bullet1 = 3,
		Clip_Bullet2 = 4,
		Clip_Bullet3 = 5,
		Clip_Bullet4 = 6,
		Clip_Bullet5 = 7,
		Trigger      = 8,
		FiringGroup  = 9,
		Safety       = 10,
		FiringPin    = 11,
		Bolt         = 12,
		Bullet2      = 13,
		Bullet1      = 14,
		Muzzle       = 15
	};

	/**
	 * BoneSkeletalMesh SK_OM_Ger_Arms_Gloves.SK_OM_Ger_Arms_Gloves
	 */
	enum class EBone_SK_OM_Ger_Arms_Gloves : uint8_t
	{
		Root                    = 0,
		pelvis                  = 1,
		spine_01                = 2,
		spine_02                = 3,
		spine_03                = 4,
		clavicle_l              = 5,
		UpperArm_L              = 6,
		lowerarm_l              = 7,
		Hand_L                  = 8,
		index_01_l              = 9,
		index_02_l              = 10,
		index_03_l              = 11,
		middle_01_l             = 12,
		middle_02_l             = 13,
		middle_03_l             = 14,
		pinky_01_l              = 15,
		pinky_02_l              = 16,
		pinky_03_l              = 17,
		ring_01_l               = 18,
		ring_02_l               = 19,
		ring_03_l               = 20,
		thumb_01_l              = 21,
		thumb_02_l              = 22,
		thumb_03_l              = 23,
		lowerarm_twist_01_l     = 24,
		upperarm_twist_01_l     = 25,
		clavicle_r              = 26,
		UpperArm_R              = 27,
		lowerarm_r              = 28,
		Hand_R                  = 29,
		index_01_r              = 30,
		index_02_r              = 31,
		index_03_r              = 32,
		middle_01_r             = 33,
		middle_02_r             = 34,
		middle_03_r             = 35,
		pinky_01_r              = 36,
		pinky_02_r              = 37,
		pinky_03_r              = 38,
		ring_01_r               = 39,
		ring_02_r               = 40,
		ring_03_r               = 41,
		thumb_01_r              = 42,
		thumb_02_r              = 43,
		thumb_03_r              = 44,
		lowerarm_twist_01_r     = 45,
		upperarm_twist_01_r     = 46,
		neck_01                 = 47,
		head                    = 48,
		Thigh_L                 = 49,
		calf_l                  = 50,
		calf_twist_01_l         = 51,
		Foot_L                  = 52,
		ball_l                  = 53,
		thigh_twist_01_l        = 54,
		Thigh_R                 = 55,
		calf_r                  = 56,
		calf_twist_01_r         = 57,
		Foot_R                  = 58,
		ball_r                  = 59,
		thigh_twist_01_r        = 60,
		ik_foot_root            = 61,
		ik_foot_l               = 62,
		ik_foot_r               = 63,
		ik_hand_root            = 64,
		ik_hand_gun             = 65,
		ik_hand_l               = 66,
		ik_hand_r               = 67,
		VBWeaponBeforeIK        = 68,
		VBik_hint_hand_l        = 69,
		VBik_hint_hand_r        = 70,
		VBWeaponBeforeMount     = 71,
		VBWeapon                = 72,
		VBGunPIvot              = 73,
		VBfoot_l_beforeIK       = 74,
		VBfoot_r_beforeIK       = 75,
		VBik_foot_l_pole_vector = 76,
		VBik_foot_r_pole_vector = 77,
		VBik_hint_foot_l        = 78,
		VBik_hint_foot_r        = 79,
		VBik_hand_l_pole_vector = 80,
		VBik_hand_r_pole_vector = 81
	};

	/**
	 * BoneSkeletalMesh SK_Flagpole_Modern.SK_Flagpole_Modern
	 */
	enum class EBone_SK_Flagpole_Modern : uint8_t
	{
		Armature  = 0,
		Bone_Pole = 1,
		Bone_Top  = 2
	};

	/**
	 * BoneSkeletalMesh SK_OM_Ger_SL.SK_OM_Ger_SL
	 */
	enum class EBone_SK_OM_Ger_SL : uint8_t
	{
		Root                    = 0,
		pelvis                  = 1,
		spine_01                = 2,
		spine_02                = 3,
		spine_03                = 4,
		clavicle_l              = 5,
		UpperArm_L              = 6,
		lowerarm_l              = 7,
		Hand_L                  = 8,
		index_01_l              = 9,
		index_02_l              = 10,
		index_03_l              = 11,
		middle_01_l             = 12,
		middle_02_l             = 13,
		middle_03_l             = 14,
		pinky_01_l              = 15,
		pinky_02_l              = 16,
		pinky_03_l              = 17,
		ring_01_l               = 18,
		ring_02_l               = 19,
		ring_03_l               = 20,
		thumb_01_l              = 21,
		thumb_02_l              = 22,
		thumb_03_l              = 23,
		lowerarm_twist_01_l     = 24,
		upperarm_twist_01_l     = 25,
		clavicle_r              = 26,
		UpperArm_R              = 27,
		lowerarm_r              = 28,
		Hand_R                  = 29,
		index_01_r              = 30,
		index_02_r              = 31,
		index_03_r              = 32,
		middle_01_r             = 33,
		middle_02_r             = 34,
		middle_03_r             = 35,
		pinky_01_r              = 36,
		pinky_02_r              = 37,
		pinky_03_r              = 38,
		ring_01_r               = 39,
		ring_02_r               = 40,
		ring_03_r               = 41,
		thumb_01_r              = 42,
		thumb_02_r              = 43,
		thumb_03_r              = 44,
		lowerarm_twist_01_r     = 45,
		upperarm_twist_01_r     = 46,
		neck_01                 = 47,
		head                    = 48,
		Thigh_L                 = 49,
		calf_l                  = 50,
		calf_twist_01_l         = 51,
		Foot_L                  = 52,
		ball_l                  = 53,
		thigh_twist_01_l        = 54,
		Thigh_R                 = 55,
		calf_r                  = 56,
		calf_twist_01_r         = 57,
		Foot_R                  = 58,
		ball_r                  = 59,
		thigh_twist_01_r        = 60,
		ik_foot_root            = 61,
		ik_foot_l               = 62,
		ik_foot_r               = 63,
		ik_hand_root            = 64,
		ik_hand_gun             = 65,
		ik_hand_l               = 66,
		ik_hand_r               = 67,
		VBWeaponBeforeIK        = 68,
		VBik_hint_hand_l        = 69,
		VBik_hint_hand_r        = 70,
		VBWeaponBeforeMount     = 71,
		VBWeapon                = 72,
		VBGunPIvot              = 73,
		VBfoot_l_beforeIK       = 74,
		VBfoot_r_beforeIK       = 75,
		VBik_foot_l_pole_vector = 76,
		VBik_foot_r_pole_vector = 77,
		VBik_hint_foot_l        = 78,
		VBik_hint_foot_r        = 79,
		VBik_hand_l_pole_vector = 80,
		VBik_hand_r_pole_vector = 81
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
