#pragma once
#include "particles/CParticleFunctionOperator.hpp"
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
	// Size: 0x220
	// Has VTable
	// Is Abstract
	// 
	// MGetKV3ClassDefaults
	class C_OP_RemapNamedModelElementEndCap : public particles::CParticleFunctionOperator
	{
	public:
		CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_hModel; // 0x1c0		
		// MPropertyFriendlyName "input names"
		CUtlVector<CUtlString> m_inNames; // 0x1c8		
		// MPropertyFriendlyName "output names"
		CUtlVector<CUtlString> m_outNames; // 0x1e0		
		// MPropertyFriendlyName "fallback names when the input doesn't match"
		CUtlVector<CUtlString> m_fallbackNames; // 0x1f8		
		// MPropertyFriendlyName "model from renderer"
		bool m_bModelFromRenderer; // 0x210		
	private:
		[[maybe_unused]] uint8_t __pad0211[0x3]; // 0x211
	public:
		// MPropertyFriendlyName "input field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldInput; // 0x214		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x218		
	};
};
