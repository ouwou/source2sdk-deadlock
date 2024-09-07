#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/ParticleIndex_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct CPointModifierThinker;
};
namespace source2sdk::client
{
	struct C_Citadel_Ice_Dome_Blocker;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1c8
	// Has VTable
	class CCitadel_Modifier_IceDome : public client::CCitadelModifier
	{
	public:
		CHandle<client::C_Citadel_Ice_Dome_Blocker> m_hBlocker; // 0xc0		
		CHandle<client::CPointModifierThinker> m_hFriendlyAura; // 0xc4		
		CHandle<client::CPointModifierThinker> m_hEnemyAura; // 0xc8		
		client::ParticleIndex_t m_nParticleIndex; // 0xcc		
		entity2::GameTime_t m_flStartTime; // 0xd0		
	private:
		[[maybe_unused]] uint8_t __pad00d4[0xe4]; // 0xd4
	public:
		Vector m_vOrigin; // 0x1b8		
	};
};
