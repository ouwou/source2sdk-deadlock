#pragma once
#include "client/CCitadelModifier.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_CitadelPlayerPawn;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd8
	// Has VTable
	class CCitadel_Modifier_HeroUpgradeBonuses : public client::CCitadelModifier
	{
	public:
		client::C_CitadelPlayerPawn* m_pOwningPlayer; // 0xc0		
		float m_flWeaponPower; // 0xc8		
		float m_flArmorPower; // 0xcc		
		float m_flTechPower; // 0xd0		
	};
};
