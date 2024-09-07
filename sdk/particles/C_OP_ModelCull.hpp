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
	// Size: 0x248
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_ModelCull : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0x1c0		
		// MPropertyFriendlyName "use only bounding box"
		bool m_bBoundBox; // 0x1c4		
		// MPropertyFriendlyName "cull outside instead of inside"
		bool m_bCullOutside; // 0x1c5		
		// MPropertyFriendlyName "use bones instead of hitboxes"
		bool m_bUseBones; // 0x1c6		
		// MPropertyFriendlyName "hitbox set"
		char m_HitboxSetName[128]; // 0x1c7		
	};
};
