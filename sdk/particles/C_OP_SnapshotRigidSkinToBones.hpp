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
	// Size: 0x1c8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SnapshotRigidSkinToBones : public particles::CParticleFunctionOperator
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
	};
};
