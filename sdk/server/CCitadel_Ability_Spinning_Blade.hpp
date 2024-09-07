#pragma once
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};
namespace source2sdk::server
{
	struct CCitadelProjectile;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xcf0
	// Has VTable
	class CCitadel_Ability_Spinning_Blade : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ad8[0x1f8]; // 0xad8
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vecOutgoingHits; // 0xcd0		
		CHandle<server::CCitadelProjectile> m_hActiveProjectile; // 0xce8		
	};
};
