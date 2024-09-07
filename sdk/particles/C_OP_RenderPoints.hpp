#pragma once
#include "particles/CParticleFunctionRenderer.hpp"
#include "resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x218
	// Has VTable
	// 
	// MObsoleteParticleFunction
	// MGetKV3ClassDefaults
	class C_OP_RenderPoints : public particles::CParticleFunctionRenderer
	{
	public:
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial; // 0x210		
	};
};
