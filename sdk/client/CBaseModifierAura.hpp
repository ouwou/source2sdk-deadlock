#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/ParticleIndex_t.hpp"
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
	// Size: 0xe0
	// Has VTable
	// Is Abstract
	class CBaseModifierAura : public client::CCitadelModifier
	{
	public:
		CUtlVector<CHandle<client::C_BaseEntity>> m_hAuraUnits; // 0xc0		
		client::ParticleIndex_t m_hAmbientEffect; // 0xd8		
	};
};
