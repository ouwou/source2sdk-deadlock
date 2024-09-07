#pragma once
#include "client/SquadSlotId_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x28
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	struct SquadModeInfo_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
	public:
		CUtlVector<client::SquadSlotId_t> m_vecSlots; // 0x10		
	};
};
