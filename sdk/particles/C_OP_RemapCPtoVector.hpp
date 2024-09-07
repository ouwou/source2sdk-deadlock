#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particles/ParticleSetMethod_t.hpp"
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
	// 
	// MGetKV3ClassDefaults
	class C_OP_RemapCPtoVector : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "input control point number"
		int32_t m_nCPInput; // 0x1c0		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4		
		// MPropertyFriendlyName "local space CP"
		int32_t m_nLocalSpaceCP; // 0x1c8		
		// MPropertyFriendlyName "input minimum"
		// MVectorIsSometimesCoordinate "m_nFieldOutput"
		Vector m_vInputMin; // 0x1cc		
		// MPropertyFriendlyName "input maximum"
		// MVectorIsSometimesCoordinate "m_nFieldOutput"
		Vector m_vInputMax; // 0x1d8		
		// MPropertyFriendlyName "output minimum"
		// MVectorIsSometimesCoordinate "m_nFieldOutput"
		Vector m_vOutputMin; // 0x1e4		
		// MPropertyFriendlyName "output maximum"
		// MVectorIsSometimesCoordinate "m_nFieldOutput"
		Vector m_vOutputMax; // 0x1f0		
		// MPropertyFriendlyName "emitter lifetime start time (seconds)"
		float m_flStartTime; // 0x1fc		
		// MPropertyFriendlyName "emitter lifetime end time (seconds)"
		float m_flEndTime; // 0x200		
		// MPropertyFriendlyName "interpolation scale"
		float m_flInterpRate; // 0x204		
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x208		
		// MPropertyFriendlyName "offset position"
		bool m_bOffset; // 0x20c		
		// MPropertyFriendlyName "accelerate position"
		bool m_bAccelerate; // 0x20d		
	};
};
