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
	// Size: 0x4e8
	// Has VTable
	class CEnvFireSource : public server::CBaseEntity
	{
	public:
		bool m_bEnabled; // 0x4d8		
	private:
		[[maybe_unused]] uint8_t __pad04d9[0x3]; // 0x4d9
	public:
		float m_radius; // 0x4dc		
		float m_damage; // 0x4e0		
		
		// Datamap fields:
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
	};
};
