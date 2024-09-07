#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particles/ParticleSetMethod_t.hpp"
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x210
	// Has VTable
	// Is Abstract
	// 
	// MGetKV3ClassDefaults
	class C_INIT_RemapNamedModelElementToScalar : public particles::CParticleFunctionInitializer
	{
	public:
		CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_hModel; // 0x1c8		
		// MPropertyFriendlyName "names"
		CUtlVector<CUtlString> m_names; // 0x1d0		
		// MPropertyFriendlyName "remap values for names"
		CUtlVector<float> m_values; // 0x1e8		
		// MPropertyFriendlyName "input field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldInput; // 0x200		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x204		
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x208		
		// MPropertyFriendlyName "model from renderer"
		bool m_bModelFromRenderer; // 0x20c		
	};
};
