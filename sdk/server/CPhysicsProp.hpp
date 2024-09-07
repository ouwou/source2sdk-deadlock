#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CBreakableProp.hpp"
#include "server/CPhysicsProp__CrateType_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xcd0
	// Has VTable
	// 
	// MNetworkExcludeByName "m_flAnimTime"
	// MNetworkExcludeByName "m_flexWeight"
	// MNetworkExcludeByName "m_blinktoggle"
	// MNetworkExcludeByUserGroup "m_flPoseParameter"
	// MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
	// MNetworkExcludeByUserGroup "overlay_vars"
	// MNetworkIncludeByName "m_spawnflags"
	// MNetworkVarNames "bool m_bAwake"
	class CPhysicsProp : public server::CBreakableProp
	{
	private:
		[[maybe_unused]] uint8_t __pad0b28[0x8]; // 0xb28
	public:
		entity2::CEntityIOOutput m_MotionEnabled; // 0xb30		
		entity2::CEntityIOOutput m_OnAwakened; // 0xb58		
		entity2::CEntityIOOutput m_OnAwake; // 0xb80		
		entity2::CEntityIOOutput m_OnAsleep; // 0xba8		
		entity2::CEntityIOOutput m_OnPlayerUse; // 0xbd0		
		entity2::CEntityIOOutput m_OnOutOfWorld; // 0xbf8		
		entity2::CEntityIOOutput m_OnPlayerPickup; // 0xc20		
		bool m_bForceNavIgnore; // 0xc48		
		bool m_bNoNavmeshBlocker; // 0xc49		
		bool m_bForceNpcExclude; // 0xc4a		
	private:
		[[maybe_unused]] uint8_t __pad0c4b[0x1]; // 0xc4b
	public:
		float m_massScale; // 0xc4c		
		float m_inertiaScale; // 0xc50		
		float m_buoyancyScale; // 0xc54		
		int32_t m_damageType; // 0xc58		
		int32_t m_damageToEnableMotion; // 0xc5c		
		float m_flForceToEnableMotion; // 0xc60		
		bool m_bThrownByPlayer; // 0xc64		
		bool m_bDroppedByPlayer; // 0xc65		
		bool m_bTouchedByPlayer; // 0xc66		
		bool m_bFirstCollisionAfterLaunch; // 0xc67		
		int32_t m_iExploitableByPlayer; // 0xc68		
		bool m_bHasBeenAwakened; // 0xc6c		
		bool m_bIsOverrideProp; // 0xc6d		
	private:
		[[maybe_unused]] uint8_t __pad0c6e[0x2]; // 0xc6e
	public:
		entity2::GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xc70		
		int32_t m_iInitialGlowState; // 0xc74		
		int32_t m_nGlowRange; // 0xc78		
		int32_t m_nGlowRangeMin; // 0xc7c		
		Color m_glowColor; // 0xc80		
		bool m_bShouldAutoConvertBackFromDebris; // 0xc84		
		bool m_bMuteImpactEffects; // 0xc85		
	private:
		[[maybe_unused]] uint8_t __pad0c86[0x9]; // 0xc86
	public:
		bool m_bAcceptDamageFromHeldObjects; // 0xc8f		
		bool m_bEnableUseOutput; // 0xc90		
	private:
		[[maybe_unused]] uint8_t __pad0c91[0x3]; // 0xc91
	public:
		server::CPhysicsProp__CrateType_t m_CrateType; // 0xc94		
		CUtlSymbolLarge m_strItemClass[4]; // 0xc98		
		int32_t m_nItemCount[4]; // 0xcb8		
		bool m_bRemovableForAmmoBalancing; // 0xcc8		
		// MNetworkEnable
		bool m_bAwake; // 0xcc9		
		
		// Datamap fields:
		// void InputEnableMotion; // 0x0
		// void InputDisableMotion; // 0x0
		// void InputWake; // 0x0
		// bool InputSetAutoConvertBackFromDebris; // 0x0
		// void InputSleep; // 0x0
		// void InputDisableFloating; // 0x0
		// void InputStartGlowing; // 0x0
		// void InputStopGlowing; // 0x0
		// Vector InputSetGlowOverride; // 0x0
		// int32_t InputSetGlowRange; // 0x0
		// float InputSetMass; // 0x0
		// void InputEnableGravity; // 0x0
		// void InputDisableGravity; // 0x0
		// void InputEnableDrag; // 0x0
		// void InputDisableDrag; // 0x0
		// void InputEnableCollisions; // 0x0
		// void InputDisableCollisions; // 0x0
		// bool forcemotiondisabled; // 0x7fffffff
		// bool phys_start_asleep; // 0x7fffffff
		// void CPhysicsPropClearFlagsThink; // 0x0
		// int32_t m_nNavObstacleType; // 0xc88
		// bool m_bUpdateNavWhenMoving; // 0xc8c
		// bool m_bForceNavObstacleCut; // 0xc8d
		// bool m_bAllowObstacleConvexHullMerging; // 0xc8e
		// int32_t health; // 0x7fffffff
	};
};
