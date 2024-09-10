#pragma once
#include "client/AnimLoopMode_t.hpp"
#include "entity2/CEntityIOOutput.hpp"
#include "server/CBreakableProp.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xc50
	// Has VTable
	// 
	// MEntityAllowsPortraitWorldSpawn
	// MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
	// MNetworkVarNames "bool m_bUseAnimGraph"
	class CDynamicProp : public server::CBreakableProp
	{
	private:
		[[maybe_unused]] uint8_t __pad0b50[0x8]; // 0xb50
	public:
		bool m_bCreateNavObstacle; // 0xb58		
		bool m_bNavObstacleUpdatesOverridden; // 0xb59		
		// MNetworkEnable
		bool m_bUseHitboxesForRenderBox; // 0xb5a		
		// MNetworkEnable
		bool m_bUseAnimGraph; // 0xb5b		
	private:
		[[maybe_unused]] uint8_t __pad0b5c[0x4]; // 0xb5c
	public:
		entity2::CEntityIOOutput m_pOutputAnimBegun; // 0xb60		
		entity2::CEntityIOOutput m_pOutputAnimOver; // 0xb88		
		entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xbb0		
		entity2::CEntityIOOutput m_OnAnimReachedStart; // 0xbd8		
		entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0xc00		
		CUtlSymbolLarge m_iszIdleAnim; // 0xc28		
		client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0xc30		
		bool m_bRandomizeCycle; // 0xc34		
		bool m_bStartDisabled; // 0xc35		
		bool m_bFiredStartEndOutput; // 0xc36		
		bool m_bForceNpcExclude; // 0xc37		
		bool m_bCreateNonSolid; // 0xc38		
		bool m_bIsOverrideProp; // 0xc39		
	private:
		[[maybe_unused]] uint8_t __pad0c3a[0x2]; // 0xc3a
	public:
		int32_t m_iInitialGlowState; // 0xc3c		
		int32_t m_nGlowRange; // 0xc40		
		int32_t m_nGlowRangeMin; // 0xc44		
		Color m_glowColor; // 0xc48		
		int32_t m_nGlowTeam; // 0xc4c		
		
		// Datamap fields:
		// CUtlSymbolLarge StartingAnim; // 0x7fffffff
		// CUtlSymbolLarge StartingAnimationLoopMode; // 0x7fffffff
		// CUtlSymbolLarge InputSetAnimationLooping; // 0x0
		// CUtlSymbolLarge InputSetAnimationNoResetLooping; // 0x0
		// CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x0
		// CUtlSymbolLarge InputSetAnimationNotLooping; // 0x0
		// CUtlSymbolLarge InputSetAnimationNoResetNotLooping; // 0x0
		// CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x0
		// CUtlSymbolLarge InputSetAnimation; // 0x0
		// CUtlSymbolLarge InputSetAnimationNoReset; // 0x0
		// CUtlSymbolLarge InputSetIdleAnimation; // 0x0
		// CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x0
		// CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x0
		// void InputTurnOn; // 0x0
		// void InputTurnOff; // 0x0
		// void InputTurnOn; // 0x0
		// void InputTurnOff; // 0x0
		// void InputEnableCollision; // 0x0
		// void InputDisableCollision; // 0x0
		// float InputSetPlaybackRate; // 0x0
		// void InputStartGlowing; // 0x0
		// void InputStopGlowing; // 0x0
		// Vector InputSetGlowOverride; // 0x0
		// int32_t InputSetGlowRange; // 0x0
		// void CDynamicPropAnimThink; // 0x0
		// int32_t health; // 0x7fffffff
		// bool HoldAnimation; // 0x7fffffff
	};
};
