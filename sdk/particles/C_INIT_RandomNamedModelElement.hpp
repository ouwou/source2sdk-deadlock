#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1f0
	// Has VTable
	// Is Abstract
	// 
	// MGetKV3ClassDefaults
	class C_INIT_RandomNamedModelElement : public particles::CParticleFunctionInitializer
	{
	public:
		CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_hModel; // 0x1c8		
		// MPropertyFriendlyName "names"
		CUtlVector<CUtlString> m_names; // 0x1d0		
		// MPropertyFriendlyName "shuffle"
		bool m_bShuffle; // 0x1e8		
		// MPropertyFriendlyName "linear"
		bool m_bLinear; // 0x1e9		
		// MPropertyFriendlyName "model from renderer"
		bool m_bModelFromRenderer; // 0x1ea		
	private:
		[[maybe_unused]] uint8_t __pad01eb[0x1]; // 0x1eb
	public:
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1ec		
	};
};
