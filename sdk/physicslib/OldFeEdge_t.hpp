#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 4
	// Size: 0x48
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct OldFeEdge_t
	{
	public:
		float m_flK[3]; // 0x0		
		float invA; // 0xc		
		float t; // 0x10		
		float flThetaRelaxed; // 0x14		
		float flThetaFactor; // 0x18		
		float c01; // 0x1c		
		float c02; // 0x20		
		float c03; // 0x24		
		float c04; // 0x28		
		float flAxialModelDist; // 0x2c		
		float flAxialModelWeights[4]; // 0x30		
		uint16_t m_nNode[4]; // 0x40		
	};
};
