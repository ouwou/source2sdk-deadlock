#pragma once
#include "server/CCitadelModifier.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CCitadelPlayerPawn;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xe0
	// Has VTable
	class CCitadel_Modifier_HeroUpgradeBonuses : public server::CCitadelModifier
	{
	public:
		server::CCitadelPlayerPawn* m_pOwningPlayer; // 0xc8		
		float m_flWeaponPower; // 0xd0		
		float m_flArmorPower; // 0xd4		
		float m_flTechPower; // 0xd8		
	};
};
