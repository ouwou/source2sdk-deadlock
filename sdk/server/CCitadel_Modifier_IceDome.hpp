#pragma once
#include "client/ParticleIndex_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CCitadel_Ice_Dome_Blocker;
};
namespace source2sdk::server
{
	struct CPointModifierThinker;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x290
	// Has VTable
	class CCitadel_Modifier_IceDome : public server::CCitadelModifier
	{
	public:
		CHandle<server::CCitadel_Ice_Dome_Blocker> m_hBlocker; // 0xc8		
		CHandle<server::CPointModifierThinker> m_hFriendlyAura; // 0xcc		
		CHandle<server::CPointModifierThinker> m_hEnemyAura; // 0xd0		
		client::ParticleIndex_t m_nParticleIndex; // 0xd4		
		entity2::GameTime_t m_flStartTime; // 0xd8		
	private:
		[[maybe_unused]] uint8_t __pad00dc[0xe4]; // 0xdc
	public:
		Vector m_vOrigin; // 0x1c0		
	};
};
