#pragma once
#include "client/MantleType_t.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1508
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityMantleVData : public server::CitadelAbilityVData
	{
	public:
		CUtlVector<client::MantleType_t> m_vecMantleTypes; // 0x14f0		
	};
};
