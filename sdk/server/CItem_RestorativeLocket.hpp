#pragma once
#include "server/CCitadel_Item.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xba8
	// Has VTable
	// 
	// MNetworkVarNames "int m_nNumStacks"
	class CItem_RestorativeLocket : public server::CCitadel_Item
	{
	private:
		[[maybe_unused]] uint8_t __pad0af8[0xa8]; // 0xaf8
	public:
		// MNetworkEnable
		int32_t m_nNumStacks; // 0xba0		
	};
};
