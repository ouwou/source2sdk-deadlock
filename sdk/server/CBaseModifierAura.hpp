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
	// Size: 0xe8
	// Has VTable
	// Is Abstract
	class CBaseModifierAura : public server::CCitadelModifier
	{
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_hAuraUnits; // 0xc8		
		client::ParticleIndex_t m_hAmbientEffect; // 0xe0		
	};
};
