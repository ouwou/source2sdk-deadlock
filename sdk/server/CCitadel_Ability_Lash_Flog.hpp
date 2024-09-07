#pragma once
#include "client/ParticleIndex_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xbf8
	// Has VTable
	class CCitadel_Ability_Lash_Flog : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ad8[0x118]; // 0xad8
	public:
		client::ParticleIndex_t m_SandEffect; // 0xbf0		
	};
};
