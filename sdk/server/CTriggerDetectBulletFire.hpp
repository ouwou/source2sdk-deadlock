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
	// Size: 0x968
	// Has VTable
	class CTriggerDetectBulletFire : public server::CBaseTrigger
	{
	public:
		bool m_bPlayerFireOnly; // 0x938		
	private:
		[[maybe_unused]] uint8_t __pad0939[0x7]; // 0x939
	public:
		entity2::CEntityIOOutput m_OnDetectedBulletFire; // 0x940		
	};
};
