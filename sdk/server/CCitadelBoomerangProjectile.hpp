#pragma once
#include "server/CCitadelProjectile.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x978
	// Has VTable
	class CCitadelBoomerangProjectile : public server::CCitadelProjectile
	{
	private:
		[[maybe_unused]] uint8_t __pad0820[0x150]; // 0x820
	public:
		bool m_bReturning; // 0x970		
	};
};
