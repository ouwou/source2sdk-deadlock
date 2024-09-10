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
	// Size: 0xde0
	// Has VTable
	// 
	// MEntityAllowsPortraitWorldSpawn
	// MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
	// MNetworkVarNames "bool m_bUseAnimGraph"
	class C_DynamicProp : public client::C_BreakableProp
	{
	public:
		// MNetworkEnable
		bool m_bUseHitboxesForRenderBox; // 0xcc8		
		// MNetworkEnable
		bool m_bUseAnimGraph; // 0xcc9		
	private:
		[[maybe_unused]] uint8_t __pad0cca[0x6]; // 0xcca
	public:
		entity2::CEntityIOOutput m_pOutputAnimBegun; // 0xcd0		
		entity2::CEntityIOOutput m_pOutputAnimOver; // 0xcf8		
		entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xd20		
		entity2::CEntityIOOutput m_OnAnimReachedStart; // 0xd48		
		entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0xd70		
		CUtlSymbolLarge m_iszIdleAnim; // 0xd98		
		client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0xda0		
		bool m_bRandomizeCycle; // 0xda4		
		bool m_bStartDisabled; // 0xda5		
		bool m_bFiredStartEndOutput; // 0xda6		
		bool m_bForceNpcExclude; // 0xda7		
		bool m_bCreateNonSolid; // 0xda8		
		bool m_bIsOverrideProp; // 0xda9		
	private:
		[[maybe_unused]] uint8_t __pad0daa[0x2]; // 0xdaa
	public:
		int32_t m_iInitialGlowState; // 0xdac		
		int32_t m_nGlowRange; // 0xdb0		
		int32_t m_nGlowRangeMin; // 0xdb4		
		Color m_glowColor; // 0xdb8		
		int32_t m_nGlowTeam; // 0xdbc		
		int32_t m_iCachedFrameCount; // 0xdc0		
		Vector m_vecCachedRenderMins; // 0xdc4		
		Vector m_vecCachedRenderMaxs; // 0xdd0		
		
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
