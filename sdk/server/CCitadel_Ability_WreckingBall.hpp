#pragma once
#include "client/ParticleIndex_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
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
	// Size: 0xbe8
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bHoldingBall"
	class CCitadel_Ability_WreckingBall : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ad8[0x8]; // 0xad8
	public:
		client::ParticleIndex_t m_nBallParticle; // 0xae0		
		client::ParticleIndex_t m_nCastCompleteParticle; // 0xae4		
		CUtlVector<CHandle<server::CBaseEntity>> m_vecTargetsHit; // 0xae8		
	private:
		[[maybe_unused]] uint8_t __pad0b00[0xe0]; // 0xb00
	public:
		// MNetworkEnable
		bool m_bHoldingBall; // 0xbe0		
	};
};
