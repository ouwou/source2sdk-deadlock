#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CCitadel_RestorativeGooCube;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x3b8
	// Has VTable
	class CCitadel_Modifier_RestorativeGoo : public server::CCitadelModifier
	{
	public:
		entity2::GameTime_t m_flEarliestBreakoutTime; // 0xc8		
	private:
		[[maybe_unused]] uint8_t __pad00cc[0x2dc]; // 0xcc
	public:
		CHandle<server::CCitadel_RestorativeGooCube> m_hGooCube; // 0x3a8		
		float m_flBreakoutPercentage; // 0x3ac		
	};
};
