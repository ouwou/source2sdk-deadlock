#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xf8
	// 
	// MGetKV3ClassDefaults
	// MPropertyAutoExpandSelf
	struct PerSurfaceImpactEffects_t
	{
	public:
		CUtlString m_strDecal; // 0x0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strParticle; // 0x8		
		CSoundEventName m_strSound; // 0xe8		
	};
};
