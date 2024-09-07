#pragma once
#include "client/CCitadelModifier.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_Citadel_RestorativeGooCube;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x3b0
	// Has VTable
	class CCitadel_Modifier_RestorativeGoo : public client::CCitadelModifier
	{
	public:
		entity2::GameTime_t m_flEarliestBreakoutTime; // 0xc0		
	private:
		[[maybe_unused]] uint8_t __pad00c4[0x2dc]; // 0xc4
	public:
		CHandle<client::C_Citadel_RestorativeGooCube> m_hGooCube; // 0x3a0		
		float m_flBreakoutPercentage; // 0x3a4		
	};
};
