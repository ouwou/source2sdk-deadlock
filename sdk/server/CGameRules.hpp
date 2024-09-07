#pragma once
#include "entity2/CNetworkVarChainer.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xc0
	// Has VTable
	// Is Abstract
	// 
	// MNetworkVarNames "int m_nTotalPausedTicks"
	// MNetworkVarNames "int m_nPauseStartTick"
	// MNetworkVarNames "bool m_bGamePaused"
	class CGameRules
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MNetworkDisable
		// MNetworkChangeAccessorFieldPathIndex
		entity2::CNetworkVarChainer __m_pChainEntity; // 0x8		
		char m_szQuestName[128]; // 0x30		
		int32_t m_nQuestPhase; // 0xb0		
		// MNetworkEnable
		int32_t m_nTotalPausedTicks; // 0xb4		
		// MNetworkEnable
		int32_t m_nPauseStartTick; // 0xb8		
		// MNetworkEnable
		bool m_bGamePaused; // 0xbc		
	};
};
