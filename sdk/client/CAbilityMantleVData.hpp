#pragma once
#include "client/CitadelAbilityVData.hpp"
#include "client/MantleType_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1508
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityMantleVData : public client::CitadelAbilityVData
	{
	public:
		CUtlVector<client::MantleType_t> m_vecMantleTypes; // 0x14f0		
	};
};
