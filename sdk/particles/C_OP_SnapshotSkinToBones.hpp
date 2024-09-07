#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1d8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SnapshotSkinToBones : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "rotate normals"
		bool m_bTransformNormals; // 0x1c0		
		// MPropertyFriendlyName "scale radii"
		bool m_bTransformRadii; // 0x1c1		
	private:
		[[maybe_unused]] uint8_t __pad01c2[0x2]; // 0x1c2
	public:
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0x1c4		
		// MPropertyFriendlyName "lifetime fade start"
		float m_flLifeTimeFadeStart; // 0x1c8		
		// MPropertyFriendlyName "lifetime fade end"
		float m_flLifeTimeFadeEnd; // 0x1cc		
		// MPropertyFriendlyName "instant jump threshold"
		float m_flJumpThreshold; // 0x1d0		
		// MPropertyFriendlyName "previous position scale"
		float m_flPrevPosScale; // 0x1d4		
	};
};
