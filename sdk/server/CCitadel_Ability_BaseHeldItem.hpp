#pragma once
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb20
	// Has VTable
	class CCitadel_Ability_BaseHeldItem : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ad8[0x38]; // 0xad8
	public:
		CHandle<server::CBaseEntity> m_hProjectile; // 0xb10		
		Vector m_vHomePosition; // 0xb14		
	};
};
