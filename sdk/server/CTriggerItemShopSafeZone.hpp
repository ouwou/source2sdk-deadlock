#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CBaseTrigger.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x9a8
	// Has VTable
	class CTriggerItemShopSafeZone : public server::CBaseTrigger
	{
	private:
		[[maybe_unused]] uint8_t __pad0938[0x20]; // 0x938
	public:
		entity2::CEntityIOOutput m_OnContested; // 0x958		
		entity2::CEntityIOOutput m_OnNotContested; // 0x980		
	};
};
