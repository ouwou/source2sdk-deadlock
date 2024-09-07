#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/ParticleIndex_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x250
	// Has VTable
	class CCitadel_Modifier_Warden_RiotProtocol : public client::CCitadelModifier
	{
	public:
		CUtlOrderedMap<CHandle<client::C_BaseEntity>,entity2::GameTime_t> m_mapEntToTimeHit; // 0xc0		
		int32_t m_nNumPlayersAffected; // 0xe8		
		int32_t m_nNumPlayersKilled; // 0xec		
		QAngle m_playerAngles; // 0xf0		
		client::ParticleIndex_t m_ConeParticle; // 0xfc		
	};
};
