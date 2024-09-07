#pragma once
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x190
	// Has VTable
	class CCitadel_Modifier_HunterAuraTarget : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c8[0xa8]; // 0xc8
	public:
		float m_flDebuffScale; // 0x170		
	private:
		[[maybe_unused]] uint8_t __pad0174[0x4]; // 0x174
	public:
		CModifierHandleTyped<server::CCitadelModifier> m_AuraModifierHandle; // 0x178		
	};
};
