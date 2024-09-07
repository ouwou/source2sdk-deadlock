#pragma once
#include "client/CCitadelModifier.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x310
	// Has VTable
	class CCitadel_Modifier_Nano_PredatoryStatue : public client::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0x40]; // 0xc0
	public:
		entity2::GameTime_t m_GameTimeEnabled; // 0x100		
		entity2::GameTime_t m_LastCatInAreaTime; // 0x104		
		bool m_bIsAttacking; // 0x108		
	private:
		[[maybe_unused]] uint8_t __pad0109[0x3]; // 0x109
	public:
		int32_t m_iTargetID; // 0x10c		
	};
};
