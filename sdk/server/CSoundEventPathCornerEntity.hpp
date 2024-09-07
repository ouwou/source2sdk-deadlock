#pragma once
#include "client/SoundeventPathCornerPairNetworked_t.hpp"
#include "server/CSoundEventEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x5e8
	// Has VTable
	// 
	// MNetworkVarNames "SoundeventPathCornerPairNetworked_t m_vecCornerPairsNetworked"
	class CSoundEventPathCornerEntity : public server::CSoundEventEntity
	{
	public:
		CUtlSymbolLarge m_iszPathCorner; // 0x590		
		int32_t m_iCountMax; // 0x598		
		float m_flDistanceMax; // 0x59c		
		float m_flDistMaxSqr; // 0x5a0		
		float m_flDotProductMax; // 0x5a4		
		bool m_bPlaying; // 0x5a8		
	private:
		[[maybe_unused]] uint8_t __pad05a9[0x27]; // 0x5a9
	public:
		// MNetworkEnable
		CNetworkUtlVectorBase<client::SoundeventPathCornerPairNetworked_t> m_vecCornerPairsNetworked; // 0x5d0		
		
		// Datamap fields:
		// void CSoundEventPathCornerEntitySoundEventPathCornerThink; // 0x0
		// void m_vecPathCornerPairs; // 0x5b0
	};
};
