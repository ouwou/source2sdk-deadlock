#pragma once
#include "server/CBaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x3e94c0
	// Has VTable
	class CDebugHistory : public server::CBaseEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad04d8[0x3e8040]; // 0x4d8
	public:
		int32_t m_nNpcEvents; // 0x3e8518		
	};
};
