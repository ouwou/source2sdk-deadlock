#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x310
	// Has VTable
	class CCitadel_Modifier_Nano_PredatoryStatue : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c8[0x34]; // 0xc8
	public:
		entity2::GameTime_t m_GameTimeEnabled; // 0xfc		
		entity2::GameTime_t m_LastCatInAreaTime; // 0x100		
		bool m_bIsAttacking; // 0x104		
	private:
		[[maybe_unused]] uint8_t __pad0105[0x3]; // 0x105
	public:
		int32_t m_iTargetID; // 0x108		
	};
};
