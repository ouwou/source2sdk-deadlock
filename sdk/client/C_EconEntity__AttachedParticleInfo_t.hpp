#pragma once
#include "client/ParticleIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xc
	// Has Trivial Destructor
	struct C_EconEntity__AttachedParticleInfo_t
	{
	public:
		client::ParticleIndex_t m_nAttachedParticleIndex; // 0x0		
		CUtlStringToken m_customType; // 0x4		
		bool m_bShouldDestroyImmediately; // 0x8		
	};
};
