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
	// Size: 0x988
	// Has VTable
	class CTriggerDetectExplosion : public server::CBaseTrigger
	{
	private:
		[[maybe_unused]] uint8_t __pad0938[0x28]; // 0x938
	public:
		entity2::CEntityIOOutput m_OnDetectedExplosion; // 0x960		
	};
};
