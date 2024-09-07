#pragma once
#include "client/C_SoundEventEntity.hpp"
#include "client/SoundeventPathCornerPairNetworked_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x630
	// Has VTable
	// 
	// MNetworkVarNames "SoundeventPathCornerPairNetworked_t m_vecCornerPairsNetworked"
	class C_SoundEventPathCornerEntity : public client::C_SoundEventEntity
	{
	public:
		// MNetworkEnable
		C_NetworkUtlVectorBase<client::SoundeventPathCornerPairNetworked_t> m_vecCornerPairsNetworked; // 0x618		
	};
};
