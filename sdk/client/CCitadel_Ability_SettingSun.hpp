#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "client/ParticleIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd30
	// Has VTable
	class CCitadel_Ability_SettingSun : public client::C_CitadelBaseAbility
	{
	public:
		CUtlVector<client::ParticleIndex_t> m_TargetPreviews; // 0xc60		
	private:
		[[maybe_unused]] uint8_t __pad0c78[0xb0]; // 0xc78
	public:
		bool m_bWasSelected; // 0xd28		
	};
};
