#pragma once
#include "client/ECurrencySource.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x28
	// 
	// MGetKV3ClassDefaults
	struct CurrencySound_t
	{
	public:
		CUtlOrderedMap<client::ECurrencySource,CSoundEventName> m_mapSourceSounds; // 0x0		
	};
};
