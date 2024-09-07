#pragma once
#include "server/CBaseTrigger.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x9a0
	// Has VTable
	class CTriggerTrooperDetector : public server::CBaseTrigger
	{
	private:
		[[maybe_unused]] uint8_t __pad0938[0x60]; // 0x938
	public:
		float m_flRadius; // 0x998		
	};
};
