#pragma once
#include "particles/ParticleControlPointDriver_t.hpp"
#include "particles/ParticlePreviewState_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x88
	// 
	// MGetKV3ClassDefaults
	struct ParticleControlPointConfiguration_t
	{
	public:
		CUtlString m_name; // 0x0		
		CUtlVector<particles::ParticleControlPointDriver_t> m_drivers; // 0x8		
		particles::ParticlePreviewState_t m_previewState; // 0x20		
	};
};
