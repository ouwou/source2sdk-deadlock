#pragma once
#include "client/ParticleIndex_t.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x238
	// Has VTable
	class CCitadel_Modifier_SleepBomb : public server::CCitadelModifier
	{
	public:
		float m_flGoalHeight; // 0xc8		
		float m_flFallRate; // 0xcc		
		client::ParticleIndex_t m_nBombEffect; // 0xd0		
		CHandle<server::CBaseEntity> m_eIgnoreTarget; // 0xd4		
	private:
		[[maybe_unused]] uint8_t __pad00d8[0x150]; // 0xd8
	public:
		Vector m_vecOrigin; // 0x228		
	};
};
