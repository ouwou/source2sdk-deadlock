#pragma once
#include "client/CCitadelModifier.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x220
	// Has VTable
	class CCitadel_Modifier_Chomp_Hobbled : public client::CCitadelModifier
	{
	public:
		entity2::GameTime_t m_LastUpdate; // 0xc0		
		float m_flDamageTime; // 0xc4		
		float m_flMovementTime; // 0xc8		
		CHandle<client::C_BaseEntity> m_hGrappler; // 0xcc		
	};
};
