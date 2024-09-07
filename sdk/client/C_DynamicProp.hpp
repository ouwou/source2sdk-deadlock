#pragma once
#include "client/AnimLoopMode_t.hpp"
#include "client/C_BreakableProp.hpp"
#include "entity2/CEntityIOOutput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd30
	// Has VTable
	// 
	// MEntityAllowsPortraitWorldSpawn
	// MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
	// MNetworkVarNames "bool m_bUseAnimGraph"
	class C_DynamicProp : public client::C_BreakableProp
	{
	public:
		// MNetworkEnable
		bool m_bUseHitboxesForRenderBox; // 0xc18		
		// MNetworkEnable
		bool m_bUseAnimGraph; // 0xc19		
	private:
		[[maybe_unused]] uint8_t __pad0c1a[0x6]; // 0xc1a
	public:
		entity2::CEntityIOOutput m_pOutputAnimBegun; // 0xc20		
		entity2::CEntityIOOutput m_pOutputAnimOver; // 0xc48		
		entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xc70		
		entity2::CEntityIOOutput m_OnAnimReachedStart; // 0xc98		
		entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0xcc0		
		CUtlSymbolLarge m_iszIdleAnim; // 0xce8		
		client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0xcf0		
		bool m_bRandomizeCycle; // 0xcf4		
		bool m_bStartDisabled; // 0xcf5		
		bool m_bFiredStartEndOutput; // 0xcf6		
		bool m_bForceNpcExclude; // 0xcf7		
		bool m_bCreateNonSolid; // 0xcf8		
		bool m_bIsOverrideProp; // 0xcf9		
	private:
		[[maybe_unused]] uint8_t __pad0cfa[0x2]; // 0xcfa
	public:
		int32_t m_iInitialGlowState; // 0xcfc		
		int32_t m_nGlowRange; // 0xd00		
		int32_t m_nGlowRangeMin; // 0xd04		
		Color m_glowColor; // 0xd08		
		int32_t m_nGlowTeam; // 0xd0c		
		int32_t m_iCachedFrameCount; // 0xd10		
		Vector m_vecCachedRenderMins; // 0xd14		
		Vector m_vecCachedRenderMaxs; // 0xd20		
		
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
		// void C_DynamicPropAnimThink; // 0x0
		// int32_t health; // 0x7fffffff
		// bool HoldAnimation; // 0x7fffffff
	};
};
