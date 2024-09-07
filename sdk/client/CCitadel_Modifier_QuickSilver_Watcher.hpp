#pragma once
#include "client/CCitadel_Modifier_BaseEventProc.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x218
	// Has VTable
	class CCitadel_Modifier_QuickSilver_Watcher : public client::CCitadel_Modifier_BaseEventProc
	{
	private:
		[[maybe_unused]] uint8_t __pad0168[0xa8]; // 0x168
	public:
		bool m_bProcNextHit; // 0x210		
	};
};
