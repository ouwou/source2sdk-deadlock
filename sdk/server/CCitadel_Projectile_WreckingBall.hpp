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
	// Size: 0x870
	// Has VTable
	class CCitadel_Projectile_WreckingBall : public server::CCitadelProjectile
	{
	private:
		[[maybe_unused]] uint8_t __pad0820[0x10]; // 0x820
	public:
		bool m_bBroken; // 0x830		
	};
};
