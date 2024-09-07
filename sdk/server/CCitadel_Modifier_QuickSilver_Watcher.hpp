#pragma once
#include "server/CCitadel_Modifier_BaseEventProc.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x220
	// Has VTable
	class CCitadel_Modifier_QuickSilver_Watcher : public server::CCitadel_Modifier_BaseEventProc
	{
	private:
		[[maybe_unused]] uint8_t __pad0170[0xa8]; // 0x170
	public:
		bool m_bProcNextHit; // 0x218		
	};
};
