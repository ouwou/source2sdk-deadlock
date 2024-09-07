#pragma once
#include "client/MoveType_t.hpp"
#include "client/ParticleIndex_t.hpp"
#include "entity2/GameTime_t.hpp"
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
	// Size: 0x40
	// Has Trivial Destructor
	struct lerpdata_t
	{
	public:
		CHandle<server::CBaseEntity> m_hEnt; // 0x0		
		client::MoveType_t m_MoveType; // 0x4		
	private:
		[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
	public:
		entity2::GameTime_t m_flStartTime; // 0x8		
		Vector m_vecStartOrigin; // 0xc		
	private:
		[[maybe_unused]] uint8_t __pad0018[0x8]; // 0x18
	public:
		Quaternion m_qStartRot; // 0x20		
		client::ParticleIndex_t m_nFXIndex; // 0x30		
		
		// Datamap fields:
		// void m_nSound; // 0x34
	};
};
