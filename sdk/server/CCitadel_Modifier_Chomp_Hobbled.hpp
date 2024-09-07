#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelModifier.hpp"
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
	// Size: 0x228
	// Has VTable
	class CCitadel_Modifier_Chomp_Hobbled : public server::CCitadelModifier
	{
	public:
		entity2::GameTime_t m_LastUpdate; // 0xc8		
		float m_flDamageTime; // 0xcc		
		float m_flMovementTime; // 0xd0		
		CHandle<server::CBaseEntity> m_hGrappler; // 0xd4		
	};
};
