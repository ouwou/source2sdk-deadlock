#pragma once
#include "client/CITADEL_UNIT_TARGET_FLAGS.hpp"
#include "client/CITADEL_UNIT_TARGET_TYPE.hpp"
#include "server/CModifierVData_BaseAura.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x638
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadelModifierAuraVData : public server::CModifierVData_BaseAura
	{
	public:
		client::CITADEL_UNIT_TARGET_TYPE m_iAuraSearchType; // 0x630		
		client::CITADEL_UNIT_TARGET_FLAGS m_iAuraSearchFlags; // 0x634		
	};
};