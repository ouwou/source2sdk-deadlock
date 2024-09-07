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
	// Size: 0xc28
	// Has VTable
	// 
	// MEntityAllowsPortraitWorldSpawn
	// MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
	// MNetworkVarNames "bool m_bUseAnimGraph"
	class CDynamicProp : public server::CBreakableProp
	{
	private:
		[[maybe_unused]] uint8_t __pad0b28[0x8]; // 0xb28
	public:
		bool m_bCreateNavObstacle; // 0xb30		
		bool m_bNavObstacleUpdatesOverridden; // 0xb31		
		// MNetworkEnable
		bool m_bUseHitboxesForRenderBox; // 0xb32		
		// MNetworkEnable
		bool m_bUseAnimGraph; // 0xb33		
	private:
		[[maybe_unused]] uint8_t __pad0b34[0x4]; // 0xb34
	public:
		entity2::CEntityIOOutput m_pOutputAnimBegun; // 0xb38		
		entity2::CEntityIOOutput m_pOutputAnimOver; // 0xb60		
		entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xb88		
		entity2::CEntityIOOutput m_OnAnimReachedStart; // 0xbb0		
		entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0xbd8		
		CUtlSymbolLarge m_iszIdleAnim; // 0xc00		
		client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0xc08		
		bool m_bRandomizeCycle; // 0xc0c		
		bool m_bStartDisabled; // 0xc0d		
		bool m_bFiredStartEndOutput; // 0xc0e		
		bool m_bForceNpcExclude; // 0xc0f		
		bool m_bCreateNonSolid; // 0xc10		
		bool m_bIsOverrideProp; // 0xc11		
	private:
		[[maybe_unused]] uint8_t __pad0c12[0x2]; // 0xc12
	public:
		int32_t m_iInitialGlowState; // 0xc14		
		int32_t m_nGlowRange; // 0xc18		
		int32_t m_nGlowRangeMin; // 0xc1c		
		Color m_glowColor; // 0xc20		
		int32_t m_nGlowTeam; // 0xc24		
		
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
