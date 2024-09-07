#pragma once
#include "server/CServerOnlyEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4f0
	// Has VTable
	class CCitadelEnergyTower : public server::CServerOnlyEntity
	{
	public:
		bool m_bEnabled; // 0x4d8		
	private:
		[[maybe_unused]] uint8_t __pad04d9[0x3]; // 0x4d9
	public:
		float m_flDamage; // 0x4dc		
		float m_flRadius; // 0x4e0		
		
		// Datamap fields:
		//  InputEnable; // 0x0
		//  InputDisable; // 0x0
	};
};
