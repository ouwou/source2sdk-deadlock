#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/EventTypeSelection_t.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x250
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_InitFromParentKilled : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "field to init"
		// MPropertyAttributeChoiceName "particlefield"
		particles::ParticleAttributeIndex_t m_nAttributeToCopy; // 0x1c8		
		// MPropertyFriendlyName "event type"
		particles::EventTypeSelection_t m_nEventType; // 0x1cc		
	};
};
