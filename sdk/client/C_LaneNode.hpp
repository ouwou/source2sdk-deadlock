#pragma once
#include "client/CCitadelModelEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x870
	// Has VTable
	class C_LaneNode : public client::CCitadelModelEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0838[0x30]; // 0x838
	public:
		int32_t m_nPlayerTeamEventIndex; // 0x868		
	};
};
