#pragma once
#include "entity2/GameTime_t.hpp"
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
	class CCitadel_Item_ZiplineMastery : public server::CCitadel_Item
	{
	public:
		bool m_bWasZiplining; // 0xaf8		
	private:
		[[maybe_unused]] uint8_t __pad0af9[0x3]; // 0xaf9
	public:
		entity2::GameTime_t m_flZipStartTime; // 0xafc		
	};
};
